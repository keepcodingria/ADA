import time
import matplotlib.pyplot as plt


# Tower of Hanoi Recursive Function
def tower_of_hanoi(n, source, auxiliary, destination):
    if n == 1:
        return
    tower_of_hanoi(n - 1, source, destination, auxiliary)
    tower_of_hanoi(n - 1, auxiliary, source, destination)


# Measure execution time for different number of disks
sizes = [1, 2, 3, 4, 5, 6, 7, 8]
times = []

for n in sizes:
    start = time.time()
    tower_of_hanoi(n, 'A', 'B', 'C')
    end = time.time()
    times.append(end - start)


# Plot graph
plt.figure()
plt.plot(sizes, times)
plt.xlabel("Number of Disks (n)")
plt.ylabel("Time Taken (seconds)")
plt.title("Tower of Hanoi Time Complexity")
plt.show()