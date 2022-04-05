#include <iostream>
using std::cout;

class meerkat{
    private:
        int age;
        std::string name;
    public:
        meerkat();
        void setName(std::string meerName);
        void setAge(int meerAge);
        std::string getName();
        int getAge();
}; 