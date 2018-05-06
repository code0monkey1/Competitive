    void possibleSubsets(auto & A) {
     	int N=A.size();
     	for(int i = 0;i < (1 << N); ++i){
     		for(int j = 0;j < N;++j){
     			debug(i,1<<j,i & (1 << j),A[j]);
     			if(i & (1 << j))
     				cout << A[j] <<" ";
     			
     		}
     		cout << endl;
     	}
     }