#include <stdio.h>
#include <stdlib.h>
#include "temp.h"


int main() {

list = insertElement(list);
list = insertElement(list);
addVar("a", &list->table);
setVarList("a", 10, list);
addVar("b", &list->table);
setVarList("b", 5, list);
addVar("c", &list->table);
t0 = getVarList("a", list);
t1 = 10;
t2 = t0 == t1;
if (t2) goto L0;
goto L1;
L0:
list = insertElement(list);
t3 = 5;
setVarList("a", t3, list);
t4 = getVarList("a", list);
t5 = 1;
t6 = t4 == t5;
if (t6) goto L3;
goto L4;
L3:
list = insertElement(list);
addVar("a", &list->table);
list = removeElement(list);
goto L5;
L4:
list = insertElement(list);
addVar("b", &list->table);
list = removeElement(list);
goto L5;
L5:
list = removeElement(list);
goto L2;
L1:
list = insertElement(list);
t7 = 1;
setVarList("a", t7, list);
t8 = getVarList("a", list);
t9 = getVarList("b", list);
t10 = t8 > t9;
t11 = 1;
t12 = 2;
t13 = t11 <= t12;
t14 = t10 && t13;
setVarList("c", t14, list);
printf("%s: %d\n", "c", getVarList("c", list));
list = removeElement(list);
goto L2;
L2:
t15 = getVarList("a", list);
t16 = getVarList("b", list);
t17 = -t16;
t18 = t15 + t17;
t19 = getVarList("b", list);
t20 = getVarList("a", list);
t21 = t19 + t20;
t22 = t18 * t21;
setVarList("c", t22, list);
printf("%s: %d\n", "c", getVarList("c", list));
list = removeElement(list);
list = removeElement(list);

return 0;
}