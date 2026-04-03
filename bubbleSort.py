import random
import time
import matplotlib.pyplot as plt

# Bubble Sort Function
def bubble_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr


# Measuring Execution Time
sizes = [50, 100, 200, 400, 800]
times = []

for size in sizes:
    arr = [random.randint(1, 1000) for _ in range(size)]
    
    start = time.time()
    bubble_sort(arr.copy())
    end = time.time()
    
    times.append(end - start)

# Plotting Graph
plt.figure()
plt.plot(sizes, times)
plt.xlabel("Input Size (n)")
plt.ylabel("Time Taken (seconds)")
plt.title("Bubble Sort Time Complexity")
plt.show()