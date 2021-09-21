#include <iostream>
#include <string>
using namespace std;


string texttomorse(char c)
{
	string text = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	string morse[] = { ".-",".-","-...","-...","-.-.","-.-.","-..","-..", ".",".", "..-.","..-.", "--.", "--.",
					  "....","....", "..", "..", ".---",".---", "-.-", "-.-", ".-..",".-..", "--", "--",
					  "-.","-.", "---", "---", ".--.",".--.", "--.-", "--.-", ".-.", ".-.", "...","...", "-", "-",
					  "..-","..-", "...-", "...-", ".--", ".--", "-..-", "-..-", "-.--","-.--", "--..","--.." };
	int index = text.find(c);
	if (index != -1)
		return morse[index];
	else
		return " ";
}

int main()
{
	cout << "Enter a message for change to Morse code : " << endl;
	string ord;
	getline(cin, ord);
	string morse = "";
	for (int i = 0; i < ord.length(); i++)
	{
		morse += texttomorse(ord[i]);
	}
	cout << morse << endl;

	return 0;
}