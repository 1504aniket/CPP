let Divy = document.getElementById("two");

function timerefresh() {
    const time = new Date();
    let time1 = time.toLocaleTimeString(); // Get formatted time

    Divy.innerHTML = `${time1}`; // Use backticks for interpolation
}

// Update clock every 1 second (1000ms) instead of 100ms
setInterval(timerefresh, 1000);

// Initialize clock immediately
timerefresh();
