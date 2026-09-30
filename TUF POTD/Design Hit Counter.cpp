class HitCounter {
public:
    queue<pair<int, int>> q;
    int total = 0;

    HitCounter() {
    }

    void hit(int timestamp) {
        if (!q.empty() && q.back().first == timestamp) {
            q.back().second++;
        } else {
            q.push({timestamp, 1});
        }
        total++;
    }

    int getHits(int timestamp) {
        while (!q.empty() && q.front().first <= timestamp - 300) {
            total -= q.front().second;
            q.pop();
        }
        return total;
    }
};