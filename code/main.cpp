//
//  main.cpp
//  WBT
//
//  Created by Goulet on 14-11-05.
//  Copyright (c) 2014 UdeS. All rights reserved.
//

#include <iostream>
#include "WBT.h"
using namespace std;

int main(int argc, const char * argv[])
{
  /*  WBT<double> WD;
    WD.afficher();
    WD.insert(23);
    WD.insert(12);
    WD.insert(35);
    WD.insert(12);
    for(double d=5;d<85;d+=7)WD.insert(d);

    WD.afficher();
    WBT<double> W2(WD);
    WBT<double> W3;
    WD=W3;
    WD.afficher();
    W3=W2;
    W3.afficher();

    std::cout << "Fin du programme!\n";
    return 0;
  }*/


 string base("ABCDZEFGHIJKLMN");
  WBT<string> WS;
  string s;
  for(const auto& c : base){
    s+=s+=s=c;
    WS.insert(s);
  }

  WS.afficher();
}
