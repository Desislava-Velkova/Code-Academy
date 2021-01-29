int NOD(int a,int b){
    int w;
    while (b != 0) {
        w = a % b;
        a = b;
        b = w;
    }
    return a;
}
int NOK(int a, int b){
    return (a*b) / NOD(a,b);
}
float absoluteValue(float num){
    if(num < 0){
        num *= -1; 
    }
    return num;
}
float sqr(float num){
    if(num < 0){
        return -1;
    }else {
        return num * num;
    }
}