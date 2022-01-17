# Philips Hue
![Banner](https://cdn.mos.cms.futurecdn.net/JEA2NPf2KmFJ8gosnG8F9S.jpg)
## About
All of the Philips products are controllable over Wi-Fi (using the [Philips Bridge](https://www.philips-hue.com/en-us/p/hue-bridge/046677458478)) and Bluetooth (up to 10 devices at once). The fraternity's bridge is in the audio closet and connected to "PitWifi".
## Setup
For controlling over Wi-Fi with your phone download the [Android app](https://play.google.com/store/apps/details?id=com.philips.lighting.hue2) or [iOS app](https://apps.apple.com/us/app/philips-hue/id1055281310). Connect to the Wi-Fi that the bridge is on. It should detect a bridge is on the network and prompt you to press the top button on the bridge. It should respond pretty fast and the whole process it pretty quick. If it doesn't find the bridge on the network, find the serial number (TODO: Insert Serial number here) from the bridge and put it in the app.
## Philips Hue App
Currently the pit is set as a room with all the lightbulbs added there. There are also two zones (Mezzanine & Downstairs) that reference the lightbulbs from "The Pit" room. Each Room and Zone has its own individual lighting scenes. It looks like there is a Bluetooth version of this app but it seems even more limited in functionality.
### Scenes
The app offers a decent amount of prebuilt ones (taking from an array of possible colors and randomly applying to lightbulbs. Differing results each time). You can also set up your own but be cautious about having multiple people messing with the lights at once. The app takes the current values of the lights themselves when creating a scene so if someone changes the values while your trying to create the scene it can get messed up.
### Actions
This is similar to actions for Alexa and google home. Overall pretty limited but you can set it up to change devices based off of an amount of time passing or time of day. Might be worth looking more into because currently they are just being used to turn off everything at 3am.
### Other
The app has support for syncing lights to music (and other stuff) but it only supports a different kind of lightbulb than the ones we have. Not sure if there's a newer version of the bulb or a new one entirely that has that functionality.
## Programming Manually
Philips seems to have actually decent [developer support](https://developers.meethue.com/). According to [an announcement from a few months back](https://developers.meethue.com/new-hue-api/), they seem to be in a transition period for their Hue API. Its probably worth going straight for the [V2 API](https://developers.meethue.com/develop/hue-api-v2/) and just waiting for the missing functionality to be added. From research online, it seems like there's a little bit of a delay from API calls and the system reacting. Possible projects to use the API for would be to have a graphical interface for the arcade machine to control the bridge, creating dynamic scenes that go beyond static colors, etc.
