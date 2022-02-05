/*
 * More web UI HTML source arrays.
 * This file is auto generated, please don't make any changes manually.
 * Instead, see https://kno.wled.ge/advanced/custom-features/#changing-web-ui
 * to find out how to easily modify the web UI source!
 */ 

// Autogenerated from wled00/data/en/style.css, do not edit!!
const char PAGE_settingsCss[] PROGMEM = R"=====(<style>body{font-family:Verdana,sans-serif;text-align:center;background:#222;color:#fff;line-height:200%%;margin:0}hr{border-color:#666}a{color:#28f;text-decoration:none}.btn,button{background:#333;color:#fff;font-family:Verdana,sans-serif;border:.3ch solid #333;display:inline-block;font-size:20px;margin:12px 8px 8px;padding:1px 6px;cursor:pointer;text-decoration:none}.lnk{border:0}.helpB{text-align:left;position:absolute;width:60px}input{background:#333;color:#fff;font-family:Verdana,sans-serif;border:.5ch solid #333}input:disabled{color:#888}input[type=number]{width:4em;margin:2px}input[type=number].xxl{width:100px}input[type=number].xl{width:85px}input[type=number].l{width:63px}input[type=number].m{width:56px}input[type=number].s{width:49px}input[type=number].xs{width:42px}input[type=checkbox]{transform:scale(1.5)}select{background:#333;color:#fff;font-family:Verdana,sans-serif;border:.5ch solid #333}td{padding:2px}.d5{width:4.5em!important}#toast{opacity:0;background-color:#444;border-radius:5px;bottom:64px;color:#fff;font-size:17px;padding:16px;pointer-events:none;position:fixed;text-align:center;z-index:5;transform:translateX(-50%%);max-width:90%%;left:50%%}#toast.show{opacity:1;background-color:#264;animation:fadein .5s,fadein .5s 2.5s reverse}#toast.error{opacity:1;background-color:#b21;animation:fadein .5s}</style>)=====";


// Autogenerated from wled00/data/en/settings.htm, do not edit!!
const char PAGE_settings[] PROGMEM = R"=====(<!DOCTYPE html><html lang="en"><head><meta charset="UTF-8"><title>WLED Settings
</title><style>
body{text-align:center;background:#222;height:100px;margin:0}html{--h:10.2vh}button{background:#333;color:#fff;font-family:Verdana,Helvetica,sans-serif;border:1px solid #333;border-radius:var(--h);font-size:6vmin;height:var(--h);width:calc(100%% - 40px);margin-top:2vh}
</style></head><body><form action="/"><button type="submit" id="b">Back</button>
</form><form action="/settings/wifi"><button type="submit">WiFi Setup</button>
</form><form action="/settings/leds"><button type="submit">LED Preferences
</button></form><form action="/settings/ui"><button type="submit">User Interface
</button></form><form action="/settings/sync"><button type="submit">
Sync Interfaces</button></form><form action="/settings/time"><button 
type="submit">Time & Macros</button></form><form action="/settings/um"><button 
type="submit">Usermods</button></form><form action="/settings/sec"><button 
type="submit">Security & Updates</button></form></body></html><script 
src="localisation/en.js"></script><script src="localisation/translate.js">
</script>)=====";


// Autogenerated from wled00/data/en/settings_wifi.htm, do not edit!!
const char PAGE_settings_wifi[] PROGMEM = R"=====(<!DOCTYPE html><html lang="en"><head><meta charset="utf-8"><meta 
name="viewport" content="width=500"><title>Wifi Settings</title><script>
function H(){window.open("https://github.com/Aircoookie/WLED/wiki/Settings#wifi-settings")}function B(){window.open("/settings","_self")}function GetV() {var d=document;
)=====";


