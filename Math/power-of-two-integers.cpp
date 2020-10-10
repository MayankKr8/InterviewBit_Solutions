int Solution::isPower(int A) {
    if (A==1)  return 1; 
    for (int x=2; x<=sqrt(A); x++) 
    { 
        unsigned y = 2; 
        unsigned p = pow(x, y); 
        while (p<=A && p>0) 
        { 
            if (p==A) 
                return 1; 
            y++; 
            p = pow(x, y); 
         } 
    } 
    return 0; 
}
