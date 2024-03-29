#include<iostream>
using namespace std;

class EquilateralTraingle{
    private:
    float a;
    float circumference;
    float area;    

    // if we make public getter to circum, area it will become available for everyone. 

    public:

    void setA(float length){
        a=length;
        circumference=3*a;
        area=(1.73*a*a)/4;
    }
    // friend void PrintResult(EquilateralTraingle );
    friend class Homework;

};

class Homework{
    public: // friendship is not mutual.
    void PrintResult(EquilateralTraingle et){
        cout<< "circumference ="<<et.circumference<<endl;
        cout<<"area ="<<et.area<<endl;
    }
};

// void PrintResult(EquilateralTraingle et){

//     cout<< "circumference ="<<et.circumference<<endl;
//     cout<<"area ="<<et.area<<endl;

// }

int main(){

    EquilateralTraingle et;
    et.setA(3);

    //PrintResult(et); --this is not a global functn any more.
    //in order to invoke we need to create object of homework type

    Homework h;
    h.PrintResult(et);


    return 0;
}