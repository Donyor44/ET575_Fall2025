/*
Donyor Hasanov
Lab 3, string and string methods
Sep 8, 2025
*/
#include<iostream>
#include<string>

using namespace std;

int main(){ 
cout << "\n------------ example 1: string indexing ----------" << endl;
string first_name = "Peter";
cout <<"The 3rd character = " <<first_name[2] <<endl;
cout <<"The 1st character = " <<first_name.at(0) <<endl;

cout << "\n------------ example 2: amount of character in a string ----------" << endl;
int characters = first_name.length(); 
cout <<"There is " <<characters<<" charcater/s in "<<first_name<<endl;

cout << "\n------------ example 3: concatenate charcatres in a string ----------" << endl;
string last_name = "Pan";
string username = "PP123";
cout<<"concatenated word = "<<first_name + last_name + username<<endl; 

cout << "\n------------ example 4: substacting charcatres in a string ----------" << endl;
string msg = "Today is a beautiful day!";
// extract 5 charactre from the 3rd character
string subst_char = msg.substr(2, 5);
cout<<"Extracted characters = "<<subst_char<<endl; 

cout << "\n------------ example 5: inserting charcatres in a string ----------" << endl;
// instert the word "maybe"
msg.insert(5, " maybe");
cout<<"After insert method = "<<msg<<endl;

cout << "\n------------ example 6: inserting charcatres to the end of a string ----------" << endl;
msg.append(" -- by Prof. Wu");
cout<<"After append method = "<<msg<<endl;

cout << "\n------------ example 7: inserting charcatres to the end of a string ----------" << endl;
msg.replace(17,9, "bad"); 
cout<<"After repalce method = "<<msg<<endl;

cout << "\n------------ example 8: erasing charcatres from a string ----------" << endl;
// erase the word 'today'
msg.erase(0,5);
cout<<"After erase method = "<<msg<<endl;

cout << "\n------------ example 9: finding charcatres in a string ----------" << endl;
// find method returns the index number of a first found.
// if the character was not found, it returns -1
// find the word 'prof'

int index_prof = msg.find("Prof");
cout<<"The index of Prof = "<<index_prof<<endl;

cout <<"\n ------ EXERCISE ------ " << endl; 



    std::string word;

    std::cout << "Enter a word: ";
    std::cin >> word;

    if (word.size() >= 2) {
        std::cout << "2nd character:\t\t" << word[1] << "\n";
    } else {
        std::cout << "2nd character:\t\t(none - word too short)\n";
    }

    std::cout << "word has:\t\t" << word.size() << " characters\n";

    std::string replacedWord = word;
    if (replacedWord.size() >= 3) {
        replacedWord.replace(2, 2, "--$--");
    }
    std::cout << "Replace word:\t\t" << replacedWord << "\n";

    std::string removedEnd = replacedWord;
    if (removedEnd.size() >= 3) {
        removedEnd.erase(removedEnd.size() - 3);
    } else {
        removedEnd.clear();
    }
    std::cout << "Remove end characters:\t" << removedEnd << "\n";

    return 0;
}