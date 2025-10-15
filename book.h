#ifndef BOOK_H
#define BOOK_H

#include <QObject>

class Book : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("className", "Book")
    Q_PROPERTY(QString m_name READ getName WRITE setName)
    Q_PROPERTY(QString m_publishHouse READ getPublishHouse WRITE setPublishHouse)
    Q_PROPERTY(QString m_author READ getAuthor WRITE setAuthor)
    Q_PROPERTY(uint16_t m_pageNum READ getPageNum WRITE setPageNums)
public:
    Book()
        : m_name(QString())
        , m_publishHouse(QString())
        , m_pageNum(0)
        , m_author(QString())
    {}
    Q_INVOKABLE void setName(const QString& book_name);
    Q_INVOKABLE void setPublishHouse(const QString& publish_house);
    Q_INVOKABLE void setPageNums(uint16_t page_number);
    Q_INVOKABLE void setAuthor(const QString& author);
    QString getName() const;
    QString getPublishHouse() const;
    uint16_t getPageNum() const;
    QString getAuthor() const;


private:
    QString m_name;
    QString m_publishHouse;
    uint16_t m_pageNum;
    QString m_author;
};


#endif // BOOK_H
