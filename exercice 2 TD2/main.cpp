#include <iostream>
using namespace std;

int Multiple_deux(int A){
     if (A%2==0)
   cout<<"il est pair"<<endl;
     else
    cout<<"-------------"<<endl;
    return 0 ;
}

int Multiple_trois(int B){
    if (B%3==0)
        cout<<"il st multiple de trois"<<endl;
    else
        cout<<"-------------"<<endl;
    return 0 ;
}
int main() {
   int nbr;
  int i ;
  for(i=0;i<9;i++){
    cout<<"Donner un entier :  ";
    ;
    cin>>nbr;
    Multiple_deux(nbr);
    Multiple_trois(nbr);
      }


    return 0;
}
