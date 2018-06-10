import tensorflow as tf

with tf.Graph().as_default():
    c1 = tf.constant(4,dtype=tf.float64,name='c')

with tf.name_scope("prefix_name"):
    c2 = tf.constant(4,dtype=tf.int32,name='c')
    c3 = tf.constant(4,dtype=tf.float64,name='c')


print(c1.name)
print(c2.name)
print(c3.name)