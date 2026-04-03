import random
import time
import matplotlib.pyplot as plt


# Selection Sort Function
def selection_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        
        # Swap
        arr[i], arr[min_index] = arr[min_index], arr[i]
    
    return arr


# Input sizes
sizes = [100, 500, 1000, 2000, 4000]
times = []

# Measure execution time
for size in sizes:
    arr = [random.randint(1, 100000) for _ in range(size)]

    start = time.time()
    selection_sort(arr.copy())
    end = time.time()

    times.append(end - start)


# Plot graph
plt.figure()
plt.plot(sizes, times)
plt.xlabel("Input Size (n)")
plt.ylabel("Time Taken (seconds)")
plt.title("Selection Sort Time Complexity")
plt.show()