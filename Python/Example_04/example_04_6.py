import tensorflow as tf
import numpy as np

c = tf.constant([[1, 2, 3],
                 [4, 5, 6]])
print("Python List input: {}".format(c.get_shape()))

c = tf.constant(np.array([
    [[1, 2, 3],
     [4, 5, 6]],
    [[1, 1, 1],
     [2, 2, 2]]
]))
print("3d NumPy array input: {}".format(c.get_shape()))
