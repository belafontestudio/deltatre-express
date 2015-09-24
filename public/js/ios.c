//ADV nonInteraction

[dataLayer push:@{
  @"event": @"interaction",
  @"label": @"Start",
  @"category": @"Adv",
  @"action": @"Auto",
  @"nonInteraction": @TRUE,
  @"virtualPageURL": @"/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
  @"virtualPageTitle": @"Adv - (type)",
}];

[dataLayer push:@{
  @"event": @"interaction",
  @"label": @"Stop",
  @"category": @"Adv",
  @"action": @"Auto",
  @"nonInteraction": @TRUE,
  @"virtualPageURL": @"/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
  @"virtualPageTitle": @"Adv - (type)",
}];

[dataLayer push:@{
  @"event": @"interaction",
  @"label": @"Fail",
  @"category": @"Adv",
  @"action": @"Auto",
  @"nonInteraction": @TRUE,
  @"virtualPageURL": @"/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
  @"virtualPageTitle": @"Adv - (type)",
}];

[dataLayer push:@{
  @"event": @"interaction",
  @"label": @"Single Fail",
  @"category": @"Adv",
  @"action": @"Auto",
  @"nonInteraction": @TRUE,
  @"virtualPageURL": @"/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
  @"virtualPageTitle": @"Adv - (type)",
}];

[dataLayer push:@{
  @"event": @"interaction",
  @"label": @"Single Start",
  @"category": @"Adv",
  @"action": @"Auto",
  @"nonInteraction": @TRUE,
  @"virtualPageURL": @"/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
  @"virtualPageTitle": @"Adv - (type)",
}];

[dataLayer push:@{
  @"event": @"interaction",
  @"label": @"Single Stop",
  @"category": @"Adv",
  @"action": @"Auto",
  @"nonInteraction": @TRUE,
  @"virtualPageURL": @"/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
  @"virtualPageTitle": @"Adv - (type)",
}];

//ADV interaction
[dataLayer push:@{
  @"event": @"interaction",
  @"label": @"Open",
  @"category": @"Adv",
  @"action": @"Click",
  @"nonInteraction": false,
  @"virtualPageURL": @"/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
  @"virtualPageTitle": @"Adv - (type)",
}];

[dataLayer push:@{
  @"event": @"interaction",
  @"label": @"Close",
  @"category": @"Adv",
  @"action": @"Click",
  @"nonInteraction": false,
  @"virtualPageURL": @"/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
  @"virtualPageTitle": @"Adv - (type)",
}];

[dataLayer push:@{
  @"event": @"interaction",
  @"label": @"Play",
  @"category": @"Adv",
  @"action": @"Click",
  @"nonInteraction": false,
  @"virtualPageURL": @"/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
  @"virtualPageTitle": @"Adv - (type)",
}];

[dataLayer push:@{
  @"event": @"interaction",
  @"label": @"Pause",
  @"category": @"Adv",
  @"action": @"Click",
  @"nonInteraction": false,
  @"virtualPageURL": @"/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
  @"virtualPageTitle": @"Adv - (type)",
}];

[dataLayer push:@{
  @"event": @"interaction",
  @"label": @"Mute",
  @"category": @"Adv",
  @"action": @"Click",
  @"nonInteraction": false,
  @"virtualPageURL": @"/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
  @"virtualPageTitle": @"Adv - (type)",
}];



//ADV View
[dataLayer push:@{
  @"event": @"VirtualPageview",
  @"virtualPageURL": @"/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
  @"virtualPageTitle": @"Adv - (type)",
}];


//Wizard
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Autostart',
  @'category' : @'Wizard',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/wizard/(type)',
  @'virtualPageTitle' : @'Wizard - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Close',
  @'category' : @'Wizard',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/wizard/(type)',
  @'virtualPageTitle' : @'Wizard - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Prev',
  @'category' : @'Wizard',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/wizard/(type)',
  @'virtualPageTitle' : @'Wizard - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Next',
  @'category' : @'Wizard',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/wizard/(type)',
  @'virtualPageTitle' : @'Wizard - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Out',
  @'category' : @'Wizard',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/wizard/(type)',
  @'virtualPageTitle' : @'Wizard - (type)'
});

//Alert