// Autogenerated from wled00/data/en/settings_leds.htm, do not edit!!
const char PAGE_settings_leds[] PROGMEM = R"=====(<!DOCTYPE html><html lang="en"><head><meta charset="utf-8"><meta 
name="viewport" content="width=500"><title>LED Settings</title><script>
var timeout,d=document,laprev=55,maxB=1,maxM=4e3,maxPB=4096,maxL=1333,maxLbquot=0,customStarts=!1,startsDirty=[];function H(){window.open("https://kno.wled.ge/features/settings/#led-settings")}function B(){window.open("/settings","_self")}function gId(e){return d.getElementById(e)}function off(e){d.getElementsByName(e)[0].value=-1}function showToast(e,n=!1){var t=gId("toast");t.innerHTML=e,t.className=n?"error":"show",clearTimeout(timeout),t.style.animation="none",timeout=setTimeout((function(){t.className=t.className.replace("show","")}),2900)}function bLimits(e,n,t,a){maxB=e,maxM=t,maxPB=n,maxL=a}function pinsOK(){var e=d.getElementsByTagName("input");for(i=0;i<e.length;i++){var n=e[i].name.substring(0,2);if("L0"==n||"L1"==n||"L2"==n||"L3"==n){var t=e[i].name.substring(2);if(parseInt(d.getElementsByName("LT"+t)[0].value,10)>=80)continue}if(("L0"==n||"L1"==n||"L2"==n||"L3"==n||"L4"==n||"RL"==n||"BT"==n||"IR"==n)&&""!=e[i].value&&"-1"!=e[i].value){if(d.um_p&&d.um_p.some(n=>n==parseInt(e[i].value,10)))return alert(`Sorry, pins ${JSON.stringify(d.um_p)} can't be used.`),e[i].value="",e[i].focus(),!1;if(e[i].value>5&&e[i].value<12)return alert("Sorry, pins 6-11 can't be used."),e[i].value="",e[i].focus(),!1;if("IR"!=n&&"BT"!=n&&e[i].value>33)return alert("Sorry, pins >33 are input only."),e[i].value="",e[i].focus(),!1;for(j=i+1;j<e.length;j++){var a=e[j].name.substring(0,2);if("L0"==a||"L1"==a||"L2"==a||"L3"==a||"L4"==a||"RL"==a||"BT"==a||"IR"==a){if("L"===a.substring(0,1)){var s=e[j].name.substring(2);if(parseInt(d.getElementsByName("LT"+s)[0].value,10)>=80)continue}if(""!=e[j].value&&e[i].value==e[j].value)return alert(`Pin conflict between ${e[i].name}/${e[j].name}!`),e[j].value="",e[j].focus(),!1}}}}return!0}function trySubmit(e){if(d.Sf.data.value="",e.preventDefault(),!pinsOK())return e.stopPropagation(),!1;if(bquot>100){var n="Too many LEDs for me to handle!";maxM<1e4&&(n+="\n\rConsider using an ESP32."),alert(n)}d.Sf.checkValidity()&&d.Sf.submit()}function S(){GetV(),checkSi(),setABL()}function enABL(){var e=gId("able").checked;d.Sf.LA.value=e?laprev:0,gId("abl").style.display=e?"inline":"none",gId("psu2").style.display=e?"inline":"none",d.Sf.LA.value>0&&setABL()}function enLA(){var e=d.Sf.LAsel.value;d.Sf.LA.value=e,gId("LAdis").style.display=50==e?"inline":"none",UI()}function setABL(){switch(gId("able").checked=!0,d.Sf.LAsel.value=50,parseInt(d.Sf.LA.value)){case 0:gId("able").checked=!1,enABL();break;case 30:d.Sf.LAsel.value=30;break;case 35:d.Sf.LAsel.value=35;break;case 55:d.Sf.LAsel.value=55;break;case 255:d.Sf.LAsel.value=255;break;default:gId("LAdis").style.display="inline"}gId("m1").innerHTML=maxM,d.getElementsByName("Sf")[0].addEventListener("submit",trySubmit),UI()}function getMem(e,n,t){return e<32?maxM<1e4&&3==t?e>29?20*n:15*n:maxM>=1e4?e>29?8*n:6*n:e>29?4*n:3*n:e>31&&e<48?5:44==e||45==e?4*n:3*n}function UI(e=!1){var n=!1,t=0;gId("ampwarning").style.display=d.Sf.MA.value>7200?"inline":"none",255==d.Sf.LA.value?laprev=12:d.Sf.LA.value>0&&(laprev=d.Sf.LA.value);var a=d.getElementsByTagName("select");for(i=0;i<a.length;i++)if("LT"==a[i].name.substring(0,2)){var s=a[i].name.substring(2),l=parseInt(a[i].value,10);gId("p0d"+s).innerHTML=l>=80&&l<96?"IP address:":l>49?"data GPIO:":l>41?"GPIOs:":"GPIO:",gId("p1d"+s).innerHTML=l>49&&l<64?"Clk GPIO:":"";var o=d.getElementsByName("L1"+s)[0];for(t+=getMem(l,d.getElementsByName("LC"+s)[0].value,d.getElementsByName("L0"+s)[0].value),f=1;f<5;f++){(o=d.getElementsByName("L"+f+s)[0])&&(l>=80&&l<96&&f<4||l>49&&1==f||l>41&&l<50&&f+40<l?(o.style.display="inline",o.required=!0):(o.style.display="none",o.required=!1,o.value=""))}e&&(gId("rf"+s).checked=gId("rf"+s).checked||31==l,l>31&&l<48&&(d.getElementsByName("LC"+s)[0].value=1)),gId("rf"+s).onclick=31==l?function(){return!1}:function(){},n|=30==l||31==l||l>40&&l<46&&43!=l,gId("co"+s).style.display=l>=80&&l<96||41==l||42==l?"none":"inline",gId("dig"+s+"c").style.display=l>40&&l<48?"none":"inline",gId("dig"+s+"r").style.display=l>=80&&l<96?"none":"inline",gId("dig"+s+"s").style.display=l>=80&&l<96||l>40&&l<48?"none":"inline",gId("dig"+s+"f").style.display=l>=16&&l<32||l>=50&&l<64?"inline":"none",gId("rev"+s).innerHTML=l>40&&l<48?"Inverted output":"Reversed rotated 180°",gId("psd"+s).innerHTML=l>40&&l<48?"Index:":"Start:"}var r=d.querySelectorAll(".wc"),u=r.length;for(i=0;i<u;i++)r[i].style.display=n?"inline":"none";var p=d.getElementsByTagName("input"),m=0,v=0,c=0;for(i=0;i<p.length;i++){var g=p[i].name.substring(0,2);s=p[i].name.substring(2);if("LC"!=g){if("L0"==g||"L1"==g)d.getElementsByName("LC"+s)[0].max=maxPB;if("L0"==g||"L1"==g||"L2"==g||"L3"==g){if((l=parseInt(d.getElementsByName("LT"+s)[0].value))>=80){p[i].max=255,p[i].min=0,p[i].style.color="#fff";continue}p[i].max=33,p[i].min=-1}if(("L0"==g||"L1"==g||"L2"==g||"L3"==g||"L4"==g||"RL"==g||"BT"==g||"IR"==g)&&""!=p[i].value&&"-1"!=p[i].value){var f=[];if(d.um_p&&Array.isArray(d.um_p))for(k=0;k<d.um_p.length;k++)f.push(d.um_p[k]);for(j=0;j<p.length;j++)if(i!=j){var y=p[j].name.substring(0,2);if("L0"==y||"L1"==y||"L2"==y||"L3"==y||"L4"==y||"RL"==y||"BT"==y||"IR"==y){if("L"===y.substring(0,1)){var L=p[j].name.substring(2);if(parseInt(d.getElementsByName("LT"+L)[0].value,10)>=80)continue}""!=p[j].value&&"-1"!=p[j].value&&f.push(parseInt(p[j].value,10))}}f.some(e=>e==parseInt(p[i].value,10))?p[i].style.color="red":p[i].style.color=parseInt(p[i].value,10)>33?"orange":"#fff"}}else{var I=parseInt(p[i].value,10);customStarts&&startsDirty[s]||(gId("ls"+s).value=m),gId("ls"+s).disabled=!customStarts,I&&((a=parseInt(gId("ls"+s).value))+I>m&&(m=a+I),I>c&&(c=I),(l=parseInt(d.getElementsByName("LT"+s)[0].value))<80&&(v+=I))}}gId("lc").textContent=m,gId("pc").textContent=m==v?"":"("+v+" physical)",gId("m0").innerHTML=t,bquot=t/maxM*100,gId("dbar").style.background=`linear-gradient(90deg, ${bquot>60?bquot>90?"red":"orange":"#ccc"} 0 ${bquot}%%, #444 ${bquot}%% 100%%)`,gId("ledwarning").style.display=c>Math.min(maxPB,800)||bquot>80?"inline":"none",gId("ledwarning").style.color=c>Math.max(maxPB,800)||bquot>100?"red":"orange",gId("wreason").innerHTML=bquot>80?"80% of max. LED memory"+(bquot>100?` (<b>ERROR: Using over ${maxM}B!</b>)`:""):"800 LEDs per output";var h=Math.ceil((100+v*laprev)/500)/2;h=h>5?Math.ceil(h):h;a="";var B=30==d.Sf.LAsel.value,b=255==d.Sf.LAsel.value;h<1.02&&!B&&!b?a="ESP 5V pin with 1A USB supply":(a+=B?"12V ":b?"WS2815 12V ":"5V ",a+=h,a+="A supply connected to LEDs");var S=Math.ceil((100+v*laprev)/1500)/2,x="(for most effects, ~";x+=S=S>5?Math.ceil(S):S,x+="A is enough)<br>",gId("psu").innerHTML=a,gId("psu2").innerHTML=b?"":x,gId("json").style.display=8==d.Sf.IT.value?"":"none"}function lastEnd(e){if(e<1)return 0;v=parseInt(d.getElementsByName("LS"+(e-1))[0].value)+parseInt(d.getElementsByName("LC"+(e-1))[0].value);var n=parseInt(d.getElementsByName("LT"+(e-1))[0].value);return n>31&&n<48&&(v=1),isNaN(v)?0:v}function addLEDs(e,n=!0){var t=d.getElementsByClassName("iST"),a=t.length;if(!(1==e&&a>=maxB||-1==e&&0==a)){var i=gId("mLC");if(1==e){var s=`<div class="iST">\n<hr style="width:260px">\n${a+1}:\n<select name="LT${a}" onchange="UI(true)">\n<option value="22" selected>WS281x</option>\n<option value="30">SK6812 RGBW</option>\n<option value="31">TM1814</option>\n<option value="24">400kHz</option>\n<option value="50">WS2801</option>\n<option value="51">APA102</option>\n<option value="52">LPD8806</option>\n<option value="53">P9813</option>\n<option value="41">PWM White</option>\n<option value="42">PWM CCT</option>\n<option value="43">PWM RGB</option>\n<option value="44">PWM RGBW</option>\n<option value="45">PWM RGB+CCT</option>\n\x3c!--option value="46">PWM RGB+DCCT</option--\x3e\n<option value="80">DDP RGB (network)</option>\n\x3c!--option value="81">E1.31 RGB (network)</option--\x3e\n\x3c!--option value="82">ArtNet RGB (network)</option--\x3e\n</select>&nbsp;\n<div id="co${a}" style="display:inline">Color Order:\n<select name="CO${a}">\n<option value="0">GRB</option>\n<option value="1">RGB</option>\n<option value="2">BRG</option>\n<option value="3">RBG</option>\n<option value="4">BGR</option>\n<option value="5">GBR</option>\n</select></div>\n<br>\n<span id="psd${a}">start:</span> <input type="number" name="LS${a}" id="ls${a}" class="l starts" min="0" max="8191" value="${lastEnd(a)}" oninput="startsDirty[${a}]=true;UI();" required />&nbsp;\n<div id="dig${a}c" style="display:inline">Length: <input type="number" name="LC${a}" class="l" min="1" max="${maxPB}" value="1" required oninput="UI()" /></div>\n<br>\n<span id="p0d${a}">GPIO:</span> <input type="number" name="L0${a}" min="0" max="33" required class="xs" onchange="UI()"/>\n<span id="p1d${a}"></span><input type="number" name="L1${a}" min="0" max="33" class="xs" onchange="UI()"/>\n<span id="p2d${a}"></span><input type="number" name="L2${a}" min="0" max="33" class="xs" onchange="UI()"/>\n<span id="p3d${a}"></span><input type="number" name="L3${a}" min="0" max="33" class="xs" onchange="UI()"/>\n<span id="p4d${a}"></span><input type="number" name="L4${a}" min="0" max="33" class="xs" onchange="UI()"/>\n<div id="dig${a}r" style="display:inline"><br><span id="rev${a}">Reversed</span>: <input type="checkbox" name="CV${a}"></div>\n<div id="dig${a}s" style="display:inline"><br>Skip 1<sup>st</sup> LED: <input id="sl${a}" type="checkbox" name="SL${a}"></div>\n<div id="dig${a}f" style="display:inline"><br>Off Refresh: <input id="rf${a}" type="checkbox" name="RF${a}"></div>\n</div>`;i.insertAdjacentHTML("beforeend",s)}-1==e&&(t[--a].remove(),--a),gId("+").style.display=a<maxB-1?"inline":"none",gId("-").style.display=a>0?"inline":"none",n||UI()}}function addBtn(e,n,t){var a=gId("btns").innerHTML,i="BT"+String.fromCharCode((e<10?48:55)+e);a+=`Button ${e} GPIO: <input type="number" min="-1" max="40" name="${i}" onchange="UI()" class="xs" value="${n}">`,a+=`&nbsp;<select name="${"BE"+String.fromCharCode((e<10?48:55)+e)}">`,a+=`<option value="0" ${0==t?"selected":""}>Disabled</option>`,a+=`<option value="2" ${2==t?"selected":""}>Pushbutton</option>`,a+=`<option value="3" ${3==t?"selected":""}>Push inverted</option>`,a+=`<option value="4" ${4==t?"selected":""}>Switch</option>`,a+=`<option value="5" ${5==t?"selected":""}>PIR sensor</option>`,a+=`<option value="6" ${6==t?"selected":""}>Touch</option>`,a+=`<option value="7" ${7==t?"selected":""}>Analog</option>`,a+=`<option value="8" ${8==t?"selected":""}>Analog inverted</option>`,a+="</select>",a+=`<span style="cursor: pointer;" onclick="off('${i}')">&nbsp;&#215;</span><br>`,gId("btns").innerHTML=a}function tglSi(e){(customStarts=e)||(startsDirty=[]),UI()}function checkSi(){for(var e=!1,n=1;n<d.getElementsByClassName("iST").length;n++){parseInt(gId("ls"+(n-1)).value)+parseInt(d.getElementsByName("LC"+(n-1))[0].value)!=parseInt(gId("ls"+n).value)&&(e=!0,startsDirty[n]=!0)}0!=parseInt(gId("ls0").value)&&(e=!0,startsDirty[0]=!0),gId("si").checked=e,tglSi(e)}function uploadFile(e){var n=new XMLHttpRequest;n.addEventListener("load",(function(){showToast(this.responseText,this.status>=400)})),n.addEventListener("error",(function(e){showToast(e.stack,!0)})),n.open("POST","/upload");var t=new FormData;return t.append("data",d.Sf.data.files[0],e),n.send(t),d.Sf.data.value="",!1}function loadCfg(e){var n,t;"function"==typeof window.FileReader?(e.files?e.files[0]?(n=e.files[0],(t=new FileReader).onload=function(e){let n=e.target.result;var t=JSON.parse(n);if(t.hw){if(t.hw.led){for(var a=0;a<10;a++)addLEDs(-1);t.hw.led.ins.forEach((e,n,t)=>{addLEDs(1);for(var a=0;a<e.pin.length;a++)d.getElementsByName(`L${a}${n}`)[0].value=e.pin[a];d.getElementsByName("LT"+n)[0].value=e.type,d.getElementsByName("LS"+n)[0].value=e.start,d.getElementsByName("LC"+n)[0].value=e.len,d.getElementsByName("CO"+n)[0].value=e.order,d.getElementsByName("SL"+n)[0].checked=e.skip,d.getElementsByName("RF"+n)[0].checked=e.ref,d.getElementsByName("CV"+n)[0].checked=e.rev})}if(t.hw.btn){var i=t.hw.btn;Array.isArray(i.ins)&&(gId("btns").innerHTML=""),i.ins.forEach((e,n,t)=>{addBtn(n,e.pin[0],e.type)}),d.getElementsByName("TT")[0].value=i.tt}t.hw.ir&&(d.getElementsByName("IR")[0].value=t.hw.ir.pin,d.getElementsByName("IT")[0].value=t.hw.ir.type),t.hw.relay&&(d.getElementsByName("RL")[0].value=t.hw.relay.pin,d.getElementsByName("RM")[0].checked=t.hw.relay.inv),UI()}},t.readAsText(n)):alert("Please select a JSON file first!"):alert("This browser doesn't support the `files` property of file inputs."),e.value=""):alert("The file API isn't supported on this browser yet.")}function GetV() {var d=document;
)=====";


