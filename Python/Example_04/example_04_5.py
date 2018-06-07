import tensorflow as tf

c = tf.constant(4.0, dtype=tf.float64)
print(c)
print(c.dtype)

x = tf.constant([1, 2, 3], name='x', dtype=tf.float32)
print(x.dtype)
x = tf.cast(x, tf.int64)
print(x.dtype)
