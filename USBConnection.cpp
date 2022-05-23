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


// std::stack<int> ids(int array[]){
//     std::stack<int> returnarr;
//     returnarr.push(array[0]);
//     returnarr.push(array[1]);
//     returnarr.push(array[2]);

//     return returnarr;
// }
int USBConnection::get_id(){
    return ID;
}

USBConnection::~USBConnection(){
    ids.push(ID);
}