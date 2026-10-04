class BSTIterator(object):

    def __init__(self, root):
        self.nodes = []
        self.index = -1

        def inorder(node):
            if not node:
                return
            inorder(node.left)
            self.nodes.append(node.data)
            inorder(node.right)

        inorder(root)

    def hasNext(self):
        return self.index + 1 < len(self.nodes)

    def next(self):
        self.index += 1
        return self.nodes[self.index]

    def hasPrev(self):
        return self.index - 1 >= 0

    def prev(self):
        self.index -= 1
        return self.nodes[self.index]