#include<iostream>
using namespace std;


class User{
    public:
    string FirstName;
    string LastName;
    int Age;
    string email;

    //User(){};  empty default constructor.

    // own default constructor
    User(){
        FirstName="nm";
        LastName="nlm";
        Age=0;
        email="not set";

    };  

    // parameterised constructor
    User(string fname, string lname, int age){
        FirstName=fname;
        LastName=lname;
        Age=age;
        email=fname+"."+lname+"@gmail.com";

    }; 

};
    void GetUserInfo(User u){

    cout<<"FirstName: " <<u.FirstName<<endl;
    cout<<"LastName: "  <<u.LastName<<endl;
    cout<<"Age: " <<u.Age<<endl;
    cout<<"email: " <<u.email<<endl;
    }




int main(){

    User user1("Ankit", "Kumar", 24);
    User user2("Kanak", "Raj", 23);

    GetUserInfo(user1);
    GetUserInfo(user2);

    User user3; //this expect a default constructor to construct the object
    GetUserInfo(user3);

    return 0;

}