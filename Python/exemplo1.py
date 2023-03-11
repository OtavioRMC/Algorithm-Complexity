def sequencialSearch(arr, x):
    for index, value in enumerate(arr):
        if value == x:
            return index
    return -1
 

if __name__ == '__main__':
    arr = [10, 20, 30, 40]
    x = 30
 
    print(x, "está presente no index",
          sequencialSearch(arr, x))