circularqueue.c

1 #include<stdio.h>

2 #include<stdlib.h>

3 #define QSIZE 4

4

5 int q[QSIZE], r = -1, f = 0, count = 0, item;

6

7 /* Insert Operation */

8 void insert() {

9 /* Check for queue overflow */

10 if (count == QSIZE) {

11 printf("Queue Overflow\n");

12 return;

13 }

14 r = (r + 1) % QSIZE; /* Increment rear by 1 */

15 q[r] = item; /* Insert into queue */

16 count++;

17 }

18

19 /* Delete Operation */

20 void del() {

21 /* Check for Queue Underflow */

22 if (count == 0) {

23 printf("Queue Underflow\n");

24 return;

25 }

26 printf("The item deleted is: %d\n"

, q[f]);

27 f = (f + 1) % QSIZE;

28 count--;

29 }

30

31 /* Display Operation */

32 void display(int front) {

33 int i;

34 /* Check for Empty Queue */

35 if (count == 0) {

36 printf("Queue is Empty\n");

37 return}

39 /* Display the contents of the queue */

40 printf("Contents of the queue:\n");

41 for (i = 1; i <= count; i++) {

42 printf("%d\n"

, q[front]);

43 front = (front + 1) % QSIZE;

44 }

45 }

46

47 void main() {

48 int choice;

49 do {

50 printf("************************\n");

51 printf("Circular Queue Operations\n");

52 printf("1. Insert\n");

53 printf("2. Delete\n");

54 printf("3. Display\n");

55 printf("4. Quit\n");

56 printf("Enter your choice:\n");

57 scanf("%d"

, &choice);

58

59 switch (choice) {

60 case 1:

61 printf("Enter the item to be inserted:\n");

62 scanf("%d"

, &item);

63 insert();

64 break;

65 case 2:

66 del();

67 break;

68 case 3:

69 display(f);

70 break;

71 case 4:

72 exit(0);

73 default:

74 printf("Invalid choice\n");

75 }

76 } while (choice != 4);
