int Solution::solve(int A, int B, int C, int D, int E) {
    double ppc1 = C/(B*1.0); // price per candy
    double ppc2 = E/(D*1.0); // price per candy
    if(ppc1 < ppc2){
        swap(B, D);
        swap(C, E);
    }
    // means {C, B} is costly store and {E, D} is cheap

    int cost = 0;
    do {
        if(A % D == 0) { // check if all can be bought from cheap store
            break;
        } else {
            cost += C; // otherwise take minimum possible only 1 packet from costly store and again check
            A -= B;
        }
    } while(A > 0 && A % D != 0); // till remaining cannot be bought from cheap store
    
    if(A < 0) return -1;
    
    cost += (A / D) * E;
    return cost;
}
