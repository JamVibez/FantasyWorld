
#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

class CommandCenter
{public:
        void zapis();
        void zycie();
        void pancerz();
CommandCenter(){
        CommandCenter::zapis();         
        CommandCenter::zycie();
        CommandCenter::pancerz();
        }
        };
        void CommandCenter::zapis(void) {ofstream save; save.open("Files/Save/SaveT/TerranB.txt", ios::app); save<<"Wybudowales Command Center\r\n"; save.close();}
        void CommandCenter::zycie(void) {cout<<"Zycie: 2000/2000(100%)"<<endl;}
        void CommandCenter::pancerz(void) {cout<<"Pancerz: 2500/2500(100%)"<<endl;} 
        
class Factory
{public:
        void zapis();
        void zycie();
        void pancerz();
Factory(){
        Factory::zapis();   
        Factory::zycie();
        Factory::pancerz();
        }
        };
        void Factory::zapis(void) {ofstream save; save.open("Files/Save/SaveT/TerranB.txt", ios::app); save<<"Wybudowales Factory\r\n"; save.close();}
        void Factory::zycie(void) {cout<<"Zycie: 1100/1100(100%)"<<endl;}
        void Factory::pancerz(void) {cout<<"Pancerz: 1700/1700(100%)"<<endl;}
        
class Starport
{public:
        void zapis();
        void zycie();
        void pancerz();
Starport(){
        Starport::zapis(); 
        Starport::zycie();
        Starport::pancerz();
        }
        };
        void Starport::zapis(void) {ofstream save; save.open("Files/Save/SaveT/TerranB.txt", ios::app); save<<"Wybudowales Starport\r\n"; save.close();}
        void Starport::zycie(void) {cout<<"Zycie: 1000/1000(100%)"<<endl;}
        void Starport::pancerz(void) {cout<<"Pancerz: 1550/1550(100%)"<<endl;}
  
