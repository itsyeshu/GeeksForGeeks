class Solution{
public:
    int nextHappy(int N){
        bool isHappy = false;
        while(!isHappy){
            isHappy = true;
            int num = ++N;
            // cout << num;
            while(num > 9){
                int sqSum = 0;
                while(num){
                    sqSum += pow(num%10, 2);
                    num /= 10;
                }
                num = sqSum;
            }
            if(num == 1 || num == 7){
                isHappy = true;
                break;
            }else{
                isHappy = false;
            }
        }
        return N;
    }
};