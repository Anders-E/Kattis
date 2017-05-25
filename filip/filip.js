function filip(a, b) {
    for (var i = 2; i > 0; i--) {
        if (a[i] > b[i]) {
            return a;
        } else if (a[i] < b[i]) {
            return b;
        }
    }
}

var line = readline().split(" ");

var a = line[0],
    b = line[1];

var res = filip(a, b);

print(res[2] + res[1] + res[0]);

