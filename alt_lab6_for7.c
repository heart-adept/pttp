#include <stdio.h>
#include <math.h>

int long fact(int long f){
if (f==0) return 1;
return f*fact(f-1);    
}
 
float govnosum(float, float, float, float, int);
 
int main() {
    int n=0; 
    float eps, x, S=0.0,t, p; 
    printf("\nInput x and eps: \n");
    scanf("%f%f",&x, &eps);
    
    p = govnosum(x, eps, S, t, n);
 
    printf("\nсумма S=%f\n\n", p);
 
return 0;
}

float govnosum(float x, float eps, float S, float t, int n){
    do
    {
        t = (pow(-1.0, n)*pow(x, n+1.0))/((n+1.0)*fact(2.0+n));
        S+=t;
        n++;
    }while(fabs(t) > eps);
    //printf("%f\n", S); check sum debug
    return S;
}