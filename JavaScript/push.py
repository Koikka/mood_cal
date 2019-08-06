# from gcm import *

# gcm = GCM("AIzaSyC62U88UsqshDVLFN_Z8cC8p8RwSsiYXV8")
# data = {'the_message': 'You have x new friends', 'param2': 'value2'}

# reg_id = 'APA91bE2FZ4kCjBgX1pl78zwPTg-EigUUiYp04bqE_hRo-C56xX5sxmzL570wjvzZgySpbYRFfhPoipw2grLGsqFJUr9xJYerQUTe7T2v6XTtwVM-Urcj9yGMYJc69dV64p5ryh4stxq'

# gcm.plaintext_request(registration_id=reg_id, data=data)


# Send to single device.
from pyfcm import FCMNotification

push_service = FCMNotification(api_key="AIzaSyC62U88UsqshDVLFN_Z8cC8p8RwSsiYXV8")

# OR initialize with proxies

# proxy_dict = {
#           "http"  : "http://127.0.0.1",
#           "https" : "http://127.0.0.1",
#         }
# push_service = FCMNotification(api_key="<api-key>", proxy_dict=proxy_dict)

# Your api-key can be gotten from:  https://console.firebase.google.com/project/<project-name>/settings/cloudmessaging

registration_id = "APA91bE2FZ4kCjBgX1pl78zwPTg-EigUUiYp04bqE_hRo-C56xX5sxmzL570wjvzZgySpbYRFfhPoipw2grLGsqFJUr9xJYerQUTe7T2v6XTtwVM-Urcj9yGMYJc69dV64p5ryh4stxq"
message_title = "Uber update"
message_body = "Hi john, your customized news for today is ready"
result = push_service.notify_single_device(registration_id=registration_id, message_title=message_title, message_body=message_body)

# Send to multiple devices by passing a list of ids.
# registration_ids = ["<device registration_id 1>", "<device registration_id 2>", ...]
# message_title = "Uber update"
# message_body = "Hope you're having fun this weekend, don't forget to check today's news"
# result = push_service.notify_multiple_devices(registration_ids=registration_ids, message_title=message_title, message_body=message_body)

print result