var Observable = require('FuseJS/Observable');
var Storage = require("FuseJS/Storage");
// var FileSystem = require("FuseJS/FileSystem");
// fusepm install https://github.com/MaxGraey/fuse-device
var Device     = require('Device');

var SAVENAME = "calendar_type.json";
var calendar_type = Observable("mood_calendar");
var mood_cal_vis = Observable("Collapsed");
var sleep_cal_vis = Observable("Collapsed");
var eat_cal_vis = Observable("Collapsed");
var mood_container_color = Observable("#fff");
var sleep_container_color = Observable("#fff");
var eat_container_color = Observable("#fff");
var fade_me_in = Observable(false);
var set_mood = Observable("");
var happy_mood = Observable(false);
var neutral_mood = Observable(false);
var sad_mood = Observable(false);
var h_9 = Observable(false);
var h_8 = Observable(false);
var h_7 = Observable(false);
var n_6 = Observable(false);
var n_5 = Observable(false);
var n_4 = Observable(false);
var s_3 = Observable(false);
var s_2 = Observable(false);
var s_1 = Observable(false);
var enable_mood_send = Observable(false);
var chart_url = Observable();
var save_confirm = Observable(false);
var bg_image = Observable("Images/bubble_bg.jpg");
// var camera = require('FuseJS/Camera');
// var test_images = Observable();
// var show_help_text = Observable(true);
chart_url.value = "http://koikka.work/fuse/data.html?id="+Device.UUID+"&v="+new Date().getTime();
function set_calendar_type_to_use(type) {
    console.log(JSON.stringify(type));
    console.log(calendar_type);
}
function execute_button_select(args) {
    var type = args.calendar_type;
    console.log("TYPE: "+type);
    calendar_type.value = type;
}
function set_page_according() {
    console.log(calendar_type.value);
    if (calendar_type.value == "mood_calendar") {
        mood_cal_vis.value = "Visible";
    } else {
        mood_cal_vis.value = "Collapsed";
    }
    if (calendar_type.value == "sleep_calendar") {
        sleep_cal_vis.value = "Visible";
    } else {
        sleep_cal_vis.value = "Collapsed";
    }
    if (calendar_type.value == "eating_calendar") {
        eat_cal_vis.value = "Visible";
    } else {
        eat_cal_vis.value = "Collapsed";
    }
    fade_me_in.value = true;
    console.log("mood_cal_vis.value: "+mood_cal_vis.value);
    console.log("sleep_cal_vis.value: "+sleep_cal_vis.value);
    console.log("eat_cal_vis.value: "+eat_cal_vis.value);
}
set_mood.onValueChanged(function(val) {
    // console.log("Text value changed: " + val);
    // console.log(set_mood.value.length);
    var emoji_selected = false;
    var moods = ["h_9", "h_8", "h_7", "n_6", "n_5", "n_4", "s_3", "s_2", "s_1"];
    for (var i = 0; i < moods.length; i++) {
        if (eval(moods[i]).value == true) {
            emoji_selected = true;
        }
    }
    if (set_mood.value.length > 0 && emoji_selected) {
        enable_mood_send.value = true;
    }
});
//----------------------------------------------------------------------------


        console.log('UUID:',   Device.UUID);
        console.log('locale:', Device.locale);
        console.log('system:', Device.system + " " + Device.systemVersion);
        console.log('SDK:',    Device.SDKVersion);
        console.log('device:', Device.vendor + " " + Device.model);
        console.log('cores:',  Device.cores);
        console.log('retina:', Device.isRetina);

        var asyncUUID = Observable("");
        setTimeout(function() {
            if (Device.UUID == '') {
                Device.getUUID().then(function(uuid) {
                    console.log('getUUID: ' + uuid);
                    asyncUUID.value = uuid;
                }).catch(function(error) {
                    console.log('getUUID error: ' + error);
                });
            } else {
                asyncUUID.value = Device.UUID;
            }
            chart_url.value = "http://koikka.work/fuse/data.html?id="+Device.UUID+"&v="+new Date().getTime();
        }, 2000);

        module.exports = {
            name:      Device.vendor + " " + Device.model,
            UUID:      Device.UUID,
            asyncUUID: asyncUUID,
            locale:    Device.locale,
            cores:     Device.cores,
            isRetina:  Device.isRetina
        };

