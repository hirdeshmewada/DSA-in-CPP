#include <iostream>

using namespace std;
int main(){
    //int num=2;
   
    // switch (num)
    // {
    // case 1:
    //     cout<<"First"<<endl;
    //     break;
    
    // case 2:cout<<"second"<<endl;
    //       break;
    // default:
    //    cout<<"it is a default case"<<endl;
    //     break;
    // }   


//###########################################
    // char ch='1';
    // switch(ch)
    // {
    // case '1':
    //     cout<<"First"<<endl;
    //     break;  //nothing will execute after that break 
    //      // so if nay input match with particular case donot run other just exit switch
    
    // case '2':cout<<"second"<<endl;
    //      break;
    // default:
    //     cout<<"it is a defualt case"<<endl;
    //     break;
    // }   
//################################################
//nested swtich cases........................
// int num=1;
// char ch='1';
//     switch(ch)
//     {
//     case 1:
//         cout<<"First"<<endl;
//         break;   
//     case '1':switch(num){
//         case 1:cout<<"value of num is "<<ch<<endl;
//          break;    }
//          break;
//     default:
//         cout<<"it is a defualt case"<<endl;
//         break;
//     }   
/////
//################calculator#################################
// int a,b;
// cout<<"enter the value of a"<<endl;
// cin>>a;
// cout<<"enter the value of b"<<endl;
// cin>>b;
// char op;
// cout<<"enter the operation you want to perform"<<endl;
// cin>>op;

// switch (op)
// {
// case '+':
//     cout<<(a+b)<<endl;
//     break;
// case '-':
    
//     cout<<(a-b)<<endl;
//     break;
// case '*':
//     cout<<(a*b)<<endl;
//     break;
// case '/':
//     cout<<(a/b)<<endl;
//     break;
// case '%':
//     cout<<(a%b)<<endl;
//     break;
// default:
//    cout<<"enter a valide value"<<endl;
//     break;
// }

// /##############################################################

int amount;
cout<<"enter the amount "<<endl;
cin>>amount;
int rs100,rs50,rs20,rs1;
switch (1)
{
case 1:
     rs100=amount/100;
     amount=amount%100;
     cout<<"total number of rs100 notes :"<<rs100<<endl;
     
case 2:
     rs50=amount/50;
     amount=amount%50;
     cout<<"total number of rs50 notes :"<<rs50<<endl;
     
case 3:
     rs20=amount/20;
     amount=amount%20;
     cout<<"total number of rs20 notes :"<<rs20<<endl;
     
case 4:
     rs1=amount/1;
     amount=amount%1;
     cout<<"total number of rs1 notes :"<<rs1<<endl;
     
 
    
default:
    break;
}


    
}