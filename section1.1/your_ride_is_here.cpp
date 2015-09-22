/*                                                                              
ID: pitodog4                                                                    
PROG:ride
                                                                      
LANG:C++                                                                        
*/

#include <iostream>
#include <fstream>
#include <assert.h>
using namespace std;


int string2number(string str){
  int value = 1;
  for(int i = 0;i<str.length();i++){
    value *= ((int)str[i]-64);
  }
  value = value % 47;
  return value;
}

string run(string str1,string str2){
  int val_1 = string2number(str1);
  int val_2 = string2number(str2);
  if(val_1==val_2){ return "GO"; }
  else { return "STAY";}
}



int main(){
  ofstream fout ("ride.out");
  ifstream fin ("ride.in");
    string str1,str2;
    fin>>str1>>str2;
    fout<<run(str1,str2)<<"\n";
  //  assert( run("COMETQ","HVNGAT") == "GO");
  //  assert( run("ABSTAR","USACO") == "STAY");
}