#ifdef WLED_ENABLE_DMX

// Autogenerated from wled00/data/en/settings_dmx.htm, do not edit!!
const char PAGE_settings_dmx[] PROGMEM = R"=====(<!DOCTYPE html><html lang="en"><head><meta name="viewport" content="width=500">
<meta charset="utf-8"><title>DMX Settings</title><script>
function GCH(n){for(d=document,d.getElementById("dmxchannels").innerHTML+="",i=0;i<n;i++)d.getElementById("dmxchannels").innerHTML+="<span id=CH"+(i+1)+"s >Channel "+(i+1)+": <select name=CH"+(i+1)+' id="CH'+(i+1)+'"><option value=0>Set to 0</option><option value=1>Red</option><option value=2>Green</option><option value=3>Blue</option><option value=4>White</option><option value=5>Shutter (Brightness)</option><option value=6>Set to 255</option></select></span><br />\n'}function mMap(){for(d=document,numCh=document.Sf.CN.value,numGap=document.Sf.CG.value,parseInt(numCh)>parseInt(numGap)?d.getElementById("gapwarning").style.display="block":d.getElementById("gapwarning").style.display="none",i=0;i<15;i++)i>=numCh?(d.getElementById("CH"+(i+1)+"s").style.opacity="0.5",d.getElementById("CH"+(i+1)).disabled=!0):(d.getElementById("CH"+(i+1)+"s").style.opacity="1",d.getElementById("CH"+(i+1)).disabled=!1)}function S(){GCH(15),GetV(),mMap()}function H(){window.open("https://github.com/Aircoookie/WLED/wiki/DMX")}function B(){window.history.back()}function GetV() {var d=document;
)=====";


