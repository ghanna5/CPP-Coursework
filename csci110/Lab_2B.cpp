// CSCI Lab 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Prolog
	a.Program Description - Printing the number of syllables in a word
	b.Author - George Hanna
	c.Date - 
	d.Input Variables - Words
	e.Process Flow - strings, conditions
	f.Output Variables - Number of syllables
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string word;
    cout << "Please enter 4 words, Q to end: ";
    getline(cin, word);
   
    cout << "Words" << "       " << "Syllables" << endl;
    cout << "---------------------" << endl;

    int string_length = word.length();
    int counter;
    int syllables = 0;
    float vowel_place;
    int total = 0;
    int vowel_letters = 0;
    for (counter = 0; counter <= string_length; counter++)
    {
        if (word[counter] == 'a' || word[counter] == 'e' || word[counter] == 'i' || word[counter] == 'o' || word[counter] == 'u' || word[counter] == 'y')
        {
            vowel_letters += 1;
            total += 1;
            vowel_place = word[counter];
            if (vowel_letters == 1)
            {
                syllables += 1;
            }
            cout << word[counter];
        }
        else if (word[counter] == ' ' || word[-1] == word[counter])
        {
            if (vowel_place == 'e')
            {
                syllables -= 1;
            }
            if (syllables  == 0)
            {
                syllables += 1;
            }
            cout << setw(20 - total) << syllables << endl;
            syllables = 0;
            total = 0;
        }
        else
        {
            vowel_letters = 0;
            total += 1;
            cout << word[counter];
        }
    }
    return 0;
}