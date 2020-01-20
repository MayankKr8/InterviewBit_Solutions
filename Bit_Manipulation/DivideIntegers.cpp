//The question is all about binary division. There are many methods such as 2's complement or the usual loing division.
// The method used here is long division.
//Keep in mind to take into consideration the dividend and/or divisor being negative.
int Solution::divide(int A, int B) {
    int dividend =A, divisor = B;
    int sign = 1;
    if (dividend<0){sign = -sign;}
    if (divisor<0){sign = -sign;}
     
    unsigned long long tmp = abs((long long)dividend);
    unsigned long long tmp2 = abs((long long)divisor);
            
    unsigned long c = 1;
    while (tmp2 < tmp){
        tmp2 = tmp2<<1;    
        c = c<<1;
    }
     
    long long res = 0;
    while (tmp>=abs((long long)divisor)){
        while (tmp2 <= tmp){
            tmp -= tmp2;
            res = res+c;
        }
        tmp2=tmp2>>1;
        c=c>>1;    
    }
     
    return (sign*res >= INT_MAX ||  sign*res < INT_MIN) ? INT_MAX : sign*res;
    
}
