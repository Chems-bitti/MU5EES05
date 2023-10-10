def maxim(t) :
    max = 0
    for i,x in enumerate(t) :
        if x > max :
            max = x
    return max


def minim(t) :
    min = 0
    for i,x in enumerate(t) :
        if x < min :
            min = x
    return min

def variance(t) :
    moy = 0
    for i,x in enumerate(t) :
        moy += x
    moy = moy/len(t)
    variance = 0
    for i,x in enumerate(t) :
        variance += (x-moy)**2
    variance = variance/(len(t)-1)
    return variance
    
    
 
tab=[4, 9, 10, 11, 12, 15, 12, 9, 0, 30]
max = maxim(tab)
min = minim(tab)
var = variance(tab)
print("tab = ", tab)
print("max = ", max)
print("min = ", min)
print("var = ", var)