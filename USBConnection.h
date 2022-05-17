#include <iostream>
#include <stack>
#ifndef USBCONNECTION_H
#define USBCONNECTION_H

class USBConnection {
    private:
        USBConnection(int id){ID = id;}
        int ID;
    
    public:
        // static std::stack<id>
        static USBConnection *CreateUsbConnection();
        static std::stack<int> ids;
        int get_id();
        ~USBConnection();
};

#endif