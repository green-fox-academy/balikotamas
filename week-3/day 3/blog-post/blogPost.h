#include <string>
#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H

class BlogPost {
public:
    BlogPost();

    BlogPost(const std::string &authorName, const std::string &text, const std::string &title, const std::string &publicationDate);

    const std::string &getauthorName() const;
    void setauthorName(const std::string &authorName);

    const std::string &getText() const;
    void settext(const std::string &text);

    const std::string &getTitle() const;
    void settitle(const std::string &title);

    const std::string &getpublicationDate() const;
    void setpublicationDate(const std::string &publicationDate);



private:
    std::string _authorName;
    std::string _text;
    std::string _title;
    std::string _publicationDate;


};


#endif