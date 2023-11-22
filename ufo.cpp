#include <iostream>
#include <vector>
#include "ufo_functions.hpp"
using namespace std;
int main() {

 greet();

std::string codeword = "codecademy";
std::string answer = "__________";
int misses = 0;

vector<char> incorrect;
bool guess = false;

char letter;

while (answer != codeword && misses < 7) {
  
display_misses(misses);

display_status(incorrect, answer);

cout << "Please enter your guess:\n";
cin >> letter;

for (int i = 0; i < codeword.length(); i++) {
  if (letter == codeword[i]) {
    answer[i] = letter;
    guess = true;
  }
  
}
if (guess) {
    cout << "Correct!\n";
  }
  else {
    cout << "Incorrect! The tractor beam pulls the person in further.\n";
    incorrect.push_back(letter);
     misses++;
  }
guess = false;
}

end_game(answer, codeword);

if (guess = true) {
  cout << "Congrats! The word was 'Codecademy'!\n";
}
else if (guess = false) {
  cout << "Too bad! The word was 'Codecademy'!\n";
}











}
