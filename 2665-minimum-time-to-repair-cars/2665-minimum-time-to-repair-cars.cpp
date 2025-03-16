class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long left = 1, right = (long long)*min_element(ranks.begin(), ranks.end()) * cars * cars;
        
        auto can_repair_all = [&](long long time) {
            long long total_cars_repaired = 0;
            for (int rank : ranks) {
                total_cars_repaired += sqrt(time / rank);
                if (total_cars_repaired >= cars) return true;
            }
            return false;
        };
        
        while (left < right) {
            long long mid = (left + right) / 2;
            if (can_repair_all(mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        
        return left;
    }
};