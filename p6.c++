#include <iostream>
using namespace std;
class Test{
public:
static int tableau[] ;
public :
static int division(int indice, int diviseur){
return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{

int x, y;
cout << "Entrez l'indice de l'entier a diviser: " << endl;
cin >> x ;
if (x>=0 && x<=9)
{
   cout << "Entrez le diviseur: " << endl;
cin >> y ;
if (y!=0)
{
cout << "Le resultat de la division est: "<< endl;
cout <<Test::division(x,y) << endl;
}else
    cout<<"entrez un nomber qui difiront 0 ";

}else
    cout<<"entrez un indice partien l'interval 0 et 9";




return 0;
}