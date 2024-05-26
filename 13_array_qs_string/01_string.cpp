#include <iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}





bool checkPalindrome(char a[],int n){
    // https://www.naukri.com/code360/problems/check-if-the-string-is-a-palindrome_1062633
    int s=0;
    int e=n-1;
    while(s<e){
        if(toLowerCase(a[s])!=toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;}
    }
    return 1;  //1 means true 
  

}
void reverse(char name[],int n){

    //https://leetcode.com/problems/reverse-string/submissions/1260698703/
     int s=0;
     int e=n-1;
     while(s<e){
        swap(name[s++],name[e--]);
     }
}
int getlength(char name[]){
    int count=0;
    for (int i = 0; name[i] !='\0'; i++)
    {
        count++;
    }
    return count;
    
}
int main()
{
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    
    cout<<"Your name is";
    cout<<name<<endl;
    int len=getlength(name);
    cout<<"Length is "<<getlength(name)<<endl;
    reverse(name,len);
    cout<<"you reverse name is"<<name<<endl;
    
    cout<<"Palindrome or not "<<checkPalindrome(name,len)<<endl;

    // cout <<"CHARACTER IS "<<toLowerCase('b')<<endl;

    // /fdsf
    // cout <<"CHARACTER IS "<<toLowerCase('C')<<endl;
    return 0;
}

//DSA IS IMPORTANT BRO


