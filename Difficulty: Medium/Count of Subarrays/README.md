<h2><a href="https://www.geeksforgeeks.org/problems/count-of-subarrays5922/1">Count of Subarrays</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 14pt;">Given an array <strong>arr[] </strong>of positive integers and an integer <strong>k</strong>. The special value of each contiguous subarray of given array is the maximum element present in that subarray. </span></p>
<p><span style="font-size: 14pt;">Return the number of subarrays having special value strictly greater than k.</span></p>
<p><span style="font-size: 14pt;"><strong>Note :</strong>&nbsp;Since the answer can be very large, return it modulo 10<sup>9</sup>+7.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> k = 2, arr[] = [3, 2, 1]
<strong>Output:</strong> 3
<strong>Explanation:</strong> The subarrays having value strictly greater than K are: [3], [3, 2] and [3, 2, 1]. Thus there are 3 such subarrays.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>k = 1, arr[] = [1, 2, 3, 4]
<strong>Output:</strong> 9
<strong>Explanation:</strong> There are 9 subarrays having value strictly greater than K.</span></pre>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Dynamic Programming</code>&nbsp;