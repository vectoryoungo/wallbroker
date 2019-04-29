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
    Screen(pos ht,pos wd,char c): height(ht),width(wd),contents(ht*wd,c){}
    char get() const
    {
        return contents[cursor];
    }
    inline char get(pos ht,pos wd) const;
    Screen &move(pos r,pos c);
    void some_member() const;
private:
    pos cursor = 0;
    pos height = 0,width = 0;
    std::string contents;
    mutable size_t access_ctr;

};

void Screen::some_member() const
{
    ++access_ctr;
    cout<<access_ctr<<endl;
}


#endif //WALLBROKER_SCREEN_H
