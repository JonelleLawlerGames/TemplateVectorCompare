#include<iostream>
#include<vector>
template<typename T>
std::pair<T, T> minMax(std::vector<T> testVec)
{

	int min = 0;
	int max = 0;

	if (testVec[0] < testVec[1])
	{
		min = testVec[0];
		max = testVec[1];
	}
	else
	{
		min = testVec[1];
		max = testVec[0];
	}

	std::pair<T, T> pair;
	pair = std::make_pair(min, max);

	return pair;


}
int main()
{
	// Vector 
	std::vector <int> testVec = { 2,4 };

	std::cout << minMax(testVec).first << minMax(testVec).second << std::endl;

	system("PAUSE");
	return 0;
}
