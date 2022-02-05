html_content = document.body.parentElement.innerHTML;
totranslate = [...html_content.matchAll("{{([^{}]*)}}")];
for (let i=0; i < totranslate.length; i++) {
    if(typeof lang[totranslate[i][1]] === 'undefined') {
        console.log(totranslate[i][1] + " !!! " + totranslate[i][1]);
    } else {
        console.log(totranslate[i][1] + " ==> " + lang[totranslate[i][1]]);
    }
    html_content = html_content.replace("{{" + totranslate[i][1] + "}}", lang[totranslate[i][1]]);
}
document.body.parentElement.innerHTML = html_content;
