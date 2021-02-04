#include<iostream>

// the main method is a method (function) like any other. It has a
// return type and needs a return statemant.
//
int main(){
  // your goal is to write a program to write a gnuplot style file
  // such that the following line runs and brings up a graph of a
  // circle. This is part learning C++ and part gnuplot just as an
  // excuse for something you'll probably have to google since you
  // don't have much gnuplot experience.
  // Cheat, plaigarize, pull anything off the internet or the cheat
  // sheet with reckless abandon.
  // Remember, you can only plot strings, not numbers, so you need
  // some way to go between
  system("gnuplot -p -e \'plot \"Circle.txt\" with lines \'");
  return 0;
}
