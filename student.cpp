//
// Created by lkbmx0000 on 2022/10/17.
//
#include "book.h"
#include "student.h"

student::student(){
    s_name = "学生";
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
        cout<<"您已经借书，请归还后再借！"<<endl;
    }
    else if(b1.getB_flag() == 0){
        cout<<"此书已经借出"<<endl;
    }
    else{
        b1.setB_flag(0);
        s_flag=0;
        cout<<"借书成功"<<endl;
    }
}

void student::returnBook(book &b1){
    if(b1.getB_flag() == 1){
        cout<<"此书已还"<<endl;
    }
    else if(getFlag() == 1){
        cout<<"还未借书"<<endl;
    }
    else{
        b1.setB_flag(1);
        setFlag(1);
        cout<<"还书成功！"<<endl;
    }
}


