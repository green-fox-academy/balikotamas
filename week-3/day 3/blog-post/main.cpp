#include <iostream>
#include "blogPost.h"
int main()
{
    BlogPost FirstBlog("john Doe", "Lorem Ipsum", "Lorem ipsum dolor sit amet.", "2000.05.04");
    BlogPost SecondBlog("Tim Urban", "Wait but why", "A popular long-form, stick-figure-illustrated blog about almost "
                                                     "everything.", "2010.10.10");
    BlogPost ThirdBlog("William Turton", "One Engineer Is Trying to Het IBM to Reckon With Trump", "Daniel Hanley, a cybersecurity engineer at IBM, doesn't want to be the center of attention. When I asked to take his picture outside one of IBM's New York City offices,he told me that he wasn't really into the whole organizer profile thing.", "2017.03.28");
    std::cout << FirstBlog.getauthorName() << " " << FirstBlog.getTitle() << " " << FirstBlog.getText() << " " << FirstBlog.getpublicationDate() << std::endl;
    std::cout << SecondBlog.getauthorName() << " " << SecondBlog.getTitle() << " " << SecondBlog.getTitle() << " " << SecondBlog.getpublicationDate() << std::endl;
    std::cout << ThirdBlog.getauthorName() << " " << ThirdBlog.getTitle() << " " << ThirdBlog.getText() << " " << ThirdBlog.getpublicationDate() << std::endl;

    return 0;
}