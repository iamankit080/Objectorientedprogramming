#include<iostream>
#include<list>
using namespace std;

class YoutubeChannel {
private:
    string Name;
    int Susbscriber;
    list<string> PublishedVideoTitle;

protected:
    string OwnerName;
    int contentqua;

public:
    YoutubeChannel(string name, string ownername) {
        Name = name;
        OwnerName = ownername;
        Susbscriber = 0;
        contentqua = 0;
    }



    void GetInfo() {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "Susbscriber: " << Susbscriber << endl;
        cout << "Videos:" << endl;
        for (string VideoTitle : PublishedVideoTitle) {
            cout << VideoTitle << endl;
        }
    }

    void Subscribe() {
        Susbscriber++;
    }

    void Unsubscribe() {
        if (Susbscriber > 0)
            Susbscriber--;
    }

    void PublishVideo(string title) {
        PublishedVideoTitle.push_back(title);
    }

    void CheckAnalytics() {
        if (contentqua < 5)
            cout << Name << " Bad quality" << endl;
        else
            cout << Name << " Good quality" << endl;
    }
};

class CookingYoutubeChannel : public YoutubeChannel {
public:
    CookingYoutubeChannel(string name, string ownername) : YoutubeChannel(name, ownername) {}

    void practice() {
        cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
        contentqua++;
    }
};

class SingerYoutubeChannel : public YoutubeChannel {
public:
    SingerYoutubeChannel(string name, string ownername) : YoutubeChannel(name, ownername) {}

    void practice() {
        cout << OwnerName << " is practicing singing & learning new songs..." << endl;
        contentqua++;
    }
};

int main() {
    CookingYoutubeChannel cookingychannel("Emy's Kitchen", "Emy");
    SingerYoutubeChannel singerchannel("John Sings", "John");

    cookingychannel.PublishVideo("Apple Pie");
    cookingychannel.PublishVideo("Banana Shake");
    cookingychannel.PublishVideo("Papaya Shake");

    cookingychannel.practice();
    cookingychannel.practice();
    cookingychannel.practice();
    cookingychannel.practice();
    cookingychannel.practice();
    singerchannel.practice();

    YoutubeChannel* yt1 = &cookingychannel; // pointer of baseclass point to derive class.
    YoutubeChannel* yt2 = &singerchannel; 
//invoke method using pointer
    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    return 0;
}
