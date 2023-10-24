#include <iostream>
using namespace std;

void Appeler (){
   static int nbrAppel=0;
    nbrAppel++;
    cout<<"**Appel numéro: "<<nbrAppel<<endl;

}
int main() {
   int i;
   for(i=0;i<=7;i++)
    Appeler();

    return 0;
}
