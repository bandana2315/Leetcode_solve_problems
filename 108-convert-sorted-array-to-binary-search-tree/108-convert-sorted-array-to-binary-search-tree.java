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
    public TreeNode sortedArrayToBST(int[] nums) {
        int n=nums.length;
        if(n==0)return null;
        return createTree(nums,0,n-1);
        
    }
    public TreeNode createTree(int[] nums,int start,int end){
        if(start>end)return null;
        int mid=(start+end)/2;
        TreeNode node=new TreeNode(nums[mid]);
        node.left=createTree(nums,start,mid-1);
        node.right=createTree(nums,mid+1,end);
       return node; 
    }
}