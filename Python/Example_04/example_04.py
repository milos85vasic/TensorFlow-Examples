import os
import tensorflow as tf
from tensorflow.examples.tutorials.mnist import input_data

# Resolves 'Your CPU supports instructions that this TensorFlow binary was not compiled to use: AVX2 FMA' warning:
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '2'

# Three nodes:
a = tf.constant(5)
b = tf.constant(2)
c = tf.constant(3)

# Each of the next three nodes gets two existing variables as inputs, and performs simple arithmetic operations on them:
d = tf.multiply(a, b)
e = tf.add(c, b)
f = tf.subtract(d, e)

