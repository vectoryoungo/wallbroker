#include <iostream>
#include <cmath>
#include <cctype>
#include <vector>
#include <time.h>
#include <string>
using namespace std;

string getTime()
{
    time_t timep;
    time (&timep);
    char tmp[64];
    strftime(tmp, sizeof(tmp), "%Y-%m-%d %H:%M:%S",localtime(&timep));

    return tmp;
}

void loopForOT() {
    unsigned  int temp = 0;
    for (int i = 0; i < 100000000; ++i) {
        if (i%2==0) {
            i = i + 1;
        } else {
            i = i + 2;
        }
        temp = i;
    }
    cout<<" the i is "<<temp<<endl;
}

const string &shorterString(const string &s1, const string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}

string &shorterString(string &s1,string &s2)
{
    auto &r = shorterString(const_cast<const string&>(s1),const_cast<const string&>(s2));

    return const_cast<string&>(r);
}

string read();
void print(const string &);
void print(double);

void fooBar(int ival)
{
    bool  read = false;//新作用域：隱藏了外層的read
    //string s = read();//錯誤，read是一個布爾值，而非函數
    void print(int);//不好的習慣，通常來說，在局部作用域中聲明函數不是一個好的選擇。新作用域，隱藏了之前的print
    //print("Value: ");//錯誤：print(const string &)被隱藏掉了
    print(ival);//正確，當前print(int)可見
    print(3.14);//正確，調用print(int);print(double)被隱藏掉了。
}


