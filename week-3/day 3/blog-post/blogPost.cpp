#include "blogPost.h"

BlogPost::BlogPost(const std::string &authorName, const std::string &title, const std::string &text,
                   const std::string &publicationDate) : _authorName(authorName), _title(title), _text(text),
                                                         _publicationDate(publicationDate) {}
const std::string &BlogPost::getauthorName() const
{
    return _authorName;
}

const std::string &BlogPost::getTitle() const
{
    return _title;
}

const std::string &BlogPost::getText() const
{
    return _text;
}

const std::string &BlogPost::getpublicationDate() const
{
    return _publicationDate;
}

void BlogPost::setauthorName(const std::string &authorName)
{
    _authorName = authorName;
}

void BlogPost::settitle(const std::string &title)
{
    _title = title;
}

void BlogPost::settext(const std::string &text)
{
    _text = text;
}

void BlogPost::setpublicationDate(const std::string &publicationDate)
{
    _publicationDate = publicationDate;
}
//
// Created by balas on 2019. 07. 10..
//

