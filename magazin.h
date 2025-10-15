#ifndef MAGAZIN_H
#define MAGAZIN_H

#include <QObject>

class Magazin : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("className", "Magazin")
    Q_PROPERTY(QString m_name READ getName WRITE setName)
    Q_PROPERTY(QString m_publishHouse READ getPublishHouse WRITE setPublishHouse)
    Q_PROPERTY(uint16_t m_issueNum READ getIssueNum WRITE setIssueNum)
    Q_PROPERTY(uint16_t m_pageNum READ getPageNum WRITE setPageNums)
public:
    Magazin()
        : m_name(QString())
        , m_publishHouse(QString())
        , m_pageNum(0)
        , m_issueNum(0)
    {}
    Q_INVOKABLE void setName(const QString&);
    Q_INVOKABLE void setPublishHouse(const QString&);
    Q_INVOKABLE void setPageNums(uint16_t);
    Q_INVOKABLE void setIssueNum(uint16_t);
    QString getName() const;
    QString getPublishHouse() const;
    uint16_t getPageNum() const;
    uint16_t getIssueNum() const;


private:
    QString m_name;
    QString m_publishHouse;
    uint16_t m_pageNum;
    uint16_t m_issueNum;
};

#endif // MAGAZIN_H
