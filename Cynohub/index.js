// Part 1

var prevScrollPos = window.pageYOffset;
var navbar = document.getElementById("nav");

window.onscroll = function () {
  var currentScrollPos = window.pageYOffset;

  if (currentScrollPos <= 100) {
    // Show the navbar when scrolling down after scrolling down a little (100px)
    navbar.style.top = "-50px";
  } else {
    // Show the navbar when scrolling down
    navbar.style.top = "0";
  }

  prevScrollPos = currentScrollPos;
};

// Part 2

const toTop = document.querySelector(".to-top");

window.addEventListener("scroll", () => {
  if (window.pageYOffset > 100) {
    toTop.classList.add("active");
  } else {
    toTop.classList.remove("active");
  }
});

document
  .getElementById("sidebar-toggle")
  .addEventListener("click", function () {
    document.querySelector(".sidebar").classList.toggle("open");
  });

// Part 3

const counterNum = document.querySelectorAll(".counter");

const speed = 50;

counterNum.forEach((el) => {
  const updateNumber = () => {
    const targetNumber = parseInt(el.dataset.number);

    const initialNum = parseInt(el.innerText);

    const incrementNumber = Math.trunc(targetNumber / speed);
    console.log(incrementNumber);

    if (initialNum < targetNumber) {
      el.innerText = `${initialNum + incrementNumber}+`;
      setTimeout(updateNumber, 20);
    }
  };

  updateNumber();
});

// swiperjs

const swiper = new Swiper(".swiper", {
  // Optional parameters
  direction: "horizontal",
  loop: true,
  centeredSlides: true,
  spaceBetween: 25,
  slidesPerView: 3,
  speed: 800,
  autoplayDisableOnInteraction: false,

  keyboard: {
    enabled: true,
  },

  // Navigation arrows
  navigation: {
    nextEl: ".swiper-button-next",
    prevEl: ".swiper-button-prev",
  },
});
