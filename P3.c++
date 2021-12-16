#include <iostream>
#include <list>
#include <iterator>
using namespace std;


void afficher(list <int> g)// la fonction d'affichage de la list
{
list <int> :: iterator it;
for(it = g.begin(); it != g.end(); ++it)
cout << *it <<";" ;
cout << '\n';
}
int main(){
list <int> l1,l2;
int n;
cout<<"entrer la taille de la liste ";
cin>>n;
 int t[n];  // remplir la liste apartir d'un tableau
for (int i = 1; i <= n; i++)
{
    cout<<"donner la valeur de "<<i<<" element :";
    cin>>t[i];
}

for (int i = 1; i <= n; i++)
{
    l1.push_back(t[i]);// remplir la liste apartir d'un tableau
    
}
l1.sort();  //
afficher(l1);


    return 0;
}