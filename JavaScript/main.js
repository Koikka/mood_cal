//-------------------------- BUILD APP ----------------------------
// uno build --target=android -r --configuration=Release
// NOTIFICATION FIX: https://stackoverflow.com/questions/56118459/cant-compile-react-native-app-with-firebase-messaging
//-------------------------- BUILD APP ----------------------------


var Observable = require('FuseJS/Observable');
var Storage = require("FuseJS/Storage");
var Share = require("FuseJS/Share");
var FileSystem = require("FuseJS/FileSystem");
var Base64 = require("FuseJS/Base64");
var ImageTools = require("FuseJS/ImageTools");
var camera = require('FuseJS/Camera');
var cameraRoll = require("FuseJS/CameraRoll");
var md5 = require("JavaScript/md5.js");
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
var SAVE_SETTINGS = "settings.json";
var calendar_type = Observable("mood_calendar");
var mood_cal_vis = Observable("Collapsed");
var sleep_cal_vis = Observable("Collapsed");
var eat_cal_vis = Observable("Collapsed");
var web_view_vis = Observable("Collapsed");
var set_notification_vis = Observable("Collapsed");
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
var meal_h = Observable();
var meal_m = Observable();
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
var notif_toggle = Observable(false);

var eat_9 = Observable(false);
var eat_6 = Observable(false);
var eat_3 = Observable(false);
var eat_free_text = Observable("");
var accordion_icon = Observable("&#xf107;");
var compen = ["oksensin","laksatiivit","liikunta","diureetit"];
var items = Observable(compen);
var kompensaationkeinot = [];
var meal_picture = "";
var base_64_image = "";
var image_buffer = "";
var picture_test = Observable("");
var image_from_library = 0;
var shoud_reset_compensation = Observable(false);
var show_login_screen = Observable(true);
var show_all_content = Observable("Collapsed");
var username = Observable();
var password = Observable();
var saved_hash = "";

var cheer_message = Observable("");
var cheer_title = Observable("");
var cheer_added = Observable("");
var notifcation_token_set = false;
var user_id_set = false;

console.log("-----------------------------------------");
console.log(items);
console.log("-----------------------------------------");



// var camera = require('FuseJS/Camera');
// var test_images = Observable();
// var show_help_text = Observable(true);
chart_url.value = "https://koikka.work/fuse/data.html?id="+saved_hash+"&v="+new Date().getTime();
// push.on("registrationSucceeded", function(regID) {
//     console.log("Reg Succeeded: " + regID);
// });

// push.on("error", function(reason) {
//     console.log("Reg Failed: " + reason);
// });
/* Not used -> waiting for promise */
function get_from_memory(filePath, name) {
    console.log("--------------------------------- GET MEMORY ---------------------------------");
    return new Promise(function (resolve, reject) {
        var object = [];
        console.log("---------------------------------");
        var contents = Storage.readSync(SAVE_SETTINGS);
        console.log(contents);
        if (contents.length > 0) {
            // THERE IS DATA
            console.log("GO TO MAIN SCREEN");
            var json = JSON.parse(contents);
            saved_hash = json.hash;
            chart_url.value = "https://koikka.work/fuse/data.html?id="+saved_hash+"&v="+new Date().getTime();
            show_login_screen.value = false;
            user_id_set = true;
            if (notifcation_token_set && user_id_set)
                save_push_id(saved_hash, registration_token);
            get_cheer_message();
        } else {
            // SHOULD GO TO LOGIN
            console.log("GO TO LOGIN");
        }
        // Storage.read(SAVE_SETTINGS).then(function(content) {
        //     object = JSON.parse(content);
        //     console.log("--------------------------------- CONTENT ---------------------------------");
        //     console.log(content);
        //     // if (content.has("is_logged_user")) {
        //     //     console.log("USER IS LOGGED?");
        //     //     console.log(content.hash);
        //     // } else {
        //     //     console.log("SHOW LOGIN SCREEN");
        //     // }
        // }, function(error) {
        //     console.log("some error while reading data");
        // });
        console.log("---------------------------------");
        // return object;
        resolve(object)
    });
}
function saveMessage(username, password, created_hash) {
    // var created_hash = (+new Date).toString(36);
    var storeObject = {is_logged_user: true, username: username, password: password, hash: created_hash};
    Storage.write(SAVE_SETTINGS, JSON.stringify(storeObject));
    saved_hash = created_hash;
    chart_url.value = "https://koikka.work/fuse/data.html?id="+saved_hash+"&v="+new Date().getTime();
    show_login_screen.value = false;
    user_id_set = true;
    if (notifcation_token_set && user_id_set)
        save_push_id(saved_hash, registration_token);
    get_cheer_message();
    // hasStored.value = true;
}
function login() {
    console.log(username.value);
    console.log(password.value);
    console.log("------->"+md5(username.value+password.value));
    console.log("login");
    var total = username.value+password.value;
    var hash = md5(total);
    saveMessage(username.value, password.value, hash);
}
get_from_memory();
console.log('setting up push notifications');