//----------------------------------------------------------------------------
function handle_cal_visibility() {
    mood_cal_vis.value = "Collapsed";
    sleep_cal_vis.value = "Collapsed";
    eat_cal_vis.value = "Collapsed";
    fade_me_in.value = false;
}
function toggle_cal_visibility() {
    console.log("fade_me_in.value: "+fade_me_in.value)
    if (fade_me_in.value == false) {
        fade_me_in.value = true;
    } else {
        fade_me_in.value = false;
    }
}
function extra_content_visible() {
    console.log("----------------------"+calendar_type.value);
    if (calendar_type.value == "mood_calendar") {
        mood_container_color.value = "#242424";
    } else {
        mood_container_color.value = "#ECEFF100";
    }
    if (calendar_type.value == "sleep_calendar") {
        sleep_container_color.value = "#242424";
    } else {
        sleep_container_color.value = "#ECEFF100";
    }
    if (calendar_type.value == "eating_calendar") {
        eat_container_color.value = "#242424";
    } else {
        eat_container_color.value = "#ECEFF100";
    }
}
function save_mood() {
    chart_url.value = "http://koikka.work/fuse/data.html?id="+Device.UUID+"&v="+new Date().getTime();
    var mood = "";
    var moods = ["h_9", "h_8", "h_7", "n_6", "n_5", "n_4", "s_3", "s_2", "s_1"];
    var feels = ["h_9", "h_8", "h_7", "n_6", "n_5", "n_4", "s_3", "s_2", "s_1"];
    for (var i = 0; i < moods.length; i++) {
        if (eval(moods[i]).value == true) {
            console.log(set_mood.value +": "+moods[i]);
            mood = moods[i];
        }
    }

    var body = "action=save_mood&mood="+mood+"&value="+set_mood.value+"&id="+Device.UUID;
    var url = "http://koikka.work/fuse/fuse.php";
    fetch(url, {
        method: 'POST',
        headers: { "Content-type": "application/x-www-form-urlencoded; charset=UTF-8"},
        body: body,
        cache: false
    }).then(function(response) {
        if(response.ok) {
            // var json = JSON.parse(response._bodyText);
            console.log(response._bodyText);
            // json.action = action;
            // callback(json);
        } else {
            console.log("False HTTP response : "+response.status);
        }
    }).catch(function(err) {
        if(err != "SyntaxError: Unexpected end of input") {
            // An error occurred somewhere in the Promise chain
            console.log("Server error : "+err);
        } else{
            console.log("SERVER SYNTAX ERROR");
        }
    });
    save_confirm.value = true;
    // mood_cal_vis.value = "Collapsed";
    // fade_me_in = false;
    set_mood.value = "";
    for (var i = 0; i < moods.length; i++) {
        eval(moods[i]).value = false;
    }
}
function confirmed_save() {
    mood_cal_vis.value = "Collapsed";
    save_confirm.value = false;
    fade_me_in.value = false;
}
function highlight_mood(args) {
    console.log(args.mood);
    var moods = ["h_9", "h_8", "h_7", "n_6", "n_5", "n_4", "s_3", "s_2", "s_1"];
    for (var i = 0; i < moods.length; i++) {
        if (moods[i] == args.mood) {
            console.log(moods[i]+" == true");
            eval(moods[i]).value = true;
        } else {
            console.log(moods[i]+" == false");
            eval(moods[i]).value = false;
        }
    }
    var emoji_selected = false;
    var moods = ["h_9", "h_8", "h_7", "n_6", "n_5", "n_4", "s_3", "s_2", "s_1"];
    for (var i = 0; i < moods.length; i++) {
        if (eval(moods[i]).value == true) {
            emoji_selected = true;
        }
    }
    if (set_mood.value.length > 0 && emoji_selected) {
        enable_mood_send.value = true;
    }
    // if (args.mood == "h_9") {
    //     h_9.value = true;
    // }
    // if (args.mood == "h_8") {
    //     h_8.value = true;
    // }
    // if (args.mood == "happy") {
    //     happy_mood.value = true;
    //     neutral_mood.value = false;
    //     sad_mood.value = false;
    // } else if (args.mood == "neutral") {
    //     happy_mood.value = false;
    //     neutral_mood.value = true;
    //     sad_mood.value = false;
    // } else if (args.mood == "sad") {
    //     happy_mood.value = false;
    //     neutral_mood.value = false;
    //     sad_mood.value = true;
    // }
}
/* Not used -> waiting for promise */
// function get_from_memory(filePath, name) {
//    return new Promise(function (resolve, reject) {
//         var object = [];
//         Storage.read(SAVENAME).then(function(content) {
//             object = JSON.parse(content);
//             console.log("has content: "+content);
//             object.push({"img": filePath, "name": name, "unique": "unique"});
//         }, function(error) {
//             console.log("some error while reading data");
//         });
//         console.log("---------------------------------");
//         //default_items.value = default_items.value;
//         for (var i = 0; i < default_items.length; i++) {
//             console.log(default_items.getAt(i).unique);
//             if (default_items.getAt(i).unique === "unique") {
//                 default_items.remove(i);
//             }
//         }
//         for (var i = 0; i < items.length; i++) {
//             console.log(items.getAt(i).unique);
//             if (items.getAt(i).unique === "unique") {
//                 items.remove(i);
//             }
//         }
//         console.log("---------------------------------");
//         // return object;
//         resolve(object)
//     });
// }
/* Reads all items on startup */
// Storage.read(SAVENAME).then(function(content) {
//     var last_item = 0;
//     for (var i = 0; i < default_items.length; i++) {
//         last_item = i;
//     }
//     last_item++;
//     console.log("content: "+content);
//     content = JSON.parse(content);
//     for (var i = 0; i < content.length; i++) {
//         var elem = { position_at_grid: Observable(), id: "id_"+last_item, position: last_item, default_items_color: Observable("#AED6F1"), name: Observable(content[i].name), img: content[i].img, is_added: Observable(), change_color: Observable(false), "unique": "unique" };
//         default_items.add(elem);
//         last_item++;
//     }
//     // welcomeText.value = "Stored data: "  + data.message;
// }, function(error) {
//     //For now, let's expect the error to be because of the file not being found.
//     // welcomeText.value = "There is currently no local data stored";
//     console.log(SAVENAME);
//     console.log("some error while reading data: "+error);
// });
function empty_memory() {
    Storage.write(SAVENAME, "");
}
module.exports = {
    calendar_type: calendar_type,
    set_calendar_type_to_use: set_calendar_type_to_use,
    execute_button_select: execute_button_select,
    set_page_according: set_page_according,
    mood_cal_vis: mood_cal_vis,
    sleep_cal_vis: sleep_cal_vis,
    eat_cal_vis: eat_cal_vis,
    handle_cal_visibility: handle_cal_visibility,
    extra_content_visible: extra_content_visible,
    mood_container_color: mood_container_color,
    sleep_container_color: sleep_container_color,
    eat_container_color: eat_container_color,
    fade_me_in: fade_me_in,
    toggle_cal_visibility: toggle_cal_visibility,
    save_mood: save_mood,
    set_mood: set_mood,
    highlight_mood: highlight_mood,
    happy_mood: happy_mood,
    neutral_mood: neutral_mood,
    sad_mood: sad_mood,
    h_9: h_9,
    h_8: h_8,
    h_7: h_7,
    n_6: n_6,
    n_5: n_5,
    n_4: n_4,
    s_3: s_3,
    s_2: s_2,
    s_1: s_1,
    enable_mood_send: enable_mood_send,
    chart_url: chart_url,
    save_confirm: save_confirm,
    confirmed_save: confirmed_save,
    bg_image: bg_image
};