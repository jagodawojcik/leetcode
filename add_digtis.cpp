int get_digit_sum(int n){
            int result = 0;
            while(n!=0){
                result += n%10;
                n = n/10;
                }
            return result;
        }


int main(){
        int num = 38;

        int result = get_digit_sum(num);
        while(result > 9){
            result = get_digit_sum(result);
        }
        //return result;

    return 0;
}