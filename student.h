//
// Created by lkbmx0000 on 2022/10/17.
//

//#ifndef SHIYAN1_STUDENT_H
//#define SHIYAN1_STUDENT_H
//
//#endif //SHIYAN1_STUDENT_H
#pragma once
#include <iostream>
#include "book.h"
using namespace std;
class student{
public:
    student();

    void setName(string name);

    string getName();

    student(int flag);

    void setFlag(int flag);

    int getFlag();

    ~student();

    void borrowBook(book &b1);

    void returnBook(book &b2);



private:
    string s_name;
    int s_number;
    int s_flag;//0为已借书，1为未借书
};