class iCommandCenter
{public:
        void info();
iCommandCenter(){
        iCommandCenter::info();}
        };
        void iCommandCenter::info(void) 
        {  string tekst;
           ifstream info("Budynki/Terran/iCommandCenter.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}

class iFactory
{public:
        void info();
iFactory(){
        iFactory::info();}
        };
        void iFactory::info(void) 
        {  string tekst;
           ifstream info("Budynki/Terran/iFactory.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}

class iStarport
{public:
        void info();
iStarport(){
        iStarport::info();}
        };
        void iStarport::info(void) 
        {  string tekst;
           ifstream info("Budynki/Terran/iStarport.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}
  
            
class BuildT : public iCommandCenter, public iFactory, public iStarport
{public:
        void lista();
        
BuildT(){
        BuildT::lista();
         }
      };
      
      void BuildT::lista(void)
      {
      int budynek;
      cout<<"\nWprowadz numer budynku ktory ma zostac wybudowany: ";
      cin>>budynek; system("cls");
      if (budynek==1) {cout<<"Gratulacje wybudowales Command Center.\n"; CommandCenter C; }
      if (budynek==2) {cout<<"Gratulacje wybudowales Factory.\n"; Factory F; }
      if (budynek==3) {cout<<"Gratulacje wybudowales Starport.\n"; Starport S; }
      if (budynek<1) cout<<"Wprowadz prawidlowa wartosc! \n"; if (budynek>3) cout<<"Wprowadz prawidlowa wartosc! \n";
}
      
class Marine
{public:
        void zapis();
        void zdrowie();
        void pancerz();
        
Marine(){
        Marine::zapis(); 
        Marine::zdrowie();
        Marine::pancerz();
        }
};   
void Marine::zapis(void) {ofstream save; save.open("Files/Save/SaveT/TerranU.txt", ios::app); save<<"Posiadasz Marine\r\n"; save.close();}
void Marine::zdrowie(void) {cout<<"Zycie: 100/100(100%)"<<endl;}
void Marine::pancerz(void) {cout<<"Pancerz: 60/60(100%)"<<endl;} 


class SiegeTank
{public:
        void zapis();
        void zdrowie();
        void pancerz();
        
SiegeTank(){
        SiegeTank::zapis();
        SiegeTank::zdrowie();
        SiegeTank::pancerz();
        }
};   
void SiegeTank::zapis(void) {ofstream save; save.open("Files/Save/SaveT/TerranU.txt", ios::app); save<<"Posiadasz Siege Tank'a\r\n"; save.close();}
void SiegeTank::zdrowie(void) {cout<<"Zycie: 650/650(100%)"<<endl;}
void SiegeTank::pancerz(void) {cout<<"Pancerz: 450/450(100%)"<<endl;} 

class Battlecruiser
{public:
        void zapis();
        void zdrowie();
        void pancerz();
        
Battlecruiser(){
        Battlecruiser::zapis();        
        Battlecruiser::zdrowie();
        Battlecruiser::pancerz();
        }
};   
void Battlecruiser::zapis(void) {ofstream save; save.open("Files/Save/SaveT/TerranU.txt", ios::app); save<<"Posiadasz Battlecruiser'a\r\n"; save.close();}
void Battlecruiser::zdrowie(void) {cout<<"Zycie: 1200/1200(100%)"<<endl;}
void Battlecruiser::pancerz(void) {cout<<"Pancerz: 900/900(100%)"<<endl;} 

class iMarine
{public:
        void info();
iMarine(){
        iMarine::info();}
        };
        void iMarine::info(void) 
        {  string tekst;
           ifstream info("Jednostki/Terran/iMarine.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}

class iSiegeTank
{public:
        void info();
iSiegeTank(){
        iSiegeTank::info();}
        };
        void iSiegeTank::info(void) 
        {  string tekst;
           ifstream info("Jednostki/Terran/iSiegeTank.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}

class iBattlecruiser
{public:
        void info();
iBattlecruiser(){
        iBattlecruiser::info();}
        };
        void iBattlecruiser::info(void) 
        {  string tekst;
           ifstream info("Jednostki/Terran/iBattlecruiser.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}

class UnitsT : public iMarine, public iSiegeTank, public iBattlecruiser
{public:
        void lista();
        
UnitsT(){
        UnitsT::lista();
         }
      };
      
      void UnitsT::lista(void)
      {
      int jednosta;
      cout<<"\nWprowadz numer jednostki ktora ma zostac stworzona: ";
      cin>>jednosta; system("cls");
      if (jednosta==1) {cout<<"Gratulacje stworzyles Marine.\n\nUuuuuuuaaaaa!\n"; Marine Mar; }
      if (jednosta==2) {cout<<"Gratulacje stworzyles Siege Tank.\n\nGotow do dzialania.\n"; SiegeTank Tank; }
      if (jednosta==3) {cout<<"Gratulacje stworzyles Battlecruiser.\n\nTak jest Komandorze.\n"; Battlecruiser Battle; }
      if (jednosta<1) cout<<"Wprowadz prawidlowa wartosc! \n"; if (jednosta>3) cout<<"Wprowadz prawidlowa wartosc! \n";
}

class Terran 
{public:
        void informacje();
        void komentarz();       
Terran(){
         Terran::informacje();
         Terran::komentarz();
        }     
      };
      void Terran::informacje(void)
      { 
           string tekst;
           ifstream save("Files/Save/SaveT/TerranB.txt");
           if(save.is_open())
           { 
             while(save.good())
             {
              getline(save, tekst);
              cout<<tekst<<endl;
              }
              save.close();
              
              string tekst;
           ifstream save("Files/Save/SaveT/TerranU.txt");
           if(save.is_open())
           { 
             while(save.good())
             {
              getline(save, tekst);
              cout<<tekst<<endl;
              }
              save.close();
              }}}
         
      void Terran::komentarz(void)
      {int s;
      cout<<"\n\n-Witaj komandorze. Co mamy zrobic?(wprowadz liczbe) \n\n1. Spis budynkow.     2. Spis jednostek.      3. USUN SAVE:  ";
      cin>>s; system("cls");
      if (s==1) BuildT B; 
      if (s==2) UnitsT U; 
      if (s==3) {cout<<"Twoje Save'y zostaly skasowane\n\n"; ofstream save; save.open("Files/Save/SaveT/TerranU.txt"); save<<""; save.close();} 
      if (s==3) {ofstream save; save.open("Files/Save/SaveT/TerranB.txt"); save<<""; save.close();}
      if (s<1) cout<<"Wprowadz prawidlowa wartosc! \n"; if (s>3) cout<<"Wprowadz prawidlowa wartosc! \n";}
      
class Nexus
{public:
        void zapis();
        void zycie();
        void pancerz();
Nexus(){
        Nexus::zapis();         
        Nexus::zycie();
        Nexus::pancerz();
        }
        };
        void Nexus::zapis(void) {ofstream save; save.open("Files/Save/SaveP/ProtosB.txt", ios::app); save<<"Wybudowales Nexus\r\n"; save.close();}
        void Nexus::zycie(void) {cout<<"Zycie: 2000/2000(100%)"<<endl;}
        void Nexus::pancerz(void) {cout<<"Pancerz: 4500/4500(100%)"<<endl;} 
        
class Gateway
{public:
        void zapis();
        void zycie();
        void pancerz();
Gateway(){
        Gateway::zapis();   
        Gateway::zycie();
        Gateway::pancerz();
        }
        };
        void Gateway::zapis(void) {ofstream save; save.open("Files/Save/SaveP/ProtosB.txt", ios::app); save<<"Wybudowales Gateway\r\n"; save.close();}
        void Gateway::zycie(void) {cout<<"Zycie: 1000/1000(100%)"<<endl;}
        void Gateway::pancerz(void) {cout<<"Pancerz: 2000/2000(100%)"<<endl;}
        
class Stargate
{public:
        void zapis();
        void zycie();
        void pancerz();
Stargate(){
        Stargate::zapis(); 
        Stargate::zycie();
        Stargate::pancerz();
        }
        };
        void Stargate::zapis(void) {ofstream save; save.open("Files/Save/SaveP/ProtosB.txt", ios::app); save<<"Wybudowales Stargate\r\n"; save.close();}
        void Stargate::zycie(void) {cout<<"Zycie: 1200/1200(100%)"<<endl;}
        void Stargate::pancerz(void) {cout<<"Pancerz: 3700/3700(100%)"<<endl;}
  
class iNexus
{public:
        void info();
iNexus(){
        iNexus::info();}
        };
        void iNexus::info(void) 
        {  string tekst;
           ifstream info("Budynki/Protos/iNexus.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}

class iGateway
{public:
        void info();
iGateway(){
        iGateway::info();}
        };
        void iGateway::info(void) 
        {  string tekst;
           ifstream info("Budynki/Protos/iGateway.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}

class iStargate
{public:
        void info();
iStargate(){
        iStargate::info();}
        };
        void iStargate::info(void) 
        {  string tekst;
           ifstream info("Budynki/Protos/iStargate.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}
  
            
class BuildP : public iNexus, public iGateway, public iStargate
{public:
        void lista();
        
BuildP(){
        BuildP::lista();
         }
      };
      
      void BuildP::lista(void)
      {
      int budynek;
      cout<<"\nWprowadz numer budynku ktory ma zostac wybudowany: ";
      cin>>budynek; system("cls");
      if (budynek==1) {cout<<"Gratulacje wybudowales Nexus.\n"; Nexus N; }
      if (budynek==2) {cout<<"Gratulacje wybudowales Gateway.\n"; Gateway G; }
      if (budynek==3) {cout<<"Gratulacje wybudowales Stargate.\n"; Stargate S; }
      if (budynek<1) cout<<"Wprowadz prawidlowa wartosc! \n"; if (budynek>3) cout<<"Wprowadz prawidlowa wartosc! \n";
}
      
class Zealot
{public:
        void zapis();
        void zdrowie();
        void pancerz();
        
Zealot(){
        Zealot::zapis(); 
        Zealot::zdrowie();
        Zealot::pancerz();
        }
};   
void Zealot::zapis(void) {ofstream save; save.open("Files/Save/SaveP/ProtosU.txt", ios::app); save<<"Posiadasz Zealot\r\n"; save.close();}
void Zealot::zdrowie(void) {cout<<"Zycie: 20/20(100%)"<<endl;}
void Zealot::pancerz(void) {cout<<"Pancerz: 250/250(100%)"<<endl;} 


class DarkTemplar
{public:
        void zapis();
        void zdrowie();
        void pancerz();
        
DarkTemplar(){
        DarkTemplar::zapis();
        DarkTemplar::zdrowie();
        DarkTemplar::pancerz();
        }
};   
void DarkTemplar::zapis(void) {ofstream save; save.open("Files/Save/SaveP/ProtosU.txt", ios::app); save<<"Posiadasz Dark Templar'a\r\n"; save.close();}
void DarkTemplar::zdrowie(void) {cout<<"Zycie: 40/40(100%)"<<endl;}
void DarkTemplar::pancerz(void) {cout<<"Pancerz: 200/200(100%)"<<endl;} 

class Carrier
{public:
        void zapis();
        void zdrowie();
        void pancerz();
        
Carrier(){
        Carrier::zapis();        
        Carrier::zdrowie();
        Carrier::pancerz();
        }
};   
void Carrier::zapis(void) {ofstream save; save.open("Files/Save/SaveP/ProtosU.txt", ios::app); save<<"Posiadasz Carrier'a\r\n"; save.close();}
void Carrier::zdrowie(void) {cout<<"Zycie: 500/500(100%)"<<endl;}
void Carrier::pancerz(void) {cout<<"Pancerz: 2500/2500(100%)"<<endl;} 

class iZealot
{public:
        void info();
iZealot(){
        iZealot::info();}
        };
        void iZealot::info(void) 
        {  string tekst;
           ifstream info("Jednostki/Protos/iZealot.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}

class iDarkTemplar
{public:
        void info();
iDarkTemplar(){
        iDarkTemplar::info();}
        };
        void iDarkTemplar::info(void) 
        {  string tekst;
           ifstream info("Jednostki/Protos/iDarkTemplar.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}

class iCarrier
{public:
        void info();
iCarrier(){
        iCarrier::info();}
        };
        void iCarrier::info(void) 
        {  string tekst;
           ifstream info("Jednostki/Protos/iCarrier.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}

class UnitsP : public iZealot, public iDarkTemplar, public iCarrier
{public:
        void lista();
        
UnitsP(){
        UnitsP::lista();
         }
      };
      
      void UnitsP::lista(void)
      {
      int jednostka;
      cout<<"\nWprowadz numer jednostki ktora ma zostac stworzona: ";
      cin>>jednostka; system("cls");
      if (jednostka==1) {cout<<"Gratulacje stworzyles Zealot.\n\nMoje ¿ycie za Aier!\n"; Zealot Z; }
      if (jednostka==2) {cout<<"Gratulacje stworzyles Dark Templar.\n\nCo rozkazesz...\n"; DarkTemplar T; }
      if (jednostka==3) {cout<<"Gratulacje stworzyles Carrier.\n\nTak??\n"; Carrier C; }
      if (jednostka<1) cout<<"Wprowadz prawidlowa wartosc! \n"; if (jednostka>3) cout<<"Wprowadz prawidlowa wartosc! \n";
      }

class Protos 
{public:
        void informacje();
        void komentarz();        
Protos(){
         Protos::informacje();
         Protos::komentarz();
        
        }     
      };
      void Protos::informacje(void)
      { 
           string tekst;
           ifstream save("Files/Save/SaveP/ProtosB.txt");
           if(save.is_open())
           { 
             while(save.good())
             {
              getline(save, tekst);
              cout<<tekst<<endl;
              }
              save.close();
              
              string tekst;
           ifstream save("Files/Save/SaveP/ProtosU.txt");
           if(save.is_open())
           { 
             while(save.good())
             {
              getline(save, tekst);
              cout<<tekst<<endl;
              }
              save.close();
              }}}
         
      void Protos::komentarz(void)
      {int s;
      cout<<"\n\n-Witaj Cesarzu. Co mamy uczynic? \n\n1. Spis budynkow.     2. Spis jednostek.      3. USUN SAVE:  ";
      cin>>s; system("cls");
      if (s==1) BuildP B; 
      if (s==2) UnitsP U; 
      if (s==3) {cout<<"Twoje Save'y zostaly skasowane\n\n"; ofstream save; save.open("Files/Save/SaveP/ProtosU.txt"); save<<""; save.close();} 
      if (s==3) {ofstream save; save.open("Files/Save/SaveP/ProtosB.txt"); save<<""; save.close();}
      if (s<1) cout<<"Wprowadz prawidlowa wartosc! \n"; if (s>3) cout<<"Wprowadz prawidlowa wartosc! \n";}
                 
class Hive
{public:
        void zapis();
        void zycie();
        void pancerz();
Hive(){
        Hive::zapis();         
        Hive::zycie();
        Hive::pancerz();
        }
        };
        void Hive::zapis(void) {ofstream save; save.open("Files/Save/SaveZ/ZergB.txt", ios::app); save<<"Wybudowales Hive\r\n"; save.close();}
        void Hive::zycie(void) {cout<<"Zycie: 5000/5000(100%)"<<endl;}
        void Hive::pancerz(void) {cout<<"Pancerz: 100/100(100%)"<<endl;} 
        
class SpawningPool
{public:
        void zapis();
        void zycie();
        void pancerz();
SpawningPool(){
        SpawningPool::zapis();   
        SpawningPool::zycie();
        SpawningPool::pancerz();
        }
        };
        void SpawningPool::zapis(void) {ofstream save; save.open("Files/Save/SaveZ/ZergB.txt", ios::app); save<<"Wybudowales Spawning Pool\r\n"; save.close();}
        void SpawningPool::zycie(void) {cout<<"Zycie: 2000/2000(100%)"<<endl;}
        void SpawningPool::pancerz(void) {cout<<"Pancerz: 250/250(100%)"<<endl;}
        
class UltraliskCavern
{public:
        void zapis();
        void zycie();
        void pancerz();
UltraliskCavern(){
        UltraliskCavern::zapis(); 
        UltraliskCavern::zycie();
        UltraliskCavern::pancerz();
        }
        };
        void UltraliskCavern::zapis(void) {ofstream save; save.open("Files/Save/SaveZ/ZergB.txt", ios::app); save<<"Wybudowales Ultralisk Cavern\r\n"; save.close();}
        void UltraliskCavern::zycie(void) {cout<<"Zycie: 3000/3000(100%)"<<endl;}
        void UltraliskCavern::pancerz(void) {cout<<"Pancerz: 500/500(100%)"<<endl;}
  
class iHive
{public:
        void info();
iHive(){
        iHive::info();}
        };
        void iHive::info(void) 
        {  string tekst;
           ifstream info("Budynki/Zerg/iHive.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}

class iSpawningPool
{public:
        void info();
iSpawningPool(){
        iSpawningPool::info();}
        };
        void iSpawningPool::info(void) 
        {  string tekst;
           ifstream info("Budynki/Zerg/iSpawningPool.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}

class iUltraliskCavern
{public:
        void info();
iUltraliskCavern(){
        iUltraliskCavern::info();}
        };
        void iUltraliskCavern::info(void) 
        {  string tekst;
           ifstream info("Budynki/Zerg/iUltraliskCavern.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}
  
            
class BuildZ : public iHive, public iSpawningPool, public iUltraliskCavern
{public:
        void lista();
        
BuildZ(){
        BuildZ::lista();
         }
      };
      
      void BuildZ::lista(void)
      {
      int budynek;
      cout<<"\nWprowadz numer budynku ktory ma zostac wybudowany: ";
      cin>>budynek; system("cls");
      if (budynek==1) {cout<<"Gratulacje wybudowales Hive.\n"; Hive H; }
      if (budynek==2) {cout<<"Gratulacje wybudowales Spawning Pool.\n"; SpawningPool SP; }
      if (budynek==3) {cout<<"Gratulacje wybudowales Ultralisk Cavern.\n"; UltraliskCavern UC; }
      if (budynek<1) cout<<"Wprowadz prawidlowa wartosc! \n"; if (budynek>3) cout<<"Wprowadz prawidlowa wartosc! \n";
}
      
class Zergling
{public:
        void zapis();
        void zdrowie();
        void pancerz();
        
Zergling(){
        Zergling::zapis(); 
        Zergling::zdrowie();
        Zergling::pancerz();
        }
};   
void Zergling::zapis(void) {ofstream save; save.open("Files/Save/SaveZ/ZergU.txt", ios::app); save<<"Posiadasz Zergling\r\n"; save.close();}
void Zergling::zdrowie(void) {cout<<"Zycie: 150/150(100%)"<<endl;}
void Zergling::pancerz(void) {cout<<"Pancerz: 15/15(100%)"<<endl;} 


class Hydralisk
{public:
        void zapis();
        void zdrowie();
        void pancerz();
        
Hydralisk(){
        Hydralisk::zapis();
        Hydralisk::zdrowie();
        Hydralisk::pancerz();
        }
};   
void Hydralisk::zapis(void) {ofstream save; save.open("Files/Save/SaveZ/ZergU.txt", ios::app); save<<"Posiadasz Hydralisk'a\r\n"; save.close();}
void Hydralisk::zdrowie(void) {cout<<"Zycie: 300/300(100%)"<<endl;}
void Hydralisk::pancerz(void) {cout<<"Pancerz: 10/10(100%)"<<endl;} 

class Ultralisk
{public:
        void zapis();
        void zdrowie();
        void pancerz();
        
Ultralisk(){
        Ultralisk::zapis();        
        Ultralisk::zdrowie();
        Ultralisk::pancerz();
        }
};   
void Ultralisk::zapis(void) {ofstream save; save.open("Files/Save/SaveZ/ZergU.txt", ios::app); save<<"Posiadasz Ultralisk'a\r\n"; save.close();}
void Ultralisk::zdrowie(void) {cout<<"Zycie: 2700/2700(100%)"<<endl;}
void Ultralisk::pancerz(void) {cout<<"Pancerz: 1500/1500(100%)"<<endl;} 

class iZergling
{public:
        void info();
iZergling(){
        iZergling::info();}
        };
        void iZergling::info(void) 
        {  string tekst;
           ifstream info("Jednostki/Zerg/iZergling.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}

class iHydralisk
{public:
        void info();
iHydralisk(){
        iHydralisk::info();}
        };
        void iHydralisk::info(void) 
        {  string tekst;
           ifstream info("Jednostki/Zerg/iHydralisk.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}

class iUltralisk
{public:
        void info();
iUltralisk(){
        iUltralisk::info();}
        };
        void iUltralisk::info(void) 
        {  string tekst;
           ifstream info("Jednostki/Zerg/iUltralisk.txt");
           if(info.is_open())
           { 
             while(info.good())
             {
              getline(info, tekst);
              cout<<tekst<<endl;
              }
              info.close();
              }}

class UnitsZ : public iZergling, public iHydralisk, public iUltralisk
{public:
        void lista();
        
UnitsZ(){
        UnitsZ::lista();
         }
      };
      
      void UnitsZ::lista(void)
      {
      int jednostka;
      cout<<"\nWprowadz numer jednostki ktora ma zostac stworzona: ";
      cin>>jednostka; system("cls");
      if (jednostka==1) {cout<<"Gratulacje stworzyles Zergling.\n\nKRRAaaaaA!\n"; Zergling Z; }
      if (jednostka==2) {cout<<"Gratulacje stworzyles Hydralisk'a.\n\nPflaaaff!\n"; Hydralisk H; }
      if (jednostka==3) {cout<<"Gratulacje stworzyles Ultralisk'a.\n\nUhaaa eee!\n"; Ultralisk U; }
      if (jednostka<1) cout<<"Wprowadz prawidlowa wartosc! \n"; if (jednostka>3) cout<<"Wprowadz prawidlowa wartosc! \n";
      }

class Zerg 
{public:
        void informacje();
        void komentarz();        
Zerg(){
         Zerg::informacje();
         Zerg::komentarz();
        
        }     
      };
      void Zerg::informacje(void)
      { 
           string tekst;
           ifstream save("Files/Save/SaveZ/ZergB.txt");
           if(save.is_open())
           { 
             while(save.good())
             {
              getline(save, tekst);
              cout<<tekst<<endl;
              }
              save.close();
              
              string tekst;
           ifstream save("Files/Save/SaveZ/ZergU.txt");
           if(save.is_open())
           { 
             while(save.good())
             {
              getline(save, tekst);
              cout<<tekst<<endl;
              }
              save.close();
              }}}
         
      void Zerg::komentarz(void)
      {int s;
      cout<<"\n\n-Wiiiitaj naczelny. Co mamy robic? \n\n1. Spis budynkow.     2. Spis jednostek.      3. USUN SAVE:  ";
      cin>>s; system("cls");
      if (s==1) BuildZ B; 
      if (s==2) UnitsZ U; 
      if (s==3) {cout<<"Twoje Save'y zostaly skasowane\n\n"; ofstream save; save.open("Files/Save/SaveZ/ZergU.txt"); save<<""; save.close();} 
      if (s==3) {ofstream save; save.open("Files/Save/SaveZ/ZergB.txt"); save<<""; save.close();}
      if (s<1) cout<<"Wprowadz prawidlowa wartosc! \n"; if (s>3) cout<<"Wprowadz prawidlowa wartosc! \n";}
                          
class Wstep
{public:
        void wstep();
Wstep(){
        Wstep::wstep();}
        };
        void Wstep::wstep(void) 
        {  string tekst;
           ifstream wstep("Files/Wstep.txt");
           if(wstep.is_open())
           { 
             while(wstep.good())
             {
              getline(wstep, tekst);
              cout<<tekst<<endl;
              }
              wstep.close();
              }}
              
class Index : public Wstep
{public:
        void wybor();
        
Index(){
        Index::wybor();
        }
        };
        
        void Index::wybor(void)
{
    int rasa;
        cout<<"Ktora rase wybierasz(wprowadz numer): ";
    cin>>rasa; system("cls");
    if (rasa==1) {cout<<"\nWybrales Terranow, teraz rozbuduj swoje miasto.\n\n\n"; Terran T; }
    if (rasa==2) {cout<<"\nWybrales Zergow, teraz rozbuduj swoje gniazdo.\n\n\n"; Zerg Z; }
    if (rasa==3) {cout<<"\nWybrales Protosow, teraz rozbuduj swoje imperium.\n\n\n"; Protos P; }
    if (rasa<1) cout<<"Wprowadz prawidlowa wartosc! \n"; if (rasa>3) cout<<"Wprowadz prawidlowa wartosc! \n";}

int main()
{ Index Jeden;
    
system("PAUSE");
return EXIT_SUCCESS;
}
