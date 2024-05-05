   //##############################################
   //patterns:

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     while (i<=n)
//     {
//       int j=1;
//       while (j<=n)
//       {
//          cout<<j;
//          j=j+1;
//       }
//       cout<<endl;
//       i=i+1;
//     }
// }
// output
// 1234
// 1234
// 1234
// 1234

//############################################


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     while (i<=n)
//     {
//       int j=1;
//       while (j<=n)
//       {
//          cout<<n-j+1;
//          j=j+1;
//       }
//       cout<<endl;
//       i=i+1;
//     }
// }

//@@@@@@@@output
//321
//321
//321

//##################################################

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     int count=1;
//     while (i<=n)
//     {
//       int j=1;
//       while (j<=n)
//       {
//          cout<<count<<" ";
//          count=count+1;
//          j=j+1;
//       }
//       cout<<endl;
//       i=i+1;
//     }
// }

// output
// 3
// 1 2 3 
// 4 5 6 
// 7 8 9
// #########################################

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//       int column=1;
//       while (column<=row)
//       {
//          cout<<"*";
//          column=column+1;
//       }
//       cout<<endl;
//       row=row+1;
      
//     }
    
// }
// output
// 4
// *
// **
// ***
// ****
//###################################################
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//       int column=1;
//       while (column<=row)
//       {
//          cout<<row;
//          column=column+1;
//       }
//       cout<<endl;
//       row=row+1;
      
//     }
    
// }
//output
//1
// 22
// 333
// 4444
//#######################################

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     int count=1;
//     while (row<=n)
//     {
//       int column=1;
//       while (column<=row)
//       {
//          cout<<count;
//          count=count+1;
//          column=column+1;
//       }
//       cout<<endl;
//       row=row+1;
      
//     }
    
// }

//output
//1
// 23
// 456
// 78910
// 1112131415

//###################################################

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     int value=row;
//     while (row<=n)
//     {
//       int column=1;
//       int value=row;
//       while (column<=row)
//       {
//          cout<<value;
//          value=value+1;
//          column=column+1;
//       }
//       cout<<endl;
//       row=row+1;
      
//     }
    
// }

//or
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//       int column=0;
      
//       while (column<row)
//       {  
//          cout<<row+column;
//          column=column+1;
//       }
//       cout<<endl;
//       row=row+1;
      
//     }
    
// }
// output
// 4
// 1
// 23
// 345
// 4567
//#############################################

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//       int column=0;
      
//       while (column<row)
//       {  
//          cout<<row-column;
//          column=column+1;
//       }
//       cout<<endl;
//       row=row+1;
      
//     }   
// }
//or

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//       int column=1;
      
//       while (column<=row)
//       {  
//          cout<<row-column+1<<" ";
//          column=column+1;
//       }
//       cout<<endl;
//       row=row+1;
      
//     }   
// }

//output
// 1
// 21
// 321
// 4321
// 54321
// 654321


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     char ch='A';
//     while (row<=n)
//     {
//       int column=1;
      
//       while (column<=n)
//       {  
//          cout<<ch<<" ";
//          column=column+1;
//       }
//       cout<<endl;
//       row=row+1;
//       ch=ch+1;
      
//     }   
// }

// output
// 5
// A A A A A 
// B B B B B
// C C C C C
// D D D D D
// E E E E E




// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//       int column=1;
      
//       while (column<=n)
//       {  char 3ch='A'+row-1;
//          cout<<ch<<" ";
//          column=column+1;
//       }
//       cout<<endl;
//       row=row+1;
   
//     }   
// }
// output
// 3
// A A A 
// B B B
// C C C


//##############################

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//       int column=1;
      
//       while (column<=n)
//       {  char ch='A'+column-1;
//          cout<<ch<<" ";
//          column=column+1;
//       }
//       cout<<endl;
//       row=row+1;
   
//     }   
// }
// output
// 3
// A B C 
// A B C
// A B C


//#####################################################
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     char charcount='A';
//     while (row<=n)
//     {
//       int column=1;
//       while (column<=n)
//       {  
//          cout<<charcount<<" ";
//          column=column+1;
//          charcount=charcount+1;
//       }
//       cout<<endl;
//       row=row+1;
   
//     }   
// }

// //output
// 3
// A B C 
// D E F
// G H I

// ############################################################
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
    
//     while (row<=n)
//     {
//       int column=1;
//       while (column<=n)
//       {  char charcount=row+column+'A'-2;
//          cout<<charcount<<" ";
//          column=column+1;
//          charcount=charcount+1;
//       }
//       cout<<endl;
//       row=row+1;
   
//     }   
// }

// output
// 3
// A B C 
// B C D
// C D E


//#####################################################################

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     char charcount='A';
//     while (row<=n)
//     {
//       int column=1;
//       while (column<=row)
//       {  
//          cout<<charcount<<" ";
//          column=column+1;
         
//       }
//       cout<<endl;
//       row=row+1;
//       charcount=charcount+1;
   
//     }   
//     cout<<"second method"<<endl;

//     int r=1;
//     while (r<=n)
//     {
//       int column=1;
//       while (column<=r)
//       {  char ch='A'+r-1;
//          cout<<ch<<" ";
//          column=column+1;
         
