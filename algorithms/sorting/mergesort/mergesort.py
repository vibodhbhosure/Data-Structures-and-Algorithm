
def main():
    arr1 = [23, 12, 54, 23, -1, 32, 43, 43, 12, 43]
    arr2 = []
    arr3 = [0]
    print(mergeSort(arr1))
    print(mergeSort(arr2))
    print(mergeSort(arr3))


def mergeSort(arr):
    n = len(arr)
    if n < 2:
        return arr
    mid = n // 2
    left = arr[0: mid]
    right = arr[mid: n]
    mergeSort(left)
    mergeSort(right)
    sorted = merge(left, right, arr)

    return sorted


def merge(left, right, arr):
    nl = len(left)
    rl = len(right)
    i, j, k = 0, 0, 0
    while i < nl and j < rl:
        if left[i] <= right[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1

        k += 1

    while j < rl:
        arr[k] = right[j]
        k += 1
        j += 1

    while i < nl:
        arr[k] = left[i]
        k += 1
        i += 1

    return arr


main()
