/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Double> averageOfLevels(TreeNode root) {
       List<Double> l = new LinkedList<>();
       if(root==null){
           return l;
       }
        Queue<TreeNode>q=new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
        int n=q.size();
        double sum=0;
        for(int i=0;i<n;i++){
           TreeNode currnode=q.poll();
            if(currnode.left!=null)q.add(currnode.left);
            if(currnode.right!=null)q.add(currnode.right);
            sum+=currnode.val;
        }
            double avg=sum/(n*1.0);
            l.add(avg);
        }
        return l;
    }
   
}