#include <bits/stdc++.h>
using namespace std;
//--------------------
int ct=0;
//--------------------
int valid_num(string s){
   int arr[16]={0};
   int N=s.size()-ct;
     for(int i=0;i<N;i++){
        arr[i]=(int)s[i] - 48;
     }
   
   int sum=0;
   for(int i=N-2;i>=0;i-=2){
     if(arr[i]*2 >= 10){
       sum += ((arr[i]*2)%10) + ((arr[i]*2)/10);
     }
     else{ sum = sum + arr[i]*2; }
   }
   
   for(int i=N-1;i>=0;i-=2){
     sum += arr[i];
   }
   
   sum = sum%10;
   
   if(sum==0){ return 1; }
   else{ return 0; }
}
//--------------------
string card(string s){
   if((s[0]=='4')&&((s.size()-ct==13)||(s.size()-ct==16))){ return "VISA"; }
   else if((s[0]=='3')&&((s[1]=='4')||(s[1]=='7'))&&(s.size()-ct==15)){ return "AMERICAN EXPRESS"; }
   else if((s[0]=='5')&&((s[1]=='1')||(s[1]=='2')||(s[1]=='3')||(s[1]=='4')||(s[1]=='5'))&&(s.size()-ct==16)){ return "MASTER CARD"; }
   else{ return "INVALID"; }
}
//--------------------
int input(string &s){
  for(int i=0;i<s.size()-ct;i++){
     if(s[i]=='-'){
       for(int j=i;j<s.size()-ct;j++){ s[i]=s[i+1]; }
       ct++;
     }
  }
}
//--------------------
// MAIN CODE HERE GOES  
//--------------------
int main()
{
   cout << "|°°° |°°| |°°° |°°°\\ °°|°° °°|°°    |°°° /°°\\ |°°| |°°°\\" << endl;
   cout << "|    |__| |--  |   |   |     |      |    |--| |__| |   |" << endl;
   cout << "|___ | \\  |___ |___/ __|__   |      |___ |  | | \\  |___/" << endl;
   cout << "▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬" << endl;
   cout << "                       NUMBER CHECKER" << endl;
   
   
   cout << endl << "ENTER YOUR CREDIT CARD NUMBER:" << endl;
   string s;
   cin >> s;
   
   input(s);
   
   cout << endl << "●～●～●～●～●～●～●～●～●～●～●～●～●" << endl;
   cout << endl << "CREDIT CARD NUM: " << s << endl;
   
   if(valid_num(s)){
     cout << card(s) << endl;
   }
   else{
     cout << "INVALID" << endl;
   }
   cout << endl << "●～●～●～●～●～●～●～●～●～●～●～●～●" << endl;
}