#else
const char PAGE_settings_dmx[] PROGMEM = R"=====()=====";
#endif

// Autogenerated from wled00/data/en/settings_ui.htm, do not edit!!
const char PAGE_settings_ui[] PROGMEM = R"=====(<!DOCTYPE html><html><head lang="en"><meta charset="utf-8"><meta 
name="viewport" content="width=500"><title>UI Settings</title><script>
var initial_ds,initial_st,timeout,d=document,sett=null,l={comp:{labels:"Show button labels",colors:{LABEL:"Color selection methods",picker:"Color Wheel",rgb:"RGB sliders",quick:"Quick color selectors",hex:"HEX color input"},pcmbot:"Show bottom tab bar in PC mode",pid:"Show preset IDs",seglen:"Set segment length instead of stop LED",css:"Enable custom CSS",hdays:"Enable custom Holidays list"},theme:{alpha:{bg:"Background opacity",tab:"Button opacity"},bg:{url:"BG image URL",random:"Random BG image"},color:{bg:"BG HEX color"}}};function gId(e){return d.getElementById(e)}function isObject(e){return e&&"object"==typeof e&&!Array.isArray(e)}function set(e,t,i){for(var n=t,s=e.split("_"),o=s.length,a=0;a<o-1;a++){var l=s[a];n[l]||(n[l]={}),n=n[l]}n[s[o-1]]=i}function showToast(e,t=!1){var i=gId("toast");i.innerHTML=e,i.className=t?"error":"show",clearTimeout(timeout),i.style.animation="none",timeout=setTimeout((function(){i.className=i.className.replace("show","")}),2900)}function addRec(e,t="",n=null){var s="";for(i in e){var o=t+(t?"_":"")+i;if(isObject(e[i]))n&&n[i]&&n[i].LABEL&&(s+=`<h3>${n[i].LABEL}</h3>`),s+=addRec(e[i],o,n?n[i]:null);else{var a=o;if(n&&n[i]?a=n[i]:e[i+"LABEL"]&&(a=e[i+"LABEL"]),i.indexOf("LABEL")>0)continue;var l=typeof e[i];gId(o)?("boolean"===l?gId(o).checked=e[i]:gId(o).value=e[i],gId(o).previousElementSibling.matches(".l")&&(gId(o).previousElementSibling.innerHTML=a)):"boolean"===l?s+=`${a}: <input class="agi cb" type="checkbox" id=${o} ${e[i]?"checked":""}><br>`:"number"===l?s+=`${a}: <input class="agi" type="number" id=${o} value=${e[i]}><br>`:"string"===l&&(s+=`${a}:<br><input class="agi" id=${o} value=${e[i]}><br>`)}}return s}function genForm(e){var t;t=addRec(e,"",l),gId("gen").innerHTML=t}function GetLS(){(sett=localStorage.getItem("wledUiCfg"))||(gId("lserr").style.display="inline");try{sett=JSON.parse(sett)}catch(e){sett={},gId("lserr").style.display="inline",gId("lserr").innerHTML="&#9888; Settings JSON parsing failed. ("+e+")"}genForm(sett),gId("dm").checked="light"===gId("theme_base").value}function SetLS(){for(var e=d.querySelectorAll(".agi"),t=0;t<e.length;t++){var i=e[t],n=i.classList.contains("cb")?i.checked:i.value;set(i.id,sett,n),console.log(`${i.id} set to ${n}`)}try{localStorage.setItem("wledUiCfg",JSON.stringify(sett)),gId("lssuc").style.display="inline"}catch(i){gId("lssuc").style.display="none",gId("lserr").style.display="inline",gId("lserr").innerHTML="&#9888; Settings JSON saving failed. ("+i+")"}}function Save(){SetLS(),d.Sf.DS.value==initial_ds&&d.Sf.ST.checked==initial_st||d.Sf.submit()}function S(){GetV(),initial_ds=d.Sf.DS.value,initial_st=d.Sf.ST.checked,GetLS()}function H(){window.open("https://github.com/Aircoookie/WLED/wiki/Settings#user-interface-settings")}function B(){window.open("/settings","_self")}function UI(){gId("idonthateyou").style.display=gId("dm").checked?"inline":"none";var e=gId("theme_base");e&&(e.value=gId("dm").checked?"light":"dark")}function setRandomBg(){gId("theme_bg_random").checked?gId("theme_bg_url").value="https://picsum.photos/1920/1080":gId("theme_bg_url").value=""}function checkRandomBg(){"https://picsum.photos/1920/1080"===gId("theme_bg_url").value?gId("theme_bg_random").checked=!0:gId("theme_bg_random").checked=!1}function uploadFile(e,t){var i=new XMLHttpRequest;i.addEventListener("load",(function(){showToast(this.responseText,this.status>=400)})),i.addEventListener("error",(function(e){showToast(e.stack,!0)})),i.open("POST","/upload");var n=new FormData;return n.append("data",e.files[0],t),i.send(n),e.value="",!1}function GetV() {var d=document;
)=====";


