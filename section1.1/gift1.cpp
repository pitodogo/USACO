/*                                                                              
ID: pitodog4                                                                    
PROG:gift1
                                                                      
LANG:C++                                                                        
*/

#include <iostream>
#include <fstream>
#include <assert.h>
#include <vector>
using namespace std;

int main(){
  ofstream fout ("ride.out");
  ifstream fin ("ride.in");
  int np;
  fin>>np;
  string names[np];
  int savings[np] = {0};
  for(int i = 0;i<np;i++){
    fin>>names[i];
  }







    fout<<run(str1,str2)<<"\n";
  //  assert( run("COMETQ","HVNGAT") == "GO");
  //  assert( run("ABSTAR","USACO") == "STAY");
}


