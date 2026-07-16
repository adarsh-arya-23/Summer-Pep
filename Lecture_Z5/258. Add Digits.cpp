/*
class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        start:
        while(num != 0){
            int d = num % 10;
            sum = sum + d;
            num = num / 10;
        }
        if(sum > 9){
            num = sum;
            sum = 0;
            goto start;
        }
        else{
            return sum;
        }
    }
};
*/

/*
class Solution {
public:
    int digitSum(int n){
        int sum = 0;
        while(n != 0){
            int d = n % 10;
            sum = sum + d;
            n = n / 10;
        }
        return sum;
    }
    int addDigits(int num) {
        if(num == 0) return 0;
        if(num <= 9) return num;
        int cnt = 0;
        while(num > 9){
            num = digitSum(num);
            cnt++;
        }
        return num;
    }
};
*/

class Solution {
public:
    int digitSum(int n){
        if (num == 0) {
            return 0;
        } else if (num % 9 == 0) {
            return 9;
        } else {
            return num % 9;
        }
    }
};

