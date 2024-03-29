#include<iostream>
#include<list>
using namespace std;

class YoutubeChannel{  
    private: //access modifier
    string Name;  //there is no way to change these property outside class, create getter and setter to change that
    int Susbscriber;
    list<string>PublishedVideoTitle;

    protected: //access modifier
    string OwnerName;

    public: //access modifier
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

class CookingYoutubeChannel :public YoutubeChannel {
    public:
    CookingYoutubeChannel( string name, string ownername):YoutubeChannel(name, ownername){ //constructor

    }

    void practice(){
        cout<<OwnerName<<" is practice cooking, learn new recipes, experiment with spices..."<<endl;
    }
};
int main(){

    CookingYoutubeChannel cookingychannel1("Emy'kitchen","Emy"); //obj 2
    CookingYoutubeChannel cookingychannel2("john'kitchen","john"); //obj1
    
    cookingychannel1.PublishVideo("apple pie");
    cookingychannel1.PublishVideo("banana shake");
    cookingychannel1.PublishVideo("papaya shake");

    cookingychannel1.Subscribe();
    cookingychannel1.Subscribe();
    cookingychannel1.Subscribe();
    cookingychannel1.Unsubscribe();
    cookingychannel1.GetInfo();
    cookingychannel1.practice();
    cookingychannel2.practice();


}