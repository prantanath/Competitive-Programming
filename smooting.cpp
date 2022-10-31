#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<vector>
#include<iostream>
#include <algorithm>
#define bucketSize 3

using namespace std ;


int numberofobject ;
vector<double>data ;
vector<double>bucket[100],bucketAvg[100];


int main()
{
    FILE *fptr ;
    double n ;

    if ((fptr = fopen("/home/pranta/Desktop/cp/smoothing.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    while (fscanf(fptr, "%lf", &n)!= EOF)
    {
        cout << n << endl ;
        numberofobject++ ;
        data.push_back(n) ;
    }
    /*cout<< "After sorting "<< endl ;
    sort(data.begin(), data.end()) ;
    for(int i = 0 ; i < data.size() ; i++){
        cout<< data[i] << endl ;
    }*/
    int j = 0 ;
    int k = 0 ;

    for(int i = 0 ; i < data.size() ; i++){
        bucket[j].push_back(data[i]) ;
        k++ ;
        if(k % bucketSize == 0) j++ ;

    }
    int numOfbucket = j ;
    printf("\n\n");
    cout<< "Bucket before smoothing" << endl ;
    for(int i = 0 ; i <= numOfbucket ; i++){

        for(j = 0 ; j < bucket[i].size() ; j++){


            cout<< bucket[i][j] << " " ;
        }
        cout<<endl ;
    }


    for(int i = 0 ; i <= numOfbucket ; i++){
        double sum = 0.0 ;
        for(j = 0 ; j < bucket[i].size() ; j++){
            sum += bucket[i][j] ;
        }
        double avg = sum/bucket[i].size() ;
        int b_iSize = bucket[i].size() ;
        // bucket[i].clear() ;
        for(int k = 0 ; k < b_iSize ; k++)
            bucketAvg[i].push_back(avg) ;
    }
    printf("\n\n");
    cout<< "Bucket after smoothing (by Average)" << endl ;
    for(int i = 0 ; i <= numOfbucket ; i++){
        for(j = 0 ; j < bucketAvg[i].size() ; j++){
            cout<< bucketAvg[i][j] << " " ;
        }
        cout<<endl ;
    }



    for(int i = 0 ; i <= numOfbucket ; i++){
        double upper_limit = *max_element(bucket[i].begin(),bucket[i].end());
        double lower_limit = *min_element(bucket[i].begin(),bucket[i].end());
        for(j = 0 ; j < bucket[i].size() ; j++){
            double difL = abs(bucket[i][j]-lower_limit);
            double difU = abs(bucket[i][j]-upper_limit);
            bucket[i][j] = (difL<difU? lower_limit:upper_limit);
        }

    }
    printf("\n\n");
    cout<< "Bucket after smoothing (by Boundary)" << endl ;
    for(int i = 0 ; i <= numOfbucket ; i++){
        for(j = 0 ; j < bucket[i].size() ; j++){
            cout<< bucket[i][j] << " " ;
        }
        cout<<endl ;
    }


}
