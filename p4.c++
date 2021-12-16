#include <iostream>
#include <list>
#include <iterator>
using namespace std;



template<typename T>
void printList(list<T> l) {  // la fonction d'affichage de la list 
    for (const auto &item : l) {
        cout << item << "; ";
    }
    cout << endl;
}
bool trie (string first, string second)  //trier de la liste selon l’ordre alphabétique
{
  unsigned int i=0;
  while ( (i<first.length()) && (i<second.length()) )
  {
    if ((first[i])<(second[i])) return true;
    else if ((first[i])>(second[i])) return false;
    ++i;
  }
  if (first.length()<second.length()) return true;
  else return false;
}
int main(){
    std::list<std::string> l1;

int n;
cout<<"entrer la taille de la liste ";
cin>>n;

 string t[n][3];                
for (int i =0; i < n; i++)
{cout<<" donner le nom  et le prenom et l'age de "<<i+1<<" personne : "<<endl;
    for (int j = 0; j < 3; j++)
    { 
       cin>>t[i][j];
    }
}

 for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 3; j++)
    {                             //  remplire la liste aparire d'un btableau 
    
        l1.push_back(t[i][j]);
    }
  }
 l1.sort(trie);
 cout<<"la  liste est : ";
    printList(l1);
    return 0;
}





   
