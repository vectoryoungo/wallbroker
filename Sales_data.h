//
// Created by smithjohn on 4/26/19.
//

#ifndef WALLBROKER_SALES_DATA_H
#define WALLBROKER_SALES_DATA_H

#include <string>
#include <iostream>

class Sales_data {
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend std::ostream &print(std::ostream&, const Sales_data&);
    friend std::istream &read(std::istream&, Sales_data&);

    public:
        // constructors
        Sales_data(): units_sold(0), revenue(0.0) { }
        Sales_data(const std::string &s):
                bookNo(s), units_sold(0), revenue(0.0) { }
        Sales_data(const std::string &s, unsigned n, double p):
                bookNo(s), units_sold(n), revenue(p*n) { }
        Sales_data(std::istream &);

        // operations on Sales_data objects
        /**
         * 这里const的作用是修改隐式this指针的类型
         * 默认情况下，this的类型指向类类型非常量版本的常量指针。例如在该类的成员函数中，this的类型是Sales_data *const.尽管this是隐式的，但它仍然需要遵循初始化规则，
         * 意味着(在默认情况下)我们不能把this绑定到一个常量对象上。这一情况也就使得我们不能在一个常量对象上调用普通的成员函数，如果isbn是一个普通函数而且this是一个普通的指针参数，
         * 则我们应该把this声明成const Sales_data *const。毕竟，在isbn的函数体内不会改变this所指的对象，所以把this设置为指向常量的指针有助于提高函数的灵活性。
         * 然而this是隐式的并且并不会出现在参数列表中，C++语言的做法是允许把const关键字放在成员函数的参数列表之后，此时，紧跟在参数列表后的const表示this是一个指向常量的指针。
         * 像这样使用const的成员函数被称作常量成员函数。
         * @return
         */
        std::string isbn() const { return bookNo; }
        Sales_data& combine(const Sales_data&);
        double avg_price() const;
    private:
        std::string bookNo;
        unsigned units_sold;
        double revenue;
};

//nonmember Sales_data interface functions
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

// used in future chapters
inline
bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn() < rhs.isbn();
}


#endif //WALLBROKER_SALES_DATA_H
