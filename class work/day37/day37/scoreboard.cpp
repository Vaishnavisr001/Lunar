#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

	void displayscore(std::vector<int>&scores)
	{
		for (int i = 0;i < 3 && i < scores.size();++i)
		{
			std::cout << scores[i] << std::endl;
		}
		std::cout << std::endl;
	}
	int main() {
		std::vector<int>scores;
		int score;
		std::cout << "Enter the score -1 to stop" << std::endl;
		while (true)
		{
			std::cin >> score;
			if (score == -1)
				break;
			scores.push_back(score);


		}
	}
}