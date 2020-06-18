import numpy

def rotateMatrix(A,n):
    numpy.transpose(A)
    print(A)
    for i in range(n):
        A[i].reverse()
    return A

print(rotateMatrix([[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]],4))
