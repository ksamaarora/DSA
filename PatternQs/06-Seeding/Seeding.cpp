void seeding(int n) {
	// Write your code here.
	for(int i=n; i>=1; i--){ // for outer loop count number of lines (rows)
		for(int j=1; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

// METHOD 2
void seeding(int n) {
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}