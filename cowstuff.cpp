#include "Cow.hpp"
#include<vector>
// I know you raise steers, feel free to change the name but STAY
// CONSISTENT :)

using namespace std;


// Your mission, if you choose to accept it, is to build a Cow class
// in a header file (hint for a name on the first line of this file)
// so that this program functions as intended, including functions
// called, and storing information in member variables. Lie, cheat,
// steal, and use force with extreme prejudice. You'll need to get
// user input for this program, which isn't actually in the cheat
// sheet (yet) but is available through 'google.com'
//
// Bonus points: have the prompt messages repeat in order until the
// user inputs some special 'stop' number
// Add some extra member variables or functions to the Cow class and
// use them
// Have and use multiple constructors for the cow class

int() main {
  bool flag = true;
  std::vector<Cow> SteerList;
  //Populate this list of COWS!!!
  SteerList.push_back(Cow("fill in cow name", 12/*put in some weight*/));
  if(SteerList.size() < 5){
    flag = false;
  }
  int i = -1;
  bool feed = false;
  std::cout << "Select a cow to hear about\n";
  // would be nice to print out the indexes that correspond to each cow
  // now so you're not flying blind (remember all input is STRINGS)
  i = /*user input somehow...*/;
  std::cout << SteerList[i].show_all_properties() << "\n";
  std::cout << "Do you want to feed this cow extra?\n";
  // insert user input, again using 'feed' variable somehow
  if(feed){
    //this should increase the weight
    SteerList[i].feed();
  }
  std::cout << SteerList[i].name() << " weight increased to " << SteerList[i].show_weight() << "\n";

  
  // this is a lazy form of 'test based' development because I don't
  // want to set up Catch2 right now
  if(flag){
    std::cout << "Error, not all tests were passed" << "\n";
  } else {
    std::cout << "Success! Cow Power!" << "\n";
  }
}
