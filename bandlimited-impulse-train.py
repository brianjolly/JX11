import numpy as np
import matplotlib.pyplot as plt

# Parameters
T = 1.0  # Period
f0 = 1 / T  # Fundamental frequency
fc = 5 * f0  # Cutoff frequency
t = np.linspace(-2, 2, 1000)  # Time vector

# Bandlimited impulse train
x = np.zeros_like(t)
for k in range(-5, 6):  # Sum harmonics up to the cutoff frequency
    x += np.sinc(k * f0 * t)

# Plot
plt.plot(t, x)
plt.title('Bandlimited Impulse Train')
plt.xlabel('Time')
plt.ylabel('Amplitude')
plt.grid(True)
plt.show()
