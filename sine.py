import numpy as np
import matplotlib.pyplot as plt

# Define the angle
theta = np.linspace(0, 2 * np.pi, 100)

# Compute the real and imaginary parts
real_part = np.cos(theta)
imaginary_part = np.sin(theta)

# Plot the unit circle
plt.figure(figsize=(6, 6))
plt.plot(real_part, imaginary_part, label='$e^{ix} = \cos(x) + i\sin(x)$')
plt.scatter([1, -1], [0, 0], color='red')  # Points for e^0 and e^iπ
plt.axhline(0, color='black',linewidth=0.5)
plt.axvline(0, color='black',linewidth=0.5)
plt.grid(color = 'gray', linestyle = '--', linewidth = 0.5)
plt.legend()
plt.xlabel('Real Part')
plt.ylabel('Imaginary Part')
plt.title('Unit Circle Representation of $e^{ix}$')
plt.show()
