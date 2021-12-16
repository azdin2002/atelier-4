#include <iostream>
#include <list>
#include <iterator>
using namespace std;


class Anmal;
class Chat;
class Elments;
class Repas;
class Race;
class Chien;
class Entraineur;
class Compitition;

class Animal {

protected:
   string genre , nom;
    int age;
public:

    void setTGnr(string genre){
this->genre= genre ;
}
    string getGnr(){
return this->genre ;
}
    void setnom(string nom){
   this->nom= nom ;
}
    string getNom(){
    return this->nom ;
}
public:
    void setAge(int age){
    this->age= age ;
}
int getAge(){
    return this->age ;
}

};
class Chat :public Animal{

    private:
        string type;
    public:
        void sauter();
    public:
        void setType(string type){
        this->type= type ;
    }
        string getType(){
             return this->type ;
    }
};
class Repas {

   
    private:
        string nom,descreption ;
        int heure;
        list<Elments> *lisE ;   
    public:        
        void setNom(string nom){
            this->nom= nom ;
        }
        string getNome(){
        return this->nom ;
        }  
        void setDesc(string descreption){
        this-> descreption=descreption;
        }
        string getDesce(){
        return this->descreption ;
       }
         void setHeur(int heure){
            this->heure= heure ;
        }
        int getheure(){
        return this->heure ;
        }
        Repas(){// get in instance in the A instance because its a composition relation

        lisE = new list<Elments>();
      }
        void setlistE(list<Elments> *lisE ){
        this->lisE = lisE ;
        }
        list<Elments>* getlistE(){
        return this->lisE;
        }
};
class Elments{ 
      private:
      Repas r;
      string nom ,type;
  public:
        void setType(string type){
        this->type= type ;
    }
        string getType(){
             return this->type ;
    }
     void setnom(string nom){
     this->nom= nom ;
}
     string getNom(){
     return this->nom ;
}
    void setReps( Repas r){
    this->r = r ;
    }
    Repas getReps(){

    return this->r ;
    }
};
class Race {
    protected:
      string specificite;
    protected:
      void israceHybride();
};
class Chien :public Animal,Race {
  private:
      string taille;
     list<Entraineur> listE ; 
  public:
  void ichass3();
  void setlistE(list<Entraineur> listE ){
     this->listE = listE ;
}
    list<Entraineur> getlistE(){ 
    return this->listE ;
    }
  
};
class Entraineur {
    private: 
      string nom , descreption;
      list<Chien> listC ;
      public:
        void setlistChien(list<Chien> listC ){
        this->listC = listC ;
    }
        list<Chien> getlistChien(){ 
        return this->listC ;
        } 
};
class Compitition{

    private:
    string date , nom;
    public:
    int order;
    Chien c;
    Entraineur e;
    public:
    void setChien(Chien c){
        this->c = c ;
        }
        Chien getChien(){
        return this->c ;
        }
        void setEntr(Entraineur e){
        this->e = e ;
        }
        Entraineur getEntr(){
        return this->e ;
        }
};

