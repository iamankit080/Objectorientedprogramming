#include<iostream>
using namespace std;

class Instrument {
    public:
    virtual void MakeSound(){
        cout<<"Instrument is Playing"<<endl;
    }
};

    class Accordian:public Instrument {
        public:
        void MakeSound(){
        cout<<"Accordian is Playing"<<endl;
        }//if function implementation removed output will be "Instrument is playing" else "accordian is playing"


    };

int main(){
    Instrument* I1= new Accordian(); // baseclass pointer
    I1->MakeSound();

    return 0;
}