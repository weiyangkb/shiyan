//
// Created by lkbmx0000 on 2022/10/10.
//

//#ifndef SHIYAN1_BOOK_H
//#define SHIYAN1_BOOK_H
//
//#endif //SHIYAN1_BOOK_H
#pragma once
#include <iostream>
using namespace std;

class book{
public:
    void setB_name(string name);

    string getB_name();


    void setB_ibsn(string ibsn);

    string getB_ibsn();


    void setB_publisher(string publisher);

    string getB_publisher();


    void setB_price(int price);

    int getB_price();


    void setB_page(int page);

    int getB_page();

    void setB_flag(int flag);

    int getB_flag();


    book();

    book(string name1);

    ~book();


private:
    string B_name;
    string B_ibsn;
    string B_publisher;
    int B_price;
    int B_page;
    int B_flag;//1为存在，0已为借出
};