int main() {

    /*int currVal = 0,val = 0;
    if(std::cin >> val){
        int cnt = 1;
        while (std::cin >> val) {
            if(val == currVal) {
                ++cnt;
            } else{
                std::cout<<currVal<<" occurs "<<cnt<<" times "<<std::endl;
                currVal = val;
                cnt = 1;
            }
        }

        std::cout<<currVal<<" occurs "<<cnt<<" times"<<std::endl;
    }*/
    //std::cout << "Hello, World!" << std::endl;

  /* vector<int> vec;
   string str("this is content of string");
   vector<string> vector1;
   vector1.push_back(str);
   const vector<int> cv;
   auto it1 = vec.begin();
   auto it2 = cv.begin();
   auto it3 = vec.cbegin();*/

   /*cout<<"content of vecot<int> it1 is "<<*it1<<endl;
   cout<<"content of const vector<int> it2 is "<<*it2<<endl;
   cout<<"content of vector<int> it3 is "<<*it3<<endl;*/
   //cout<<"str is empty:"<<str.empty()<<endl;

    /**
     * 二分搜索
     */
    /*clock_t start,finish;
    double totalTime;
    //cout<<" getTime()"<<getTime()<<endl;
    vector<int> intVect = {231,6551,1,232,889,324,87123,123145,98223};
    unsigned int sought = 87123;

    cout<<"size is "<<intVect.size()<<endl;
    auto begin = intVect.begin();
    auto end = intVect.end();
    auto mid = intVect.begin() + (end - begin)/2;//初始状态下的中间点

    cout<<" out of while mid is "<<*mid<<endl;*/

    //自己理解的
    /*while (mid != end){

        cout<<" mid is "<<*mid<<endl;

        if (*mid > sought) {
            end = mid;
        } else if (*mid < sought){
            begin = mid + 1;
        } else if (*mid == sought) {
            cout<<" hit the number  "<<*mid<<endl;
            break;
        }

        mid = begin + (end - begin)/2;
    }*/

    //书中的写法
    /*while (mid != end && *mid != sought){

        if (*mid > sought) {
            end = mid;
        } else{
            begin = mid + 1;
        }

        mid = begin + (end - begin)/2;
    }
    cout<<"final result is "<<*mid<<endl;

    start=clock();
    loopForOT();
    finish=clock();
    totalTime=(double)(finish-start)/CLOCKS_PER_SEC;
    cout<<"\n此程序的运行时间为"<<totalTime<<"秒！"<<endl;

    unsigned cnt = 88;
    constexpr unsigned sz = 42;
    cout<<"sz is "<<sz<<endl;
    string bad[9];
    string good[cnt];
    cout<<"this is end"<<endl;


    int arr[10] = {0,1,2,3,4,5,6,7};
    int *prt[10] = {&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7]};
    //int &refs[10];
    int (*Parray)[10] = &arr;
    int (&arrRef)[10] = arr;

    for (int i = 0;i<10;i++) {
        cout<<" content " <<(*Parray)[i]<<endl;
    }

    for (int i = 0;i<10;i++) {
        cout<<" arrRef content is "<<arrRef[i]<<endl;
        cout<<" arrRef content memory is  "<<&arrRef<<endl;
        cout<<" arrRef content * is "<<*arrRef<<endl;
    }

    for (int i = 0;i<10;i++) {
        cout<<"*prt content is "<<prt[i]<<endl;
    }*/

   /* unsigned scores[11] = {};
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100) {
            ++scores[grade/10];
            cout<<"while scores is "<<scores[grade/10]<<endl;
        }
    }

    for (int i=0; i<11;i++) {
        cout<<"scores content is "<<scores[i]<<endl;
    }

    for (auto i : scores){
        cout<<i<<" "<<endl;
    }*/

    /*string strContainer[] = {"black","white","red"};
    string *strPointer = & strContainer[0];
    cout<<" element of strContainer is "<<*strPointer<<endl;
    cout<<" element of strContainer address:"<<strPointer<<endl;

    constexpr size_t sz = 10;
    int natureNumber[] = {0,1,2,3,4,5,6,7,8,9};
    int *e = &natureNumber[10];
    for (int *b=natureNumber; b!=e;++b) {
        cout<<" element content of strContainer is "<<*b<<endl;
    }

    int *beginPointer = begin(natureNumber);
    int *endPointer = end(natureNumber);
    cout<<"beginPointer is "<<beginPointer<<endl;
    cout<<"endPointer is "<<endPointer<<endl;
    cout<<"*beginPointer is "<<*beginPointer<<endl;
    cout<<"*endPointer is "<<*endPointer<<endl;

    int *boT = natureNumber,*eoT = natureNumber + sz;

    while (boT < eoT) {
        cout<<" ptrdiff_t:"<<*boT<<endl;
        ++boT;
        //cout<<" *eoT is "<<*eoT<<endl;
        //cout<<" boT is "<<*boT<<endl;
    }

    try {
        int iT = 0,sT = 42;
        int *Pointer = &iT;
        int *eP = &sT;
        while (Pointer < eP) {
            cout<<" This is doing work"<<endl;
        }
    }catch (exception& e){
        cout<<"exception occur "<<e.what()<<endl;
    }*/

    /*char string1[] = {"I am string1"};
    char string2[] = {"I am string2"};
    char string3[] = {'C','H','I','N','A','\0'};
    size_t len = strlen(string1);
    size_t len1 = strlen(string2);

    cout<<" lenght of string1 is "<<len<<endl;
    cout<<" length of string2 is "<<len1<<endl;

    int resultInt = strcmp(string1,string2);

    cout<<" string1 compare to string2 result is "<<resultInt<<endl;

    char *finalResultChar = strcat(string1, string2);

    cout<<"finalResultChar:"<<finalResultChar<<endl;

    char *copyResultChar = strcpy(string1,string2);

    cout<<"copyResultChar:"<<copyResultChar<<endl;*/

   /* for (auto charat: string1) {
        cout<<" result string1 is "<<charat<<endl;
    }

    for (auto charat: string2) {
        cout<<" result string2 is "<<charat<<endl;
    }*/

   /*cout<<" string3 length is "<<strlen(string3)<<endl;

   const char ca1[] = "A string example";
   const char ca2[] = "A different example";

    cout<<" out ca1"<<ca1<<endl;
    cout<<" out ca2"<<ca2<<endl;

   if (ca1 < ca2){
        cout<<"ca1"<<&ca1<<endl;
        cout<<"ca2"<<&ca2<<endl;
        cout<<"ca1 < ca2"<<endl;
   } else{
       cout<<"ca1"<<ca1[0]<<endl;
       cout<<"ca2"<<ca2[0]<<endl;
       cout<<"ca1 > ca2 "<<endl;
   }*/

   /*int int_array[] = {0,1,2,3,4,5};
   vector<int> ivec(begin(int_array),end(int_array));
   cout<<"vector size "<<ivec.size()<<endl;
   cout<<"capacity"<<ivec.capacity();*/

  /* int iaT[3][4] = {{0,1,2,3},{4,5,6,7},{8,9,10,11}};
   cout<<" iaT "<<iaT<<endl;
   cout<<" iaT[2][3] "<<iaT[2][3]<<endl;*/


  /*  constexpr size_t rowCnt = 3,colCnt = 4;
    int ia[rowCnt][colCnt];
    for (size_t i = 0;i!=rowCnt;++i) {
            for (size_t j =0;j!=colCnt;++j) {
                ia[i][j] = i * colCnt + j;
            }
    }

    cout<<endl;

    for (size_t i = 0;i!=rowCnt;++i) {
        for (size_t j =0;j!=colCnt;++j) {
            cout<<"ia["<<i<<"]"<<"["<<j<<"]"<<ia[i][j]<<endl;
        }
    }
*/
   /* size_t cnt = 0;
    for (auto &row : ia) {
        for (auto &col : row) {
            col = cnt;
            ++cnt;
            cout<<" col "<<col<<endl;
        }
    }*/

    /*for (auto p = ia; p!=ia + 3;++p) {
        for (auto q = *p;q !=*p+4;++q) {
            cout<<" *q " <<*q<<endl;
        }
        cout<<endl;
    }

    for (auto p = begin(ia); p!= end(ia);++p) {
        for (auto q = begin(*p); q!=end(*p);++q) {
            cout<<" *q "<<*q<<' ';
        }
        cout<<endl;
    }*/

   /* using int_array = int[4];//新标准下类型别名的声明，
    //typedef int int_array[4];//等价的typedef声明
    for (int_array *p = ia; p != ia + 3; ++p) {
        for (int *q = *p; q != *p + 4;++q) {
            cout<< *q <<' ';
        }
        cout<<endl;
    }


    string stringFourTest = " this is string character ";
    cout<<" stringFourTest size is "<<stringFourTest.size()<<endl;*/
    clock_t start,finish;
    double totalTime;
    start=clock();

    /*long sum = 0;
    for (long i=0;i<10000000000;i++) {
        sum = sum + i*(i+1);
    }*/

   /* cout<<"sum is "<<sum<<endl;
    finish=clock();
    totalTime=(double)(finish-start)/CLOCKS_PER_SEC;
    cout<<"\n此程序的运行时间为"<<totalTime<<"秒！"<<endl;*/


    string str("this is test");
    string str2("and this is another");
    cout<<shorterString(str,str2)<<endl;

    return 0;
}

