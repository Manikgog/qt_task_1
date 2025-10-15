#include "magazin.h"

void Magazin::setName(const QString & name)
{
    m_name = name;
}

void Magazin::setPublishHouse(const QString & publish_house)
{
    m_publishHouse = publish_house;
}

void Magazin::setPageNums(uint16_t page_num)
{
    m_pageNum = page_num;
}

void Magazin::setIssueNum(uint16_t issue_num)
{
    m_issueNum = issue_num;
}

QString Magazin::getName() const
{
    return m_name;
}

QString Magazin::getPublishHouse() const
{
    return m_publishHouse;
}

uint16_t Magazin::getPageNum() const
{
    return m_pageNum;
}

uint16_t Magazin::getIssueNum() const
{
    return m_issueNum;
}
