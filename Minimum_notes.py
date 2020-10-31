# -*- coding: utf-8 -*-
"""
Created on Sat Oct 31 12:07:33 2020

@author: Shubham
"""

amount = int(input())
notes=0
while(amount != 0):
    if amount in range(1,2):
        amount-=1
    elif amount in range(2,5):
        amount-=2
    elif amount in range(5,10):
        amount-=5
    elif amount in range(10,20):
        amount-=10
    elif amount in range(20,50):
        amount-=20
    elif amount in range(50,100):
        amount-=50
    elif amount in range(100,200):
        amount-=100
    elif amount in range(200,500):
        amount-=200
    elif amount in range(500,2000):
        amount-=500
    else:
        amount-=2000
    notes+=1
print(notes)