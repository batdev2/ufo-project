#include <iostream>
#include <vector>
using namespace std;
// Define functions
void display_status (std::vector<char> incorrect, std::string answer) {
  cout << "Incorrect Guesses:\n";
for (int i = 0; i < incorrect.size(); i++) {
  cout << incorrect[i] << "" << "\n";
  }
cout << "Codeword:\n";
for (int i = 0; i < answer.size(); i++) {
    cout << answer[i] << "" << "\n";
}
}
void end_game (std::string answer, std::string codeword) {
  if (answer == codeword) {
  cout << "Hooray! You saved the person and earned a medal of honor!\n";
}
else {
  cout << "Oh no! The UFO just flew away with another person!\n";
}
}