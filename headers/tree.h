#ifndef TREE_H
#define TREE_H

#include <stdio.h>

void tree(int a[], int n){
	printf("Maximum Elements 7 only\n");
    if(n < 1) return;

    int i = 0;

    printf("         %d\n", a[i++]);

    if(n > 1){
        printf("       /   \\\n");
        printf("      %d     %d\n", a[i], (i+1<n)?a[i+1]:0);
        i += 2;
    }

    if(n > 3){
        printf("     / \\   / \\\n");

        int left = (i+0 < n)? a[i+0] : 0;
        int right = (i+1 < n)? a[i+1] : 0;
        int left2 = (i+2 < n)? a[i+2] : 0;
        int right2 = (i+3 < n)? a[i+3] : 0;

        printf("    %d   %d %d   %d\n", left, right, left2, right2);
    }
}

#endif
