#include<iostream>
#include<list>
using namespace std;

class YoutubeChannel{  
    private: //access modifier
    string Name;
    string OwnerName;   //there is no way to change these property outside class, create getter and setter to change that
    int Susbscriber;
    list<string>PublishedVideoTitle;

    public:
    YoutubeChannel(string name, string ownername)
    {
        Name=name;
        OwnerName=ownername;
        Susbscriber=0;
    }

    void GetInfo(){
    cout<<"Name: "<<Name<<endl;
    cout<<"OwnerName: "<<OwnerName<<endl;
    cout<<"Susbscriber: "<<Susbscriber<<endl;
    cout<<"videos:"<<endl;
    for(string VideoTitle: PublishedVideoTitle){
    cout<<VideoTitle<<endl;
    }

    }

    void Subscribe(){  //method
        Susbscriber++;
    }

    void Unsubscribe(){    //method

        if(Susbscriber>0)
        Susbscriber--;
    }

    void PublishVideo(string title){  //method
        PublishedVideoTitle.push_back(title);

    }
};
int main(){

    YoutubeChannel ytbchnl1("codebeauty","saldina");  //obj1
    ytbchnl1.PublishVideo("C++ for beginner");
    ytbchnl1.PublishVideo("oops for beginner");
    ytbchnl1.PublishVideo("dbms for beginner");

    ytbchnl1.Subscribe();
    ytbchnl1.Subscribe();
    ytbchnl1.Subscribe();
    ytbchnl1.Unsubscribe();
    ytbchnl1.GetInfo();

}