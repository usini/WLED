const fs = require("fs");
const path = require("path");

if(typeof process.argv[2] === 'undefined') {
    lang_name = "en";
} else {
    lang_name = process.argv[2];
}

console.log(" WLED TRANSLATOR ");
console.log("-----------------------------")
console.log("Language:" + lang_name);

if(fs.existsSync('wled00/data/localisation/'+lang_name+'.js')) {
    console.log(" OK ==> " + 'wled00/data/localisation/'+lang_name+'.js' + " exists");
} else {
    console.log(" WARNING ==> " + "wled00/data/localisation/" + lang_name + ".js" + " does not exists");
    console.log("Generating file...");
    fs.copyFileSync("wled00/data/localisation/en.js", "wled00/data/localisation/" + lang_name + ".js");
}

if(fs.existsSync("wled00/data/" + lang_name)){
    console.log(" OK ==> wled00/data/" + lang_name + " exists");
} else {
    console.log(" WARNING => wled00/data/" + lang_name + " doesn't exists");
    console.log("Generating folder");
    fs.mkdirSync("wled00/data/" + lang_name)
}
console.log("-----------------------------")

// Import translations
eval(fs.readFileSync('wled00/data/localisation/'+lang_name+'.js')+'');

function translate(file){
    console.log("... Translating " + file);
    // Read HTML Contents
    fileContents = fs.readFileSync('wled00/data/' + file).toString()
    totranslate = [...fileContents.matchAll("{{([^{}]*)}}")];
    // Replace all occurences with translations
    for (let i=0; i < totranslate.length; i++) {
        if(typeof lang[totranslate[i][1]] === 'undefined') {
            console.log(totranslate[i][1] + " !!! " + lang[totranslate[i][1]]);
        } else {
            //console.log(totranslate[i][1] + " ==> " + lang[totranslate[i][1]]);
        }
        fileContents = fileContents.replace("{{" + totranslate[i][1] + "}}", lang[totranslate[i][1]]);
    }

    fs.writeFileSync("wled00/data/"+lang_name+"/"+ file, fileContents);
}

raw_files = fs.readdirSync("wled00/data/", { withFileTypes: true });
files = raw_files
        .filter(raw_files => raw_files.isFile())
        .map(raw_files => raw_files.name);

console.log(files);
for (let i=0; i < files.length; i++) {
    extension = path.extname(files[i]);
    if( extension == ".ico" || extension == ".css") {
        console.log("... Copy " + files[i]);
        fs.copyFileSync("wled00/data/"+files[i] , "wled00/data/"+lang_name+"/"+files[i]);
    } else {
        translate(files[i])
    }
}

