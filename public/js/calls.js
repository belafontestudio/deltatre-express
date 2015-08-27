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
  $( "#pause" ).click(function() {
    console.log("Pause");

    dataLayer.push({
      'event':'interaction',
      'label':'Pause',
      'category' : 'Bar',
      'action' : 'Click',
      'play': 'false',
      'virtualPageURL':'/video',
      'virtualPageTitle' : 'Milan vs Argentina'
    });
  });
  $( "#play" ).click(function() {
    console.log("Play");

    dataLayer.push({
      'event':'interaction',
      'label':'Play',
      'category' : 'Bar',
      'action' : 'Click',
      'play': 'true',
      'virtualPageURL':'/video',
      'virtualPageTitle' : 'Milan vs Argentina'
    });
  });
});
