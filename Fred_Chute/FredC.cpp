#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Prisoner {  //The base case is Prisoner

      public:

             string firstName;  //A prisoner has a firstName
             string lastName;   //A prisoner has a lastName
             int correctionsID; //Each member has a unique corrections
                                //id of the form where x is an integer.
             double sentance;
             double timeServed;
             double timeRemain;  // Data members scalled
                                 //sentancee,*timeServed*, and timeRemain
             double credit(int num)  //A member function called credit to gie
                                     //each prisoner good time for
time served without an infraction
             {
              timeRemain-=num;
                    }

             double debit(int num) //A member function called debit to
                            //peanalize the inmates for fighting.
             {timeRemain+=num;

                    }
             double getTimeRemain()     //A member function getTimeRemain
            const { return timeRemain;  //to get the time remaining
                    }

                    double getSentance() //getter for sentance
              { return sentance;
                     }

             double reSentance() //A member function reSentance to
                                 //reinitialize the prisoner's time owed.
             {//****

                    }


                    //overwrite ostream
             friend ostream& operator<<(ostream& os, const Prisoner& p);


};

class Jailed : public Prisoner   {   //The class Jailed is a class
                                     //derived from Prisoner

             public:
                    double goodTime()  //***Good time is calculated as
//the minimum
                                       //whole day the rate percent of
//months served.
                    {//****
                           }
                    double goodTimeRate;

                    Jailed(double sentance, double timeServed, double
goodTimeRate);    //A constructor that received the original sentence,
//the
                  //time served and the good time rate.

                    int calculateGoodTime()    //A member function
//calculateGoodTime that returns an int indicating the amount of good
                                               //time earned. The
//Function should not change the time served or the
                                               //time remaining.
                    {//***
                    }

                    double setGoodTimeRate(double a)//A member
                                                        //function setGoodTimeRage to reset the good time rate.

                    {goodTimeRate =a;
                           }

                    double getGoodTimeRate()//A member function
                                                //getGoodTimeRage to
get the good time rate.
                    const { return goodTimeRate;
                           }


      };
Jailed :: Jailed(double sentance, double timeServed, double
goodTimeRate) { //A constructor that received the original sentence,
              //the time served and the good time rate.


          }

class Parolee : public Prisoner {//The class Parolee is a class
                                //derived from      Prisoner


          //***A Jailed person is destroyed and a parolee constructed
          //when time remaining <= 0.

          public:

                 double paroleTime;

               void  setTime () {
                paroleTime = floor( .33*Prisoner::getSentance());
                         } //The term of parole is floor(.33 * orginal sentence)

      };


ostream& operator<<(ostream& os, const Prisoner& p)
{
    os << p.firstName << "\n" << p.lastName << "\n" << p.sentance
    << "\n" << p.timeServed << "\n" << p.timeRemain;
    return os;
}
//Overwrite the stream operator and write a function that prints the
//prisoners' number, firstName,
//lastName, sentence, timeServed and TimeRemaining each on a separate line.


int main (){
//****

Prisoner p;

p.firstName= "Freddy";
p.lastName= "Chute";
p.sentance=30;
p.timeServed=0;
p.timeRemain=30;

cout << p;

system ("pause");
return 0;

}
