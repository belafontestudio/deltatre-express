//analytics.debug();

// analytics.identify('1', {
//   name: 'PiermariaCosina',
//   email: 'piermaria@enhancers.it'
// });



$( document ).ready(function() {
  // analytics.page({
  //   title: '', ..
  //
  //   path: '/video',
  // });
  dataLayer.push({
    'event':'VirtualPageview',
    'virtualPageURL':'/video',
    'virtualPageTitle' : 'Milan vs Argentina'
  });

  $("li#tab-alert").click(function(){
    console.log("Tab - Alert click");
    $("li#tab-alert").toggleClass("active");
    $(".panel#alert").toggleClass("visible");
    dataLayer.push({
      'event':'VirtualPageview',
      'virtualPageURL':'/alert',
      'virtualPageTitle' : 'alert1'
    });


  });

  $("li#tab-commentary").click(function(){
    console.log("Tab - Commentary click");
    $("li#tab-commentary").toggleClass("active");
    $(".panel#commentary").toggleClass("visible");
  });


  /* ALERT */

  $( "#alert-click" ).click(function() {
    console.log("alert-click");
    dataLayer.push({
      'event':'interaction',
      'label':'Open',
      'category' : 'Alert',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/alert/1',
      'virtualPageTitle' : 'alert1'
    });
  });
  $( "#alert-close" ).click(function() {
    console.log("alert-close");
    dataLayer.push({
      'event':'interaction',
      'label':'Close',
      'category' : 'Alert',
      'action' : 'Click',
      'virtualPageURL':'/alert/1',
      'virtualPageTitle' : 'alert1'
    });
  });
  $( "#alert-on" ).click(function() {
    console.log("alert-on");
    dataLayer.push({
      'event':'interaction',
      'label':'Activate',
      'category' : 'Alert',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/alert/1',
      'virtualPageTitle' : 'alert1'
    });
  });
  $( "#alert-off" ).click(function() {
    console.log("alert-off");
    dataLayer.push({
      'event':'interaction',
      'label':'Deactivate',
      'category' : 'Alert',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/alert/1',
      'virtualPageTitle' : 'alert1'
    });
  });

  /********* BAR *********/


  $( "#seek" ).click(function() {
    console.log("seek");
    dataLayer.push({
      'event':'interaction',
      'label':'Seek',
      'category' : 'Bar',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/player/1',
      'virtualPageTitle' : 'player id'
    });
  });

  $( "#seek" ).slider(function() {
    console.log("seek");
    dataLayer.push({
      'event':'interaction',
      'label':'Seek',
      'category' : 'Bar',
      'action' : 'Drag',
      'nonInteraction' : false,
      'virtualPageURL':'/player/1',
      'virtualPageTitle' : 'player id'
    });

  });

  $( "#seek-id" ).on('slideStop', function() {
    console.log("seek-slide");

  });

  $( "#replay" ).click(function() {
    console.log("replay");
    dataLayer.push({
      'event':'interaction',
      'label':'Replay',
      'category' : 'Bar',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/player/1',
      'virtualPageTitle' : 'player id'
    });
  });

  $( "#play" ).click(function() {
    console.log("play");
    dataLayer.push({
          'event':'interaction',
          'label':'Play',
          'category' : 'Bar',
          'action' : 'Click',
          'play': 'true',
          'nonInteraction' : false,
          'virtualPageURL':'/video/1',
          'virtualPageTitle' : 'Video id or title'
        });
  });

  $( "#pause" ).click(function() {
    console.log("pause");
    dataLayer.push({
      'event':'interaction',
      'label':'Pause',
      'category' : 'Bar',
      'action' : 'Click',
      'play': 'false',
      'nonInteraction' : false,
      'virtualPageURL':'/video/1',
      'virtualPageTitle' : 'Video id or title'
    });
  });

  $( "#live" ).click(function() {
    console.log("live");
    dataLayer.push({
      'event':'interaction',
      'label':'Live',
      'category' : 'Bar',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/player/1',
      'virtualPageTitle' : 'player id'
    });
  });

  $( "#live" ).click(function() {
    console.log("live");

  });

  $( "#wizard" ).click(function() {
    console.log("wizard");
    dataLayer.push({
      'event':'interaction',
      'label':'Wizard',
      'category' : 'Bar',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/player/1',
      'virtualPageTitle' : 'player id'
    });
  });

  $( "#fullscreen" ).click(function() {
    console.log("fullscreen");
    dataLayer.push({
      'event':'interaction',
      'label':'Fullscreen',
      'category' : 'Bar',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/player/1',
      'virtualPageTitle' : 'player id'
    });
  });

  // Bitrate

  $( "#bitrate-auto" ).click(function() {
    console.log("bitrate-auto");
    dataLayer.push({
      'event':'interaction',
      'label':'Bitrate',
      'category' : 'Bar',
      'action' : 'Auto',
      'nonInteraction' : true,
      'virtualPageURL':'/player/1',
      'virtualPageTitle' : 'player id'
    });
  });

  $( "#bitrate-manual" ).click(function() {
    console.log("bitrate-manual");
    dataLayer.push({
      'event':'interaction',
      'label':'Bitrate',
      'category' : 'Bar',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/player/1',
      'virtualPageTitle' : 'player id'
    });
  });

  $( "#bitrate-change" ).click(function() {
    console.log("bitrate-change");
    dataLayer.push({
      'event':'interaction',
      'label':'Bitrate',
      'category' : 'Bar',
      'action' : 'Auto',
      'nonInteraction' : true,
      'value' : 1,
      'virtualPageURL':'/player/1',
      'virtualPageTitle' : 'player id'
    });
  });

  // Marker

  $( "#marker-popup" ).click(function() {
    console.log("marker-popup");
    dataLayer.push({
      'event':'interaction',
      'label':'Marker',
      'category' : 'Bar',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/player/1',
      'virtualPageTitle' : 'player id'
    });
  });

  $( "#marker-popupclick" ).click(function() {
    console.log("marker-popupclick");
    dataLayer.push({
      'event':'interaction',
      'label':'PlaybyPlay',
      'category' : 'Marker',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/marker/1',
      'virtualPageTitle' : 'marker id'
    });
  });

  $( "#marker-multicam" ).click(function() {
    console.log("marker-multicam");
    dataLayer.push({
      'event':'interaction',
      'label':'Multicam',
      'category' : 'Marker',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/marker/1',
      'virtualPageTitle' : 'marker id'
    });
  });

  $( "#marker-share" ).click(function() {
    console.log("marker-share");
    dataLayer.push({
      'event':'interaction',
      'label':'Share',
      'category' : 'Marker',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/marker/1',
      'virtualPageTitle' : 'marker id'
    });
  });

  $( "#marker-click" ).click(function() {
    console.log("marker-click");
  });

  $( "#marker-hover" ).hover(function() {
    console.log("marker-hover");
    dataLayer.push({
      'event':'interaction',
      'label':'Open',
      'category' : 'Marker',
      'action' : 'Hover',
      'nonInteraction' : false,
      'virtualPageURL':'/marker/1',
      'virtualPageTitle' : 'marker id'
    });
  });

  // Milestones

  $( "#milestone" ).click(function() {
    console.log("milestone");
    dataLayer.push({
      'event':'interaction',
      'label':'Milestone',
      'category' : 'Bar',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/player/1',
      'virtualPageTitle' : 'player id'
    });
  });

  $( "#milestone-view" ).click(function() {
    console.log("milestone-view");

  });

  $( "#milestone-click" ).click(function() {
    console.log("milestone-click");

  });

  $( "#milestone-hover" ).hover(function() {
    console.log("milestone-hover");
    dataLayer.push({
      'event':'interaction',
      'label':'Open',
      'category' : 'Milestone',
      'action' : 'Hover',
      'nonInteraction' : false,
      'virtualPageURL':'/milestone/1',
      'virtualPageTitle' : 'milestone id'
    });
  });

  $( "#milestone-pbp" ).click(function() {
    console.log("milestone-pbp");
    dataLayer.push({
      'event':'interaction',
      'label':'PlayByPlay',
      'category' : 'Milestone',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/milestone/1',
      'virtualPageTitle' : 'milestone id'
    });
  });

  $( "#chapter" ).click(function() {
    console.log("chapter");
    dataLayer.push({
      'event':'interaction',
      'label':'Chapter',
      'category' : 'Bar',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/player/1',
      'virtualPageTitle' : 'player id'
    });
  });

  // Volume

  $( "#volume" ).on('slideStop',function() {
    console.log("volume");
    dataLayer.push({
      'event':'interaction',
      'label':'Volume',
      'category' : 'Bar',
      'action' : 'Slide',
      'nonInteraction' : false,
      'virtualPageURL':'/player/1',
      'virtualPageTitle' : 'player id'
    });
  });

  $( "#mute" ).click(function() {
    console.log("mute");
    dataLayer.push({
      'event':'interaction',
      'label':'Volume',
      'category' : 'Bar',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/player/1',
      'virtualPageTitle' : 'player id'
    });
  });


  // Share

  $( "#share-main" ).click(function() {
    console.log("share-main");
    dataLayer.push({
      'event':'interaction',
      'label':'Share',
      'category' : 'Tab',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/overlay/1',
      'virtualPageTitle' : 'overlay id'
    });
  });

  $( "#share-click" ).click(function() {
    console.log("share-click");

  });



  /******** OVERLAY ******/


  $( "#overlay-tabclick" ).click(function() {
    console.log("overlay-tabclick");
    dataLayer.push({
      'event':'interaction',
      'label':'Tab',
      'category' : 'Overlay',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
      'virtualPageTitle' : 'Overlay - html - (Name or ID)'
    });
  });

  $( "#overlay-back" ).click(function() {
    console.log("overlay-back");
    dataLayer.push({
      'event':'interaction',
      'label':'Back',
      'category' : 'Overlay',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
      'virtualPageTitle' : 'Overlay - html - (Name or ID)'
    });
  });

  $( "#overlay-html" ).click(function() {
    console.log("overlay-html");
    dataLayer.push({
      'event':'interaction',
      'label':'Html',
      'category' : 'Overlay',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
      'virtualPageTitle' : 'Overlay - html - (Name or ID)'
    });

  });



  $( "#overlay-expand" ).click(function() {
    console.log("overlay-expand");
    dataLayer.push({
      'event':'interaction',
      'label':'Expand',
      'category' : 'Overlay',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
      'virtualPageTitle' : 'Overlay - html - (Name or ID)'
    });
  });

  $( "#overlay-collpse" ).click(function() {
    console.log("overlay-collpse");
    dataLayer.push({
      'event':'interaction',
      'label':'Collapse',
      'category' : 'Overlay',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
      'virtualPageTitle' : 'Overlay - html - (Name or ID)'
    });

  });

  $( "#overlay-scroll-id" ).on('slideStop', function() {
    console.log("overlay-scroll");

    dataLayer.push({
      'event':'interaction',
      'label':'Viewport',
      'category' : 'Overlay',
      'action' : 'Scroll',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
      'virtualPageTitle' : 'Overlay - html - (Name or ID)'
    });
  });

  $( "#overlay-replay" ).click(function() {
    console.log("overlay-replay");

    dataLayer.push({
      'event':'interaction',
      'label':'Replay',
      'category' : 'Overlay',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
      'virtualPageTitle' : 'Overlay - html - (Name or ID)'
    });
  });

  $( "#overlay-play" ).click(function() {
    console.log("overlay-play");
    dataLayer.push({
      'event':'interaction',
      'label':'Play',
      'category' : 'Overlay',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
      'virtualPageTitle' : 'Overlay - html - (Name or ID)'
    });
  });

  $( "#overlay-pause" ).click(function() {
    console.log("overlay-pause");
    dataLayer.push({
      'event':'interaction',
      'label':'Pause',
      'category' : 'Overlay',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
      'virtualPageTitle' : 'Overlay - html - (Name or ID)'
    });
  });

  $( "#overlay-seek" ).click(function() {
    console.log("overlay-seek");
    dataLayer.push({
      'event':'interaction',
      'label':'Seek',
      'category' : 'Overlay',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
      'virtualPageTitle' : 'Overlay - html - (Name or ID)'
    });
  });

  $( "#overlay-prev" ).click(function() {
    console.log("overlay-prev");
    dataLayer.push({
      'event':'interaction',
      'label':'Prev',
      'category' : 'Overlay',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
      'virtualPageTitle' : 'Overlay - html - (Name or ID)'
    });
  });

  $( "#overlay-next" ).click(function() {
    console.log("overlay-next");
    dataLayer.push({
      'event':'interaction',
      'label':'Next',
      'category' : 'Overlay',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
      'virtualPageTitle' : 'Overlay - html - (Name or ID)'
    });
  });

  $( "#overlay-volume-click" ).click(function() {
    console.log("overlay-volume-click");
    dataLayer.push({
      'event':'interaction',
      'label':'Volume',
      'category' : 'Overlay',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
      'virtualPageTitle' : 'Overlay - html - (Name or ID)'
    });
  });

  $( "#overlay-volume-slider" ).on('slideStop', function() {
    console.log("overlay-volume-slider");
    dataLayer.push({
      'event':'interaction',
      'label':'Volume',
      'category' : 'Overlay',
      'action' : 'Slide',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/overlay/(id)/html',
      'virtualPageTitle' : 'Overlay - html - (Name or ID)'
    });
  });

  // PlayByPLay

  $( "#playby-click" ).click(function() {
    console.log("playby-click");

  });

  $( "#playby-multicam" ).click(function() {
    console.log("playby-multicam");

  });

  $( "#playby-share" ).click(function() {
    console.log("playby-share");

  });

  // Commentary

  $( "#commentary-scroll" ).on('slideStop', function() {
    console.log("commentary-scroll");

  });


  /******** MULTICAM ******/

  $( "#multicam-open" ).click(function() {
    console.log("multicam-open");
    dataLayer.push({
      'event':'interaction',
      'label':'Open',
      'category' : 'Multicam',
      'action' : 'Auto',
      'nonInteraction' : true,
      'virtualPageURL':'/multicam/1',
      'virtualPageTitle' : 'multicam id'
    });
  });

  $( "#multicam-close" ).click(function() {
    console.log("multicam-close");
    dataLayer.push({
      'event':'interaction',
      'label':'Close',
      'category' : 'Multicam',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/multicam/1',
      'virtualPageTitle' : 'multicam id'
    });
  });

  $( "#multicam-overlay-click" ).click(function() {
    console.log("multicam-overlay-click");
    dataLayer.push({
      'event':'interaction',
      'label':'Overlay',
      'category' : 'Multicam',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/multicam/1',
      'virtualPageTitle' : 'multicam id'
    });
  });

  $( "#multicam-overlay-open" ).click(function() {
    console.log("multicam-overlay-open");
    dataLayer.push({
      'event':'interaction',
      'label':'Open',
      'category' : 'Multicam Overlay',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/multicam/1',
      'virtualPageTitle' : 'multicam id'
    });
  });

  $( "#multicam-overlay-close" ).click(function() {
    console.log("multicam-overlay-close");
    dataLayer.push({
      'event':'interaction',
      'label':'Close',
      'category' : 'Multicam Overlay',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/multicam/1',
      'virtualPageTitle' : 'multicam id'
    });
  });

  $( "#multicam-camera-click" ).click(function() {
    console.log("multicam-camera-click");
    dataLayer.push({
      'event':'interaction',
      'label':'Camera',
      'category' : 'Multicam',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/multicam/1',
      'virtualPageTitle' : 'multicam id'
    });
  });

  $( "#multicam-overlay-cam-click" ).click(function() {
    console.log("multicam-overlay-cam-click");
    dataLayer.push({
      'event':'interaction',
      'label':'Camera',
      'category' : 'Multicam Overlay',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/multicam/1',
      'virtualPageTitle' : 'multicam id'
    });
  });

  $( "#multicam-related" ).click(function() {
    console.log("multicam-related");
    dataLayer.push({
      'event':'interaction',
      'label':'Related',
      'category' : 'Multicam',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/multicam/1',
      'virtualPageTitle' : 'multicam id'
    });
  });

  /********** MULTISTREAM *******/

  $( "#multistream-streamclick" ).click(function() {
    console.log("multistream-streamclick");

  });

  $( "#multistream-pip" ).click(function() {
    console.log("multistream-pip");

  });

  $( "#multistream-quad" ).click(function() {
    console.log("multistream-quad");

  });


  /********** QUADCAM *********/

  $( "#quad-click" ).click(function() {
    console.log("quad-click");
    dataLayer.push({
      'event':'interaction',
      'label':'Open',
      'category' : 'Quad',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/quadcam/1',
      'virtualPageTitle' : 'quadcam id'
    });
  });

  $( "#quad-quad" ).click(function() {
    console.log("quad-quad");
    dataLayer.push({
      'event':'interaction',
      'label':'Quad',
      'category' : 'Quad',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/quadcam/1',
      'virtualPageTitle' : 'quadcam id'
    });
  });

  $( "#quad-pip" ).click(function() {
    console.log("quad-pip");
    dataLayer.push({
      'event':'interaction',
      'label':'Pip',
      'category' : 'Quad',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/quadcam/1',
      'virtualPageTitle' : 'quadcam id'
    });
  });

  $( "#quad-main" ).click(function() {
    console.log("quad-main");
    dataLayer.push({
      'event':'interaction',
      'label':'Main',
      'category' : 'Quad',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/quadcam/1',
      'virtualPageTitle' : 'quadcam id'
    });
  });

  $( "#quad-remove" ).click(function() {
    console.log("quad-remove");
    dataLayer.push({
      'event':'interaction',
      'label':'Remove',
      'category' : 'Quad',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/quadcam/1',
      'virtualPageTitle' : 'quadcam id'
    });
  });

  $( "#quad-swap" ).click(function() {
    console.log("quad-swap");
    dataLayer.push({
      'event':'interaction',
      'label':'Swap',
      'category' : 'Quad',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/quadcam/1',
      'virtualPageTitle' : 'quadcam id'
    });
  });


  /********* PIP ***********/

  $( "#pip-close" ).click(function() {
    console.log("pip-close");
    dataLayer.push({
      'event':'interaction',
      'label':'Close',
      'category' : 'Pip',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/pip/1',
      'virtualPageTitle' : 'pip id'
    });

  });

  $( "#pip-quad" ).click(function() {
    console.log("pip-quad");
    dataLayer.push({
      'event':'interaction',
      'label':'Quad',
      'category' : 'Pip',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/pip/1',
      'virtualPageTitle' : 'pip id'
    });
  });

  $( "#pip-main" ).click(function() {
    console.log("pip-main");
    dataLayer.push({
      'event':'interaction',
      'label':'Main',
      'category' : 'Pip',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/pip/1',
      'virtualPageTitle' : 'pip id'
    });
  });

  $( "#pip-swap" ).click(function() {
    console.log("pip-swap");
    dataLayer.push({
      'event':'interaction',
      'label':'Swap',
      'category' : 'Pip',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/pip/1',
      'virtualPageTitle' : 'pip id'
    });
  });

  $( "#pip-resize" ).click(function() {
    console.log("pip-resize");
    dataLayer.push({
      'event':'interaction',
      'label':'Resize',
      'category' : 'Pip',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/pip/1',
      'virtualPageTitle' : 'pip id'
    });

  });

  $( "#pip-dbclick" ).click(function() {
    console.log("pip-dbclick");
    dataLayer.push({
      'event':'interaction',
      'label':'Main',
      'category' : 'Pip',
      'action' : 'DoubleClick',
      'nonInteraction' : false,
      'virtualPageURL':'/pip/1',
      'virtualPageTitle' : 'pip id'
    });
  });

  /*********** WIZARD ************/

  $( "#wizard-close" ).click(function() {
    console.log("wizard-close");
    dataLayer.push({
      'event':'interaction',
      'label':'Close',
      'category' : 'Wizard',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/wizard/1',
      'virtualPageTitle' : 'wizard id'
    });


  });

  $( "#wizard-back" ).click(function() {
    console.log("wizard-back");
    dataLayer.push({
      'event':'interaction',
      'label':'Prev',
      'category' : 'Wizard',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/wizard/1',
      'virtualPageTitle' : 'wizard id'
    });
  });

  $( "#wizard-next" ).click(function() {
    console.log("wizard-next");
    dataLayer.push({
      'event':'interaction',
      'label':'Next',
      'category' : 'Wizard',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/wizard/1',
      'virtualPageTitle' : 'wizard id'
    });
  });

  $( "#wizard-out" ).click(function() {
    console.log("wizard-out");
    dataLayer.push({
      'event':'interaction',
      'label':'Out',
      'category' : 'Wizard',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/wizard/1',
      'virtualPageTitle' : 'wizard id'
    });
  });

  /*********** ADV **************/

  $( "#adv-click" ).click(function() {
    console.log("adv-click");
    dataLayer.push({
      'event':'interaction',
      'label':'Open',
      'category' : 'Adv',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/adv/(type)',
      'virtualPageTitle' : 'Adv - (type)'
    });
  });

  $( "#adv-play" ).click(function() {
    console.log("adv-play");
    dataLayer.push({
      'event':'interaction',
      'label':'Play',
      'category' : 'Adv',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/adv/(type)',
      'virtualPageTitle' : 'Adv - (type)'
    });
  });

  $( "#adv-pause" ).click(function() {
    console.log("adv-pause");
    dataLayer.push({
      'event':'interaction',
      'label':'Pause',
      'category' : 'Adv',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/adv/(type)',
      'virtualPageTitle' : 'Adv - (type)'
    });
  });

  $( "#adv-mute" ).click(function() {
    console.log("adv-mute");
    dataLayer.push({
      'event':'interaction',
      'label':'Mute',
      'category' : 'Adv',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/competition/(slug)/player/(version)/video/(kind)/adv/(type)',
      'virtualPageTitle' : 'Adv - (type)'
    });
  });

  /*********** END **************/

  $( "#again" ).click(function() {
    console.log("again");
    dataLayer.push({
      'event':'interaction',
      'label':'Watch again',
      'category' : 'Suggested',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/suggested/1',
      'virtualPageTitle' : 'suggested id'
    });
  });

  $( "#suggested" ).click(function() {
    console.log("suggested");
    dataLayer.push({
      'event':'interaction',
      'label':'Select',
      'category' : 'Suggested',
      'action' : 'Click',
      'nonInteraction' : false,
      'virtualPageURL':'/suggested/1',
      'virtualPageTitle' : 'suggested id'
    });
  });

});
