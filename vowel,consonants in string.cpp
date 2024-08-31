#include <iostream>
using namespace std;
int main() {
    string str = "Hello World"; 
    int vowels = 0, consonants = 0;

    for (int i = 0; i < str.length(); i++) 
	{
        char c = tolower(str[i]);  

        if (c >= 'a' && c <= 'z') 
		{ 
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			 {
                vowels++;
            } else 
			{
                consonants++;
            }
        }
    }
	cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
