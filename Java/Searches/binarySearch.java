public class BinarySearch{

	public int search(int vet[], int s){
		int start = 0;
		int end = vet.length-1;
		while(start <= end){
			int half = (start+end)/2;
			if(vet[half] == s){
				return half;
			}
			else{
				if(vet[half] < s){
					start = half+1;
				}
				else{
					end = half-1;
				}
			}
		}
		return -1;
	}

}