// transfoMajenMin.cpp�: d�finit le point d'entr�e pour l'application console.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
 
int main()
{
  char a, b;
  cout<<"Tapez un caractere : "; cin>>a;
  if (a>='A' && a<='Z') {
    cout<<"Vous avez tap� une majuscule."<<endl;
    b = a + ('a'-'A');
    cout<<"La minuscule correspondante est "<< b <<endl;
  }
  else if (a>='a' && a<='z') {
    cout<<"Vous avez tap� une minuscule."<<endl;
    b = a + ('A'-'a');
    cout<<"La majuscule correspondante est "<< b <<endl;
  }
  else cout<<"Vous n'avez pas tap� une lettre."<<endl;
  return 0; 
}

