import tensorflow as tf

print(tf.get_default_graph())

g = tf.Graph()
print(g)

# A belongs to default graph:
a = tf.constant(5)

print(a.graph is g)
print(a.graph is tf.get_default_graph())
