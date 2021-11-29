#include <iostream>  
using namespace std;  
int encrypt(int a ,char c){
	int n;
	if(c+a>122){               //英文小寫的鏡像
		for (n=1;n<=26;n++){
			if (c+n==123){         //找出變數c到z的距離n,距離n即是從a開始的第n個英文
				return 96+n;
			}   
		}
	}    
	if(c+a>90&&c<97){          //英文大寫的鏡像
		for (n=1;n<=26;n++){
			if (c+n==91){          //找出變數c到Z的距離n,距離n即是從A開始的第n個英文
				return 64+n;
			}   
		}
	}   
	if (c+a<=122||c+a<=90){    //不超過 z 或 Z 所以不須鏡像
		return c+a;
	} 	 
	return 0;                  //*傳回0表示函式的結束*
}
int main () {
	int a;
	char  c1 ,c2 ,c3 ,c4 ; 
	while(cin >> a >> c1 >> c2 >> c3 >> c4){
		cout << (char) encrypt(a ,c2) << (char) encrypt(a ,c1) << (char) encrypt(a ,c4) << (char) encrypt(a ,c3) << endl;    //*(char)加在整數前面可以將整數轉換為字元*
	}
}