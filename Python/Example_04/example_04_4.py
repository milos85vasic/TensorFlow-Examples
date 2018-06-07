import tensorflow as tf

a = tf.constant(5)
b = tf.constant(2)
c = tf.constant(3)

d = tf.multiply(a, b)
e = tf.add(c, b)
f = tf.subtract(d, e)

# NOTE: Opening a session using the with clause will ensure the session is
# automatically closed once all computations are done.
with tf.Session() as sess:
    fetches = [a, b, c, d, e, f]
    outs = sess.run(fetches)

print("outs = {}".format(outs))
print(type(outs[0]))
