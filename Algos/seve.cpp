
int  seve(vector<int> & v, int till){

    for(int i=2;i*i<=till;i++){

        if(v[i]){
            for(int j=2;j*i<v.size();j++){

                v[i*j]=0;
           }       
      }
 }

     	// for returning no of primes ( change return type to int )
 int total_primes=0;
 for(int i=2;i<till;i++){
   if(v[i])total++;
}

return total_primes;

}
