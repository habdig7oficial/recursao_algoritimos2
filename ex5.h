int acc = 0;
int count_digits(int n){
    if(n == 0)
        return acc;
    acc++;
    return count_digits(n / 10);
}