//
// Created by 居宏涛 on 2018/12/11.
//

#include "Sales_item.h"
#include <iostream>
using namespace std;
int j = 0;

constexpr int i = 42;

int vmain() {
    //Sales_item book;
    //std::cin >> book;
    //std::cout<< book << std::endl;
    //Sales_item item,itemReplica;
    //std::cin >> item >> itemReplica;
    //std::cout << item + itemReplica << std::endl;
    //Sales_item item,replicaItesm;
    //cin >> item >> replicaItesm;
    //cout<<"before compare "<< endl;
    //if (item.isbn() == replicaItesm.isbn()) {
    //    cout << item + replicaItesm <<endl;
    //    return 0;
    //} else {
    //    cerr << "Date must refer to same ISBN" <<endl;
    //    return -1;
    //}

    //Sales_item itemTotal;
    //if (cin >> itemTotal) {
    //
    //    Sales_item transItem;
    //    while (cin >> transItem) {
    //        if (itemTotal.isbn() == transItem.isbn()) {
    //            itemTotal += transItem;
    //        } else {
    //            cout << itemTotal << endl;
    //            itemTotal = transItem;
    //        }
    //    }
    //
    //    cout << itemTotal << endl;
    //} else {
    //    cerr << " No Data ? ! " << endl;
    //    return -1;
    //}
    //bool  b = 21;
    //bool  a = 0;
    //bool  c = 22;
    //bool  d = 2;
    //cout<< b << endl;
    //cout<< a << endl;
    //cout<< c << endl;
    //cout<< d << endl;
    //unsigned char sex = 289;
    //int result = 289 % 256;
    //cout << " char result is " << sex << endl;
    //cout << " result is " << result << endl;

    //if (result)
    //{
    //    bool  resultReplica = result;
    //    cout << " resultReplica " << resultReplica << endl;
    //    cout << " this is in the bool condition " << endl;
    //    cout << " bool condition result is " << result << endl;
    //}

    /*unsigned u = 10;
    int numberTestWithUnsigned = -42;
    long lon = 235;
    long long ll = 888888;
    unsigned u1 = 42,u2 = 10;*/
    //cout << " int plus int " << numberTestWithUnsigned + numberTestWithUnsigned << endl;
    //cout << " this is int plus unsigned " << u + numberTestWithUnsigned << endl;
    //cout << " size of int " << sizeof(numberTestWithUnsigned) << endl;
    //cout << " size of long " << sizeof(lon) << endl;
    //cout << " size of long long in c++11 " << sizeof(ll) << endl;
    //cout << " u1 - u2 " << u1 - u2 << endl;
    //cout << " u2 -u1 " << u2 - u1 << endl;
    //cout << " -u1 " << -u1 << endl;

    /*unsigned uTemp = 10,u2Temp = 42;
    cout << u2Temp - uTemp << endl;
    cout << uTemp - u2Temp << endl;
    int iTemp = 10,i2Temp = 42;
    cout << " i2Temp - iTemp " << i2Temp - iTemp << endl;
    cout << " iTemp - i2Temp " << iTemp - i2Temp << endl;
    cout << " iTemp - uTemp " << iTemp - uTemp << endl;
    cout << " uTemp - iTemp " << uTemp - iTemp << endl;

    int a = -1;
    unsigned b = 1;
    cout << " a multiply b " << a * b << endl;
    cout << " unsigned b is " << b << endl;
    cout << " int is " << a << endl;
    string string1 = "this is string in c ++ ";
    cout << " value of string1 is [" << string1 << "]" << endl;
    cout << " version :" << __VERSION__ << endl;
    cout << "Mac os x max allowed:" << __MAC_OS_X_VERSION_MAX_ALLOWED << endl;
    cout << "Mac os x min allowed:" << __MAC_OS_X_VERSION_MIN_REQUIRED << endl;
*/
    /**
     * C++中四种不同的初试化形式
     */
    //int units_sold = 0;
    //int units_soldS = {0};
    //int units_soldT{0};//C++11 standard initial it is called list initialization ：列表初始化
    //int units_soldF(0);
    //cout << units_sold << endl;
    //cout << units_soldS << endl;
    //cout << units_soldT << endl;
    //cout << units_soldF << endl;

    /*int iVal = 1024;
    int *pi = 0;
    int *pi2 = &iVal;
    int *pi3 = &iVal;
    cout << " iVal " << iVal << endl;
    cout << " *pi " << endl;
    cout << " *pi2 "<< endl;
    cout << " pi2 " << endl;
    cout << "*****************" << endl;
    cout << " pi " << pi << endl;
    cout << " pi2 " << pi2 << endl;

    if (pi3 == pi2) {
        cout << pi3 << endl;
        cout << " equals " << endl;
    } else{
        cout <<" not equals "<<endl;
    }

    double obj = 3.14,*pd = &obj;
    void *pv = &obj;
    cout << " pv " << pv << endl;
    cout << " obj " << obj << endl;
    cout << " pd " << pd << endl;
    cout << " *pd " << *pd << endl;
    pv = pd;
    *pd = 4.43;
    cout << " after write pv  " << pv << endl;
    cout << " pd is " << pd << endl;
    cout << " obj is " << obj<< endl;

    int testNumber = 42;
    int *pInt = &testNumber;
    *pInt = *pInt * *pInt;
    cout << " *pInt " << *pInt << endl;

    int i1024 = 1024,*p1024= &i1024,&r = i1024;
    cout << " *p1024 = " << *p1024 << endl;
    cout << " p1024 = " << p1024 << endl;
    cout << " &r = " << &r << endl;
    cout << " r = " << r << endl;


    int ivalTwo = 1024;
    int *piT = &ivalTwo;
    int **ppi = &piT;
    cout <<" The value of ival \n"<< " direct value :" << ivalTwo << endl;
    cout <<" indirect value: "<<*piT<<endl;
    cout <<" doubly indirect value: "<<**ppi<<endl;
    cout << " piT "<< piT << endl;
    cout << " doubly address value: "<<*ppi<<endl;
    return 0;*/

    /*cout << " ************* " << endl;
    int numberConst = 42;
    int &numberConstReference = numberConst;
    const int &number2 = numberConst;

    cout << " numberConstReference " << numberConstReference << endl;
    cout << " &numberConstReference " << &numberConstReference << endl;
    numberConstReference = 0;
    cout << " after rewrite " << endl;
    cout << " numberConstReference " << numberConstReference << endl;
    cout << " &numberConstReference " << &numberConstReference << endl;


    const int ci = 42;
    const int *pointer = &ci;
    const int *const p3 = pointer;

    cout << " ********* " << endl;
    cout << " pointer " << pointer << endl;
    cout << " p3 " << p3 << endl;
    cout << " *pointer " << *pointer << endl;
    cout << " *const p3 " << *p3 << endl;*/

    /*const int *p = nullptr;
    constexpr int *q = nullptr;

    cout <<" *p "<<*p<<endl;
    cout << "￥￥￥￥￥￥" << endl;
    cout <<" *q "<<*q<<endl;
    cout << "$$$$$$$$$" << endl;
    cout << " p " << p << endl;
*/
    /*constexpr int *np = nullptr;
    constexpr const int *p = &i;

    constexpr int *pl = &j;

    cout <<" p " <<p<<endl;
    cout <<" *p "<<*p<<endl;
    cout <<" *pl "<<*pl<<endl;
    cout << " &j "<<&j<<endl;
    cout << " pl "<<pl<<endl;*/

   /* char ct = 's';
    typedef char *pstring;
    const pstring cstr = 0;
    const pstring *ps;
    const char *cstrD = 0;*/

//    cout << cstrD << endl;
    /*cout << " ******** " <<endl;
    cstrD = &ct;
    cout << " ct is " << &ct << endl;
    cout << " ct :"<< ct << endl;
    cout<< cstrD << endl;*/

    /*string string1 = "this is enormous ";
    int n = -9;

    cout << " string1.size is bigger than n or not " <<(string1.size() > n)<<endl;

    if (string1.size() < n) {
        cout << " this is lower than string1 " << endl;
        cout << " the value of n is " <<n<<endl;
    } else{
        cout << " the value of n is " << n <<endl;
    }

    string strH = "hello",strHC = "world";
    string strDum(5,'$');
    cout<<"strDum"<<strDum<<endl;
    string de = strH + ", ";
    //string deC = "hello" + ", "; this is illegal
    string  strD = strH + "," + " world ";
    //string strF = "hello" + ", " + strHC; this is illegal
    cout<<de<<endl;
    cout<<strD<<endl;*/

    string str("This,is,shanghai.");
    decltype(str.size()) punct_cnt = 0;
    for (auto c : str) {

        if (ispunct(c)) {
            ++punct_cnt;
        }
    }
    cout<<punct_cnt<<"character is " <<str<<endl;

    if (!str.empty()) {
        str[8] = toupper(str[8]);
    }

    cout<<" after single upper " <<str<<endl;

    for(auto &c : str){
        c = toupper(c);
    }

    cout<<"after to upper is "<<str<<endl;

    string strC("This,is,shandong.");
    //use index get content
    for (decltype(strC.size()) index = 0; index != strC.size() && !isspace(strC[index]);++index) {
        strC[index] = toupper(strC[index]);
        cout<<strC[index];
    }
    cout<<endl;
    cout<<" after process is "<<strC<<endl;

    vector<int> ivec(10,-1);
    cout<<"ivec[0]:"<<ivec[0]<<endl;
    cout<<"ivec[1]:"<<ivec[1]<<endl;
    cout<<"ivec[2]:"<<ivec[2]<<endl;
    cout<<"ivec[3]:"<<ivec[3]<<endl;
    cout<<"ivec[4]:"<<ivec[4]<<endl;
    cout<<"ivec[5]:"<<ivec[5]<<endl;
    cout<<"ivec[6]:"<<ivec[6]<<endl;
    cout<<"ivec[7]:"<<ivec[7]<<endl;
    cout<<"ivec[8]:"<<ivec[8]<<endl;
    cout<<"ivec[9]:"<<ivec[9]<<endl;

    unsigned int numberOfCityPeople = -1;
    unsigned int numberOfCountryPeople = 1;
    cout<<" numberOfCityPeople "<<numberOfCityPeople<<endl;
    cout<< sizeof(numberOfCityPeople)<<endl;
    cout<< sizeof(numberOfCountryPeople)<<endl;

    string test("content of string");
    /*if (test.begin() != test.end()) {
        auto it = test.begin();
        *it = toupper(*it);
    }

    cout<<"test is "<<test<<endl;*/
    for (auto it = test.begin(); it != test.end() && !isspace(*it);++it) {
        *it = toupper(*it);
    }

    cout<<" after iterator process "<<test<<endl;

    for (auto it = test.begin(); it != test.end(); ++it) {
        *it = toupper(*it);
    }

    cout<<" all upper "<<test<<endl;

    return 0;
}