dataLayer.push({
  @'event':@'interaction',
  @'label':@'Open',
  @'category' : @'Alert',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/alert/(type)',
  @'virtualPageTitle' : @'Alert - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Close',
  @'category' : @'Alert',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/alert/(type)',
  @'virtualPageTitle' : @'Alert - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Activate',
  @'category' : @'Alert',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/alert/(type)',
  @'virtualPageTitle' : @'Alert - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Deactivate',
  @'category' : @'Alert',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/alert/(type)',
  @'virtualPageTitle' : @'Alert - (type)'
});


//Bar
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Seek',
  @'category' : @'Bar',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/player/bar/(type)',
  @'virtualPageTitle' : @'Player - Bar - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Seek',
  @'category' : @'Bar',
  @'action' : @'Drag',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/player/bar/(type)',
  @'virtualPageTitle' : @'Player - Bar - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Replay',
  @'category' : @'Bar',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/player/bar/(type)',
  @'virtualPageTitle' : @'Player - Bar - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Play',
  @'category' : @'Bar',
  @'action' : @'Click',
  @'play' : @'true',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/player/bar/(type)',
  @'virtualPageTitle' : @'Player - Bar - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Pause',
  @'category' : @'Bar',
  @'action' : @'Click',
  @'play' : @'false',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/player/bar/(type)',
  @'virtualPageTitle' : @'Player - Bar - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Live',
  @'category' : @'Bar',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/player/bar/(type)',
  @'virtualPageTitle' : @'Player - Bar - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Wizard',
  @'category' : @'Bar',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/player/bar/(type)',
  @'virtualPageTitle' : @'Player - Bar - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Fullscreen',
  @'category' : @'Bar',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/player/bar/(type)',
  @'virtualPageTitle' : @'Player - Bar - (type)'
});


//Bitrate
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Bitrate',
  @'category' : @'Bar',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/bitrate/(type)',
  @'virtualPageTitle' : @'Bitrate - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Bitrate',
  @'category' : @'Bar',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/bitrate/(type)',
  @'virtualPageTitle' : @'Bitrate - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Bitrate',
  @'category' : @'Bar',
  @'action' : @'Auto',
  @'value' : @1,
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/bitrate/(type)',
  @'virtualPageTitle' : @'Bitrate - (type)'
});


//Marker
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Marker',
  @'category' : @'Bar',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/marker/(type)',
  @'virtualPageTitle' : @'Marker - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'PlaybyPlay',
  @'category' : @'Marker',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/marker/(type)',
  @'virtualPageTitle' : @'Marker - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Multicam',
  @'category' : @'Marker',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/marker/(type)',
  @'virtualPageTitle' : @'Marker - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Share',
  @'category' : @'Marker',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/marker/(type)',
  @'virtualPageTitle' : @'Marker - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Open',
  @'category' : @'Marker',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/marker/(type)',
  @'virtualPageTitle' : @'Marker - (type)'
});


//Volume

dataLayer.push({
  @'event':@'interaction',
  @'label':@'Volume',
  @'category' : @'Bar',
  @'action' : @'Slide',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/volume/(type)',
  @'virtualPageTitle' : @'Volume - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Volume',
  @'category' : @'Bar',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/volume/(type)',
  @'virtualPageTitle' : @'Volume - (type)'
});



//Video

dataLayer.push({
  @'event':@'interaction',
  @'label':@'VOD/LIVE/DVR',
  @'category' : @'Video',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/video/1',
  @'virtualPageTitle' : @'video id'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Close',
  @'category' : @'Video',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/video/1',
  @'virtualPageTitle' : @'video id'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Open',
  @'category' : @'Video',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/video/1',
  @'virtualPageTitle' : @'video id'
});

dataLayer.push({
  @'event':@'VirtualPageview',
  @'virtualPageURL':@'/competition/(slug)/player/(version)',
  @'virtualPageTitle' : @'Player - (version)'
});

dataLayer.push({
  @'event':@'VirtualPageview',
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)',
  @'virtualPageTitle' : @'Video - (kind)'
});
dataLayer.push({
  @'event':@'VirtualPageview',
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/adv/(type)',
  @'virtualPageTitle' : @'Adv - (type)'
});
dataLayer.push({
  @'event':@'VirtualPageview',
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/html/(id)',
  @'virtualPageTitle' : @'Overlay - html - (Name or ID)'
});
dataLayer.push({
  @'event':@'VirtualPageview',
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/commentary',
  @'virtualPageTitle' : @'Overlay - commentary - (Name or ID)'
});