var registration_token = "";
var device_uuid = "";

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
    console.log("------------------------------------------------------------------------------------------------------------------------------");
    console.log(registration_token);
    console.log("------------------------------------------------------------------------------------------------------------------------------");
    notifcation_token_set = true;
    if (notifcation_token_set && user_id_set)
        save_push_id(saved_hash, registration_token);
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
    // var body = "action=emoji_status&id="+Device.UUID;
    var body = "action=emoji_status&id="+saved_hash;
    var url = "https://koikka.work/fuse/fuse.php";
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
            emoji_status.value = "https://koikka.work/fuse/rested/5.png";
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


        // console.log('UUID:',   Device.UUID);
        // console.log('locale:', Device.locale);
        // console.log('system:', Device.system + " " + Device.systemVersion);
        // console.log('SDK:',    Device.SDKVersion);
        // console.log('device:', Device.vendor + " " + Device.model);
        // console.log('cores:',  Device.cores);
        // console.log('retina:', Device.isRetina);

        // var asyncUUID = Observable("");
        // setTimeout(function() {
        //     if (Device.UUID == '') {
        //         Device.getUUID().then(function(uuid) {
        //             console.log('getUUID: ' + uuid);
        //             asyncUUID.value = uuid;
        //         }).catch(function(error) {
        //             console.log('getUUID error: ' + error);
        //         });
        //     } else {
        //         asyncUUID.value = Device.UUID;
        //     }
        //     chart_url.value = "https://koikka.work/fuse/data.html?id="+Device.UUID+"&v="+new Date().getTime();
        //     console.log("registration_token: "+registration_token);
        //     get_mood_emoji();
        //     save_push_id(Device.UUID, registration_token);
        //     device_uuid = Device.UUID;
        // }, 2000);

        // module.exports = {
        //     name:      Device.vendor + " " + Device.model,
        //     UUID:      Device.UUID,
        //     asyncUUID: asyncUUID,
        //     locale:    Device.locale,
        //     cores:     Device.cores,
        //     isRetina:  Device.isRetina
        // };

