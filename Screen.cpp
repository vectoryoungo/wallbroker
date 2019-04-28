//
// Created by smithjohn on 2019-04-28.
//

#include "Screen.h"

inline Screen &Screen::move(Screen::pos r, Screen::pos c)
{
  pos row = r * width;
  cursor = row + c;
    return  *this;
}

char Screen::get(Screen::pos r, Screen::pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

