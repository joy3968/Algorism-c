#include <iostream>


// ��������(Selection Sort)
int main(int argc, char** argv) {
	int i, j, min, index, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(i = 0; i < 10; i++) {
//		�迭�� �ִ� ��簪���� ū ���� min�� �־��־�� �Ѵ�. 
		min = 99999;
		for(j = i; j < 10; j++) {
//			������ ���鼭 �ּҰ��� ã�Ƴ��ϴ�. 
			if(min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(i = 0 ; i < 10; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}
