#include <iostream>
using namespace std;

class meerkat{
    private:
        int age;
        std::string name;
    public:
        meerkat(){
            int age = 0;
            std::string name = "";
        };
        void setName(std::string meerName){name = meerName;}
        void setAge(int meerAge){age = meerAge;}
        string getName(){return name;}
        int getAge(){return age;}
}; 