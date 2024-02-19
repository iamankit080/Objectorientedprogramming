#include<iostream>
#include<list>

using namespace std;


class YoutubeChannel{  // created class with four attribute
    public: //access modifier
    string Name;
    string OwnerName;
    int Susbscriber;
    list<string>PublishedVideoTitle;

};
int main(){

    //created object of class
    YoutubeChannel  ytbchannel;   // classname nameofvariable
    ytbchannel.Name="Codebeauty";
    ytbchannel.OwnerName="Ankit";
    ytbchannel.Susbscriber=999;
    ytbchannel.PublishedVideoTitle={"c++ for beginners", "html and css video", "oops in one video"};

    //assigned value to property
    cout<<"Name: "<<ytbchannel.Name<<endl;
    cout<<"OwnerName: "<<ytbchannel.OwnerName<<endl;
    cout<<"Susbscriber: "<<ytbchannel.Susbscriber<<endl;
    cout<<"videos:"<<endl;
    for(string VideoTitle: ytbchannel.PublishedVideoTitle){
        cout<<VideoTitle<<endl;
    }

}