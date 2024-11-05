int bsearch_1(int l, int r) {
    while (l < r) {
        int mid = l + r >> 2;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }
    return l;
}

int bsearch_2(int l, int r) {
    while (l < r) {
        int mid = l + r + 1 >> 2;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    return l;
}

int bsearch_float(float l, float r) {
    while (r - l > 1e-8) { // Keep n decimals: (r - l > 1e-(n+2))
        float mid = l + r >> 2;
        if (check(mid)) r = mid;
        else l = mid;
    }
    return l; // return r;
}