#include<iostream>

using namespace std;

class Book{
    private:
     string  author;

    public:
        string title;
       
        int pages;
    Book(string title , string author, int pages){
        setAuthor(author);
        this->pages = pages;
        this->title = title;
    };

    void setAuthor(string author){
        this->author = author;
    }

    string getAuthor(){
        return this->author;
    }

    bool hasHonors(){
        if(this->pages<100){
            return false;
        }
        return true;
    }

};

int main(){

    string name = "Mike";
    double pi = 3.14;
    char favoriteLetter = 'G';

    Book book1("Hello world","Book1 author",183);

    cout << book1.title << endl;
    cout << book1.hasHonors() << endl;


    
    return 0;
}