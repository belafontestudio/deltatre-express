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



//Share
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Share',
  @'category' : @'Tab',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/share/(type)',
  @'virtualPageTitle' : @'Share - (type)'
});



//Video
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Pause',
  @'category' : @'Video',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)',
  @'virtualPageTitle' : @'Video - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Play',
  @'category' : @'Video',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)',
  @'virtualPageTitle' : @'Video - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Seek',
  @'category' : @'Video',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)',
  @'virtualPageTitle' : @'Video - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'VOD/LIVE/DVR',
  @'category' : @'Video',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)',
  @'virtualPageTitle' : @'Video - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Close',
  @'category' : @'Video',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)',
  @'virtualPageTitle' : @'Video - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Open',
  @'category' : @'Video',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)',
  @'virtualPageTitle' : @'Video - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Start',
  @'category' : @'Video',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)',
  @'virtualPageTitle' : @'Video - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'End',
  @'category' : @'Video',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)',
  @'virtualPageTitle' : @'Video - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Main',
  @'category' : @'Video',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)',
  @'virtualPageTitle' : @'Video - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Quad',
  @'category' : @'Video',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)',
  @'virtualPageTitle' : @'Video - (type)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Sart',
  @'category' : @'Video',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)',
  @'virtualPageTitle' : @'Video - (type)'
});

dataLayer.push({
  @'event':@'interaction',
  @'label':@'Pip',
  @'category' : @'Video',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)',
  @'virtualPageTitle' : @'Video - (type)'
});

//Fullscreen

dataLayer.push({
  @'event':@'interaction',
  @'label':@'Open',
  @'category' : @'Fullscreen',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(fullscreen)',
  @'virtualPageTitle' : @'Layout - Fullscreen - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Close',
  @'category' : @'Fullscreen',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(fullscreen)',
  @'virtualPageTitle' : @'Layout - Fullscreen - (action)'
});

//Maincam
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Open',
  @'category' : @'Maincam',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(maincam)',
  @'virtualPageTitle' : @'Layout - Maincam - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Close',
  @'category' : @'Maincam',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(maincam)',
  @'virtualPageTitle' : @'Layout - Maincam - (action)'
});

//Share

dataLayer.push({
  @'event':@'interaction',
  @'label':@'tw/fb/..',
  @'category' : @'Share',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/share',
  @'virtualPageTitle' : @'Share'
});

//Overlay

dataLayer.push({
  @'event':@'interaction',
  @'label':@'Back',
  @'category' : @'Overlay',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
  @'virtualPageTitle' : @'Overlay - html - (Name or ID)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'HTML',
  @'category' : @'Overlay',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
  @'virtualPageTitle' : @'Overlay - html - (Name or ID)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Expand',
  @'category' : @'Overlay',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
  @'virtualPageTitle' : @'Overlay - html - (Name or ID)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Collapse',
  @'category' : @'Overlay',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
  @'virtualPageTitle' : @'Overlay - html - (Name or ID)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Open',
  @'category' : @'Overlay',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
  @'virtualPageTitle' : @'Overlay - html - (Name or ID)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Viewport',
  @'category' : @'Overlay',
  @'action' : @'Scroll',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
  @'virtualPageTitle' : @'Overlay - html - (Name or ID)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Replay',
  @'category' : @'Overlay',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
  @'virtualPageTitle' : @'Overlay - html - (Name or ID)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Close',
  @'category' : @'Overlay',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
  @'virtualPageTitle' : @'Overlay - html - (Name or ID)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Play',
  @'category' : @'Overlay',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
  @'virtualPageTitle' : @'Overlay - html - (Name or ID)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Pause',
  @'category' : @'Overlay',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
  @'virtualPageTitle' : @'Overlay - html - (Name or ID)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Seek',
  @'category' : @'Overlay',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
  @'virtualPageTitle' : @'Overlay - html - (Name or ID)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Prev',
  @'category' : @'Overlay',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
  @'virtualPageTitle' : @'Overlay - html - (Name or ID)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Next',
  @'category' : @'Overlay',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
  @'virtualPageTitle' : @'Overlay - html - (Name or ID)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Volume',
  @'category' : @'Overlay',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
  @'virtualPageTitle' : @'Overlay - html - (Name or ID)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Volume',
  @'category' : @'Overlay',
  @'action' : @'Slide',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
  @'virtualPageTitle' : @'Overlay - html - (Name or ID)'
});



