/int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty=empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}


//void move(int  p[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		while ((left < right)&&(p[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right)&&(p[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left< right)
//		{
//			int temp = p[left];
//			p[left] = p[right];
//			p[right] = temp;
//		}
//		
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(arr+i));
//	}
//
//		
//	return 0;
//}

//�㷨һ��
//void move(char* arr, int sz, int k)
//{
//	char temp = 0;
//	while (k)
//	{
//		int i = 0;
//		temp = arr[i];
//		for (i = 0; i < sz-1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[sz - 1] = temp;
//		k--;
//	}
//}


//�㷨����
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left<right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//	
//}
//
//void move(char* arr, int sz, int k)
//{
//	assert(arr);
//	assert(k <= sz);
//	reverse(arr,arr+k-1);//�������
//	reverse(arr+k,arr+sz-1);//�����ұ�
//	reverse(arr,arr+sz-1);//��������
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = strlen(arr);
//	int left = 2;
//	//scanf("%d", &left);
//	move(arr, sz,left);
//	printf("%s", arr);
//	return 0;
//}
//int judgment(char* arr1, char* arr2)
//{
//	if (strlen(arr1) != strlen(arr2))
//		return 0;
//	strncat(arr1, arr1, strlen(arr1));//strcat��strncat���ǽ���a,b����b�ַ����ӵ�a���棬
//	                                  // ��strcatֻ�ܽ�������ͬ���ַ�����
//	char* ret = strstr(arr1, arr2);//�ж�arr2���Ƿ��к�arr1��ͬ���ַ������У����ظ��ַ��ĵ�ַ
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "bcdefa";
//	int ret=judgment(arr1, arr2);
//	if (ret==1)
//		printf("yes\n");
//	else
//		printf("no");
//	return 0;
//}


// ���Ͼ������

//int findnum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (y>=0&&x<=*px-1)
//	{
//		if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//		else
//			*px = x;
//		    *py = y;
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int x = 3, y = 3;
//	int k = 7;
//	int ret=findnum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("find,%d %d", x, y);
//	}
//	else
//		printf("no find\n");
//	return 0;
//}