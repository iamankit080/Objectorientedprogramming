#include<iostream>
using namespace std;

/* we can create class as well but we need to make members public,
but in struct, members are by default public*/

struct YoutubeChannel {
    string Name;
    int SubscriberCount;

    YoutubeChannel(string name, int subscribercount) {
        Name = name;
        SubscriberCount = subscribercount;
    }
};

int main() {
    YoutubeChannel yt1 = YoutubeChannel("CodeBeauty", 75000);

    return 0;
}