//Multicam
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Open',
  @'category' : @'Multicam',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(multicam)',
  @'virtualPageTitle' : @'Layout - Multicam - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Close',
  @'category' : @'Multicam',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(multicam)',
  @'virtualPageTitle' : @'Layout - Multicam - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Overlay',
  @'category' : @'Multicam',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(multicam)',
  @'virtualPageTitle' : @'Layout - Multicam - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Loaded',
  @'category' : @'Multicam',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(multicam)',
  @'virtualPageTitle' : @'Layout - Multicam - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Start',
  @'category' : @'Multicam',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(multicam)',
  @'virtualPageTitle' : @'Layout - Multicam - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'End',
  @'category' : @'Multicam',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(multicam)',
  @'virtualPageTitle' : @'Layout - Multicam - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Open',
  @'category' : @'Multicam Overlay',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(multicam)',
  @'virtualPageTitle' : @'Layout - Multicam - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Close',
  @'category' : @'Multicam Overlay',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(multicam)',
  @'virtualPageTitle' : @'Layout - Multicam - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Camera',
  @'category' : @'Multicam',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(multicam)',
  @'virtualPageTitle' : @'Layout - Multicam - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Camera',
  @'category' : @'Multicam Overlay',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(multicam)',
  @'virtualPageTitle' : @'Layout - Multicam - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Related',
  @'category' : @'Multicam',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(multicam)',
  @'virtualPageTitle' : @'Layout - Multicam - (action)'
});


//PIP
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Open',
  @'category' : @'Pip',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(pip)',
  @'virtualPageTitle' : @'Layout - Pip - (action)'
});

dataLayer.push({
  @'event':@'interaction',
  @'label':@'Close',
  @'category' : @'Pip',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(pip)',
  @'virtualPageTitle' : @'Layout - Pip - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Quad',
  @'category' : @'Pip',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(pip)',
  @'virtualPageTitle' : @'Layout - Pip - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Main',
  @'category' : @'Pip',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(pip)',
  @'virtualPageTitle' : @'Layout - Pip - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Swap',
  @'category' : @'Pip',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(pip)',
  @'virtualPageTitle' : @'Layout - Pip - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Resize',
  @'category' : @'Pip',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(pip)',
  @'virtualPageTitle' : @'Layout - Pip - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Main',
  @'category' : @'Pip',
  @'action' : @'DoubleClick',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(pip)',
  @'virtualPageTitle' : @'Layout - Pip - (action)'
});


//Quadcam
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Open',
  @'category' : @'Quad',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(quadcam)',
  @'virtualPageTitle' : @'Layout - QuadCam - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Close',
  @'category' : @'Quad',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(quadcam)',
  @'virtualPageTitle' : @'Layout - QuadCam - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Quad',
  @'category' : @'Quad',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(quadcam)',
  @'virtualPageTitle' : @'Layout - QuadCam - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Main',
  @'category' : @'Quad',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(quadcam)',
  @'virtualPageTitle' : @'Layout - QuadCam - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Remove',
  @'category' : @'Quad',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(quadcam)',
  @'virtualPageTitle' : @'Layout - QuadCam - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Swap',
  @'category' : @'Quad',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/layout/(quadcam)',
  @'virtualPageTitle' : @'Layout - QuadCam - (action)'
});


//Chapter
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Open',
  @'category' : @'Chapter',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/chapter/(id)',
  @'virtualPageTitle' : @'Chapter - (action)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Close',
  @'category' : @'Chapter',
  @'action' : @'Auto',
  @'nonInteraction' : @TRUE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/chapter/(id)',
  @'virtualPageTitle' : @'Chapter - (action)'
});


//End

dataLayer.push({
  @'event':@'interaction',
  @'label':@'Watch Again',
  @'category' : @'Suggested',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/suggested/(action)',
  @'virtualPageTitle' : @'Suggested - Again - (ID o Name)'
});
dataLayer.push({
  @'event':@'interaction',
  @'label':@'Select',
  @'category' : @'Suggested',
  @'action' : @'Click',
  @'nonInteraction' : @FALSE,
  @'virtualPageURL':@'/competition/(slug)/player/(version)/video/(kind)/suggested/(action)',
  @'virtualPageTitle' : @'Suggested - Again - (ID o Name)'
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
