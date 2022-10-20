#include <iostream>
using namespace std;
#include "book.h"
#include "student.h"




int main() {
    book a;
    a.setB_name("ÃÀÀö");
    a.setB_ibsn("0-7167-0344-0");
    a.setB_page(999);
    a.setB_publisher("°¡°¡°¡³ö°æÉç");
    book b("³óÂª");
    cout<<a.getB_page()<<a.getB_name()<<endl;
    student p1,p2;
    p1.borrowBook(a);
    p2.borrowBook(b);
    p1.returnBook(a);
    p2.borrowBook(a);

    return 0;
}
