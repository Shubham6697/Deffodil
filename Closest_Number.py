# -*- coding: utf-8 -*-
"""
Created on Sat Oct 31 11:38:38 2020

@author: Shubham
"""

arr = list(map(int,input().split()))
x = int(input())
diff = []
maxi = -100000
for i in arr:
    diff.append(abs(i-x))
mini = min(diff)
for i in range(len(arr)):
    if diff[i] == mini:
        if maxi < arr[i]:
            maxi = arr[i]
print(maxi,end='\n')