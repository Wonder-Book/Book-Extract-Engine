var gulp = require("gulp");
var path = require("path");

gulp.task("generateIndex", function (done) {
    var generate = require("wonder-generate-index");
    var rootDir = path.join(process.cwd(), "src"),
        destDir = "./src/";

    generate.generate("/", rootDir, ["**/api/**/*.re"], destDir, {
        exclude: []
    });

    done();
});
