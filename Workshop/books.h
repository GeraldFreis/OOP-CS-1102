#include <iostream>
using namespace std;
class Books{
    private: 
        int id;
        std::string name;
        std::string author;
        int numberofbook;

    public:
        Books();
        Books(int _id, std::string _name, std::string _author, int _numberofbook);
        int getId();
        std::string getName();
        std::string getAuthor();
        int getCopies();

        void setId(int _id);
        void setName(std::string _name);
        void setAuthor(std::string _author);
        void setCopies(int _numberof_book);
};