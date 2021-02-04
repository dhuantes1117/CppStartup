#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <cmath>
#include <chrono>
#include <vector>
#include "Sandwich.hpp"

//this line is basically the import numpy as np of C++. Just always have it
using namespace std;

double sum_squared(double x, double y){
  return (x + y) * (x + y);
}

int main(){
	std::cout << "Hello, World!" << "\n";
      //Only uncomment all of this once you have compiled and ran the previous line. The law of machine demands it.
    
      //add these to top of file
      /*
      #include <set>
      #include <map>
      #include <cmath>
      #include <chrono>
      #include <vector>
      #include <libField/Field.hpp>
      #include <libInterpolate/Interpolate.hpp>
      #include "geometry.h"
*/

      // decimal numbers
      double a  = 321.044; 
      float b = 1.21;
      //whole numbers
      int c     = 45;
      long d = 323e7;  
      // true/false
      bool d1 = true;
      bool d2 = 3 < 4;
      // strings
      std::string words = "blah blah blah";
      std::string more_words = "foo bar BAZ!";
      // printing
      std::cout << "Don't forget the newline!" << "\n";              	
      std::cout << "This is fine as well!\n";                     
      std::cout << "Now " << "you're " << "being " << "ridiculous\n";
      std::cout << "numbers: {" << 1 << ", " << 0.243 << "}\n";
      // to string
      std::string interp = std::to_string(b) + " look at that!\n";

      // pow takes two arguments, x and y and returns x^y
      double IV = pow(25, 2);
      // the log function is natural log, or ln. If you want log base
      // 10 reevaluate your life
      double natural = log(0.5);
      // the square root or sqrt function will always give the
      // positive root
      double irrational = sqrt(2);

      a = 1;
      if(a < 2){
        //do this if conditional is true
        std::cout << "A is less than two\n";
      } else {
        //do this if conditional ISN'T true
        std::cout << "Relevant print messages are silly\n";
      }

      int n = 0;
      while(n < 10){
        // do this over and over (may continue forever if case is
        // never false)
        n++;
      }

      for(int i = 0; i < 10; i++){
         // do something N times
      }

      ofstream output;
      output.open("file.txt");
      output << "This text is inside of a cpp file, and a txt file.\ntrippy";
      output.close();

      //example of y = x^2
      double dx = 0.2;
      std::string buffer = "";
      std::string x, y;
      for(int i = 0; i < 100; i++){
        x = std::to_string(i * dx);
        y = std::to_string(pow(i * dx, 2));
        buffer +=  x + "\t" + y + "\n";
      }

      ofstream output2;
      output2.open("gnuplotFile.txt");
      //gnuplot style is 'x y' columns
      output2 << buffer;
      output2.close();
      // -e is the commandline tack, and -p is the
      // 'persist' command so it doesn't get destroyed
      system("gnuplot -p -e \'plot \"gnuplotFile.txt\" with lines \'");

      //c is an int declared higher
      double x_values[c];
      double t_values[100];
      double ages[3] = {34, 23, 17};
      string names[] = {"Emily", "Dan", "Patrick"};

      // try printing some of these to get what you want
      std::vector<int> fibbonacci;
      std::vector<int> threes{3, 3, 3};
      static const int r = n;
      std::vector<int> zeros(n, 0);
      std::vector<int> ones(n, 1);

      std::map<int, string> MenuDescriptions = {{1, "THE PEPE: Ham Provolone..."},\
      {2, "Big John: Roast beef, lettuce, ..."},\
      {3, "Totally Tuna: It's tuna baby"}};

      MenuDescriptions[13] = "JIMMY CUBANO: Bacon, smoked ham...";

      return 0;
    }
