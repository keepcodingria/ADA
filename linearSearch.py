import random
import time
import matplotlib.pyplot as plt


# Linear Search Function
def linear_search(arr, key):
    for i in range(len(arr)):
        if arr[i] == key:
            return i
    return -1


# Different input sizes
sizes = [100, 500, 1000, 2000, 4000]
times = []

# Measure time for worst case
for size in sizes:
    arr = [random.randint(1, 100000) for _ in range(size)]
    key = arr[-1]  # Worst case (element at last position)

    start = time.time()
    linear_search(arr, key)
    end = time.time()

    times.append(end - start)


# Plotting the graph
plt.figure()
plt.plot(sizes, times)
plt.xlabel("Input Size (n)")
plt.ylabel("Time Taken (seconds)")
plt.title("Linear Search Time Complexity")
plt.show()