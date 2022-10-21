//
// Created by lkbmx0000 on 2022/10/10.
//
#include "book.h"

    void book::setB_name(string name){
        B_name = name;
    }
    string book::getB_name(){
        return B_name;
    }

    void book::setB_ibsn(string ibsn){
    int sum = 0;
    int j=10;
    for(int i=0;i<=12;i++){
        if(i==1||i==6||i==11){
            continue;
        }
        sum +=(ibsn[i]-48)*j;
        j--;

    }
    if(sum % 11 ==0){
        B_ibsn = ibsn;
     }
    else{
        cout<<"ibsn码错误"<<endl;
     }
    }

    string book::getB_ibsn(){
        return B_ibsn;
    }

    void book::setB_publisher(string publisher){
        B_publisher = publisher;
    }
    string book::getB_publisher(){
        return B_publisher;
    }

    void book::setB_price(int price){
        B_price = price;
    }
    int book::getB_price(){
        return B_price;
    }

    void book::setB_page(int page){
        B_page = page;
    }
    int book::getB_page(){
        return B_page;
    }

    void book::setB_flag(int flag){
        B_flag = flag;
    }

    int book::getB_flag(){
      return B_flag;
    }

book::book(){
        B_name = "初始名";
        B_ibsn = "0-0000-0000-0";
        B_publisher ="初始出版商";
        B_price = 0;
        B_page = 0;
        B_flag = 1;
    }
book::book(string name1){
        B_name=name1;
    }
book::~book(){}

