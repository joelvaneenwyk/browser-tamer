#include "faker.h"
#include <vector>

namespace data
{
   static std::vector<std::string> mime_types =
   {
      "audio/aac",
      "application/x-abiword",
      "application/octet-stream",
      "video/x-msvideo",
      "application/vnd.amazon.ebook",
      "application/octet-stream",
      "application/x-bzip",
      "application/x-bzip2",
      "application/x-csh",
      "text/css",
      "text/csv",
      "application/msword",
      "application/epub+zip",
      "image/gif",
      "text/html",
      "image/x-icon",
      "text/calendar",
      "application/java-archive",
      "image/jpeg",
      "application/javascript",
      "application/json",
      "audio/midi",
      "video/mpeg",
      "application/vnd.apple.installer+xml",
      "application/vnd.oasis.opendocument.presentation",
      "application/vnd.oasis.opendocument.spreadsheet",
      "application/vnd.oasis.opendocument.text",
      "audio/ogg",
      "video/ogg",
      "application/ogg",
      "application/pdf",
      "application/vnd.ms-powerpoint",
      "application/x-rar-compressed",
      "application/rtf",
      "application/x-sh",
      "image/svg+xml",
      "application/x-shockwave-flash",
      "application/x-tar",
      "image/tiff",
      "font/ttf",
      "application/vnd.visio",
      "audio/x-wav",
      "audio/webm",
      "video/webm",
      "image/webp",
      "font/woff",
      "font/woff2",
      "application/xhtml+xml",
      "application/vnd.ms-excel",
      "application/xml",
      "application/vnd.mozilla.xul+xml",
      "application/zip",
      "video/3gpp",
      "video/3gpp2",
      "application/x-7z-compressed"
   };

   static std::vector<std::string> countries =
   {
      "Afghanistan", "Albania", "Algeria", "American Samoa", "Andorra", "Angola", "Anguilla", "Antarctica (the territory South of 60 deg S)", "Antigua and Barbuda", "Argentina", "Armenia", "Aruba", "Australia", "Austria", "Azerbaijan",
      "Bahamas", "Bahrain", "Bangladesh", "Barbados", "Belarus", "Belgium", "Belize", "Benin", "Bermuda", "Bhutan", "Bolivia", "Bosnia and Herzegovina", "Botswana", "Bouvet Island (Bouvetoya)", "Brazil", "British Indian Ocean Territory (Chagos Archipelago)", "British Virgin Islands", "Brunei Darussalam", "Bulgaria", "Burkina Faso", "Burundi",
      "Cambodia", "Cameroon", "Canada", "Cape Verde", "Cayman Islands", "Central African Republic", "Chad", "Chile", "China", "Christmas Island", "Cocos (Keeling) Islands", "Colombia", "Comoros", "Congo", "Cook Islands", "Costa Rica", "Cote d\"Ivoire", "Croatia", "Cuba", "Cyprus", "Czech Republic",
      "Denmark", "Djibouti", "Dominica", "Dominican Republic",
      "Ecuador", "Egypt", "El Salvador", "Equatorial Guinea", "Eritrea", "Estonia", "Ethiopia",
      "Faroe Islands", "Falkland Islands (Malvinas)", "Fiji", "Finland", "France", "French Guiana", "French Polynesia", "French Southern Territories",
      "Gabon", "Gambia", "Georgia", "Germany", "Ghana", "Gibraltar", "Greece", "Greenland", "Grenada", "Guadeloupe", "Guam", "Guatemala", "Guernsey", "Guinea", "Guinea-Bissau", "Guyana",
      "Haiti", "Heard Island and McDonald Islands", "Holy See (Vatican City State)", "Honduras", "Hong Kong", "Hungary",
      "Iceland", "India", "Indonesia", "Iran", "Iraq", "Ireland", "Isle of Man", "Israel", "Italy",
      "Jamaica", "Japan", "Jersey", "Jordan",
      "Kazakhstan", "Kenya", "Kiribati", "Korea", "Korea", "Kuwait", "Kyrgyz Republic",
      "Lao People\"s Democratic Republic", "Latvia", "Lebanon", "Lesotho", "Liberia", "Libyan Arab Jamahiriya", "Liechtenstein", "Lithuania", "Luxembourg",
      "Macao", "Macedonia", "Madagascar", "Malawi", "Malaysia", "Maldives", "Mali", "Malta", "Marshall Islands", "Martinique", "Mauritania", "Mauritius", "Mayotte", "Mexico", "Micronesia", "Moldova", "Monaco", "Mongolia", "Montenegro", "Montserrat", "Morocco", "Mozambique", "Myanmar",
      "Namibia", "Nauru", "Nepal", "Netherlands Antilles", "Netherlands", "New Caledonia", "New Zealand", "Nicaragua", "Niger", "Nigeria", "Niue", "Norfolk Island", "Northern Mariana Islands", "Norway",
      "Oman",
      "Pakistan", "Palau", "Palestinian Territories", "Panama", "Papua New Guinea", "Paraguay", "Peru", "Philippines", "Pitcairn Islands", "Poland", "Portugal", "Puerto Rico",
      "Qatar",
      "Reunion", "Romania", "Russian Federation", "Rwanda",
      "Saint Barthelemy", "Saint Helena", "Saint Kitts and Nevis", "Saint Lucia", "Saint Martin", "Saint Pierre and Miquelon", "Saint Vincent and the Grenadines", "Samoa", "San Marino", "Sao Tome and Principe", "Saudi Arabia", "Senegal", "Serbia", "Seychelles", "Sierra Leone", "Singapore", "Slovakia (Slovak Republic)", "Slovenia", "Solomon Islands", "Somalia", "South Africa", "South Georgia and the South Sandwich Islands", "Spain", "Sri Lanka", "Sudan", "Suriname", "Svalbard & Jan Mayen Islands", "Swaziland", "Sweden", "Switzerland", "Syrian Arab Republic",
      "Taiwan", "Tajikistan", "Tanzania", "Thailand", "Timor-Leste", "Togo", "Tokelau", "Tonga", "Trinidad and Tobago", "Tunisia", "Turkey", "Turkmenistan", "Turks and Caicos Islands", "Tuvalu",
      "Uganda", "Ukraine", "United Arab Emirates", "United Kingdom", "United States of America", "United States Minor Outlying Islands", "United States Virgin Islands", "Uruguay", "Uzbekistan",
      "Vanuatu", "Venezuela", "Vietnam",
      "Wallis and Futuna", "Western Sahara",
      "Yemen",
      "Zambia", "Zimbabwe"
   };



   std::string faker::mime_type()
   {
      return mime_types[rand() % mime_types.size()];
   }

   std::string faker::country()
   {
      return countries[rand() % countries.size()];
   }
}