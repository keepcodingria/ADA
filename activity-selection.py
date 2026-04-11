import matplotlib.pyplot as plt
import math

# Number of activities (n)
n_values = list(range(1, 101))  # 1 to 100

# Time complexity O(n log n)
time_complexity = [n * math.log2(n) if n > 0 else 0 for n in n_values]

# Plotting
plt.figure()
plt.plot(n_values, time_complexity)

# Labels and title
plt.xlabel("Number of Activities (n)")
plt.ylabel("Time Complexity (n log n)")
plt.title("Time Complexity of Activity Selection (O(n log n))")

plt.grid()
plt.show()