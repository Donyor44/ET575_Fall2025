/*
Lab AI #1 — String methods exercise
Assistant: ChatGPT
Donyor hasanov
*/

#include <iostream>
#include <string>

int main() {
    std::string word;

    // Ask the user to type a word
    std::cout << "Enter a word: ";
    std::cin >> word;

    // Print the 2nd character (index 1)
    if (word.size() >= 2) {
        std::cout << "2nd character:\t\t" << word[1] << "\n";
    } else {
        std::cout << "2nd character:\t\t(none - word too short)\n";
    }

    // Find and print the length of the word
    std::cout << "word has:\t\t" << word.size() << " characters\n";

    // Replace 2 characters starting from the 3rd character with "--$--"
    std::string replacedWord = word;          // classroom: variable, not function
    if (replacedWord.size() >= 3) {
        replacedWord.replace(2, 2, "--$--");  // start at index 2, replace 2 chars
    }
    std::cout << "Replace word:\t\t" << replacedWord << "\n";

    // Remove 3 characters from the end of the (replaced) string
    std::string removedEnd = replacedWord;
    if (removedEnd.size() >= 3) {
        removedEnd.erase(removedEnd.size() - 3); // erase last 3 chars
    } else {
        removedEnd.clear();
    }
    std::cout << "Remove end characters:\t" << removedEnd << "\n";

    return 0;
}

/*
--- Fill this AFTER you run the program in your terminal ---

// --- AI Assistant Used: ChatGPT ---
// Was the code correct? (Yes/No): Yes
// Was it readable and properly commented?: Yes
// Were you able to explain each line of code?: Yes
// Did it use the same programming concepts we learned in class?: Yes
// Terminal Output: (Paste the actual output here)

Enter a word: example
2nd character:          x
word has:               7 characters
Replace word:           ex--$--ple
Remove end characters:  ex--$--

Enter a word: Peter
2nd character:          e
word has:               5 characters
Replace word:           Pe--$--r
Remove end characters:  Pe--$

Enter a word: cat
2nd character:          a
word has:               3 characters
Replace word:           ca--$--
Remove end characters:  ca--$

Enter a word: hi
2nd character:          i
word has:               2 characters
Replace word:           hi
Remove end characters:

Enter a word: a
2nd character:          (none - word too short)
word has:               1 characters
Replace word:           a
Remove end characters


*/