// Autogenerated from wled00/data/en/settings_sync.htm, do not edit!!
const char PAGE_settings_sync[] PROGMEM = R"=====(<!DOCTYPE html><html lang="en"><head><meta name="viewport" content="width=500">
<meta charset="utf-8"><title>Sync Settings</title><script>
var d=document;function gId(e){return d.getElementById(e)}function H(){window.open("https://github.com/Aircoookie/WLED/wiki/Settings#sync-settings")}function B(){window.open("/settings","_self")}function adj(){6454==d.Sf.DI.value?(1==d.Sf.DA.value&&(d.Sf.DA.value=0),1==d.Sf.EU.value&&(d.Sf.EU.value=0)):5568==d.Sf.DI.value&&(0==d.Sf.DA.value&&(d.Sf.DA.value=1),0==d.Sf.EU.value&&(d.Sf.EU.value=1))}function FC(){for(j=0;j<8;j++)gId("G"+(j+1)).checked=gId("GS").value>>j&1,gId("R"+(j+1)).checked=gId("GR").value>>j&1}function GC(){var e=0,d=0,n=1;for(j=0;j<8;j++)e+=gId("G"+(j+1)).checked*n,d+=gId("R"+(j+1)).checked*n,n*=2;gId("GS").value=e,gId("GR").value=d}function SP(){var e=d.Sf.DI.value;gId("xp").style.display=e>0?"none":"block",e>0&&(d.Sf.EP.value=e)}function SetVal(){switch(parseInt(d.Sf.EP.value)){case 5568:d.Sf.DI.value=5568;break;case 6454:d.Sf.DI.value=6454;break;case 4048:d.Sf.DI.value=4048}SP(),FC()}function S(){GetV(),SetVal()}function GetV() {
)=====";


