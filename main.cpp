int main()
{
	const int sample_size = 8;
	const float learning_rate = 1.0;
	//inputs
	double X1[sample_size] = { -2,-1,-1,1 ,2,3,4,5 };
	double X2[sample_size] = { 1,-1,2,1,-1,-2,1,-1 };
	int lable[sample_size] = { -1,-1,-1,-1,1,1,1,1 };

	double W[3] = { -1, 5, 8 };
	double E[sample_size] = { 0 };

	for (int i = 0; i < sample_size; i++)
	{
		double y = W[0] * 1 + W[1] * X1[i] + W[2] * X2[i];
		int y_n = sgn(y);
		W[0] = W[0] + learning_rate*(lable[i] - y_n)*1;
		W[1] = W[1] + learning_rate*(lable[i] - y_n)*X1[i];
		W[2] = W[2] + learning_rate*(lable[i] - y_n)*X2[i];
		E[i] = lable[i] - y_n;
	}
	cout << W[0] << endl;
	cout << W[1] << endl;
	cout << W[2] << endl;

	for (int i = 0; i < sample_size; i++)
		cout << E[i] << endl;
	
	return 0;
}
