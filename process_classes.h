#ifndef PROCESS_CLASSES_H
#define PROCESS_CLASSES_H

#include <QMetaMethod>
#include <QTextStream>
#include <unordered_map>
#include "book.h"
#include "magazin.h"

class ProcessClasses
{
public:
    void run()
    {
        QTextStream out(stdout);
        QTextStream in(stdin);


        Book book;
        int methodCount = 0;
        const QMetaObject *mObjectBook = book.metaObject();
        m_objects[mObjectBook->classInfo(0).value()] = &book;
        for(int methodIndex = mObjectBook->methodOffset(); methodIndex < mObjectBook->methodCount(); methodIndex++)
        {
            QMetaMethod currMethod = mObjectBook->method(methodIndex);
            methodCount++;
            out << methodCount << " . ClassName: " << mObjectBook->className() << " MetodName: \"" << currMethod.name() << "\""<< Qt::endl;
            m_methods.insert({methodCount, {mObjectBook->className(), currMethod.name()}});
        }

        Magazin magazin;
        const QMetaObject *mObjectMagazin = magazin.metaObject();
        m_objects[mObjectMagazin->classInfo(0).value()] = &magazin;
        for(int methodIndex = mObjectMagazin->methodOffset(); methodIndex < mObjectMagazin->methodCount(); methodIndex++)
        {
            QMetaMethod currMethod = mObjectMagazin->method(methodIndex);
            methodCount++;
            out << methodCount << " . ClassName: " << mObjectMagazin->className() << " MetodName: \"" << currMethod.name() << "\""<< Qt::endl;
            m_methods.insert({methodCount, {mObjectMagazin->className(), currMethod.name()}});
        }


        out << "Enter menu number:" << Qt::endl;
        out.flush();
        int number = 0;
        in >> number;
        in.readLine();
        if (number < 1 || number > methodCount) {
            out << "Error: Invalid menu number!" << Qt::endl;
            return;
        }

        out << "Enter parametr value:" << Qt::endl;
        out.flush();
        QString value = in.readLine();

        invokeByClassAndMethod(m_methods[number].first, m_methods[number].second, value);
        if(m_methods[number].first == "Book")
        {
            for (int i = mObjectBook->propertyOffset(); i < mObjectBook->propertyCount(); ++i) {
                QMetaProperty prop = mObjectBook->property(i);
                qDebug() << "Property name: " << prop.name() << " Property value: " << book.property(prop.name());
            }
        }else if(m_methods[number].first == "Magazin")
        {
            for (int i = mObjectMagazin->propertyOffset(); i < mObjectMagazin->propertyCount(); ++i) {
                QMetaProperty prop = mObjectMagazin->property(i);
                qDebug() << "Property name: " << prop.name() << " Property value: " << magazin.property(prop.name());
            }
        }

    }
private:

    bool invokeByClassAndMethod(const QString& className,
                                const QString& methodName,
                                const QString& value)
    {
        QTextStream out(stdout);

        // Находим объект по имени класса
        if(m_objects.find(className) == m_objects.end()) {
            out << "Class '" << className << "' not found!" << Qt::endl;
            return false;
        }

        QObject* obj = m_objects[className];
        const QMetaObject* metaObj = obj->metaObject();

        // Ищем метод по имени
        for(int i = metaObj->methodOffset(); i < metaObj->methodCount(); i++)
        {
            QMetaMethod method = metaObj->method(i);

            if(method.name() == methodName && method.methodType() == QMetaMethod::Method)
            {
                return invokeMethodWithParameter(method, obj, value);
            }
        }

        out << "Method '" << methodName << "' not found in class '"
            << className << "'" << Qt::endl;
        return false;
    }


    bool invokeMethodWithParameter(const QMetaMethod& method, QObject* obj, const QString& value)
    {
        QList<QByteArray> paramTypes = method.parameterTypes();

        if(paramTypes.size() != 1) {
            QTextStream out(stdout);
            out << "Method expects " << paramTypes.size()
                << " parameters, but 1 provided." << Qt::endl;
            return false;
        }

        QByteArray paramType = paramTypes[0];

        if(paramType == "QString") {
            return method.invoke(obj, Q_ARG(QString, value));
        }
        else if(paramType == "uint16_t") {
            bool ok;
            uint16_t numValue = value.toUShort(&ok);
            if(ok) {
                return method.invoke(obj, Q_ARG(uint16_t, numValue));
            }
        }

        QTextStream out(stdout);
        out << "Unsupported parameter type: " << paramType << Qt::endl;
        return false;
    }

private:
    std::unordered_map<QString, QObject*> m_objects;
    std::unordered_map<int, QPair<QString, QString>> m_methods;
};

#endif // PROCESS_CLASSES_H
