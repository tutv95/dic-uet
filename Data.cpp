//class Data


class Data{
	public:
		Data(){
			next = NULL;
		}
		Data(long k, string w, string m){
			key = k;
			word = w;
			mean = m;
			next = NULL;
		}
		~Data(){}
		long key;
		string word;
		string mean;
		Data * next;
};
