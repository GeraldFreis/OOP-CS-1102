#include <iostream>
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
        static const string website_url; // the url of the website we are using 
        string *htmlstring = new string[maxnum];  // the array of strings we can possibly initiate in the heap
        int htmllength; // value we can reassign the array of strings to if set
    
    public:
        HtmlRetriever(); // default constructor
        HtmlRetriever(int linesofhtml);
        HtmlRetriever(string _website_url);
        ~HtmlRetriever();
};