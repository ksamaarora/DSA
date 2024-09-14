#include<iostream>
#include<vector>
using namespace std;

int secondlargest(vector<int> &a, int n){
    int largest=INT_MIN;
    int slargest=INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]>largest){
            slargest=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>slargest){
            slargest=a[i];
        }
    }
    return slargest;
}

int secondsmallest(vector<int> &a, int n){
    int smallest=INT_MAX;
    int ssmallest=INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i]<smallest){
            ssmallest=smallest;
            smallest=a[i];
        }
        else if(a[i]>smallest && a[i]<ssmallest){
            ssmallest=a[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a){
    int slargest=secondlargest(a, n);
    int ssmallest=secondsmallest(a, n);
    vector<int> result;
    result.push_back(slargest);
    result.push_back(ssmallest);

    return result;
}

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int> result=getSecondOrderElements(n,a);
    cout<<"Second largest and second smallest element is "<<result[0]<<" "<<result[1]<<endl;
    return 0;
}

// TC = O(n) for second largest and smallest respectively 