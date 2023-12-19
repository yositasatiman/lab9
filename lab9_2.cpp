void printO(int N,int M)
{
    if(N<=0 || M<=0){
        cout << "Invalid input";
    }else if(N>0){
        int i = 0;
        while(i<N){
            if(M>0){
                int j=0;
                while(j<M){
                    cout << "O";
                    j++;
                }
                cout <<"\n";
            }
            i++;
        }
    }
    
}

