#include <stdio.h>

int main() {
	int order, stock, hasCredit;
	printf("enter values:\norder:");
	scanf("%d", &order);
	printf("stock available:");
	scanf("%d", &stock);
	printf("credit OK (0/1):");
	scanf("%d", &hasCredit);
	if(order <= stock && hasCredit == 1) {
		printf("supply has requirement.\n");
	} else if (hasCredit == 0 && order <= stock) {
		printf("send intimation.\n");
	} else if (hasCredit == 1 && order > stock) {
		printf("send avaliable stock && intimate about balance shipment.\n");
	}
	return 0;
}
