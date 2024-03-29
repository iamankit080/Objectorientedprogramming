/* We use abstract class to implement abstraction.
We csn't create instance of a abstract class.
We can create pointer of a abstract class*/

#include<iostream>
using namespace std;

class Smartphone{
    public:
    virtual void TakeASelfie()=0;
    virtual void MakeACall()=0;
};

class Android : public Smartphone{
    public:
    void TakeASelfie(){
        cout <<"Android took a selfie"<< endl;
    }

    void MakeACall(){
        cout <<"Android made a call"<< endl;
    }

};

// android and iphone developer doesnot need to know about iphone class and viceversa.

class Iphone : public Smartphone{
    public:
    void TakeASelfie(){
        cout <<"Iphone took a selfie"<< endl;
    }

    void MakeACall(){
        cout <<"Iphone calling"<< endl;
    }

};

int main(){
    Smartphone* s1= new Android(); // base class pointer point to object of derived class.
    s1->TakeASelfie();

    Smartphone* s2= new Iphone();
    s2->TakeASelfie();
    s2->MakeACall();
    //here used doesnot  need to know any class iphone or android.


    return 0;
}