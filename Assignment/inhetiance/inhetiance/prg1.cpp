#include<iostream>
#define MAX 100
using namespace std;
//base class
class YoutubeChannel {
private:

	string Name;
	int SubscribersCount;
	string PublishedVideoTitles[MAX];
	int videocount;//to track number of videos
protected:
	string OwnerName;
public:
	YoutubeChannel(string name, string ownername) {
		Name = name;
		OwnerName = ownername;
		SubscribersCount = 0;
		videocount = 0;//initialize video count

	}
	void GetInfo() {
		cout << "Name:" << Name << endl;
		cout << "OwnerName:" << OwnerName << endl;
		cout << "SubscriberCount:" << SubscribersCount << endl;
		cout << "Videos:" << endl;
		for (int i = 0;i < videocount;i++) {
			cout << PublishedVideoTitles[i] << endl;


		}
	}
	void Subscribe() {
		SubscribersCount++;
	}
	void Unsubscribe() {
		if (SubscribersCount > 0)
			SubscribersCount--;
	}

	void publishVideo(string title)
	{
		if (videocount < 100) {
			PublishedVideoTitles[videocount] = title;
			videocount++;
		}
		else {
			cout << "video limit reach!" << endl;
		}

	}
};
//derived class
class cookingYoutube :public YoutubeChannel {
public:
	cookingYoutube(string name, string ownername) :YoutubeChannel(name, ownername) {

	}
	void pratice() {
		cout << OwnerName << " is Cooking,learning new recipes,experimenting with spices..." << endl;
	}
};


int main() {

	cookingYoutube y("abc kitchen", "Vaishnavi");//object for derived class
	//cookingYoutube y2("jhons kitchen", "jhon");
	y.publishVideo("Apple pie");
	y.publishVideo("banana bread");
	y.Subscribe();
	y.Subscribe();
	y.Unsubscribe();
	y.GetInfo();
	y.pratice();
	//y2.pratice();
	//YoutubeChannel ytchannel("coding", "haris");//object for base class
	//ytchannel.pratice(); here it is not possible to access the derived class properties using base class object


	return 0;
}