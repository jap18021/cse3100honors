from sklearn.datasets import load_iris
from sklearn.cluster import KMeans
import matplotlib.pyplot as plt

# Load Iris dataset
iris = load_iris()
X = iris.data

# Apply K-Means clustering
kmeans = KMeans(n_clusters=3, random_state=0).fit(X)

# Plotting the clusters
plt.scatter(X[:, 0], X[:, 1], c=kmeans.labels_, cmap='viridis')
plt.xlabel('Sepal length')
plt.ylabel('Sepal width')
plt.title('K-Means Clustering on Iris Dataset')
plt.show()
