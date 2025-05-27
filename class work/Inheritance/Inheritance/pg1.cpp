#include<iostream>
#include<list>
using namespace std;
//base class
class YoutubeChannel {
private:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list<string> publishedVideoTitles;
public:
	YoutubeChannel(string name, string ownername) {
		Name = name;
		OwnerName = ownername;
		SubscribersCount = 0;

	}
	void GetInfo() {
		cout << "Name:" << Name << endl;
		cout << "OwnerName:" << OwnerName << endl;
		cout << "SubscriberCount:" << SubscribersCount << endl;
		cout << "Videos:" << endl;
		for (string videoTitle : publishedVideoTitles) {
			cout << videoTitle << endl;
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
		publishedVideoTitles.push_back(title);

	}
};
//derived class
class cookingYoutube :public YoutubeChannel {
public:
	cookingYoutube(string name, string ownername) :YoutubeChannel(name, ownername) {

	}
	void pratice() {
		cout << "Cooking,learning new recipes,experimenting with spices...";
	}
};


int main() {

	cookingYoutube y("abc kitchen", "Vaishnavi");
	y.publishVideo("Apple pie");
	y.Subscribe();
	y.Unsubscribe();
	y.GetInfo();
	y.pratice();
	


}