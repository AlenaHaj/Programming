
def create(arr_len, first = 0, step = 0):
    array=[]
    for i in range(arr_len):
        array.append(first + i * step)
    return array

# метод сортировки вставками
def sort (arr):
    i = 1
    while i < len(arr):
        for j in range(i, 0,-1):
            if arr[j - 1] <= arr[j]: break
            arr[j - 1], arr[j]=arr[j], arr[j - 1]
        i+= 1
    return arr

_print = print
def print(arr):
    _print(arr)
    return arr

arr = create(int(input()), int(input()), int(input()))
arr = sort(arr)
print(arr)
