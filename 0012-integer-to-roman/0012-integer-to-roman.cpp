class Solution {
public:
    string intToRoman(int n) {
        unordered_map<int,char> m{{1,'I'},{5,'V'},{10,'X'},{50,'L'},{100,'C'},{500,'D'},{1000,'M'}};
        unordered_map<int,int> a{{1,1000},{2,500},{3,100},{4,50},{5,10},{6,5},{7,1}};
        string res = "";
        int len = log10(n),temp;
        int k = 0,i=1;
        while(n!=0){
            temp = n / pow(10,len);
            k=pow(10,len)*temp;
            while(k < a[i] && k!=0) i++;

            while(k >= a[i] && temp!=9 && temp!=4 && k!=0){
                res+=m[a[i]];
                k-=a[i];
                if(k < a[i] && k!=0) i++;
            }
            if(temp==9 ){
                res+=m[static_cast<int>(pow(10,len))];
                res+=m[static_cast<int>(pow(10,len+1))];
                k-=9 * pow(10,len);
            }
            if(temp==4){
                res+=m[static_cast<int>(pow(10,len))];
                res+=m[static_cast<int> (5*pow(10,len))];
                k-=4*pow(10,len);
            }
            n %= static_cast<int> (pow(10,len));
            len--;

        }

        return res;

    }
    };
