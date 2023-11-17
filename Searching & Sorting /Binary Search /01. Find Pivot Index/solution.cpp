int findPivot(vector<int>& nums) {
        int n = nums.size();
        int startingEle = 0;
        int e = n-1;
        int mid = startingEle + (e-startingEle) / 2;

        while(startingEle <= e) {
            if(startingEle == e) {
                // ARRAY HAS SINGLE ELEMENT 
                return startingEle;
            }
            if(mid + 1 < n && nums[mid] > nums[mid+1]) {
                return mid;
            }
            else if(mid - 1 >= 0 && nums[mid] < nums[mid-1]) {
                return mid - 1;
            }
            // NOW CHECK WHETHER MY ELE IS ON A-PART OR B-PART
            else if(nums[startingEle] > nums[mid]) {
                // YOU ARE ON B-PART
                // GO LEFT 
                e = mid - 1;
            }
            else {
                // YOU ARE ON A-PART
                // GO RIGHT WITHIN A-PART
                startingEle = mid + 1;
            }
            mid = startingEle + (e-startingEle) / 2;
        }
        return -1;
    }
