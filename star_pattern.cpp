#include <iostream>
using namespace std;

void pattern1(int n){
   for (int i = 0; i<n; i++){
        for (int j = 0; j<=(n-i-1); j++){
              cout<<"*";
        }
          cout<< "\n";
   }
}
void pattern2(int n){
   for (int i = 0; i<n; i++){
        for (int j = 0; j<=i; j++){
              cout<<"*";
        }
          cout<< "\n";
   }
}
void pattern3(int n) {
    for (int i = 1; i <= (2*n - 1); i++) {
        int stars = i;
        if(i>n){
            stars = 2*n - i;
        }
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern4(int n) {
     int space = 2*(n-1);
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j<=i; j++){
           cout << "*"; 
        }
        for(int j = 1; j<=space; j++){
           cout << " "; 
        } 
       for(int j = i; j>=1; j--){
           cout << "*"; 
        }
          cout << "\n";
          space = space - 2;
    }
}
void pattern5(int n) {
    for (int i = 0; i < n; i++) {
        for(int j = 0; j<n-i-1; j++){
           cout << " "; 
        }
        for(int j = 0; j<2*i+1; j++){
           cout << "*"; 
        } 
        for(int j = 0; j<n-i-1; j++){
           cout << " "; 
        }
          cout << "\n";
    }
}
void pattern6(int n) {
    for (int i = 0; i < n; i++) {
        for(int j = 0; j<i; j++){
           cout << " "; 
        }
        for(int j = 0; j<2*n-(2*i+1); j++){
           cout << "*"; 
        } 
        for(int j = 0; j<i; j++){
           cout << " "; 
        }
          cout << "\n";
    }
}
void pattern7(int n) {
     int spaces = 2*(n-1);
    for (int i = 1; i <= 2*n-1; i++) {
     
       int stars = i;
       if(i>n){
           stars = 2*n - i;
       }
      
        for(int j = 1; j<=stars; j++){
           cout << "*"; 
        }
        for(int j = 1; j<=spaces; j++){
           cout << " "; 
        } 
       for(int j = 1; j<=stars; j++){
           cout << "*"; 
        }
          cout << "\n";
          if(i<n){
            spaces = spaces - 2;
          }else{
            spaces = spaces + 2; 
          }
    }
}
void pattern8(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "--";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*---";
        }
        cout << endl;
    }
}
void pattern9(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i; j++){
            cout<<"*";
        }
        for (int j = 0; j <= 2*i; j++){
            cout<<" ";
        }
        
        for (int j = 0; j < n - i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
 void pattern10(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout<<"*";
        }
        for (int j = 0; j <= 2*(n-i-1); j++){
            cout<<" ";
        }
        for (int j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern11(int n){
    for (int i = 0; i<n; i++){
        for (int j = 0; j<i; j++){
            cout<<" ";
        }
        for (int j = 0; j < n - i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern12(int n){
    for (int i = 1; i<=n; i++){
        for (int j = 0; j<n-i; j++){
            cout<<" ";
        }
        for (int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern13(int n) {
    for (int i = 1; i < 2 * n; i++) {
        int space, star;
        if (i <= n) {
            space = n - i;
            star = i;
        }
        else {
            space = i - n;
            star = 2 * n - i;
        }
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        for (int j = 1; j <= star; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
     cout<<"1"<<endl;
    pattern1(5);
     cout<<"2"<<endl;
    pattern2(5);
     cout<<"3"<<endl;
    pattern3(5);
     cout<<"4"<<endl;
    pattern4(5);
     cout<<"5"<<endl;
    pattern5(5);
     cout<<"6"<<endl;
    pattern6(5);
     cout<<"7"<<endl;
    pattern7(5);
     cout<<"8"<<endl;
    pattern8(5);
     cout<<"9"<<endl;
    pattern9(5);
     cout<<"10"<<endl;
    pattern10(5);
     cout<<"11"<<endl;
    pattern11(5);
     cout<<"12"<<endl;
    pattern12(5);
     cout<<"13"<<endl;
    pattern13(5);
    return 0;
}