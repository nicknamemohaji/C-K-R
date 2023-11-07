#include <stdio.h>

int main(void)
{
	int gsi_prefix, group_id, publisher_id, item_number, check;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gsi_prefix, &group_id, &publisher_id, &item_number, &check);
	printf("GSI prefix: %d\n", gsi_prefix);
	printf("Group identifier: %d\n", group_id);
	printf("Publisher code: %d\n", publisher_id);
	printf("Item number: %d\n", item_number);
	printf("Check digit: %d\n", check);

	return 0;
}