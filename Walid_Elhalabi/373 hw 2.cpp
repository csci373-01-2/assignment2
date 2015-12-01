#include<iostream>
using namespace std;

class prisoner{
      protected:
      string firstName;
      string lastName;
      int id;
      int sentence;
      int timeServed;
      int timeRemain;
      double credit;
      int reSentence;
      
      
      public:
             void setfirstName(string x){
                  firstName = x;}
             string getfirstName(){
                  return firstName;
                         }
                         
             void setlastName(string y){
                  lastName = y;}
             string getlastName(){
                    return lastName;
                    }
             
             void input_value(){
                 cin>> id;
                  }
             void output_value(){
                  cout<< "Prisoner's id is "<<id<<endl;
                  }
             void input_value1(){
                  cin>>sentence;}
                  
             void output_value1(){
                  cout<<"Prisoner's sentence is "<<sentence<<" years"<<endl;
                  }
                  
             void input_value2(){
                  cin>>timeServed;}
             void output_value2(){
                  cout<<"Prisoner's time served is "<<timeServed<<" years"<<endl;
                  }     
             
             void output_value3(){
                  cout<<"Prisoner's time remaining is "<<(sentence-timeServed)<<" years"<<endl;
                  }
             void input_value4(){
                  cin>>credit;}
             void output_value4(){
                  cout<<"Prisoner's credit is "<<(timeServed / credit)<<endl;
                  }
             void input_value5(){
                  cin>>reSentence;
                  }
             void output_value5(){
                  cout<<"Prisoner's new sentence is "<<reSentence<<" years"<<endl;
                  }
                  };
             
             
             class Jailed : public prisoner{
                   public:
                   double goodtime;
                   double goodrate;
                   
                   void input_value6(){
                        cin>>goodtime;
                        } 
                   void output_value6(){
                        cout<<"Prisoner's goodtime is "<<(goodtime/100)<<endl;
                        }
                   void input_value7(){
                             cin>>goodrate;
                             }
                   void output_value7(){
                        cout<<"Prisoner's goodrate is"<<(goodrate*goodtime/100)<<endl;
                        }
                        
                        };
             
             class Parole : public prisoner{
                 public:
                   int release;
                   
                   void input_value8(){
                        cin>>release;
                        }
                   void output_value8(){
                        if(release<reSentence){
                                   cout<<"Prisoner is denied of released"<<endl;
                                   }
                                   else if(release>reSentence){
                                        cout<<"Prisoner is release"<<endl;
                                        }
                        }
                   };
             
             
             
             
             
             
             int main()
             {
             prisoner information; 
             Jailed info;
             Parole get;
             
             
             information.setfirstName("First name - Aton");
             cout<<information.getfirstName()<<endl;
             
             information.setlastName("Last name- Valdez");
             cout<<information.getlastName()<<endl;
             
             information.input_value();
             information.output_value();
             information.input_value1();
             information.output_value1();
              information.input_value2();
             information.output_value2();
              information.output_value3();
             information.input_value4();
             information.output_value4();
             information.input_value5();
             information.output_value5();
             info.input_value6();
             info.output_value6();
             info.input_value7();
             info.output_value7();
             get.input_value8();
             get.output_value8();
             
             
             system("pause");
             return 0;
             }
             
      
