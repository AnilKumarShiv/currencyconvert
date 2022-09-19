/*                    5. C/C++ PROJECT
                       ================
/* ******************* CURRENCY CONVERTER ******************** */

#include<iostream>
#include<string>

using namespace std;

int main(){
       char startvalue;
       float finalvalue;
       char startagain;
       char selectagain;

       float converter(void);

      cout<<"\n\n*********** Welcome to currency converter application ***********\n";
      cout<<"*********** Please follow the instruction **************\n\n";
      cout<<"You can have currencies dollar, ruppes, euro, pound\n";
      cout<<"you can type d,r,e,p respectively for curencies dollar, ruppes, euro, pound\n";
      cout<<"Enter currency1 which you want to convert\n";
      cout<<"Enter value for currency1\n";
     start:
      cout<<"Enter currency2 in which you want to convert currency1\n";
      cout<<"(d) dollar  (r) ruppees (e) euro (p) pound\n";
      cout<<"Please press s to start :";
      startagain :
      cin>>startvalue;

      if (startvalue=='s' || startvalue=='S'){
        float finalvalue=converter();
        cout<<"Result is :"<<finalvalue<<endl;
        cout<<"Do you want to use the application again, Y or N :";
        typeagain:
        cin>>selectagain;
              if(selectagain=='y' || selectagain=='Y'){
                goto start;
              }
              else if(selectagain=='n' || selectagain=='N'){
                cout<<"\n****** Thankyou ********\n";
              }
              else{
                cout<<"you have enter wrong value, please type again...";
                goto typeagain;
              }
         }

     else {
        cout<<"You have enter wrong value, please type s..\n";
        goto startagain;

     }
}
 float converter()   
   {
    char currencyname1;
    char currencyname2;
    float currency1;
    float currency2;
    currencyvalue:
    cout<<"Enter currency1 name :";
    cin>>currencyname1;
    cout<<"Enter currency1 value :";
    cin>>currency1;

    switch(currencyname1){

        case 'd':  cout<<"Enter currency2 name :";
                level1 :
                   cin>>currencyname2;
                   if(currencyname2=='d' || currencyname2=='D'){
                      currency2=currency1*1;
                   }
                   else if(currencyname2=='r' || currencyname2=='R'){
                      currency2=currency1*73.84;
                      }
                   else if(currencyname2=='e' || currencyname2=='E'){
                      currency2=currency1*0.85;
                      }
                   else if(currencyname2=='p' || currencyname2=='P'){
                      currency2=currency1*0.72;
                      }
                    else{
                        cout<<"You have entered wrong value, please type again..";
                        goto level1;
                    }break;

        case 'r':  cout<<"Enter currency2 name :";
                level2 :
                   cin>>currencyname2;
                   if(currencyname2=='d' || currencyname2=='D'){
                      currency2=currency1*0.01;
                   }
                   else if(currencyname2=='r' || currencyname2=='R'){
                      currency2=currency1*1;
                      }
                   else if(currencyname2=='e' || currencyname2=='E'){
                      currency2=currency1*0.012;
                      }
                   else if(currencyname2=='p' || currencyname2=='P'){
                      currency2=currency1*0.009;
                      }
                    else{
                        cout<<"You have entered wrong value, please type again..";
                        goto level2;
                    }break;
        case 'e':  cout<<"Enter currency2 name :";
                level3 :
                   cin>>currencyname2;
                   if(currencyname2=='d' || currencyname2=='D'){
                      currency2=currency1*1.16;
                   }
                   else if(currencyname2=='r' || currencyname2=='R'){
                      currency2=currency1*86.34;
                      }
                   else if(currencyname2=='e' || currencyname2=='E'){
                      currency2=currency1*1;
                      }
                   else if(currencyname2=='p' || currencyname2=='P'){
                      currency2=currency1*0.85;
                      }
                    else{
                        cout<<"You have entered wrong value, please type again..";
                        goto level3;
                    }break;
        
        case 'p':  cout<<"Enter currency2 name :";
                level4 :
                   cin>>currencyname2;
                   if(currencyname2=='d' || currencyname2=='D'){
                      currency2=currency1*.37;
                   }
                   else if(currencyname2=='r' || currencyname2=='R'){
                      currency2=currency1*101.20;
                      }
                   else if(currencyname2=='e' || currencyname2=='E'){
                      currency2=currency1*1.17;
                      }
                   else if(currencyname2=='p' || currencyname2=='P'){
                      currency2=currency1*1;
                      }
                    else{
                        cout<<"You have entered wrong value, please type again..";
                        goto level4;
                    }break;
        default: {
                  cout<<"You have entered wrong value, please type again..";
                 goto currencyvalue;
                 }
    }return currency2;


 }


