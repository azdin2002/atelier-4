#include <iostream>
#include <iterator>
#include <set>
using namespace std;


bool rechercher(set<int,greater <int> > m, const int key ){
if (m.find(key) != m.end() ) {
        return true;
    } else {
        return false;
    }
   
}
int main(){

set<int, greater<int> > s1;
for (int i = 1; i <= 100; ++i)
  {
      s1.insert(i );

  }
  set<int, greater<int> >::iterator itr;
    for (itr  =s1.begin(); itr != s1.end(); itr++)
    {
        cout<<*itr<< " ";
    }
    s1.begin();
   
  int n;
  cout<<endl<<"donner la valeur :"; 
  cin>>n;
  rechercher(s1,n)?
     cout <<n<< "  existe dans cett set " << endl :
     cout<<n << "  exist pas danc cett set\n" << endl;
    return 0;
}