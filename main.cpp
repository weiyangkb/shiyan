#include <iostream>
using namespace std;
#include "book.h"
#include "student.h"

void mean(){
    cout<<"***********************"<<endl;
    cout<<"*****1、加入图书********"<<endl;
    cout<<"*****2、查找图书********"<<endl;
    cout<<"*****3、借书************"<<endl;
    cout<<"*****0、退出系统********"<<endl;
}

class System{
public:
//    friend class book;
    void addBook(){
        int n;
        book a;
        cout<<"请输入加入书籍本数：";
        cin>>n;
        cout<<"请输入书籍ibsn码"<<endl;
        for(int i=0;i<n;i++){
            cin>>ibsn[i];
            a.setB_ibsn(ibsn[i]);//需要一些更改000
        }
    }

    void borrow(){
    //borrowBook(    );
    }
    void borrowBook(book &b1,student &s1){
        if(s1.getFlag() == 0){
            cout<<"您已经借书，请归还后再借！"<<endl;
        }
        else if(b1.getB_flag() == 0){
            cout<<"此书已经借出"<<endl;
        }
        else{
            b1.setB_flag(0);
            s1.setFlag(0);
            cout<<"借书成功"<<endl;
        }
    }


    char ibsn[1000][13]={' '};
//    char s1[1000][8]={'0'};
//    book b1;
//    student s2;

};

int main() {
    book b;
    student d,c;
    char n;
   do {
//       system("cls");
       mean();
       System a;
       cin >> n;
       switch (n) {
           case '1':
               a.addBook();
               break;
           case '2':
               break;
           case '3':
               a.borrowBook(b,c);
               a.borrowBook(b,d);
               break;
           case '0':
               cout<<"欢迎下次使用"<<endl;
               return 0;
       }
   } while (n != '0');//不等于'0'皆可运行


    return 0;
}
