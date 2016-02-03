struct test_struct{
	int val;
	struct test_struct *next;
};

struct test_struct *ptr = (struct test_struct *)malloc(sizeof(struct test_struct));