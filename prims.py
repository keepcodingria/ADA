import matplotlib.pyplot as plt

# Values of V (number of vertices)
V = list(range(1, 50))

# Time complexity O(V^2)
T = [v**2 for v in V]

plt.plot(V, T)
plt.xlabel("Number of Vertices (V)")
plt.ylabel("Time Complexity")
plt.title("Time Complexity of Prim's Algorithm (O(V^2))")

plt.grid()
plt.show()