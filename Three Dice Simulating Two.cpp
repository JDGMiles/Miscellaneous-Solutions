#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

  srand (time(NULL));
  int dice1=0;
  int dice2=0;
  int dice3=0;
  int smallest=0;
  int middle=0;
  int largest=0;

  for(int i=1; i<7; i++){
    for(int j=1; j<7; j++){
      for(int k=1; k<7; k++){
        dice1=i;
        dice2=j;
        dice3=k;
        if(dice1<=dice2 && dice2<=dice3){smallest=dice1; middle=dice2; largest=dice3;}
        if(dice2<=dice3 && dice3<=dice1){smallest=dice2; middle=dice3; largest=dice1;}
        if(dice3<=dice1 && dice1<=dice2){smallest=dice3; middle=dice1; largest=dice2;}
        if(dice1<=dice3 && dice3<=dice2){smallest=dice1; middle=dice3; largest=dice2;}
        if(dice2<=dice1 && dice1<=dice3){smallest=dice2; middle=dice1; largest=dice3;}
        if(dice3<=dice2 && dice2<=dice1){smallest=dice3; middle=dice2; largest=dice1;}
        cout << smallest << middle << largest << endl;
      }
    }
  }

return 0;
}
