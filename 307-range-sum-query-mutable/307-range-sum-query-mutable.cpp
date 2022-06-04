class NumArray
{
    private:
        int tree[4 * 30000];
    int right = 0;
    vector<int> nums;
    void build(int l, int r, int idx)
    {
        if (l == r)
        {
            tree[idx] = nums[l];
            return;
        }
        int mid = (l + r) / 2;
        build(l, mid, 2 *idx + 1);
        build(mid + 1, r, 2 *idx + 2);
        tree[idx] = tree[2 *idx + 1] + tree[2 *idx + 2];
    }
    int sum(int &gl, int &gr, int l, int r, int idx)
    {
       	// doesn't lies in range
        if (r < gl || gr < l) return 0;
       	// completely lies in range
        if (l >= gl && r <= gr) return tree[idx];
       	//overlaps
        int mid = (l + r) / 2;
        int x = sum(gl, gr, l, mid, 2 *idx + 1);
        int y = sum(gl, gr, mid + 1, r, 2 *idx + 2);
        return x + y;
    }
    void modify(int &idx, int &val, int l, int r, int par)
    {
        if (l == r)
        {
            tree[par] = val;
            nums[idx] = val;
        }
        else
        {
            int mid = (l + r) / 2;
            if (idx >= l && idx <= mid)
            {
                modify(idx, val, l, mid, 2 *par + 1);
            }
            else
            {
                modify(idx, val, mid + 1, r, 2 *par + 2);
            }
            tree[par] = tree[2 *par + 1] + tree[2 *par + 2];
        }
    }
    public:
        NumArray(vector<int> &ds)
        {
            right = ds.size() - 1;
            nums = ds;
            build(0, right, 0);
        }

    void update(int index, int val)
    {
        modify(index, val, 0, right, 0);
    }

    int sumRange(int gl, int gr)
    {
        return sum(gl, gr, 0, right, 0);
    }
};