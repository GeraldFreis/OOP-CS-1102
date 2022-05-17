#include "USBConnection.h"

USBConnection *USBConnection::CreateUsbConnection(){
    if(ids.empty() == false){
        USBConnection *usbconn = new USBConnection(ids.size()-1);
        ids.pop();
        return usbconn;
    }
    
    else {
        return nullptr;
    }
}




int USBConnection::get_id(){
    return ID;
}

USBConnection::~USBConnection(){
    ids.push(ID);
}