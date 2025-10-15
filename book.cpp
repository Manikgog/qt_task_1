#include "book.h"

void Book::setName(const QString &book_name)
{
    m_name = book_name;
}

void Book::setPublishHouse(const QString &publish_house)
{
    m_publishHouse = publish_house;
}

void Book::setPageNums(uint16_t page_number)
{
    m_pageNum = page_number;
}

void Book::setAuthor(const QString &author)
{
    m_author = author;
}

QString Book::getName() const
{
    return m_name;
}

QString Book::getPublishHouse() const
{
    return m_publishHouse;
}

uint16_t Book::getPageNum() const
{
    return m_pageNum;
}

QString Book::getAuthor() const
{
    return m_author;
}
