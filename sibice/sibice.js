var input = readline().split(" ");

var n = input[0],
    w = input[1],
    h = input[2];

var maxlen = Math.sqrt(Math.pow(w, 2) + Math.pow(h, 2));

while (n--) {
    var len = readline();
    var res = (len <= maxlen) ? "DA" : "NE";
    print(res);
}

