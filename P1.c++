#include<iostream>
using namespace std;

class Complex{
  
  public:
  double real, imag;

  Complex(double r = 0, double i = 0){ //constructeur 
    real = r;
    imag = i;
  }
  void afficher(){  //la fonction pour afficher 
      cout<<real;
      if (imag>=0)
      cout<<" + ";
      cout<<imag<<" i "<<endl;
  }
 Complex operator+(Complex r) { // la somme  de deux complex
    Complex c;
    c.real=real + r.real;  // la partie  réelle de la somme 
    c.imag =imag + r.imag; // la partie imaginaire de cette somme
    return c;
 }
 Complex operator-(Complex r){   // la diffirence  de deux complex
    Complex c;
     c.real=real - r.real;   //partie  réelle
    c.imag =imag - r.imag;     //  partie imaginaireb
    return c;
 }
 Complex operator*(Complex r){  // le produit de deux complex
     Complex c;
        c.real = real * r.real - imag * r.imag;   //partie  réelle
        c.imag = real * r.imag + imag * r.real;  // partie imaginaire
        return c;
 }
 Complex operator/(Complex r){   // la division de deux complex 
     Complex c;
     c.real = (real * r.real + imag * r.imag)/(r.imag *r.imag +r.real * r.real);//partie  réelle
     c.imag = (imag *r.real -real*r.imag) /(r.imag *r.imag +r.real * r.real);// partie imaginaire
     return c;
 }


};

main(){

double r1, i1;
//créer le nombre complexe 1
  cout << "Premier nombre \n";
  cout << "Entrez la partie reelle: ";
  cin >> r1;
  cout << "Entrez la partie imaginaire: ";
  cin >> i1;
   Complex c1(r1, i1);
   c1.afficher();
  cout << "Deuxieme nombre\n";
  double r2, i2;
  cout << "Entrez la partie reelle: ";
  cin >> r2;
  cout << "Entrez la partie imaginaire: ";
  cin >> i2;
 Complex c2(r2, i2); //créer le nombre complexe 2 
  c2.afficher();
  char o;
 cout<<"choisir une operation arithmetique :";
 cin>>o;
 Complex c3,c4,c5,c6;
 c3=c1 + c2;  //la somme 
 c4=c1 - c2;  // la diffirence
 c5=c1*c2;// le produit
 c6=c1/c2;  // la division
  
 switch (o) {        // le Menu  
  case '+': 
    cout<<" la somme est : ";
    c3.afficher();
    break;
  case '-':
    cout<<" la  diffirence est : ";
     c4.afficher();
    break;
    case '*':
    cout<<" le produit est : ";
    c5.afficher();
  
    break;
    case '/':
    cout<<" la division est : ";
    c6.afficher();
    
    break;
  default:
    cout << "choisir une operation arithmetique entre  + ,-,*,/ :";
}
}
