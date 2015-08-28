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
  $("#alert").fadeIn(10000, function() {
      console.log("ALERT");
      // analytics.page({
      //   title: 'Alert',
      //   path: '/alert',
      // });
      dataLayer.push({
        'event':'VirtualPageview',
        'virtualPageURL':'/alert',
        'virtualPageTitle' : 'alert1'
      });
    });
  $( "#commentary" ).click(function() {
    // analytics.page({
    //   title: 'Commentary',
    //   path: '/commentary',
    // });
  });

  $( "#alert .close" ).click(function() {
    console.log("Alert Close");
    // analytics.track('ALERT_CLOSE');
    dataLayer.push({
      'event':'interaction',
      'label':'Close',
      'category' : 'Alert',
      'action' : 'Click',
      'virtualPageURL':'/alert',
      'virtualPageTitle' : 'alert1'
    });
  });


  /* ALERT */

  $( "#alert-click" ).click(function() {
    console.log("alert-click");

  });
  $( "#alert-close" ).click(function() {
    console.log("alert-close");

  });
  $( "#alert-on" ).click(function() {
    console.log("alert-on");

  });
  $( "#alert-off" ).click(function() {
    console.log("alert-off");

  });

  /********* BAR *********/

  $( "#replay" ).click(function() {
    console.log("replay");

  });

  $( "#play" ).click(function() {
    console.log("play");

  });

  $( "#pause" ).click(function() {
    console.log("pause");

  });

  $( "#wizard" ).click(function() {
    console.log("wizard");

  });

  $( "#fullscreen" ).click(function() {
    console.log("fullscreen");

  });

  // Bitrate

  $( "#bitrate-auto" ).click(function() {
    console.log("bitrate-auto");

  });

  $( "#bitrate-manual" ).click(function() {
    console.log("bitrate-manual");

  });

  $( "#bitrate-change" ).click(function() {
    console.log("bitrate-change");

  });

  // Marker

  $( "#marker-popup" ).click(function() {
    console.log("marker-popup");

  });

  $( "#marker-popupclick" ).click(function() {
    console.log("marker-popupclick");

  });

  $( "#marker-multicam" ).click(function() {
    console.log("marker-multicam");

  });

  $( "#marker-share" ).click(function() {
    console.log("marker-share");

  });

  // Milestones

  $( "#milestone" ).click(function() {
    console.log("milestone");

  });

  $( "#milestone-view" ).click(function() {
    console.log("milestone-view");

  });

  $( "#milestone-hover" ).click(function() {
    console.log("milestone-hover");

  });

  $( "#milestone-pbp" ).click(function() {
    console.log("milestone-pbp");

  });

  $( "#chapter" ).click(function() {
    console.log("chapter");

  });

  // Volume

  $( "#volume" ).slider(function() {
    console.log("volume");

  });

  $( "#mute" ).click(function() {
    console.log("mute");

  });


  // Share

  $( "#share-main" ).click(function() {
    console.log("share-main");

  });

  $( "#share-click" ).click(function() {
    console.log("share-click");

  });



  /******** OVERLAY ******/

  $( "#tab-click" ).click(function() {
    console.log("tab-click");

  });

  $( "#overlay-tabclick" ).click(function() {
    console.log("overlay-tabclick");

  });

  $( "#overlay-back" ).click(function() {
    console.log("overlay-back");

  });

  $( "#overlay-html" ).click(function() {
    console.log("overlay-html");

  });

  $( "#overlay-autoplay" ).click(function() {
    console.log("overlay-autoplay");

  });

  $( "#overlay-expand" ).click(function() {
    console.log("overlay-expand");

  });

  $( "#overlay-collpse" ).click(function() {
    console.log("overlay-collpse");

  });

  $( "#overlay-scroll" ).slider(function() {
    console.log("overlay-scroll");

  });

  $( "#overlay-replay" ).click(function() {
    console.log("overlay-replay");

  });

  $( "#overlay-play" ).click(function() {
    console.log("overlay-play");

  });

  $( "#overlay-pause" ).click(function() {
    console.log("overlay-pause");

  });

  $( "#overlay-seek" ).click(function() {
    console.log("overlay-seek");

  });

  $( "#overlay-volume-click" ).click(function() {
    console.log("overlay-volume-click");

  });

  $( "#overlay-volume-slider" ).slider(function() {
    console.log("overlay-volume-slider");

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

  $( "#commentary-scroll" ).slider(function() {
    console.log("commentary-scroll");

  });


  /******** MULTICAM ******/

  $( "#multicam-open" ).click(function() {
    console.log("multicam-open");

  });

  $( "#multicam-close" ).click(function() {
    console.log("multicam-close");

  });

  $( "#multicam-overlay-click" ).click(function() {
    console.log("multicam-overlay-click");

  });

  $( "#multicam-overlay-open" ).click(function() {
    console.log("multicam-overlay-open");

  });

  $( "#multicam-overlay-close" ).click(function() {
    console.log("multicam-overlay-close");

  });

  $( "#multicam-camera-click" ).click(function() {
    console.log("multicam-camera-click");

  });

  $( "#multicam-overlay-cam-click" ).click(function() {
    console.log("multicam-overlay-cam-click");

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

  $( "#quad-main" ).click(function() {
    console.log("quad-main");

  });

  $( "#quad-remove" ).click(function() {
    console.log("quad-remove");

  });

  $( "#quad-swap" ).click(function() {
    console.log("quad-swap");

  });


  /********* PIP ***********/

  $( "#pip-close" ).click(function() {
    console.log("pip-close");

  });

  $( "#pip-quad" ).click(function() {
    console.log("pip-quad");

  });

  $( "#pip-main" ).click(function() {
    console.log("pip-main");

  });

  $( "#pip-swap" ).click(function() {
    console.log("pip-swap");

  });

  $( "#pip-resize" ).click(function() {
    console.log("pip-resize");

  });

  $( "#pip-dbclick" ).click(function() {
    console.log("pip-dbclick");

  });

  /*********** WIZARD ************/

  $( "#wizard-close" ).click(function() {
    console.log("wizard-close");

  });

  $( "#wizard-back" ).click(function() {
    console.log("wizard-back");

  });

  $( "#wizard-next" ).click(function() {
    console.log("wizard-next");

  });

  $( "#wizard-out" ).click(function() {
    console.log("wizard-out");

  });

  /*********** ADV **************/

  $( "#adv-click" ).click(function() {
    console.log("adv-click");

  });

  $( "#adv-play" ).click(function() {
    console.log("adv-play");

  });

  $( "#adv-pause" ).click(function() {
    console.log("adv-pause");

  });

  $( "#adv-mute" ).click(function() {
    console.log("adv-mute");

  });

  /*********** END **************/

  $( "#again" ).click(function() {
    console.log("again");

  });

  $( "#suggested" ).click(function() {
    console.log("suggested");

  });

});
