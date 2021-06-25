/**
 * @input A : Integer
 * @input B : Integer
 * 
 * @Output Integer
 */
int gcd(int A, int B) {
    if(A==0)
    return B;
    if(B==0)
    return A;

    if(A>B)
    return gcd(A%B,B);
    
    return gcd(A,B%A);
}
