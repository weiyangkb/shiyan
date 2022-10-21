//
// Created by lkbmx0000 on 2022/10/17.
//
#include "book.h"
#include "student.h"

student::student(){
    s_name = "ѧ��";
    s_flag = 1;
}

void student::setName(string name){
    s_name = name;
}

string student::getName(){
    return s_name;
}

student::student(int flag){
    s_flag = flag;
}

void student::setFlag(int flag){
    s_flag = flag;
}

int student::getFlag(){
    return s_flag;
}

student::~student(){}

void student::borrowBook(book &b1){
    if(s_flag == 0){
        cout<<"���Ѿ����飬��黹���ٽ裡"<<endl;
    }
    else if(b1.getB_flag() == 0){
        cout<<"�����Ѿ����"<<endl;
    }
    else{
        b1.setB_flag(0);
        s_flag=0;
        cout<<"����ɹ�"<<endl;
    }
}

void student::returnBook(book &b1){
    if(b1.getB_flag() == 1){
        cout<<"�����ѻ�"<<endl;
    }
    else if(getFlag() == 1){
        cout<<"��δ����"<<endl;
    }
    else{
        b1.setB_flag(1);
        setFlag(1);
        cout<<"����ɹ���"<<endl;
    }
}


