//ADV nonInteraction

dataLayer.pushEvent(
  "interaction",
  DataLayer.mapOf(
    "label", "Start",
    "category", "Adv",
    "action", "Auto",
    "nonInteraction", true,
    "virtualPageURL", "/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
    "virtualPageTitle", "Adv - (type)"
  )
);

dataLayer.pushEvent(
  "interaction",
  DataLayer.mapOf(
    "label", "Stop",
    "category", "Adv",
    "action", "Auto",
    "nonInteraction", true,
    "virtualPageURL", "/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
    "virtualPageTitle", "Adv - (type)"
  )
);

dataLayer.pushEvent(
  "interaction",
  DataLayer.mapOf(
    "label", "Fail",
    "category", "Adv",
    "action", "Auto",
    "nonInteraction", true,
    "virtualPageURL", "/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
    "virtualPageTitle", "Adv - (type)"
  )
);

dataLayer.pushEvent(
  "interaction",
  DataLayer.mapOf(
    "label", "Single Fail",
    "category", "Adv",
    "action", "Auto",
    "nonInteraction", true,
    "virtualPageURL", "/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
    "virtualPageTitle", "Adv - (type)"
  )
);

dataLayer.pushEvent(
  "interaction",
  DataLayer.mapOf(
    "label", "Single Start",
    "category", "Adv",
    "action", "Auto",
    "nonInteraction", true,
    "virtualPageURL", "/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
    "virtualPageTitle", "Adv - (type)"
  )
);

dataLayer.pushEvent(
  "interaction",
  DataLayer.mapOf(
    "label", "Single Stop",
    "category", "Adv",
    "action", "Auto",
    "nonInteraction", true,
    "virtualPageURL", "/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
    "virtualPageTitle", "Adv - (type)"
  )
);

//ADV interaction

dataLayer.pushEvent(
  "interaction",
  DataLayer.mapOf(
    "label", "Open",
    "category", "Adv",
    "action", "Click",
    "nonInteraction", false,
    "virtualPageURL", "/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
    "virtualPageTitle", "Adv - (type)"
  )
);

dataLayer.pushEvent(
  "interaction",
  DataLayer.mapOf(
    "label", "Play",
    "category", "Adv",
    "action", "Click",
    "nonInteraction", false,
    "virtualPageURL", "/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
    "virtualPageTitle", "Adv - (type)"
  )
);

dataLayer.pushEvent(
  "interaction",
  DataLayer.mapOf(
    "label", "Pause",
    "category", "Adv",
    "action", "Click",
    "nonInteraction", false,
    "virtualPageURL", "/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
    "virtualPageTitle", "Adv - (type)"
  )
);

dataLayer.pushEvent(
  "interaction",
  DataLayer.mapOf(
    "label", "Mute",
    "category", "Adv",
    "action", "Click",
    "nonInteraction", false,
    "virtualPageURL", "/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
    "virtualPageTitle", "Adv - (type)"
  )
);

//ADV View

dataLayer.pushEvent(
  "VirtualPageview",
  DataLayer.mapOf(
    "virtualPageURL", "/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
    "virtualPageTitle", "Adv - (type)"
  )
);

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



dataLayer.pushEvent(
  "VirtualPageview",
  DataLayer.mapOf(
    "virtualPageURL", "/competition/(slug)/player/(version)",
    "virtualPageTitle", "Player - (version)"
  )
);

dataLayer.pushEvent(
  "VirtualPageview",
  DataLayer.mapOf(
    "virtualPageURL", "/competition/(slug)/player/(version)/video/(kind)",
    "virtualPageTitle", "Video - (kind)"
  )
);
dataLayer.pushEvent(
  "VirtualPageview",
  DataLayer.mapOf(
    "virtualPageURL", "/competition/(slug)/player/(version)/video/(kind)/adv/(type)",
    "virtualPageTitle", "Adv - (type)"
  )
);

dataLayer.pushEvent(
  "VirtualPageview",
  DataLayer.mapOf(
    "virtualPageURL", "/competition/(slug)/player/(version)/video/(kind)/overlay/html/(id)",
    "virtualPageTitle", "Overlay - html - (Name or ID)"
  )
);

dataLayer.pushEvent(
  "VirtualPageview",
  DataLayer.mapOf(
    "virtualPageURL", "/competition/(slug)/player/(version)/video/(kind)/overlay/commentary",
    "virtualPageTitle", "Overlay - commentary - (Name or ID)"
  )
);
