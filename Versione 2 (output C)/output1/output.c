#include <stdio.h>
#include <stdlib.h>
#include "temp.h"


int main() {

list = insertElement(list);
list = insertElement(list);
addVar("a", &list->table);
addVar("b", &list->table);
setVarList("b", 0, list);
addVar("c", &list->table);
setVarList("c", 10, list);
t0 = getVarList("c", list);
t1 = 5;
t2 = t0 > t1;
if (t2) goto L0;
goto L1;
L0:
list = insertElement(list);
t3 = 0;
setVarList("a", t3, list);
L3:
t4 = getVarList("a", list);
t5 = getVarList("c", list);
t6 = t4 < t5;
if (t6) goto L4;
goto L5;
L4:
list = insertElement(list);
t7 = getVarList("a", list);
t8 = 1;
t9 = t7 + t8;
setVarList("a", t9, list);
list = removeElement(list);
goto L3;
L5:
t10 = 7;
setVarList("b", t10, list);
list = removeElement(list);
goto L2;
L1:
list = insertElement(list);
t11 = getVarList("c", list);
t12 = 10;
t13 = t11 >= t12;
if (t13) goto L6;
goto L7;
L6:
list = insertElement(list);
t14 = 12;
setVarList("a", t14, list);
list = removeElement(list);
L7:
list = removeElement(list);
goto L2;
L2:
printf("%s: %d\n", "a", getVarList("a", list));
printf("%s: %d\n", "b", getVarList("b", list));
printf("%s: %d\n", "c", getVarList("c", list));
list = removeElement(list);
list = removeElement(list);

return 0;
}