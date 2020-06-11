#pragma once

int NWD(int lhs, int rhs) {
    int lower;
    int bigger;
     if(lhs<0)
        lhs=-lhs;
    if(rhs<0)
        rhs=-rhs;
    
    if(lhs>rhs){
        bigger=lhs;
        lower=rhs;
        }
    else
    {
        bigger=rhs;
        lower=lhs;
    }
    if(lower==0||bigger==0)
        return bigger;
    else return NWD(lower,bigger%lower);
}


int NWW(int lhs, int rhs) {
    int nwd=NWD(lhs,rhs);
    int result;
    if(nwd!=0)
    result = lhs*rhs/nwd;
    else
    result= 0;  
    if(result<0) result=-result;
    return result;

}
