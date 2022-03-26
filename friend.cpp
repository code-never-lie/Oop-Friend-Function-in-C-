Friends
- violation of OOP
- Friends explores the private information to public

1- Friend Functions
2- Friend Classes
..............................................
Friend Functions

e.g maid is a friend  of HousOwner. Maid can explore
Owners private data

.............................................

class  HouseOwner{
private :
 int amount;

public :
HouseOwner() { }
HouseOwner(int amount) {this->amount=amount; }
friend void maid(HouseOwner &p); 
};

void maid(HouseOwner &p) { cout<<p.amount<<endl;} 

void main () {
HouseOwner owner(5000);
maid(owner);

}
....................................................
Friend Classe

e.g America is a friend of pakistan, America can explore all hidden data of pakistan. But Pakistan have no access of any american internal data.
By default Friendship is unidirectional
.....................................................

class America;//forward declaration
class Pakistan{
private:
  int budget;
  int noOfMissiles;
  int curruptionCases;
public :
friend America;
Pakistan() { }
Pakistan(int b,int m, int c) {
        budget=b;
        noOfMissiles=m;
        curruptionCases=c;
 }


};
class America{
private:
  int budget;
  int noOfMissiles;
  int nuclearWeapon;
public :
void obamaMeeting(Pakistan &p){
 cout<<"Pakistan Budget ="<<p.budget<<endl;
 cout<<"Pakistan noOfMissiles ="<<p.noOfMissiles<<endl;
 cout<<"Pakistan curruptionCases="<<p.curruptionCases<<endl;
}
};

void main(){
Pakistan p(1000,100,40000)\;
America a;
a.obamaMeeting(p);


}
