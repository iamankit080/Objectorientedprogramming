#include<iostream>
using namespace std;

class Instrument {
    public:
    virtual void MakeSound()=0;

    /*removeing implemetation and making virtual function=0 makes it pure virtual function.
    and this class is not called abstract class- because abstract class is that class that
    contain at least one pur virtual function.  It forces derived  lass to make it own implementation.*/ 

};

    class Accordian:public Instrument {
        public:
        void MakeSound(){
        cout<<"Accordian is Playing"<<endl;
        }

    };

        class Piano:public Instrument {
        public:
        void MakeSound(){
        cout<<"Piano is Playing"<<endl;
        }
        

    };

int main(){
    Instrument* I1= new Accordian(); // baseclass pointer
    //I1->MakeSound();

    Instrument* I2= new Piano(); 
    //I2->MakeSound();

    Instrument* instruments[2]={I1,I2}; //array pointer

    for(int i=0;i<2;i++){
        instruments[i]->MakeSound();
    }

    return 0;
}