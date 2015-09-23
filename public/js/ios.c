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
