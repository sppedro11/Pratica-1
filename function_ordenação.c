void ordem_crecente(double vetor[], int k){
	int i, j, aux;
	
	for(i = 0; i < k; ++i){
		for(j = i + 1; j < k; ++j){
			if(vetor[i] > vetor[j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
			
		}
	}
	return ;
}