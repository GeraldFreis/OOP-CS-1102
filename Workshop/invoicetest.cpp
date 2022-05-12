#include <iostream>
#include "invoice.h"
using std::cout; using std::string; using std::cin;

int main(){
    

    // test 1
    Invoice invoicetestobj_1("1321");

    if(invoicetestobj_1.getInvoiceCode() == "1321"){
        cout << "Test 1 (INVOICE CODE) passed" << "\n";
    }
    else{
        cout << "Test 1 (INVOICE CODE) failed" << "\n";
    }

    if(invoicetestobj_1.getDollarsOwed() != 0){
        cout << "Test 2 (DOLLARS OWED) failed" << "\n";
    }
    else{
        cout << "TEST 2 (DOLLARS OWED) passed" << "\n";
    }

    // setting the invoice code

    if(invoicetestobj_1.trySetInvoiceCode("ABCD") != true){
        cout << "Test 3 (INVOICE CODE) failed" << "\n";
    }
    else{
        cout << "Test 3 (INVOICE CODE) passed" << "\n";
    }

    invoicetestobj_1.trySetInvoiceCode("a_121");

    // setting the  cost owed
    invoicetestobj_1.addServiceCost(-1000);
    if(invoicetestobj_1.getDollarsOwed() == -1000){
        cout << "Found bug (test 4 passed)" << "\n";
    }
    else{
        cout << "Test 4 (ADDING COST) failed"  << "\n";
    }

    if(invoicetestobj_1.computeTax() != (0.1*-1000)){
        cout << "Test 5 (COMPUTING TAX) failed" << "\n";
    }
    else{
        cout << "Test 5 (COMPUTING TAX) passed" << "\n";
    }

    // applying a discount
    invoicetestobj_1.applyDiscount(0.2);
    if(invoicetestobj_1.getDollarsOwed() != (-800)){
        cout << "Test 6 (APPLYING DISCOUNT) failed "<< "\n";
    }
    else {
        cout << "Test 6 applying discount passed" << "\n";
    }

}