//
// Created by smithjohn on 2019-04-28.
//

#ifndef WALLBROKER_SCREEN_H
#define WALLBROKER_SCREEN_H


#include <string>
#include <iostream>
using namespace std;

class Screen {
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen &display(std::ostream &os)
    {
        do_display(os);
        return *this;
    }

    const Screen &display(std::ostream &os) const
    {
        do_display(os);
        return *this;
    }
    Screen(pos ht,pos wd,char c): height(ht),width(wd),contents(ht*wd,c){}
    char get() const
    {
        return contents[cursor];
    }
    inline char get(pos ht,pos wd) const;
    Screen &move(pos r,pos c);
    Screen &set(char c);
    Screen &set(pos r,pos col,char ch);
    void some_member() const;
private:
    pos cursor = 0;
    pos height = 0,width = 0;
    std::string contents;
    mutable size_t access_ctr;
    void do_display(std::ostream &os) const {os<<contents;};

};

void Screen::some_member() const
{
    ++access_ctr;
    cout<<access_ctr<<endl;
}

inline Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return  *this;
}

inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
    contents[r*width+col] = ch;
    return *this;
}

char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

#endif //WALLBROKER_SCREEN_H
