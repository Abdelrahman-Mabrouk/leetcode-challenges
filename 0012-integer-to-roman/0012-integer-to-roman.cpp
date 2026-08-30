class Solution {
public:
    string intToRoman(int n) {
        unordered_map<char,int> m{{1,'I'},{5,'V'},{10,'X'},{50,'L'},{100,'C'},{500,'D'},{1000,'M'}};

        string res = "";
        int len = log10(n),temp;
        int k = 0;
        while(n!=0){
                temp = n / pow(10,len);
                k=pow(10,len)*temp;
                while(k >= 1000){
                    res+=m[1000];
                    k-=1000;
                }
                if(k==900){
                res+=m[100];
                res+=m[1000];
                k-=900;
                }
                while(k >= 500){
                res+=m[500];
                k-=500;
            }
            if(k==400){
                res+=m[100];
                res+=m[500];
                k-=400;
            }
                while(k >= 100){
                res+=m[100];
                k-=100;
            }
            if(k==90){
                res+=m[10];
                res+=m[100];
                k-=90;
            }
                while(k >= 50){
                res+=m[50];
                k-=50;
            }

            if(k==40){
                res+=m[10];
                res+=m[50];
                k-=40;
            }
                while(k >= 10){
                res+=m[10];
                k-=10;
            }
            if(k==9){
                res+=m[1];
                res+=m[10];
                k-=9;
            }
                while(k >= 5){
                res+=m[5];
                k-=5;
            }

             if(k==4){
                res+=m[1];
                res+=m[5];
                k-=4;
            }
                while(k >= 1){
                res+=m[1];
                k-=1;
            }
            n %= static_cast<int> (pow(10,len));
            len--;

        }
        return res;

    }
    };
