import os
import tensorflow as tf

# Resolves 'Your CPU supports instructions that this TensorFlow binary was not compiled to use: AVX2 FMA' warning:
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '2'

h = tf.constant("Hello")
w = tf.constant(" World!")
hw = h + w

with tf.Session() as sess:
    ans = sess.run(hw)
    print(ans)
