#include <iostream>
using namespace std;
#include "book.h"
#include "student.h"

void mean(){
    cout<<"***********************"<<endl;
    cout<<"*****1������ͼ��********"<<endl;
    cout<<"*****2������ͼ��********"<<endl;
    cout<<"*****3������************"<<endl;
    cout<<"*****0���˳�ϵͳ********"<<endl;
}

class System{
public:
//    friend class book;
    void addBook(){
        int n;
        book a;
        cout<<"����������鼮������";
        cin>>n;
        cout<<"�������鼮ibsn��"<<endl;
        for(int i=0;i<n;i++){
            cin>>ibsn[i];
            a.setB_ibsn(ibsn[i]);//��ҪһЩ����000
        }
    }

    void borrow(){
    //borrowBook(    );
    }
    void borrowBook(book &b1,student &s1){
        if(s1.getFlag() == 0){
            cout<<"���Ѿ����飬��黹���ٽ裡"<<endl;
        }
        else if(b1.getB_flag() == 0){
            cout<<"�����Ѿ����"<<endl;
        }
        else{
            b1.setB_flag(0);
            s1.setFlag(0);
            cout<<"����ɹ�"<<endl;
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
               cout<<"��ӭ�´�ʹ��"<<endl;
               return 0;
       }
   } while (n != '0');//������'0'�Կ�����


    return 0;
}
