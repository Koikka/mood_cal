var Observable = require('FuseJS/Observable');
var Storage = require("FuseJS/Storage");
// var LocalNotify = require("FuseJS/LocalNotifications");
//var push_notif = require("FuseJS/Push");

var Push = require("Firebase/Notifications");

var status = Observable("-");
var message = Observable("-no message yet-");

// var LocalNotify = require("FuseJS/LocalNotifications");
var Payload = Observable("-->Payload here<--");
// var FileSystem = require("FuseJS/FileSystem");
// fusepm install https://github.com/MaxGraey/fuse-device
// fuse build -t=android -r mood_calendar.unoproj
// fuse build --target=android --configuration=Release
var Device = require('Device');
// var Environment = require('FuseJS/Environment');
// var APNS = require("APNS");
// var FNotify = require("Firebase/Notifications");
// var Push = null;
// if(Environment.ios)
//     Push = APNS;
// else
//     Push = FNotify;

var SAVENAME = "calendar_type.json";
var calendar_type = Observable("mood_calendar");
var mood_cal_vis = Observable("Collapsed");
var sleep_cal_vis = Observable("Collapsed");
var eat_cal_vis = Observable("Collapsed");
var web_view_vis = Observable("Collapsed");
var home_page_vis = Observable("Visible");
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
var sleep_9 = Observable(false);
var sleep_6 = Observable(false);
var sleep_3 = Observable(false);
var enable_mood_send = Observable(false);
var chart_url = Observable();
var save_confirm = Observable(false);
var hours = Observable();
var minutes = Observable();
var sleep_quality = Observable(false);
var sleep_naps = Observable(false);
var sleep_tired = Observable(false);
var bed_h = Observable();
var bed_m = Observable();
var sleep_h = Observable();
var sleep_m = Observable();
var wake_h = Observable();
var wake_m = Observable();
var sleep_track_h = Observable("21");
var sleep_track_m = Observable("6");
var bed_track_h = Observable("21");
var bed_track_m = Observable("6");
var wake_track_h = Observable("6");
var wake_track_m = Observable("6");
var enable_sleep_send = Observable(false);
// var bg_image = Observable("Images/bubble_bg.jpg");
// var bg_image = Observable("Images/rain_bg.jpg");
// var bg_image = Observable("Images/rain_bg_2.jpg");
// var bg_image = Observable("Images/rain_bg_3.jpeg");
var bg_image = Observable("Images/bg_1.jpg");
var logo = Observable("Images/samk_logo.png");
var logo_img_blue = Observable("Images/samk_logo_2.png");
var logo_img_white = Observable("Images/samk_logo_3.png");
var emoji_status = Observable();
// var camera = require('FuseJS/Camera');
// var test_images = Observable();
// var show_help_text = Observable(true);
chart_url.value = "http://koikka.work/fuse/data.html?id="+Device.UUID+"&v="+new Date().getTime();
// push.on("registrationSucceeded", function(regID) {
//     console.log("Reg Succeeded: " + regID);
// });

// push.on("error", function(reason) {
//     console.log("Reg Failed: " + reason);
// });

// push.on("receivedMessage", function(payload) {
//     console.log("Recieved Push Notification: " + payload);
// });
console.log('setting up push notifications');

var registration_token = "";

// push_notif.on("registrationSucceeded", function(regID) {
//     console.log("Reg Succeeded: " + regID);
//     registration_token = regID;
// });

// push_notif.on("error", function(reason) {
//     console.log("Reg Failed: " + reason);
//     fetch_result.value = {
//         message: reason,
//         opacity: "1"
//     };
// });

// push_notif.on("receivedMessage", function(payload, fromNotificationBar) {
//     console.log("Received Push Notification: " + payload);
//     console.log ("fromNotificationBar="+fromNotificationBar);
//     // LocalNotify.now("Boom!", "Just like that", payload, true);
//     // LocalNotify.later(5, "Finally!", "4 seconds is a long time", "payload", true);
//     Payload.value = payload;
// });
// var clearBadgeNumber = function() {
//     Push.clearBadgeNumber();
// }
Push.onRegistrationSucceeded = function(regID) {
    console.log ("Reg Succeeded: " + regID);
    registration_token = regID;
    //status.value = "onRegistrationSucceeded: " + regID;
};

