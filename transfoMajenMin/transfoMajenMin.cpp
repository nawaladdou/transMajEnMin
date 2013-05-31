// transfoMajenMin.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
 
int main()
{
  char a, b;
  cout<<"Tapez un caractere : "; cin>>a;
  if (a>='A' && a<='Z') {
    cout<<"Vous avez tapé une majuscule."<<endl;
    b = a + ('a'-'A');
    cout<<"La minuscule correspondante est "<< b <<endl;
  }
  else if (a>='a' && a<='z') {
    cout<<"Vous avez tapé une minuscule."<<endl;
    b = a + ('A'-'a');
    cout<<"La majuscule correspondante est "<< b <<endl;
  }
  else cout<<"Vous n'avez pas tapé une lettre."<<endl;
  return 0; 
}

