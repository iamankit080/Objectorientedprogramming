//what if we need to create multiple object, this collide with principle don't repeat thwe code if you don't really need it.

#include<iostream>
#include<list>

using namespace std;


class YoutubeChannel{  
    public: //access modifier
    string Name;
    string OwnerName;
    int Susbscriber;
    list<string>PublishedVideoTitle;

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

};
int main(){

    YoutubeChannel ytbchnl1("codebeauty","saldina");  //obj1
    ytbchnl1.PublishedVideoTitle.push_back("C++ for beginner");
    ytbchnl1.PublishedVideoTitle.push_back("oops for beginner");
    ytbchnl1.PublishedVideoTitle.push_back("dbms for beginner");

    YoutubeChannel ytbchnl2("emysings","emy");  //obj2

   /* cout<<"Name: "<<ytbchnl1.Name<<endl;
    cout<<"OwnerName: "<<ytbchnl1.OwnerName<<endl;
    cout<<"Susbscriber: "<<ytbchnl1.Susbscriber<<endl;
    cout<<"videos:"<<endl;
    for(string VideoTitle: ytbchnl1.PublishedVideoTitle){
        cout<<VideoTitle<<endl;
    }

    cout<<"Name: "<<ytbchnl2.Name<<endl;
    cout<<"OwnerName: "<<ytbchnl2.OwnerName<<endl;
    cout<<"Susbscriber: "<<ytbchnl2.Susbscriber<<endl;
    cout<<"videos:"<<endl;
    for(string VideoTitle: ytbchnl2.PublishedVideoTitle){
    cout<<VideoTitle<<endl;
    } */

    ytbchnl1.GetInfo();
    ytbchnl2.GetInfo();






}