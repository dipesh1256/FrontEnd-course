/** @type {import('tailwindcss').Config} */
module.exports = {
  content: ["./src/**/*.{html,js}"],
  // corePlugins: {
  //   preflight: false,
  // },
  darkMode: 'selector',
  theme: {
    container: {
      center: true,
    },
    extend: {
      backgroundImage:{
        'bgimage':'url("./img/Green leaves img.jpg")'
      }
    },
  },
  plugins: [],
}

