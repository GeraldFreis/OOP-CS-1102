#include <iostream>
// #include "addtodictionary.cpp"
using std::string;
/*{
// attrs{
    static const website
}

// behaviours{
    1. function to open up the website
    2. function to take this opened website and read the html save it to a string and initialise
    -> the string in the heap
    3. function to read this string into the output // not a main function just for testing
    4. function to change the website we are reading
    5. function to get the website we are reading
    }
}
*/
#define maxnum 100000 // the maximum strings per line

class HtmlRetriever{
    protected:
        string website_url; // the url of the website we are using 
        string *htmlstring = new string[maxnum];  // the array of strings we can possibly initiate in the heap
        int htmllength; // value we can reassign the array of strings to if set
    
    public:
        // constructors and destructors
        HtmlRetriever(); // default constructor
        HtmlRetriever(const int linesofhtml); // constructor when the lines of html are provided
        HtmlRetriever(const string _website_url); // constructor when a different website wants to be used
        ~HtmlRetriever(); // default destructor

        // member functions
        const void set_url(string new_url);
        void set_lines(int lines);
        
        // opening website
        void opensite();

        // adding the string to the dictionary
        friend const void AddhHmlToDictionary();
};