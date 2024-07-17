void nStarTriangle(int n) {
    // Write your code here.
    for(int i=0; i<n; i++){
        // space
        for(int j=0; j<=i; j++){
            cout<<" ";
        }
        // star 9 7 5 3 1
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        // space
        for(int j=0; j<=i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}