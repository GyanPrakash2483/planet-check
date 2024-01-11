<script type="module">
  // Import the functions you need from the SDKs you need
  import { initializeApp } from "https://www.gstatic.com/firebasejs/10.7.1/firebase-app.js";
  import { getAnalytics } from "https://www.gstatic.com/firebasejs/10.7.1/firebase-analytics.js";
  // TODO: Add SDKs for Firebase products that you want to use
  // https://firebase.google.com/docs/web/setup#available-libraries

  // Your web app's Firebase configuration
  // For Firebase JS SDK v7.20.0 and later, measurementId is optional
  const firebaseConfig = {
    apiKey: "AIzaSyCZVYiRZUT_dTxe0LiYO4fiZ7Unk-Bld5Y",
    authDomain: "planet-check-f91cb.firebaseapp.com",
    databaseURL: "https://planet-check-f91cb-default-rtdb.asia-southeast1.firebasedatabase.app",
    projectId: "planet-check-f91cb",
    storageBucket: "planet-check-f91cb.appspot.com",
    messagingSenderId: "102492149620",
    appId: "1:102492149620:web:7c39d044b6ceef96d87e21",
    measurementId: "G-Y980R8YWT5"
  };

  // Initialize Firebase
  const app = initializeApp(firebaseConfig);
  const analytics = getAnalytics(app);
</script>