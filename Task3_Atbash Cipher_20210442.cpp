//FCAL-Programming 1- 2022 - Assignment 2
//Programe Name: Task#3 - Atbash Cipher.
//Programe Description:Taking the alphabet and mapping it to its revers.
//Last Modification Date:13/3/2022
//Author 1 and ID and Group:Heba Azouz - 20210442 - A 
//Teaching Assistant:
//Purpose:Encrypt and Decrypt any Message.

#include<iostream>
#include<string>

using namespace std;

void cipherEncryption() {
	string message;
	cout << "Enter the message:...";
	getline(cin, message);     //take input and store it in varible(message)
	cin.ignore();

	//Message to UPPER case.
	for (int i = 0; i < message.length(); i++) {
		message[i] = toupper(message[i]);         //function to convert lowercase to UPPERCASE.

	}
	string alpa = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string reverseAlpa = "";
	for (int i = alpa.length() - 1; i > -1;i--) {
		reverseAlpa += alpa[i];

	}
	string encryText = "";
	for (int i = 0; i < message.length(); i++) {
		if (message[i] == 32) {      //32(decimal) = space in ASCII CODE
			encryText += " ";
		}
		else
		{
			for (int j = 0; j < alpa.length(); j++) {
				if (message[i] == alpa[j]) {
					encryText += reverseAlpa[j];
					break;
				}

			}   //inner for

		}  //if_else
	}    //for
	cout << "Encrypted Text:   " << encryText << endl;

}



int main()
{
	int num;      //Number of Process.


	cout << "HELLO USER" << endl;
	cout << "What do you like to do (1,2)?" << endl, cout << "1-Cipher a message." << endl;
	cout << "2-Decipher a message." << endl, cout << "Please enter number of process...." << endl;

	cin >> num;
	cin.ignore();


	if (num == 1)     //Encrypt an message.
	{
		cout << "Enter your message you want to encrypt." << endl;
		cipherEncryption();


	}
	else if (num == 2)       //Decrypt an message. 
	{
		cout << "Enter the message you want to decrypt" << endl;
		cipherEncryption();

	}
	else
	{
		cout << "Invalid process." << endl;
	}

	return 0;
}