#include<iostream>

using namespace std;

void afficher( string s){  

    if (s.length() !=12)   
    {
        cout<<" !! cette date ne pas valide "<<endl;
    }
    else
    {
        cout<<"le date est :"<<s.substr(0,2)<<"/"<<s.substr(2,2)<<"/"<<s.substr(4,4)<<endl;
        cout<<" Heure est "<<s.substr(8,2)<<":"<<s.substr(10,2)<<endl;
    }
    
}
int main(){

 string d ,b;
 d="12454545455";
 b="120320111045";
 afficher(d);
 afficher(b);
     return 0;
}