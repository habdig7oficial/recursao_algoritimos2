int exponencia(double base, int expoente){
    if(expoente == 0)
        return 1;
    else
        return base * exponencia(base, expoente - 1);
}