// Autogenerated from wled00/data/en/settings_time.htm, do not edit!!
const char PAGE_settings_time[] PROGMEM = R"=====(<!DOCTYPE html><html lang="en"><head><meta name="viewport" content="width=500">
<meta charset="utf-8"><title>Time Settings</title><script>
var d=document,ms=["Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"],cals='style="font-size:27px;margin-top:-6px;cursor:pointer"';function H(){window.open("https://kno.wled.ge/features/settings/#time-settings")}function B(){window.open("/settings","_self")}function S(){BTa(),GetV(),updLoc(),Cs(),FC()}function gId(t){return d.getElementById(t)}function gN(t){return d.getElementsByName(t)[0]}function expand(t,e){var n=gId("WD"+e);n.style.display="none"!==n.style.display?"none":"",t.innerHTML="none"===n.style.display?"&#128467;":"&#x2715;"}function Cs(){gId("cac").style.display="none",gId("coc").style.display="block",gId("ccc").style.display="none",gId("ca").selected&&(gId("cac").style.display="block"),gId("cc").selected&&(gId("coc").style.display="none",gId("ccc").style.display="block"),gId("cn").selected&&(gId("coc").style.display="none")}function BTa(){var t="<tr><th>En.</th><th>Hour</th><th>Minute</th><th>Preset</th><th></th></tr>";for(i=0;i<8;i++){for(t+=`<tr><td><input name="W${i}" id="W${i}" type="hidden"><input id="W${i}0" type="checkbox"></td>\n<td><input name="H${i}" class="xs" type="number" min="0" max="24"></td>\n<td><input name="N${i}" class="xs" type="number" min="0" max="59"></td>\n<td><input name="T${i}" class="s" type="number" min="0" max="250"></td>\n<td><div id="CB${i}" onclick="expand(this,${i})" ${cals}>&#128467;</div></td></tr>`,t+=`<tr><td colspan=5><div id="WD${i}" style="display:none;">Run on weekdays`,t+='<table style="width:100%%;"><tr><th>M</th><th>T</th><th>W</th><th>T</th><th>F</th><th>S</th><th>S</th></tr><tr>',j=1;j<8;j++)t+=`<td><input id="W${i}${j}" type="checkbox"></td>`;for(t+=`</tr></table>from\n<select name="M${i}">`,j=0;j<12;j++)t+=`<option value="${j+1}">${ms[j]}</option>`;for(t+=`</select><input name="D${i}" class="xs" type="number" min="1" max="31"></input> to\n<select name="P${i}">`,j=0;j<12;j++)t+=`<option value="${j+1}">${ms[j]}</option>`;t+=`</select><input name="E${i}" class="xs" type="number" min="1" max="31"></input>\n\t\t<hr></div></td></tr>`}for(t+=`<tr><td><input name="W8" id="W8" type="hidden"><input id="W80" type="checkbox"></td>\n<td>Sunrise<input name="H8" value="255" type="hidden"></td>\n<td><input name="N8" class="xs" type="number" min="-59" max="59"></td>\n<td><input name="T8" class="s" type="number" min="0" max="250"></td>\n<td><div onclick="expand(this,8)" ${cals}>&#128467;</div></td></tr><tr><td colspan=5>`,t+='<div id="WD8"style="display:none;"><table style="width:100%%;"><tr><th>M</th><th>T</th><th>W</th><th>T</th><th>F</th><th>S</th><th>S</th></tr><tr>',j=1;j<8;j++)t+=`<td><input id="W8${j}" type="checkbox"></td>`;for(t+="</tr></table><hr></div></td></tr>",t+=`<tr><td><input name="W9" id="W9" type="hidden"><input id="W90" type="checkbox"></td>\n<td>Sunset<input name="H9" value="255" type="hidden"></td>\n<td><input name="N9" class="xs" type="number" min="-59" max="59"></td>\n<td><input name="T9" class="s" type="number" min="0" max="250"></td>\n<td><div onclick="expand(this,9)" ${cals}>&#128467;</div></td></tr><tr><td colspan=5>`,t+='<div id="WD9" style="display:none;"><table style="width:100%%;"><tr><th>M</th><th>T</th><th>W</th><th>T</th><th>F</th><th>S</th><th>S</th></tr><tr>',j=1;j<8;j++)t+=`<td><input id="W9${j}" type="checkbox"></td>`;t+="</tr></table><hr></div></td></tr>",gId("TMT").innerHTML=t}function FC(){for(i=0;i<10;i++){let t=gId("W"+i).value;for(j=0;j<8;j++)gId("W"+i+j).checked=t>>j&1;(127!=(127&t)||i<8&&(1!=gN("M"+i).value||1!=gN("D"+i).value||12!=gN("P"+i).value||31!=gN("E"+i).value))&&expand(gId("CB"+i),i)}}function Wd(){for(a=[0,0,0,0,0,0,0,0,0,0],i=0;i<10;i++){for(m=1,j=0;j<8;j++)a[i]+=gId("W"+i+j).checked*m,m*=2;gId("W"+i).value=a[i]}"S"===d.Sf.LTR.value&&(d.Sf.LT.value=-1*parseFloat(d.Sf.LT.value)),"W"===d.Sf.LNR.value&&(d.Sf.LN.value=-1*parseFloat(d.Sf.LN.value))}function addRow(t,e,n,i){var d=gId("macros"),a=d.rows.length,l=d.insertRow(a),s=String.fromCharCode((t<10?48:55)+t);document.createElement("td");l.insertCell(0).innerHTML=`Button ${t}:`,l.insertCell(1).innerHTML=`<input name="MP${s}" type="number" class="s" min="0" max="250" value="${e}" required>`,l.insertCell(2).innerHTML=`<input name="ML${s}" type="number" class="s" min="0" max="250" value="${n}" required>`,l.insertCell(3).innerHTML=`<input name="MD${s}" type="number" class="s" min="0" max="250" value="${i}" required>`}function updLoc(t){parseFloat(d.Sf.LT.value)<0?(d.Sf.LTR.value="S",d.Sf.LT.value=-1*parseFloat(d.Sf.LT.value)):d.Sf.LTR.value="N",parseFloat(d.Sf.LN.value)<0?(d.Sf.LNR.value="W",d.Sf.LN.value=-1*parseFloat(d.Sf.LN.value)):d.Sf.LNR.value="E"}function GetV() {
)=====";


