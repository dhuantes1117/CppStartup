#include<string>
using namespace std;
class Sandwich{
  public:
    // constructors are special 'creation' functions so they
    // share the class name and do not have a return type
    Sandwich(){
    
    }
    Sandwich(int menuNumber){
      if(menuNumber > 17){
        menuID = -1;
      } else {
        menuID = menuNumber;
      }
    }
    string printDescription(){
      return descriptions[menuID - 1];
    }
  protected:
    bool mayo = true;
    bool lettuce = true;
    bool tomato = true;
    bool peppers = false;
  private:
    int menuID;
    string descriptions[17];
};
