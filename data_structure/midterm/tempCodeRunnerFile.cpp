if(m == 1) {
            long long l, r;
            cin >> l >> r;  
            for(long long j = l; j <= r; j++) {
                v[j] = 1;
            }
            ml = min(l,ml);
            mr = max(r,mr);
        }
        else {
            long long flag = 0, cnt = 0;
            for(long long j = ml; j <= mr; j++) {
                if(v[j] == 0 && flag == 0) {
                    flag = 1;
                    cnt++;
                }
                else if(v[j] == 1 && flag == 1) {
                    flag = 0;
                }
            }
            cout << cnt << '\n';
        }