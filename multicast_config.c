#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

typedef struct node {
	unsigned char seq;
	signed char val;
	struct node *next;
}Node,*linkedList;

/* linklist init */
linkedList link_init() {
	Node *L = NULL;
	L = (Node*)malloc(sizeof(Node));
	if (L == NULL)
		printf("Node malloc failed! \n");

	L->seq = 3;
	L->val = 120;
	L->next = NULL;
	
	return L;
}

/* find node by index , index >= 0 */
linkedList find_byIndex(linkedList L,int index) {
	linkedList p;
	p = L->next;int i = 1; // init, p point to first-node, i use to counter
	while (p && (i<index)){
		p = p->next;
		i++;
	}
	if (p && (i == index)) return p;
	else return NULL;
}

/* print linkedlist */
void print_linkedList(linkedList L) {
	linkedList p = L->next;
	printf("linkedList:\n");
	while (p){
		printf("seq: %d,val: %c\n",p->seq,p->val);
		p = p->next;
	}
}

/* insert node */

bool add_last1(linkedList L, unsigned char seq, signed char val) {
	linkedList p = NULL, s = NULL;
	p = L->next;
	while (p)
	{
		p = p->next;
	}

	s = (Node*)malloc(sizeof(Node));
	if (p == NULL)
		return false;

	s->seq = seq;
	s->val = val;

	s->next = L->next;
	L->next = s;

	return true;
}
/* at last insert node */
bool add_last(Node *head,unsigned char seq,signed char val) {
	Node *L = NULL, *p = NULL;
	L = head;
	while (L->next!=NULL)
	{
		L = L->next;
	}
	
	p = (Node*)malloc(sizeof(Node));
	if (p == NULL)
		return false;

	p->seq = seq;
	p->val = val;

	p->next = L->next;
	L->next = p;

	return true;
}

// 遍历链表,输入head , 指针传出wifi: ssid pwd, dis server
bool check_pkg(Node *head) {

	unsigned char prev = head->seq;
	short sum_index = 0, tmp_index = 1;

	while (head->next)
	{
		if ((head->seq- prev) == 1) {
			tmp_index++;
		}
		
		prev = head->seq;
		sum_index++;
		printf("sum_index:%d ,p: %d ,%d ,%d\n", sum_index, head->seq, prev, tmp_index);

		head = head->next;
	}
	printf("sum_index: %d ,tmp_len: %d \n", sum_index, tmp_index);
	return sum_index == tmp_index ? true : false;
}
/*
链表时间复杂度：
add:O(n)
delete:O(n)

如果只对链表头操作，复杂度为O(1)
update:O(n)
不推荐使用
select:O(0)
如只查询链表头，复杂度为O(1)

*/
void multicast_config_test() {
	Node *head = link_init();

	char data[119] = {0};

	//data[0] = 120;
	data[1] = 116;
	data[2] = 101;
	data[3] = 115;
	data[4] = 116;

	data[34] = 55;//7
	data[35] = 56;//8
	data[36] = 116;//t
	data[37] = 101;//e
	data[38] = 115;//s
	data[39] = 116;//t
	data[40] = 105;//i
	data[41] = 110;//n
	data[42] = 103;//g
	data[43] = 43;//+
	data[44] = 100;
	data[45] = 105;
	data[46] = 115;
	data[47] = 46;
	data[48] = 103;
	data[49] = 114;
	data[50] = 101;
	data[51] = 101;
	data[52] = 46;
	data[53] = 99;
	data[54] = 111;
	data[55] = 109;
	for (int i = 1; i < 119;i++) {
		//printf("%c\n", data[i]);
		printf("%d, %d\n", i, add_last(head, i, data[i]));
	}

	/*

	printf(" %d\n", add_last(head, 4, 24));
	printf(" %d\n", add_last(head, 5, 24));
	printf(" %d\n", add_last(head, 6, 25));
	printf(" %d\n", add_last(head, 7, 25));
	printf(" %d\n", add_last(head, 8, 25));
	printf(" %d\n", add_last(head, 9, 25));
	printf(" %d\n", add_last(head, 10, 25));
	printf(" %d\n", add_last(head, 11, 25));*/

	//printf("res: %d \n",check_pkg(head));
	print_linkedList(head);

	/*Node *temp = find_byIndex(head,34);
	printf("temp 34: %d,%d ",temp->seq,temp->val);*/
}
