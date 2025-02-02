#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int length;
	string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=~";
    
    
   cout << "Enter the desired password length: ";
    cin >> length;

    if (length < 8) {
        cout << "Password length should be at least 8 characters for better security.\n";
       }
    else
	{
	  srand(time(0));
      string password = "";
      for (int i = 0; i <length; i++)
	  {
        int randomIndex = rand() % characters.length();
        password += characters[randomIndex];
      }
      cout << "Generated Password: " << password << endl;
    }
    return 0;
}