//----------------------------------------------------------------------------
function get_cheer_message() {
    // https://koikka.work/fuse/fuse.php?action=get_cheer_message&id=
    var body = "action=get_cheer_message&id="+saved_hash+"&v="+new Date().getTime();
    var url = "https://koikka.work/fuse/fuse.php";
    fetch(url, {
        method: 'POST',
        headers: { "Content-type": "application/x-www-form-urlencoded; charset=UTF-8"},
        body: body,
        cache: false
    }).then(function(response) {
        if(response.ok) {
            var json = JSON.parse(response._bodyText);
            console.log(response._bodyText);
            // str = str.replace(/abc/g, '')
            cheer_title.value = json.cheer_title.replace(/_/g, ' ');
            cheer_message.value = json.cheer_message.replace(/_/g, ' ');
            cheer_added.value = json.time_added;
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
function save_push_id(uuid, token) {
    console.log("save_push_id: "+uuid+"_"+token);
    var body = "action=save_push_id&id="+uuid+"&token="+token;
    var url = "https://koikka.work/fuse/fuse.php";
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
    if (mood_cal_vis.value == "Collapsed" && sleep_cal_vis.value == "Collapsed" && eat_cal_vis.value == "Collapsed" && home_page_vis.value == "Collapsed" && set_notification_vis.value == "Collapsed") {
        web_view_vis.value = "Visible";
    }
    get_mood_emoji();
    get_cheer_message();
    // chart_url.value = "https://koikka.work/fuse/data.html?id="+Device.UUID+"&v="+new Date().getTime();
    chart_url.value = "https://koikka.work/fuse/data.html?id="+saved_hash+"&v="+new Date().getTime();
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
    // chart_url.value = "https://koikka.work/fuse/data.html?id="+Device.UUID+"&v="+new Date().getTime();
    chart_url.value = "https://koikka.work/fuse/data.html?id="+saved_hash+"&v="+new Date().getTime();
    var mood = "";
    var moods = ["h_9", "h_8", "h_7", "n_6", "n_5", "n_4", "s_3", "s_2", "s_1"];
    var feels = ["h_9", "h_8", "h_7", "n_6", "n_5", "n_4", "s_3", "s_2", "s_1"];
    for (var i = 0; i < moods.length; i++) {
        if (eval(moods[i]).value == true) {
            console.log(set_mood.value +": "+moods[i]);
            mood = moods[i];
        }
    }

    // var body = "action=save_mood&mood="+mood+"&value="+set_mood.value+"&id="+Device.UUID;
    var body = "action=save_mood&mood="+mood+"&value="+set_mood.value+"&id="+saved_hash;
    var url = "https://koikka.work/fuse/fuse.php";
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
    eat_cal_vis.value = "Collapsed";
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
    // var moods = ["sleep_9", "sleep_6", "sleep_3"];
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
function highlight_mood_3(args) {
    console.log(args.mood);
    var moods = ["eat_9", "eat_6", "eat_3"];
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
    // var moods = ["eat_9", "eat_6", "eat_3"];
    for (var i = 0; i < moods.length; i++) {
        if (eval(moods[i]).value == true) {
            emoji_selected = true;
        }
    }
}
function eat_compensation(args) {
    console.log(args.eat_compensation);
    if (kompensaationkeinot.length == 0) {
        kompensaationkeinot.push(args.eat_compensation);
    } else {
        var index = kompensaationkeinot.indexOf(args.eat_compensation);
        if (index > -1) {
            kompensaationkeinot.splice(index, 1);
        } else {
            kompensaationkeinot.push(args.eat_compensation);
        }
    }
    for (var i = 0; i < kompensaationkeinot.length; i++) {
        console.log("-----> "+kompensaationkeinot[i]);
    }
}

// function formatTime(time) {
//     if (time < 10) {
//         return "0" + time;
//     }
//     return time;
// };

// function Minute(minute) {
//     this.caption = minute;
//     this.type = "minute";
// };

// function Hour(hour) {
//     this.caption = hour;
//     this.type = "hour";
// }

// function setupHours() {
//     var hourBucket = [];
//     for (var i = 0; i < 24; i++) {
//         hourBucket.push(new Hour(formatTime(i)));
//     }
//     hours.replaceAll(hourBucket);
// }

// function setupMinutes() {
//     var minuteBucket = [];
//     for (var i = -5; i < 55; i += 5) {
//         minuteBucket.push(new Minute(formatTime(i + 5)));
//     }
//     minutes.replaceAll(minuteBucket);
// }

// function activated(args) {
//     //args.data.type == hour or minute
//     //args.data.caption == value selected
//     console.log("start: "+JSON.stringify(args));
//     if (args.data.type == "hour") {
//         bed_h.value = args.data.caption;
//         sleep_track_h.value = args.data.caption;
//     } else if (args.data.type == "minute") {
//         bed_m.value = args.data.caption;
//         sleep_track_m.value = (args.data.caption/5);
//     }
// }
// function activated_end(args) {
//     //args.data.type == hour or minute
//     //args.data.caption == value selected
//     console.log("end: "+JSON.stringify(args));
//     if (args.data.type == "hour") {
//         sleep_h.value = args.data.caption;
//         sleep_track_h.value = args.data.caption;
//     } else if (args.data.type == "minute") {
//         sleep_m.value = args.data.caption;
//         sleep_track_m.value = (args.data.caption/5);
//     }
// }
// function activated_wake_up(args) {
//      console.log("wake_up: "+JSON.stringify(args));
//      if (args.data.type == "hour") {
//         wake_h.value = args.data.caption;
//     } else if (args.data.type == "minute") {
//         wake_m.value = args.data.caption;
//     }
// }

// setupHours();
// setupMinutes();
get_mood_emoji();

function toggle_switch(args) {
    console.log(args.toggle);
    // if (args.toggle == 'sleep_quality') {
    //     if (sleep_quality.value == true) {
    //         sleep_quality.value = false;
    //     } else {
    //         sleep_quality.value = true;
    //     }
    // } else if (args.toggle == 'sleep_naps') {
    //     if (sleep_naps.value == true) {
    //         sleep_naps.value = false;
    //     } else {
    //         sleep_naps.value = true;
    //     }
    // } else if (args.toggle == 'sleep_tired') {
    //     if (sleep_tired.value == true) {
    //         sleep_tired.value = false;
    //     } else {
    //         sleep_tired.value = true;
    //     }
    // }
    console.log("Sleep quality: "+sleep_quality.value);
    console.log("Sleep naps: "+sleep_naps.value);
    console.log("Sleep tired: "+sleep_tired.value);
}
function toggle_sleep_quality() {
    if (sleep_quality.value == true) {
        sleep_quality.value = false;
    } else {
        sleep_quality.value = true;
    }
}
function toggle_sleep_naps() {
    if (sleep_naps.value == true) {
        sleep_naps.value = false;
    } else {
        sleep_naps.value = true;
    }
}
function toggle_sleep_tired() {
    if (sleep_tired.value == true) {
        sleep_tired.value = false;
    } else {
        sleep_tired.value = true;
    }
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
    // https://koikka.work/fuse/fuse.php?action=save_sleep&id=1&sleep_quality=1&sleep_naps=1&sleep_tired=0&sleep_time=9.25&sleep_mood=1&to_bed=21:00&started_sleeping=22:00&woke_up=6:00
    // var body = "action=save_sleep&id="+Device.UUID+"&sleep_quality="+sleep_quality_val+"&sleep_naps="+sleep_naps_val+"&sleep_tired="+sleep_tired_val+"&sleep_time="+sleep_time+"&sleep_mood="+mood+"&to_bed="+bed_h.value+":"+bed_m.value+"&started_sleeping="+sleep_h.value+":"+sleep_m.value+"&woke_up="+wake_h.value+":"+wake_m.value+"";
    var body = "action=save_sleep&id="+saved_hash+"&sleep_quality="+sleep_quality_val+"&sleep_naps="+sleep_naps_val+"&sleep_tired="+sleep_tired_val+"&sleep_time="+sleep_time+"&sleep_mood="+mood+"&to_bed="+bed_h.value+":"+bed_m.value+"&started_sleeping="+sleep_h.value+":"+sleep_m.value+"&woke_up="+wake_h.value+":"+wake_m.value+"";
    var url = "https://koikka.work/fuse/fuse.php";
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
    time_to_bed.value = new Date(Date.parse("2019-01-16T21:00:00.000Z"));
    time_to_sleep.value = new Date(Date.parse("2019-01-16T21:00:00.000Z"));
    time_to_wake.value = new Date(Date.parse("2019-01-17T07:00:00.000Z"));
    time_to_sleep_value.value = "21:00";
    time_to_bed_value.value = "21:00";
    time_to_wake_value.value = "07:00";
    // sleep_quality.value = false;
    // sleep_naps_val.value = false;
    // sleep_tired_val.value = false;
    // bed_track_h.value = "21";
    // bed_track_m.value = "6";
    // wake_track_h.value = "6";
    // wake_track_m.value = "6";
    enable_sleep_send.value = false;
    var sleep_moods = ["sleep_9", "sleep_6", "sleep_3"];
    for (var i = 0; i < sleep_moods.length; i++) {
        eval(sleep_moods[i]).value = false;
    }
    sleep_quality.value = false;
    sleep_naps.value = false;
    sleep_tired.value = false;
    save_confirm.value = true;
}
function save_eat() {
    var moods = ["eat_9", "eat_6", "eat_3"];
    var mood = "";
    for (var i = 0; i < moods.length; i++) {
        if (eval(moods[i]).value == true) {
            console.log(moods[i]);
            mood = moods[i];
            mood = mood.split("_")[1];
        }
    }
    console.log("Eating siley: "+mood);
    console.log("Eated at: "+meal_h.value+":"+meal_m.value);
    console.log("Compensation: ");
    var compensation = "";
    for (var i = 0; i < kompensaationkeinot.length; i++) {
        console.log("-----> "+kompensaationkeinot[i]);
        if (i > 0)
            compensation += ",";
        compensation += kompensaationkeinot[i];
    }
    console.log("Free text: "+eat_free_text.value);
    console.log("Meal picture: "+meal_picture);
    console.log("Base_64_image: "+base_64_image);

    // SAMPLE 
    // https://koikka.work/fuse/fuse.php?action=save_meal&id=83E95ADC-3780-35C6-A7E4-90069C5A3BE8&meal_quality=9&meal_time=(observable) 11:(observable) 25&compensation=oksensin,liikunta&free_text=blah&meal_img=/9j/4AAQSkZJRgABAQAAAQABAAD/2wBDAAEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQH/2wBDAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQH/wAARCAHgAOIDASIAAhEBAxEB/8QAHwAAAgMAAwEBAQEAAAAAAAAABgcFCAkAAwQKAgsB/8QAORAAAgMAAgIBBAICAQMDAgQHAgMBBAUGEhETBwAUISIIFSMxMgkWJDNBURdCJTRDUmFxCpEYodL/xAAdAQACAgMBAQEAAAAAAAAAAAACAwEEAAUGBwgJ/8QAPhEAAQIEAwYEBQMEAAYCAwAAAQIRAAMhMRJBUQRhcYGR8AUTobEGIsHR4Qcy8RRCUmIVIzNyksIIJFOCov/aAAwDAQACEQMRAD8A+hr494tw3AMWcap/eWBT0/t7hfe3mRNZww9pygVUXXEvcM/1yqEvqMKu1HaGEZ/r6CrqDQlwVoBbjlsWqVaISpcg5hNsExS1hDJY5pLH1qE3sIFwfaudHk21lMCcGy5lywipUZZsQeh3cDClMVFX4tKrOE2EqSSmDYqAGPWsFD9FeNk75ptXZ1izbDUMt2bb7UoI0slvud9wLUNIokRKSGQAWm2PemfzNTzgoMkUDUAZh68/WNqqWXdSnJvmfePbc4xo0mhQXbya2XNFFfTi5ZZ97ZimbCt6Dr1OsKUGVdry+4L/AAJuSuH+R9Mr6
    var url = "https://koikka.work/fuse/fuse.php";
    // var body = "action=save_meal&id="+Device.UUID+"&meal_quality="+mood+"&meal_time="+meal_h.value+":"+meal_m.value+"&compensation="+compensation+"&free_text="+eat_free_text.value+"&meal_img="+base_64_image+"&image_from_library="+image_from_library;
    var body = "action=save_meal&id="+saved_hash+"&meal_quality="+mood+"&meal_time="+meal_h.value+":"+meal_m.value+"&compensation="+compensation+"&free_text="+eat_free_text.value+"&meal_img="+base_64_image+"&image_from_library="+image_from_library;
    console.log(url+"?"+body);
    fetch(url, {
        method: 'POST',
        headers: { "Content-type": "application/x-www-form-urlencoded; charset=UTF-8"},
        body: body,
        cache: false
    }).then(function(response) {
        if(response.ok) {
            // var json = JSON.parse(response._bodyText);
            console.log(response._bodyText);
            // get_mood_emoji();
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
    // var body = "action=save_sleep&id="+Device.UUID+"&sleep_quality="+sleep_quality_val+"&sleep_naps="+sleep_naps_val+"&sleep_tired="+sleep_tired_val+"&sleep_time="+sleep_time+"&sleep_mood="+mood+"&to_bed="+bed_h.value+":"+bed_m.value+"&started_sleeping="+sleep_h.value+":"+sleep_m.value+"&woke_up="+wake_h.value+":"+wake_m.value+"";
    // var url = "https://koikka.work/fuse/fuse.php";
    // fetch(url, {
    //     method: 'POST',
    //     headers: { "Content-type": "application/x-www-form-urlencoded; charset=UTF-8"},
    //     body: body,
    //     cache: false
    // }).then(function(response) {
    //     if(response.ok) {
    //         // var json = JSON.parse(response._bodyText);
    //         console.log(response._bodyText);
    //         get_mood_emoji();
    //         // json.action = action;
    //         // callback(json);
    //     } else {
    //         console.log("False HTTP response : "+response.status);
    //     }
    // }).catch(function(err) {
    //     if(err != "SyntaxError: Unexpected end of input") {
    //         // An error occurred somewhere in the Promise chain
    //         console.log("Server error : "+err);
    //     } else{
    //         console.log("SERVER SYNTAX ERROR");
    //     }
    // });

    time_of_meal_value.value = "12:00";
    time_of_meal.value = new Date(Date.parse("2019-01-17T12:00:00.000Z"));

    var eat_moods = ["eat_9", "eat_6", "eat_3"];
    for (var i = 0; i < eat_moods.length; i++) {
        eval(eat_moods[i]).value = false;
    }
    kompensaationkeinot = [];
    eat_free_text.value = "";
    // items = Observable(compen);
    meal_picture = "";
    base_64_image = "";
    picture_test.value = "";
    save_confirm.value = true;
    image_from_library = 0;
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
var time_to_bed_visibility = Observable("Collapsed");
var time_to_sleep_visibility = Observable("Collapsed");
var time_to_wake_visibility = Observable("Collapsed");
var time_of_meal_visibility = Observable("Collapsed");
var time_to_bed = Observable(new Date(Date.parse("2019-01-16T21:00:00.000Z")));
var time_to_sleep = Observable(new Date(Date.parse("2019-01-16T21:00:00.000Z")));
var time_to_wake = Observable(new Date(Date.parse("2019-01-17T07:00:00.000Z")));
var time_of_meal = Observable(new Date(Date.parse("2019-01-17T12:00:00.000Z")));
var time_to_bed_value = Observable("21:00");
var time_to_sleep_value = Observable("21:00");
var time_to_wake_value = Observable("07:00");
var time_of_meal_value = Observable("12:00");
var time_to_notify = Observable(new Date(Date.parse("2019-01-16T09:00:00.000Z")));
var notification_time = "09:00";


time_to_sleep.onValueChanged(module, function(date) {
    // console.log("time_to_sleep changed: " + JSON.stringify(date));
    let time_string = JSON.stringify(date);
    time_string = time_string.split("T")[1];
    time_string = time_string.split(":00.000Z")[0];
    console.log(time_string);
    time_to_sleep_value.value = time_string;
    sleep_h.value = time_string.split(":")[0];
    sleep_m.value = time_string.split(":")[1];
});
time_to_bed.onValueChanged(module, function(date) {
    // console.log("time_to_bed changed: " + JSON.stringify(date));
    let time_string = JSON.stringify(date);
    time_string = time_string.split("T")[1];
    time_string = time_string.split(":00.000Z")[0];
    console.log(time_string);
    time_to_bed_value.value = time_string;
    time_to_sleep.value = time_to_bed.value;
    bed_h.value = time_string.split(":")[0];
    bed_m.value = time_string.split(":")[1];
    // time_to_sleep.value = new Date(Date.parse("2019-01-16T"+time_string+":00.000Z"));
});
time_to_wake.onValueChanged(module, function(date) {
    // console.log("time_to_sleep changed: " + JSON.stringify(date));
    let time_string = JSON.stringify(date);
    time_string = time_string.split("T")[1];
    time_string = time_string.split(":00.000Z")[0];
    console.log(time_string);
    time_to_wake_value.value = time_string;
    wake_h.value = time_string.split(":")[0];
    wake_m.value = time_string.split(":")[1];
});

time_of_meal.onValueChanged(module, function(date) {
    // console.log("time_to_sleep changed: " + JSON.stringify(date));
    let time_string = JSON.stringify(date);
    time_string = time_string.split("T")[1];
    time_string = time_string.split(":00.000Z")[0];
    console.log(time_string);
    time_of_meal_value.value = time_string;
    meal_h.value = time_string.split(":")[0];
    meal_m.value = time_string.split(":")[1];
});
time_to_notify.onValueChanged(module, function(date) {
    // console.log("time_to_sleep changed: " + JSON.stringify(date));
    let time_string = JSON.stringify(date);
    time_string = time_string.split("T")[1];
    time_string = time_string.split(":00.000Z")[0];
    console.log(time_string);
    notification_time = time_string;
});
function time_to_bed_visibility_func() {
    console.log("time_to_bed_visibility: "+time_to_bed_visibility.value);
    if (time_to_bed_visibility.value == "Visible") {
        time_to_bed_visibility.value = "Collapsed";
    } else {
        time_to_bed_visibility.value = "Visible";
    }
}
function time_to_sleep_visibility_func() {
    console.log("time_to_sleep_visibility: "+time_to_sleep_visibility.value);
    if (time_to_sleep_visibility.value == "Visible") {
        time_to_sleep_visibility.value = "Collapsed";
    } else {
        time_to_sleep_visibility.value = "Visible";
    }
}
function time_to_wake_visibility_func() {
    console.log("time_to_wake_visibility: "+time_to_wake_visibility.value);
    if (time_to_wake_visibility.value == "Visible") {
        time_to_wake_visibility.value = "Collapsed";
    } else {
        time_to_wake_visibility.value = "Visible";
    }
}
function time_of_meal_visibility_func() {
    console.log("-------------------"+time_of_meal_visibility.value);
    if (time_of_meal_visibility.value == "Visible") {
        time_of_meal_visibility.value = "Collapsed";
    } else {
        time_of_meal_visibility.value = "Visible";
    }
}

function notification_page() {
    console.log("----");
}
function time_to_notify_func() {
    console.log("--");
    console.log(saved_hash);
    console.log(notification_time+" - "+registration_token+" - "+device_uuid);
    if (notif_toggle.value == false) {
        notification_time = "";
    }
    // console.log("https://koikka.work/fuse/fuse.php?action=set_notification&id="+Device.UUID+"&push_id="+registration_token+"&time="+notification_time);
    // var body = "action=set_notification&id="+Device.UUID+"&push_id="+registration_token+"&time="+notification_time;
    console.log("https://koikka.work/fuse/fuse.php?action=set_notification&id="+saved_hash+"&push_id="+registration_token+"&time="+notification_time);
    var body = "action=set_notification&id="+saved_hash+"&push_id="+registration_token+"&time="+notification_time;
    var url = "https://koikka.work/fuse/fuse.php";
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
}
function get_time_to_notify_func() {
    console.log("-------------------");
    // console.log(Device.UUID);
    // console.log(notification_time+" - "+registration_token+" - "+device_uuid);
    // console.log("https://koikka.work/fuse/fuse.php?action=get_notification&id="+Device.UUID+"&push_id="+registration_token);
    // var body = "action=get_notification&id="+Device.UUID+"&push_id="+registration_token;
    var body = "action=get_notification&id="+saved_hash+"&push_id="+registration_token;
    var url = "https://koikka.work/fuse/fuse.php";
    fetch(url, {
        method: 'POST',
        headers: { "Content-type": "application/x-www-form-urlencoded; charset=UTF-8"},
        body: body,
        cache: false
    }).then(function(response) {
        if(response.ok) {
            // var json = JSON.parse(response._bodyText);
            console.log(response._bodyText);
            var json = JSON.parse(response._bodyText);
            console.log(json.time_to_notify);
            if (json.time_to_notify.length > 0)
                time_to_notify.value = new Date(Date.parse("2019-01-16T"+json.time_to_notify+":00.000Z"));
            notif_toggle.value = json.notifications;
            // if (notif_toggle.value == true) {
            //     notif_toggle.value = false;
            // } else {
            //     notif_toggle.value = true;
            // }
            console.log("set notif toggle to: "+notif_toggle.value);
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
    // save_confirm.value = true;
}
function notif_toggle_handler() {
    console.log("notif_toggle_in: "+notif_toggle.value);
    if (notif_toggle.value == true || notif_toggle.value == "true") {
        notif_toggle.value = false;
    } else {
        notif_toggle.value = true;
    }
    console.log("notif_toggle_out: "+notif_toggle.value);
}
function attach_image_from_roll() {
    cameraRoll.getImage()
    .then(function(image) {
        var imgBase64 = "";
        picture_test.value = image.path;
        ImageTools.resize(image, { mode: ImageTools.KEEP_ASPECT, desiredWidth: 640, desiredHeight: 640}).then(function(newImage) {
            var arrayBuff = FileSystem.readBufferFromFileSync(newImage.path);
            var b64data_2 = Base64.encodeBuffer(arrayBuff); // send this to the backend
            // test_image_xhr(encodeURIComponent(b64data_2));
            base_64_image = encodeURIComponent(b64data_2);
            picture_test.value = newImage.path;
            image_from_library = 1;
        });
    }, function(error) {
        // Will be called if the user aborted the selection or if an error occurred.
    });
}
function open_camera() {
    camera.takePicture(640,640).then(function(image) {
    // camera.takePicture().then(function(image) {
        var arrayBuff = FileSystem.readBufferFromFileSync(image.path);
        var b64data_2 = Base64.encodeBuffer(arrayBuff); // send this to the backend
        // test_image_xhr(encodeURIComponent(b64data_2));
        base_64_image = encodeURIComponent(b64data_2);
        picture_test.value = image.path;
        image_from_library = 0;
        // image.release();
        return cameraRoll.publishImage(image);
    }).catch(function(error) {
        console.log("--------------------------------------");
        console.log(error);
        console.log("--------------------------------------");
        //Something went wrong, see error for details
    });
}
function test_image_xhr(b64data) {
    // var body = "action=save_meal&id="+Device.UUID+"&meal_quality=9&meal_time="+meal_h.value+":"+meal_m.value+"&compensation=&free_text="+eat_free_text.value+"&meal_img="+b64data;//Base64.encodeBuffer(buffer);
    var body = "action=save_meal&id="+saved_hash+"&meal_quality=9&meal_time="+meal_h.value+":"+meal_m.value+"&compensation=&free_text="+eat_free_text.value+"&meal_img="+b64data;//Base64.encodeBuffer(buffer);
    // console.log(buffer);
    var url = "https://koikka.work/fuse/fuse.php";
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
function reset_compensation_function() {
    // if (shoud_reset_compensation.value) {
    //     // shoud_reset_compensation.value = false;
    // } else {
    //     shoud_reset_compensation.value = true;
    // }
    shoud_reset_compensation.value = true;
}
function reset_compensation_function_2() {
    shoud_reset_compensation.value = false;
}
function empty_memory() {
    Storage.write(SAVENAME, "");
}

module.exports = {
    get_cheer_message: get_cheer_message,
    cheer_message: cheer_message,
    cheer_title: cheer_title,
    cheer_added: cheer_added,
    show_login_screen: show_login_screen,
    show_all_content: show_all_content,
    username: username,
    password: password,
    login: login,
    open_camera: open_camera,
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
    /*activated: activated,
    activated_end: activated_end,
    activated_wake_up: activated_wake_up,*/
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
    set_notification_vis: set_notification_vis,
    home_page_vis: home_page_vis,
    Payload: Payload,
    clearBadgeNumber: clearBadgeNumber,
    clearAllNotifications: clearAllNotifications,
    message: message,
    status: status,
    time_to_bed: time_to_bed,
    time_to_bed_value: time_to_bed_value,
    time_to_bed_visibility: time_to_bed_visibility,
    time_to_bed_visibility_func: time_to_bed_visibility_func,
    time_to_sleep: time_to_sleep,
    time_to_sleep_value: time_to_sleep_value,
    time_to_sleep_visibility: time_to_sleep_visibility,
    time_to_sleep_visibility_func: time_to_sleep_visibility_func,
    time_to_wake: time_to_wake,
    time_to_wake_value: time_to_wake_value,
    time_to_wake_visibility: time_to_wake_visibility,
    time_to_wake_visibility_func: time_to_wake_visibility_func,
    time_of_meal_visibility_func: time_of_meal_visibility_func,
    time_of_meal_visibility: time_of_meal_visibility,
    time_of_meal_value: time_of_meal_value,
    time_of_meal: time_of_meal,
    meal_h: meal_h,
    meal_m: meal_m,
    notification_page: notification_page,
    time_to_notify: time_to_notify,
    time_to_notify_func: time_to_notify_func,
    get_time_to_notify_func: get_time_to_notify_func,
    notif_toggle: notif_toggle,
    notif_toggle_handler: notif_toggle_handler,
    toggle_sleep_quality: toggle_sleep_quality,
    toggle_sleep_naps: toggle_sleep_naps,
    toggle_sleep_tired: toggle_sleep_tired,
    items : items,
    accordion_icon: accordion_icon,
    eat_free_text: eat_free_text,
    highlight_mood_3: highlight_mood_3,
    eat_compensation: eat_compensation,
    eat_9: eat_9,
    eat_6: eat_6,
    eat_3: eat_3,
    save_eat: save_eat,
    picture_test: picture_test,
    attach_image_from_roll: attach_image_from_roll,
    shoud_reset_compensation: shoud_reset_compensation,
    reset_compensation_function: reset_compensation_function,
    reset_compensation_function_2: reset_compensation_function_2,
    shareText : function() {
        Share.shareText(chart_url.value, "Linkki minun historiaan");
    }
};

/*
,
    time_to_bed: time_to_bed,
    time_to_sleep: time_to_sleep,
    time_to_bed_visibility: time_to_bed_visibility,
    time_to_bed_visibility_func: time_to_bed_visibility_func
 */