Push.onRegistrationFailed = function(reason) {
    console.log ("Reg Failed: " + reason);
};

Push.onReceivedMessage = function(payload, fromNotificationBar) {
    console.log ("Recieved Push Notification: " + payload);
    console.log ("fromNotificationBar="+fromNotificationBar);
    //message.value = payload;
};

var clearBadgeNumber = function() {
    Push.clearBadgeNumber();
}

var clearAllNotifications = function() {
    Push.clearAllNotifications();
}
// var clearAllNotifications = function() {
//     Push.clearAllNotifications();
// }
// LocalNotify.on("receivedMessage", function(payload) {
//     console.log("Received Local Notification: " + payload);
//     LocalNotify.clearAllNotifications();
// });
// LocalNotify.on("receivedMessage", function(payload) {
//     console.log("Received Local Notification: " + payload);
//     LocalNotify.clearAllNotifications();
//     LocalNotify.clearBadgeNumber();
// });
// function sendLater() {
//     LocalNotify.later(4, "Finally!", "4 seconds is a long time", "hmm?", true);
// }
// sendLater();
function get_mood_emoji() {
    console.log("get_mood_emoji()");
    var body = "action=emoji_status&id="+Device.UUID;
    var url = "http://koikka.work/fuse/fuse.php";
    fetch(url, {
        method: 'POST',
        headers: { "Content-type": "application/x-www-form-urlencoded; charset=UTF-8"},
        body: body,
        cache: false
    }).then(function(response) {
        if(response.ok) {
            var json = JSON.parse(response._bodyText);
            console.log(response._bodyText);
            console.log(json.data.status_emoji);
            emoji_status.value = json.data.status_emoji;
            // json.action = action;
            // callback(json);
        } else {
            console.log("False HTTP response : "+response.status);
            emoji_status.value = "http://koikka.work/fuse/rested/5.png";
        }
    }).catch(function(err) {
        if(err != "SyntaxError: Unexpected end of input") {
            // An error occurred somewhere in the Promise chain
            console.log("Server error : "+err);
        } else{
            console.log("SERVER SYNTAX ERROR");
        }
    });
}
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
    get_mood_emoji();
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
            console.log("registration_token: "+registration_token);
            get_mood_emoji();
            save_push_id(Device.UUID, registration_token);
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
function save_push_id(uuid, token) {
    console.log("save_push_id: "+uuid+"_"+token);
    var body = "action=save_push_id&id="+uuid+"&token="+token;
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
}
function handle_cal_visibility() {
    mood_cal_vis.value = "Collapsed";
    sleep_cal_vis.value = "Collapsed";
    eat_cal_vis.value = "Collapsed";
    fade_me_in.value = false;
}
function handle_empty_screen() {
    console.log("handle_empty_screen");
    console.log(mood_cal_vis.value);
    console.log(sleep_cal_vis.value);
    console.log(eat_cal_vis.value);
    console.log(web_view_vis.value);
    console.log(home_page_vis.value);
    if (mood_cal_vis.value == "Collapsed" && sleep_cal_vis.value == "Collapsed" && eat_cal_vis.value == "Collapsed" && home_page_vis.value == "Collapsed") {
        web_view_vis.value = "Visible";
    }
    chart_url.value = "http://koikka.work/fuse/data.html?id="+Device.UUID+"&v="+new Date().getTime();
    console.log("Updated chart url");
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
            get_mood_emoji();
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
    sleep_cal_vis.value = "Collapsed";
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
function highlight_mood_2(args) {
    console.log(args.mood);
    var moods = ["sleep_9", "sleep_6", "sleep_3"];
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
    var moods = ["sleep_9", "sleep_6", "sleep_3"];
    for (var i = 0; i < moods.length; i++) {
        if (eval(moods[i]).value == true) {
            emoji_selected = true;
            enable_sleep_send.value = true;
        }
    }
    // if (set_mood.value.length > 0 && emoji_selected) {
    //     enable_mood_send.value = true;
    // }
}

function formatTime(time) {
    if (time < 10) {
        return "0" + time;
    }
    return time;
};

function Minute(minute) {
    this.caption = minute;
    this.type = "minute";
};

function Hour(hour) {
    this.caption = hour;
    this.type = "hour";
}

function setupHours() {
    var hourBucket = [];
    for (var i = 0; i < 24; i++) {
        hourBucket.push(new Hour(formatTime(i)));
    }
    hours.replaceAll(hourBucket);
}

function setupMinutes() {
    var minuteBucket = [];
    for (var i = -5; i < 55; i += 5) {
        minuteBucket.push(new Minute(formatTime(i + 5)));
    }
    minutes.replaceAll(minuteBucket);
}

function activated(args) {
    //args.data.type == hour or minute
    //args.data.caption == value selected
    console.log("start: "+JSON.stringify(args));
    if (args.data.type == "hour") {
        bed_h.value = args.data.caption;
        sleep_track_h.value = args.data.caption;
    } else if (args.data.type == "minute") {
        bed_m.value = args.data.caption;
        sleep_track_m.value = (args.data.caption/5);
    }
}
function activated_end(args) {
    //args.data.type == hour or minute
    //args.data.caption == value selected
    console.log("end: "+JSON.stringify(args));
    if (args.data.type == "hour") {
        sleep_h.value = args.data.caption;
        sleep_track_h.value = args.data.caption;
    } else if (args.data.type == "minute") {
        sleep_m.value = args.data.caption;
        sleep_track_m.value = (args.data.caption/5);
    }
}
function activated_wake_up(args) {
     console.log("wake_up: "+JSON.stringify(args));
     if (args.data.type == "hour") {
        wake_h.value = args.data.caption;
    } else if (args.data.type == "minute") {
        wake_m.value = args.data.caption;
    }
}

setupHours();
setupMinutes();
get_mood_emoji();

function toggle_switch(args) {
    console.log(args.toggle);
    if (args.toggle == 'sleep_quality') {
        if (sleep_quality.value == true) {
            sleep_quality.value = false;
        } else {
            sleep_quality.value = true;
        }
    } else if (args.toggle == 'sleep_naps') {
        if (sleep_naps.value == true) {
            sleep_naps.value = false;
        } else {
            sleep_naps.value = true;
        }
    } else if (args.toggle == 'sleep_tired') {
        if (sleep_tired.value == true) {
            sleep_tired.value = false;
        } else {
            sleep_tired.value = true;
        }
    }
    console.log("Sleep quality: "+sleep_quality.value);
    console.log("Sleep naps: "+sleep_naps.value);
    console.log("Sleep tired: "+sleep_tired.value);
}
function save_sleep() {
    console.log("Sleep quality: "+sleep_quality.value);
    var sleep_quality_val = 0;
    if (sleep_quality.value == true) {
        sleep_quality_val = 1;
    }
    console.log(sleep_quality_val);
    var sleep_naps_val = 0;
    if (sleep_naps_val.value == true) {
        sleep_naps_val = 1;
    }
    var sleep_tired_val = 0;
    if (sleep_tired_val.value == true) {
        sleep_tired_val = 1;
    }
    console.log("Sleep naps: "+sleep_naps.value);
    console.log("Sleep tired: "+sleep_tired.value);
    console.log("Went to bed: "+bed_h.value+":"+bed_m.value);
    console.log("Started sleeping: "+sleep_h.value+":"+sleep_m.value);
    console.log("Woke up: "+wake_h.value+":"+wake_m.value);
    var moods = ["sleep_9", "sleep_6", "sleep_3"];
    for (var i = 0; i < moods.length; i++) {
        if (eval(moods[i]).value == true) {
            // console.log(moods[i]);
            mood = moods[i];
        }
    }
    mood = mood.split("_")[1];
    console.log("sleep_mood: "+mood);
    /*var tim1 = sleep_h.value+":"+sleep_m.value;
    var tim2 = wake_h.value+":"+wake_m.value;
    var ary1 = tim1.split(':'),ary2=tim2.split(':');
    var minsdiff=parseInt(ary2[0],10)*60+parseInt(ary2[1],10)-parseInt(ary1[0],10)*60-parseInt(ary1[1],10);
    var hours = String(100+Math.floor(minsdiff/60)).substr(1);
    var minutes = String(100+minsdiff%60).substr(1);
    console.log("--------- "+(hours)+':'+minutes);*/

    var start = new Date("2018-09-03 "+sleep_h.value+":"+sleep_m.value+":00");
    var end = new Date("2018-09-04 "+wake_h.value+":"+wake_m.value+":00");
    var elapsed = end - start; // time in milliseconds
    var difference = new Date(elapsed);
    //If you really want the hours/minutes,
    //Date has functions for that too:
    var diff_hours = difference.getHours();
    var diff_mins = difference.getMinutes();
    if (diff_mins < 10)
        diff_mins = "0"+diff_mins;
    // var sleep_time = parseFloat((diff_hours-2)+'.'+diff_mins).toFixed(2);
    var sleep_time = parseInt(diff_hours-2)+(parseInt(diff_mins)/60);
    console.log("--------- "+sleep_time);
    // console.log((parseInt(diff_mins)/60));
    // http://koikka.work/fuse/fuse.php?action=save_sleep&id=1&sleep_quality=1&sleep_naps=1&sleep_tired=0&sleep_time=9.25&sleep_mood=1&to_bed=21:00&started_sleeping=22:00&woke_up=6:00
    var body = "action=save_sleep&id="+Device.UUID+"&sleep_quality="+sleep_quality_val+"&sleep_naps="+sleep_naps_val+"&sleep_tired="+sleep_tired_val+"&sleep_time="+sleep_time+"&sleep_mood="+mood+"&to_bed="+bed_h.value+":"+bed_m.value+"&started_sleeping="+sleep_h.value+":"+sleep_m.value+"&woke_up="+wake_h.value+":"+wake_m.value+"";
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
            get_mood_emoji();
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
    bed_track_h.value = "21";
    bed_track_m.value = "6";
    wake_track_h.value = "6";
    wake_track_m.value = "6";
    enable_sleep_send.value = false;
    var sleep_moods = ["sleep_9", "sleep_6", "sleep_3"];
    for (var i = 0; i < sleep_moods.length; i++) {
        eval(sleep_moods[i]).value = false;
    }
    // sleep_quality.value = false;
    // sleep_naps.value = false;
    // sleep_tired.value = false;
    save_confirm.value = true;
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
    sleep_9: sleep_9,
    sleep_6: sleep_6,
    sleep_3: sleep_3,
    highlight_mood_2: highlight_mood_2,
    enable_mood_send: enable_mood_send,
    chart_url: chart_url,
    save_confirm: save_confirm,
    confirmed_save: confirmed_save,
    bg_image: bg_image,
    hours: hours,
    minutes: minutes,
    activated: activated,
    activated_end: activated_end,
    activated_wake_up: activated_wake_up,
    toggle_switch: toggle_switch,
    sleep_quality: sleep_quality,
    sleep_naps: sleep_naps,
    sleep_tired: sleep_tired,
    save_sleep: save_sleep,
    bed_h: bed_h,
    bed_m: bed_m,
    sleep_h: sleep_h,
    sleep_m: sleep_m,
    wake_h: wake_h,
    wake_m: wake_m,
    sleep_track_h: sleep_track_h,
    sleep_track_m: sleep_track_m,
    bed_track_h: bed_track_h,
    bed_track_m: bed_track_m,
    wake_track_h: wake_track_h,
    wake_track_m: wake_track_m,
    enable_sleep_send: enable_sleep_send,
    logo: logo,
    logo_img_blue: logo_img_blue,
    logo_img_white: logo_img_white,
    emoji_status: emoji_status,
    get_mood_emoji: get_mood_emoji,
    handle_empty_screen: handle_empty_screen,
    web_view_vis: web_view_vis,
    home_page_vis: home_page_vis,
    Payload: Payload,
    clearBadgeNumber: clearBadgeNumber,
    clearAllNotifications: clearAllNotifications,
    message: message,
    status: status
};










