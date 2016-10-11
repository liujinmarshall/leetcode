iclass MinStack {
    public:
        int* values;
        int* mins;
        int cur;

        /** initialize your data structure here. */
        MinStack() {
            cur = -1;
            values = new int[10000];
            mins = new int[10000];
        }

        void push(int x) {
            cur++;
            values[cur] = x;
            if (cur == 0) {
                mins[cur] = 0;
                return;
            }
            if (x < values[mins[cur-1]]) {
                mins[cur] = cur;
            } else {
                mins[cur] = mins[cur - 1];
            }
        }

        void pop() {
            cur--;
        }

        int top() {
            return values[cur];
        }

        int getMin() {
            return values[mins[cur]];
        }
};

/**
 *  * Your MinStack object will be instantiated and called as such:
 *   * MinStack obj = new MinStack();
 *    * obj.push(x);
 *     * obj.pop();
 *      * int param_3 = obj.top();
 *       * int param_4 = obj.getMin();
 *        */
