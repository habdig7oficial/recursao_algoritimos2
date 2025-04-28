
/* Algoritimo de Euclides */
int mdc(int a, int b){
    int res = a % b;

    if(res == 0)
        return b;
    else 
        return mdc(b, res);
}