// Autogenerated from wled00/data/en/settings_sec.htm, do not edit!!
const char PAGE_settings_sec[] PROGMEM = R"=====(<!DOCTYPE html><html lang="en"><head><meta name="viewport" content="width=500">
<meta charset="utf-8"><title>Misc Settings</title><script>
var timeout,d=document;function H(){window.open("https://github.com/Aircoookie/WLED/wiki/Settings#security-settings")}function B(){window.open("/settings","_self")}function U(){window.open("/update","_self")}function gId(t){return d.getElementById(t)}function isObject(t){return t&&"object"==typeof t&&!Array.isArray(t)}function showToast(t,e=!1){var n=gId("toast");n.innerHTML=t,n.className=e?"error":"show",clearTimeout(timeout),n.style.animation="none",timeout=setTimeout((function(){n.className=n.className.replace("show","")}),2900)}function uploadFile(t,e){var n=new XMLHttpRequest;n.addEventListener("load",(function(){showToast(this.responseText,this.status>=400)})),n.addEventListener("error",(function(t){showToast(t.stack,!0)})),n.open("POST","/upload");var o=new FormData;return o.append("data",t.files[0],e),n.send(o),t.value="",!1}function GetV() {var d=document;
)=====";


// Autogenerated from wled00/data/en/settings_um.htm, do not edit!!
const char PAGE_settings_um[] PROGMEM = R"=====(<!DOCTYPE html><html><head lang="en"><meta charset="utf-8"><meta 
name="viewport" content="width=500"><title>Usermod Settings</title><script>
var owner,locip,urows,d=document,umCfg={},pins=[6,7,8,9,10,11],pinO=["rsvd","rsvd","rsvd","rsvd","rsvd","rsvd"],loc=!1,numM=0;function gId(e){return d.getElementById(e)}function isO(e){return e&&"object"==typeof e&&!Array.isArray(e)}function H(){window.open("https://github.com/Aircoookie/WLED/wiki/Settings#usermod-settings")}function B(){window.open("/settings","_self")}function S(){"file:"==window.location.protocol&&(loc=!0,(locip=localStorage.getItem("locIp"))||(locip=prompt("File Mode. Please enter WLED IP!"),localStorage.setItem("locIp",locip))),GetV(),numM>0||locip?ldS():gId("um").innerHTML="No Usermods installed."}function isF(e){return e===+e&&e!==(0|e)}function isI(e){return e===+e&&e===(0|e)}function check(e,n){var i=e.name.replace("[]","").substr(-3);if("number"==e.type&&"pin"==i.substr(0,3))for(var t=0;t<pins.length;t++)if(n!=pinO[t]){if(e.value==pins[t]||e.value<-1||e.value>39){e.style.color="red";break}e.style.color=e.value>33?"orange":"#fff"}}function getPins(e){if(isO(e))for(const[i,t]of Object.entries(e))if(isO(t))owner=i,getPins(t);else if("pin"==i.replace("[]","").substr(-3))if(Array.isArray(t))for(var n=0;n<t.length;n++)t[n]>=0&&(pins.push(t[n]),pinO.push(owner));else t>=0&&(pins.push(t),pinO.push(owner));else if(Array.isArray(t))for(n=0;n<t.length;n++)getPins(t[n])}function addField(e,n,i,t=!1){if(isO(i))for(const[t,o]of Object.entries(i))"unknown"===n||e.includes(":")?addField(e,t,o):addField(e+":"+n,t,o);else if(Array.isArray(i))for(var o=0;o<i.length;o++)addField(e,n,i[o],!0);else{var s,r=typeof i;switch(r){case"boolean":r="checkbox",s='value="true"'+(i?" checked":"");break;case"number":s=`value="${i}"`,"pin"===n.substr(-3)?(s+=' max="39" min="-1" style="width:40px;"',r="int"):s+=' step="any" style="width:100px;"';break;default:r="text",s=`value="${i}" style="width:250px;"`}e.includes(":")&&(urows+=e.substr(e.indexOf(":")+1)),urows+=` ${n}: `,"checkbox"==r?urows+=`<input type="hidden" name="${e}:${n}${t?"[]":""}" value="false">`:t||(urows+=`<input type="hidden" name="${e}:${n}${t?"[]":""}" value="${r}">`),urows+=`<input type="${"int"===r?"number":r}" name="${e}:${n}${t?"[]":""}" ${s} oninput="check(this,'${e.substr(e.indexOf(":")+1)}')"><br>`}}function ldS(){fetch((loc?"http://"+locip:"")+"/cfg.json",{method:"get"}).then(e=>(e.ok||(gId("lserr").style.display="inline"),e.json())).then(e=>{if(umCfg=e.um,getPins(e),urows="",isO(umCfg))for(const[e,n]of Object.entries(umCfg))urows+=`<hr><h3>${e}</h3>`,addField(e,"unknown",n);""===urows&&(urows="Usermods configuration not found.<br>Press <i>Save</i> to initialize defaults."),gId("um").innerHTML=urows}).catch((function(e){gId("lserr").style.display="inline",console.log(e)}))}function svS(e){e.preventDefault(),console.log(d.Sf),d.Sf.checkValidity()&&d.Sf.submit()}function GetV() {var d=document;
)=====";

