var Observable = require('FuseJS/Observable');
var Storage = require("FuseJS/Storage");
// var FileSystem = require("FuseJS/FileSystem");

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
// var camera = require('FuseJS/Camera');
// var test_images = Observable();
// var show_help_text = Observable(true);

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
})
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
        mood_container_color.value = "#ffff99";
    } else {
        mood_container_color.value = "#fff";
    }
    if (calendar_type.value == "sleep_calendar") {
        sleep_container_color.value = "#ffff99";
    } else {
        sleep_container_color.value = "#fff";
    }
    if (calendar_type.value == "eating_calendar") {
        eat_container_color.value = "#ffff99";
    } else {
        eat_container_color.value = "#fff";
    }
}
function save_mood() {
    var obj = make_ajax();

    // if (happy_mood.value == true) {
    //     mood = "happy_mood";
    // } else if (neutral_mood.value == true) {
    //     mood = "neutral_mood";
    // } else if (sad_mood.value == true) {
    //     mood = "sad_mood";
    // }
    // console.log(set_mood.value +": "+ mood);
}
function make_ajax() {
    var mood = "";
    var moods = ["h_9", "h_8", "h_7", "n_6", "n_5", "n_4", "s_3", "s_2", "s_1"];
    var feels = ["h_9", "h_8", "h_7", "n_6", "n_5", "n_4", "s_3", "s_2", "s_1"];
    for (var i = 0; i < moods.length; i++) {
        if (eval(moods[i]).value == true) {
            console.log(set_mood.value +": "+moods[i]);
            mood = moods[i];
        }
    }

    var body = { "action": "save_mood", "mood" : mood, "value" : set_mood.value, "id": "1" };
    var url = "http://koikka.work/fuse/fuse.php";
    // http://koikka.work/fuse/fuse.php?action=save_mood&mood=mood&value=2
    /*return fetch(url, {
        method: 'post',
        body: JSON.stringify(body),
        cache: false,
        headers: new Headers({ 'Content-Type': 'application/json' })
    })
    .then(function(response) {
        console.log(JSON.stringify(response));
        if (response.status == "200") {
            // console.log(JSON.stringify(response));
            console.log("OK");
            // GO TO HOME PAGE
        }
    });*/
    url = "https://optimus.headai.com/command_api?";
    body = {"action":"bot_login"}
    fetch(url, {
        method: 'POST',
        headers: { "Content-type": "application/x-www-form-urlencoded; charset=UTF-8"},
        body: body,//JSON.stringify(body),
        cache: false
    }).then(function(response) {

        if(response.ok)
        {
            // var json = JSON.parse(response._bodyText);
            console.log(response._bodyText);
            // json.action = action;
            // callback(json);
        }
        else{
            console.log("False HTTP response : "+response.status);
        }

    }).catch(function(err) {
        if(err != "SyntaxError: Unexpected end of input")
        {
            // An error occurred somewhere in the Promise chain
            console.log("Server error : "+err);
        }
        else{
            console.log("SERVER SYNTAX ERROR");
        }
    });

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
    enable_mood_send: enable_mood_send
};