//       }
//       cout<<endl;
//       r=r+1;
      
   
//     }   
// }

// // //output
// // A 
// // B B
// // C C C


//##########################################################
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     char charcount='A';
//     while (row<=n)
//     {
//       int column=1;
//       while (column<=row)
//       {  char count='A'+row+column-2;
//          cout<<count<<" ";
//        //  cout<<charcount<<" ";
//          column=column+1;
//         // charcount=charcount+1;
         
//       }
//       cout<<endl;
//       row=row+1;
   
//     }   
// }
// output
// 4
// A 
// B C
// C D E
// D E F G

///#############################################################
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     
//     while (row<=n)
//     { char count='A'+n-row;
//       int column=1;
//       while (column<=row)
//       {  
//          cout<<count<<" ";
//          column=column+1;
//          count=count+1;
         
//       }
//       cout<<endl;
//       row=row+1;
   
//     }   
// }

// output
// 4
// D 
// C D
// B C D
// A B C D

//##############################################
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     { int space=n-row;
//       //[print space]
//       while (space)
//       {
//          cout<<" ";
//          space=space-1;
//       }
//       int column=1;
//       while (column<=row)
//       {  
//          cout<<"*";
//          column=column+1;
         
//       }
//       cout<<endl;
//       row=row+1;
   
//     }   
// }

// output
// 4
//    *
//   **
//  ***
// ****

//###############################
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     { 
//       int column=1;
//       while (column<=n-row+1)
//       {  
//          cout<<"*";
//          column=column+1;
         
//       }
//       cout<<endl;
//       row=row+1;
   
//     }   
// }

// output
// 4
// ****
// ***
// **
// *

// //###############################################################

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     { int space=row-1;
//       while (space)
//       {
//          cout<<" ";
//          space=space-1;
//       }
//       int column=1;
//       while (column<=n-row+1)
//       {  
//          cout<<"*";
//          column=column+1;
         
//       }
//       cout<<endl;
//       row=row+1;
   
//     }   
// }

// ouput
// ---------------
// 4
// ****
//  ***
//   **
//    *
// ------------------------------------

//###############################################################

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     { int space=row-1;
//       while (space)
//       {
//          cout<<" ";
//          space=space-1;
//       }
//       int column=1;
//       while (column<=n-row+1)
//       {  
//          cout<<row;
//          column=column+1;
         
//       }
//       cout<<endl;
//       row=row+1;
   
//     }   
// }

// output
// 4
// 1111
//  222
//   33
//    4
//##########################################################################
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     { int space=n+row+1;
//       while (space)
//       {
//          cout<<" ";
//          space=space-1;
//       }
//       int column=1;
//       while (column<=row)
//       {  
//          cout<<row;
//          column=column+1;
         
//       }
//       cout<<endl;
//       row=row+1;
   
//     }   
// }

// //output
// 4
//     1
//    22
//   333
//  4444

//##########################################################################
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     { int space=row-1;
//       while (space)
//       {
//          cout<<" ";
//          space=space-1;
//       }
//       int column=1;
//       while (column<=n-row+1)
//       {  
//          cout<<row+column-1;
//          column=column+1;
         
//       }
//       cout<<endl;
//       row=row+1;
   
//     }   
// }

// //output
// 4
// 1234
//  234
//   34
//    4

   //##########################################################################
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     int count=1;
//     while (row<=n)
//     { int space=n-row+1;
//       while (space)
//       {
//          cout<<"  ";
//          space=space-1;
//       }
//       int column=1;
//       while (column<=row)
//       {  
//          cout<<count<<" ";
//          column=column+1;
//          count=count+1;
//       }
//       cout<<endl;
//       row=row+1;
   
//     }   
// }
// output
// 4
//         1 
//       2 3
//     4 5 6
//   7 8 9 10

//####################################################
 //##########################################################################
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     int count=1;
//     while (row<=n)
//     { int space=n-row;
//       while (space)
//       { //print  1stspace 
//          cout<<" ";
//          space=space-1;
//       }
//       int column=1;
//       while (column<=row)
//       {   //print 2st triangle
//          cout<<column;
//          column=column+1;
         
//       }
//       //third trianlge
//       int start=row-1;
//       while (start)
//       {
//          cout<<start;
//          start=start-1;
//       }
      
//       cout<<endl;
//       row=row+1;
   
//     }   
// }

// output
// 4
//    1
//   121
//  12321
// 1234321


// ###########################################################

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//       int column=1;
//       while (column<=n-row+1)
//       {   //print 1st triangle
//          cout<<column;
//          column=column+1;
         
//       }
//       //second triangle
//       int start=row-1;
//       while (start)
//       {
//          cout<<"*";
//          start=start-1;
//       }
      
//       //third trianlge
//       int star=1;
//       while (star<row)
//       {
//          cout<<"*";
//          star=star+1;
//       }
//       //foutrth traingle
//       int col=n-row+1;
//       while (col)
//       {   //print 1st triangle
//          cout<<col;
//          col=col-1;
         
//       }
//       cout<<endl;
//       row=row+1;
   
//     }   
// }

// output
// 5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
