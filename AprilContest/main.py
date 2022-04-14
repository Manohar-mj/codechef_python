# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def searchBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        curr_node=root
        while(curr_node):
            if curr_node.val==val:
                return curr_node
            elif curr_node.val> val:
                curr_node=curr_node.left
            else:
                curr_node=curr_node.right
        return curr_node
        
