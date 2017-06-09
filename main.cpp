#include <iostream>
#include <string>

bool isAnagram(std::string one, std::string two)
{
	if(one.length() != two.length())
		return false;	

	for(int i = 0; i < one.length(); i++)
	{
		bool anagram = false;
		int j = 0;
		while(!(anagram) && j < two.length())
		{
			if(one.at(i) == two.at(j))
			{
				two.erase(two.begin()+j);
				anagram = true;
			}
			j++;
		}
	
		if(!(anagram))
			return false;
		
	}

	return true;
}

void swap(std::string *arr, int i, int j)
{
	std::string temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void printArr(std::string *arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

void sortAnagram(std::string *arr, int size)
{

}

int main(int argc, char *argv[])
{
	std::string *arr;
	int size;
	
	std::cout << "How big is the array going to be: ";
	std::cin >> size;

	arr = new std::string[size];

	for(int i = 0; i < size; i++)
	{
		std::string in;
		std::cout << "Enter word #" << i + 1 << ": ";
		std::cin >> in;
	
		arr[i] = in;
	}

	sortAnagram(arr, size);
	printArr(arr, size);
	
	delete [] arr;

	return 0;
}
