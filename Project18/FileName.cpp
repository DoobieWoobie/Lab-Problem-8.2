#include <iostream>
#include <string>
using namespace std;
//pee
int countWords(string str)
{
	int word = 1;
	int string = str.size();
	for (int i = 0; i < string; i++)
		if (str[i] == ' ')
		{
			word++;
		}
	return word;
}
int main()
{
	bool input = true;
	while (input)
	{
		string str;
		cout << "Enter string or Q to quit: ";
		getline(cin, str);
		int result = countWords(str);
		if (str == "Q")
		{
			input = false;
		}
		else
		{
			cout << "Word count: " << result << endl;
		}
	}return 0;
}