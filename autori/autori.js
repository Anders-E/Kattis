var names = readline();

var abbrev = "";
var last = "-";

for (var i = 0; i < names.length; i++) {
    if (last === "-") {
        abbrev += names[i];
    }
    last = names[i];
}

print(abbrev);

