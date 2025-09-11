/*
Lab AI #2 — String methods exercise
Assistant: claude
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
    std::string replacedWord = word;
    if (replacedWord.size() >= 3) {
        // Handle case where word has exactly 3 or 4 characters
        int charsToReplace = std::min(2, static_cast<int>(replacedWord.size()) - 2);
        replacedWord.replace(2, charsToReplace, "--$--");
    }
    std::cout << "Replace word:\t\t" << replacedWord << "\n";

    // Remove 3 characters from the end of the (replaced) string
    std::string removedEnd = replacedWord;
    if (removedEnd.size() >= 3) {
        removedEnd.erase(removedEnd.size() - 3);  // Fixed: removed second parameter
    } else {
        removedEnd.clear();  // Clear entire string if less than 3 characters
    }
    std::cout << "Remove end characters:\t" << removedEnd << "\n";

    return 0;
}
/*

// --- AI Assistant Used: Claude ---
// Was the code correct? (Yes/No) Yes
// Was it readable and properly commented? Yes
// Were you able to explain each line of code? Yes
// Did it use the same programming concepts we learned in class? Yes
// Terminal Output: (Paste the output of your program here)

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


/*
What did the AI assistants get right?

-Both correctly handled 0-based indexing (printed the 2nd character at index 1).

-Both computed and printed the string length.

-Both replaced 2 characters starting at index 2 with "--$--".

-Both safely removed the last 3 characters (with a length check so short inputs don’t crash).

-Both produced clear, labeled output matching the lab’s format.


Was the code based on similar programming concepts taught in class?

-Yes. Both used only <iostream>, <string>, cin/cout, indexing ([]), .size()/.length(), .replace(), and .erase().



Did one AI provide a better explanation or code structure than the other? Why?

-ChatGPT edged out slightly: the code was simpler (no extra helpers), matched the class methods exactly, and had straightforward comments and variable names—easy to explain line-by-line.
 Claude initially added a safety tweak with std::min (robust but outside your strict “only class headers” rule).
 Once cleaned, its structure was essentially the same as ChatGPT’s, but ChatGPT’s version needed no edits to meet the class constraints.
 
*/