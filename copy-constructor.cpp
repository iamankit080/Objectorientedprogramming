#include<iostream>
using namespace std;

class Book{
    public:
    string Title;
    string Author;
    int* Rates;
    int RatesCounter;
    
    Book(string title, string author){
    Title=title;
    Author=author;
    RatesCounter=2;
    Rates= new int[RatesCounter];
    Rates[0]=4;
    Rates[1]=5;

    cout<< Title + " -constructor invoked"<<endl;
    }

    ~Book(){
        delete [] Rates; // still memory leak, with delete[] its good.
        Rates=nullptr; // cause diiferent issue, hence good practice to use nullptr whenever deleting memory.
        cout<< Title + " -destructor invoked"<<endl;

    }
};

int main(){

    Book book1("psychology of money", "Dr. Ankit");
    Book book2("master mind", "carles");

    Book book3(book1);

    return 0;
}