// #include<iostream>
// using namespace std;

// void choice(){
//     cout<<"\nSelect choice of Operators!!!\n\n";
//     cout<<"\tFor Addition Press (\"+\") \n";
//     cout<<"\tFor Subtracction Press (\"-\") \n";
//     cout<<"\tFor Multiplication Press (\"*\") \n";
//     cout<<"\tFor Division Press (\"/\") \n\n";
//     // cout<<"For Modulas Press (\"%\") \n";
// }

// double Ans(double fN, char op, double sN){
//     double answer;
//     if(op=='+'){
//         answer= fN + sN;
//         return answer;

//     }

//     else if(op=='-'){
//         answer= fN - sN;
//         return answer;

//     }
//     else if(op=='*'){
//         answer= fN * sN;
//         return answer;

//     }
//     else if(op=='/'){
//         answer= fN / sN;
//         return answer;

//     }
   

// }


// void tranction(){
//     double fN,sN;
//     char ch;
//     cout<<"\nEnter first Number: ";
//     cin>>fN;
//     choice();
//     cout<<"\nEnter Operator to perform: ";
//     cin>>ch;

//     if(ch!='+' && ch!='-' &&ch!='*' && ch!='/'){
//         cout<<"\nInvalid operator!!! \nPlease write valid Operator Again: ";
//         cin>>ch;    
//     }
    
//     cout<<"\nEnter Second Number: ";
//     cin>>sN;

//     double ans= Ans(fN, ch, sN);

//     cout<<"\n\nFINAL ANSWER OF: "<<fN<<" "<<ch<<" "<<sN<<"= "<<ans<<"\t";
// }


// int main(){
//     system("CLS");

//     cout<<"\n--------------------------WELCOME TO CALCULATOR--------------------------\n\n";
//     cout<<"Please follow Instructions to use Calculator!!!!\n\n";

    
//     tranction();
//     bool another;

//     cout<<"\n\n......Thanks for Calculation......\nDo you want Another Calculation? (1 for (\"YES\") or 0 for (\"NO\"))  : ";
//     cin>>another;
//     if(another==1){
//         tranction();
//     }
//     else{
//         return 0;
//     }
//     bool clear;
//     cout<<"Do you need clear the Previous Screen? (1 for yes 0 for no):";
//     cin>>clear;

//     if(clear==1){
//         system("CLS");
//     }

//     return 0;
// }


#include<iostream>
using namespace std;

void choice(){
    cout<<"\nSelect choice of Operators!!!\n\n";
    cout<<"\tFor Addition Press (\"+\") \n";
    cout<<"\tFor Subtracction Press (\"-\") \n";
    cout<<"\tFor Multiplication Press (\"*\") \n";
    cout<<"\tFor Division Press (\"/\") \n\n";
    // cout<<"For Modulas Press (\"%\") \n";
}

double Ans(double fN, char op, double sN){
    double answer;
    if(op=='+'){
        answer= fN + sN;
        return answer;

    }

    else if(op=='-'){
        answer= fN - sN;
        return answer;

    }
    else if(op=='*'){
        answer= fN * sN;
        return answer;

    }
    else{
        answer= fN / sN;
        return answer;

    }
   

}

/// @brief What do here

void tranction(){
    double fN,sN;
    char ch;
    cout<<"\nEnter first Number: ";
    cin>>fN;
    choice();
    cout<<"\nEnter Operator to perform: ";
    cin>>ch;

    while(ch!='+' && ch!='-' &&ch!='*' && ch!='/'){
        cout<<"\nInvalid operator!!! \nPlease write valid Operator Again: ";
        cin>>ch;    
    }
    
    cout<<"\nEnter Second Number: ";
    cin>>sN;

    double ans= Ans(fN, ch, sN);

    cout<<"\n\nFINAL ANSWER OF: "<<fN<<" "<<ch<<" "<<sN<<"= "<<ans<<"\t";
}


int main(){
    system("CLS");

    cout<<"\n--------------------------WELCOME TO CALCULATOR--------------------------\n\n";
    cout<<"Please follow Instructions to use Calculator!!!!\n\n";

    
    tranction();
    bool another;

    cout<<"\n\n......Thanks for Calculation......\n";
    bool clear;
    cout<<"Do you need clear the Previous Screen? (1 for yes 0 for no):";
    cin>>clear;

    if(clear==1){
        // system("CLS");
        cout << string(1000, '\n');
    }


    cout<<"Do you want Another Calculation? (1 for (\"YES\") or 0 for (\"NO\"))  : ";
    cin>>another;
    if(another==1){
        tranction();
    }
    else{
        return 0;
    }
    

    return 0;
}