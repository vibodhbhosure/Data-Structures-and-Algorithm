
def quickSort(arr, start, end):

    if start >= end:
        return arr

    pIndex = partition(arr, start, end)

    quickSort(arr, start, pIndex - 1)
    quickSort(arr, pIndex + 1, end)

    return arr


def partition(arr, start, end):
    pivot = arr[end]
    pIndex = 0

    for i in range(len(arr)):
        if arr[i] < pivot:
            arr[i], arr[pIndex] = arr[pIndex], arr[i]
            pIndex += 1

    arr[end], arr[pIndex] = arr[pIndex], arr[end]

    return pIndex


def main():
    arr1 = []
    arr2 = [2]
    arr3 = [21, 43, 5, 34, 54, 65]
    print(quickSort(arr1, 0, len(arr1) - 1))
    print(quickSort(arr2, 0, len(arr2) - 1))
    print(quickSort(arr3, 0, len(arr3) - 1))


main()
