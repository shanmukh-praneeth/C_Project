#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "app.h"


int main(){
	struct Hotel hyd[7];
    strcpy(hyd[0].name, "Mangowoods Mayura");
    strcpy(hyd[0].contact,"123789456");
    strcpy(hyd[0].mail, "mangowoodshyd@mail.com");
    strcpy(hyd[0].address, "Chilkur, Hyderabad");
    hyd[0].price=13500;
    hyd[0].petallowed=true;
    hyd[0].wifi=true;
    strcpy(hyd[0].description, "A unique private space secluded in the midist of mango farm. \nThe Kerela style cottage is perfect for a memorable holiday with garden.");
    hyd[0].rating=4.91;
    hyd[0].max_guests=15;
   
   strcpy(hyd[1].name, "Lovely 1-bedroom 3bhk ");
    strcpy(hyd[1].contact,"123789457");
    strcpy(hyd[1].mail, "lovely3bhk@mail.com");
    strcpy(hyd[1].address, "Madhapur, Hyderabad");
    hyd[1].price=1500;
    hyd[1].petallowed=false;
    hyd[1].wifi=true;
    strcpy(hyd[1].description, "Lovely 1-bedroom in a spacious 3-bhk at a premium gated community very near to Gachibowli. Party-friendly and Couple-friendly.Out of 3 bedrooms");
    hyd[1].rating=4.75;
    hyd[1].max_guests=2;

    strcpy(hyd[2].name, "Regalia-Wooden cottage");
    strcpy(hyd[2].contact,"123789458");
    strcpy(hyd[2].mail, "regilawoodenhyd@mail.com");
    strcpy(hyd[2].address, "Shamshabad, Hyderabad");
    hyd[2].price=9000;
    hyd[2].petallowed=true;
    hyd[2].wifi=true;
    strcpy(hyd[2].description,"");
    hyd[2].rating=4.93;
    hyd[2].max_guests=10;
         
    strcpy(hyd[3].name, "Country farmhouse");
    strcpy(hyd[3].contact,"123789459");
    strcpy(hyd[3].mail, "farmhousehyd@mail.com");
    strcpy(hyd[3].address, "Nacharam,Hyderabad");
    hyd[3].price=3700;
    hyd[3].petallowed=true;
    hyd[3].wifi=true;
    strcpy(hyd[3].description, "Peaceful location and an excellent base for families and mixed groups wishing to spend peaceful time. Enjoy the private pool.");
    hyd[3].rating=4.89 ;
    hyd[3].max_guests=8;
    
    strcpy(hyd[4].name, "Bliss Farm Stay");
    strcpy(hyd[4].contact,"123789460");
    strcpy(hyd[4].mail, "blissfarmhyd@mail.com");
    strcpy(hyd[4].address, "Kondapur,Hyderabad");
    hyd[4].price=25000;
    hyd[4].petallowed=true;
    hyd[4].wifi=true;
    strcpy(hyd[4].description, "The whole group will be comfortable in this spacious and unique space.");
    hyd[4].rating=4.9;
    hyd[4].max_guests=15;

    strcpy(hyd[5].name, "Fragilisticexpialidocious");
    strcpy(hyd[5].contact,"123789461");
    strcpy(hyd[5].mail, "fragilistichyd@mail.com");
    strcpy(hyd[5].address, "ECIL,Hyderabad");
    hyd[5].price=4500;
    hyd[5].petallowed=true;
    hyd[5].wifi=true;
    strcpy(hyd[5].description, "Supercalifragalisticexpialidocious Luxurious 3BHK flat in the Central Financial District of Hyderabad with walk away distances to major IT Parks / Educational Institutions/Hospitals/Banks etc.");
    hyd[5].rating=4.82;
    hyd[5].max_guests=6;

    strcpy(hyd[6].name, "Serene by Palladium");
    strcpy(hyd[6].contact,"123789462");
    strcpy(hyd[6].mail, "serenehyd@mail.com");
    strcpy(hyd[6].address, "Jubilee Hills,Hyderabad");
    hyd[6].price=35000;
    hyd[6].petallowed=true;
    hyd[6].wifi=true;
    strcpy(hyd[6].description, "Serene by Palladium is a 2 Acre Property with 4 Massive Bedrooms and a private enclosed swimming pool tucked away ");
    hyd[6].rating=4.88;   
	hyd[6].max_guests=16;
	struct Hotel chennai[7];
    strcpy(chennai[0].name, "Cute and Cozy Stay");
    strcpy(chennai[0].contact,"3984873756");
    strcpy(chennai[0].mail, "cuteandcozy@gmail.com");
    strcpy(chennai[0].address, "Alwarpet,Chennai");
    chennai[0].price=2350;
    chennai[0].petallowed=false;
    chennai[0].wifi=true;
    strcpy(chennai[0].description, "This apartment is a 2B/2B but we are listing only 1 of the bedroom/bathrooms in it. \nThe apartment is located on the 3rd floor of the apartment complex and opens into a beautifully decorated living and dining space with a swing in the center.");
    chennai[0].rating=4.64;
    chennai[0].max_guests=2;
   
   strcpy(chennai[1].name, "Coral Drive Villas");
    strcpy(chennai[1].contact,"7484787845");
    strcpy(chennai[1].mail, "coraldrive@gmail.com");
    strcpy(chennai[1].address, "Vada Nemmeli, Chennai");
    chennai[1].price=7000;
    chennai[1].petallowed=false;
    chennai[1].wifi=true;
    strcpy(chennai[1].description, "Ours is a fully equipped private beach villa with direct access to the beach, equipped with 2 bedrooms, 2 bathrooms, one living room, kitchen, and private terrace. \nSet in a quiet and peaceful neighborhood, the home has 2 air-conditioned bedrooms, and Smart TV with DTH, a fully equipped kitchen, and car parking. \nOur bright, peppy interiors are sure to make you smile. \nWith numerous windows throughout the house, you will enjoy a fresh breeze. \nOur property is 100 meters away from the Beach");
    chennai[1].rating=4.89;
    chennai[1].max_guests=6;

    strcpy(chennai[2].name, "End Beach Pleasant Cottage");
    strcpy(chennai[2].contact,"8798398372");
    strcpy(chennai[2].mail, "beachpleasant@gmail.com");
    strcpy(chennai[2].address, "Perur,Chennai");
    chennai[2].price=9000;
    chennai[2].petallowed=true;
    chennai[2].wifi=true;
    strcpy(chennai[2].description,"Relax with the whole family in this quiet place to stay and enjoy the atmosphere close to the beach. \nYou can feel that the waves of the sea are kissing on the wall of the guest complex. \nOther aspects too highlight");
    chennai[2].rating=4.93;
    chennai[2].max_guests=8;
         
    strcpy(chennai[3].name, "Live the Fantasea ");
    strcpy(chennai[3].contact,"7034048087");
    strcpy(chennai[3].mail, "Fantase@gmail.com");
    strcpy(chennai[3].address, "Muthukadu,Chennai");
    chennai[3].price=15000;
    chennai[3].petallowed=true;
    chennai[3].wifi=true;
    strcpy(chennai[3].description, "Beach access , Free parking on premises , Private pool , TV , Air conditioning");
    chennai[3].rating=4.54 ;
    chennai[3].max_guests=10;
    
    strcpy(chennai[4].name, "Palm Shore A Place of Serenity");
    strcpy(chennai[4].contact,"6835397095");
    strcpy(chennai[4].mail, "palmshore@gmail.com");
    strcpy(chennai[4].address, "VGP,Chennai");
    chennai[4].price=17500;
    chennai[4].petallowed=false;
    chennai[4].wifi=true;
    strcpy(chennai[4].description, "It's a beautiful gated villa located at Nainarkuppam and \noffers an outdoor swimming pool, garden and a beach area along with the benefits like WiFi, AC, water heater, a flat screen TV, fridge, and a private parking available on the site.");
    chennai[4].rating=4.40;
    chennai[4].max_guests=12;

    strcpy(chennai[5].name, "Luxury Beach Resort");
    strcpy(chennai[5].contact,"8876363471");
    strcpy(chennai[5].mail, "luxurybeach@gmail.com");
    strcpy(chennai[5].address, "kovalam,chennai");
    chennai[5].price=23000;
    chennai[5].petallowed=true;
    chennai[5].wifi=true;
    strcpy(chennai[5].description, "TYA-Waves is a beachfront property with stunning views overlooking the Bay of Bengal. \nThe Villa is themed with Balinese influence and has 3 bedrooms with a Living and Dining Space. \nThere is a full sized Swimming pool and a viewing deck. \nIt is a pet friendly villa and no better place to come with our four legged friends. \nWhat's most exciting is this place is built with Shipping Containers.");
    chennai[5].rating=5.00;
    chennai[5].max_guests=15;

    strcpy(chennai[6].name, "The Bluehouse ECR");
    strcpy(chennai[6].contact,"7876487900");
    strcpy(chennai[6].mail,"bluehouse@gmail.com");
    strcpy(chennai[6].address, "Panaiyur,Chennai");
    chennai[6].price=34000;
    chennai[6].petallowed=false;
    chennai[6].wifi=true;
    strcpy(chennai[6].description, "This place has a maximum of 15 guests, not including infants. \nPets aren't allowed. The Blue House is a custom designed Villa located in the exclusive 'SEA CLIFF CONCLAVE' a private gated community in ECR with its own private beach. \nThe Exclusive Villa comes with about 68,000 square feet of beautifully landscaped multi level garden, facing the beach. \nThe ocean facing deck is best for viewing sunrise or to enjoy a quiet evening to the sound of the waves. \nIt has a private enclosed Swimming Pool with water falls on demand, Barbeque Grill & Bar area and a viewing deck.");
    chennai[6].rating=4.72;
    chennai[6].max_guests=9;
    struct Hotel Delhi[7];
    strcpy(Delhi[0].name, "Wooden Dream Home");
    strcpy(Delhi[0].contact,"9848264127");
    strcpy(Delhi[0].mail, "woodendreamhome@gmail.com");
    strcpy(Delhi[0].address, "Gadaipur Bandh Road, New Delhi");
    Delhi[0].price = 3268;
    Delhi[0].petallowed = false;
    Delhi[0].wifi = true;
    strcpy(Delhi[0].description, "Luxurious Wooden Villa, personal garden and open to sky deck. \nBeautiful green lawns, organic fields, mango orchard and more than 80 year old trees. Enjoy the Greenery and Clean air. \nComfortable stay fully furnished with kitchenette, Security 24x7. Unique farm stay with Daily housekeeping. \nIf u are looking for private luxury you have found it . So come, relax, unwind and enjoy the luxury.\n Discover yourself!");
    Delhi[0].rating = 4.54;
    Delhi[0].max_guests = 4;
    strcpy(Delhi[1].name, "South Delhi Home with Beautiful Terrace");
    strcpy(Delhi[1].contact , "7374367390");
    strcpy(Delhi[1].mail, "priyakaran@gmail.com");
    strcpy(Delhi[1].address, "Hansraj Gupta Road, New Delhi");
    Delhi[1].price = 3200;
    Delhi[1].petallowed = false;
    Delhi[1].wifi = true;
    strcpy(Delhi[1].description,"Welcome to our home in south Delhi - A newly constructed 4 bedroom multi-story house. \nWe are very excited to open our home to Airbnb for the first time and have guests from around the world come and share our space with us. \nThe room offered is on the 3rd floor with access from both an elevator and stairs. \nOnce you enter the gates of our residence you can leave the hustle and bustle of Delhi behind and relax.");
    Delhi[1].rating = 4.84;
    Delhi[1].max_guests = 2;


    strcpy(Delhi[2].name, "Farm House for Party");
    strcpy(Delhi[2].contact,"8435463458");
    strcpy(Delhi[2].mail, "preminiumfarmhouse@gmail.com");
    strcpy(Delhi[2].address, "Sector 150, Noida");
    Delhi[2].price = 6421;
    Delhi[2].petallowed = true;
    Delhi[2].wifi = true;
    strcpy(Delhi[2].description,"Reconnect with nature at this unforgettable escape. \nUnique holiday experience comes alive at this Farm, ideal for Friends, Families & Corporate Events.Elegantly rustic, visually stunning, grand yet intimate Farm at Sector 150 (Noida) is an luxury farmhouse with private pool near Delhi NCR- whisking you away to a different time, & an all but forgotten lifestyle of quiet elegance beautiful surroundings. \nIt's about 45 minutes away from Delhi and is one of the top rated farmhouse near Delhi NCR. ");
    Delhi[2].rating = 5.0;
    Delhi[2].max_guests = 16;


    strcpy(Delhi[3].name, "Jacuzzi, Stunning 1BR, Terrace");
    strcpy(Delhi[3].contact, "6346416165");
    strcpy(Delhi[3].mail, "BoBostays@gmail.com");
    strcpy(Delhi[3].address, "Block H, Lajpat Nagar, New Delhi");
    Delhi[3].price = 10770;
    Delhi[3].petallowed = true;
    Delhi[3].wifi = true;
    strcpy(Delhi[3].description, "This is a GORGEOUS 1 BR with heated Jacuzzi, a fantastic terrace, plants & every possible amenity that a guest would need for their stay. \nIt is a cosy space. So please do not expect a large expansive setting :) It is just as in the pictures, with slightly larger plants. It’s situated on the top floor and is accessible by elevator. \nThe pictures with the candles, flowers and ferry lights are a part of our romantic setup available at Rs. 2950");
    Delhi[3].rating = 4.94;
    Delhi[3].max_guests = 2;


    strcpy(Delhi[4].name, "8 Mandi Hills Boutique Farmstay");
    strcpy(Delhi[4].contact,"9515165223");
    strcpy(Delhi[4].mail, "bhavya8MH@gmail.com");
    strcpy(Delhi[4].address, "Dera Village, New Delhi");
    Delhi[4].price = 15857;
    Delhi[4].petallowed = true;
    Delhi[4].wifi = true;
    strcpy(Delhi[4].description, "Nestled away in South West Delhi is 8 Mandi Hills, a place which promises to teleport you to an extremely serene and private get away experience without having to leave the city. \nDeveloped with tremendous love and care for over 30 years, each nook and corner of the property promises a new discovery, a new adventure. \nGet away from the hustle & bustle of the city life. P.S. All revenues go towards the maintenance of the farm, this is not a business enterprise for us.");
    Delhi[4].rating = 4.81;
    Delhi[4].max_guests = 20;


    strcpy(Delhi[5].name, "Gorgeous PentHouse with Terrace");
    strcpy(Delhi[5].contact,"9876456244");
    strcpy(Delhi[5].mail, "BoBostays@gmail.com");
    strcpy(Delhi[5].address, "Pant Nagar, New Delhi");
    Delhi[5].price = 17040;
    Delhi[5].petallowed = true;
    Delhi[5].wifi = true;
    strcpy(Delhi[5].description, "Welcome to Delhi's most unique Holiday Home. \nThis 3 BR Penthouse comes with Terrace ,Lush garden, Jacuzzi, outdoor seating . \nThis is a great destination for a romantic evening filled with luxury all around. \nFurther add-ons can be Barbeque & Bon Fire during December - March. Centrally located & minutes away from India Gate , this home comes with private dedicated car park, security, power back up & fibre optic hi-speed Internet. \nOh, we are also Pet friendly ");
    Delhi[5].rating = 4.89;
    Delhi[5].max_guests = 6;


    strcpy(Delhi[6].name, "Lovely 4BHK Farm");
    strcpy(Delhi[6].contact ,"8625356212");
    strcpy(Delhi[6].mail, "Devenderstays@gmail.com");
    strcpy(Delhi[6].address, "Sector 58, Gurgaon");
    Delhi[6].price = 17063;
    Delhi[6].petallowed = true;
    Delhi[6].wifi = true;
    strcpy(Delhi[6].description,"Entire Farm House consisting of 4Bedrooms with POOL. Spread in 1.5 acres, the property has 4 big bedrooms with attached Toilets having bathtubs.\n35x25 feet big pool and a 10x10 feet Jacuzzi pool surround the Hall.");
    Delhi[6].rating = 4.18;
    Delhi[6].max_guests = 25;
	struct Hotel bangalore[7];
    strcpy(bangalore[0].name, "Styled Japandi");
    strcpy(bangalore[0].contact,"9238461702");
    strcpy(bangalore[0].mail, "styledjapandi@gmail.com");
    strcpy(bangalore[0].address, "Jayanagar, Bangalore");
    bangalore[0].price=4050;
    bangalore[0].petallowed=false;
    bangalore[0].wifi=true;
    strcpy(bangalore[0].description, "Japandi inspired apartment blends Japanese simplicity and minimalism with Scandinavian comfort and coziness. \nDuring your stay, you will experience Japanese style low seating and a balcony overlooking greenery. \nEnjoy 5 star energy efficient modern amenities and an equipped kitchen. \nA unique hideaway on a quiet dead-end street.");
    bangalore[0].rating=4.64;
    bangalore[0].max_guests=6;
   
   strcpy(bangalore[1].name, "The Nest");
    strcpy(bangalore[1].contact,"6262000000");
    strcpy(bangalore[1].mail, "thenest@gmail.com");
    strcpy(bangalore[1].address, "Electronic City, Bangalore");
    bangalore[1].price=3000;
    bangalore[1].petallowed=false;
    bangalore[1].wifi=true;
    strcpy(bangalore[1].description, "Lovely 1-bedroom in a spacious 3-bhk at a premium gated community very near to Electronic City. \nParty-friendly and Couple-friendly.Out of 3 bedrooms");
    bangalore[1].rating=4.89;
    bangalore[1].max_guests=2;

    strcpy(bangalore[2].name, "Tranquil Woods");
    strcpy(bangalore[2].contact,"6528520000");
    strcpy(bangalore[2].mail, "tranquil@gmail.com");
    strcpy(bangalore[2].address, "Rajajinagar, Bangalore");
    bangalore[2].price=24000;
    bangalore[2].petallowed=true;
    bangalore[2].wifi=true;
    strcpy(bangalore[2].description,"Experience the tranquility of our modern and luxurious Tranquil Woods farm house - a perfect getaway to relax and recharge. \nIdeal for families and groups, Tranquil Woods is designed for the discerning few who are very particular that in life. The combination of nature's beauty with ultramodern amenities makes Tranquil Woods a matchless enclave.");
    bangalore[2].rating=4.93;
    bangalore[2].max_guests=8;
         
    strcpy(bangalore[3].name, "Staycation");
    strcpy(bangalore[3].contact,"9450112303");
    strcpy(bangalore[3].mail, "staycation@gmail.com");
    strcpy(bangalore[3].address, "Yelahanka, Bangalore");
    bangalore[3].price=25000;
    bangalore[3].petallowed=true;
    bangalore[3].wifi=true;
    strcpy(bangalore[3].description, "Peaceful location and an excellent base for families and mixed groups wishing to spend peaceful time. \nEnjoy the private pool.");
    bangalore[3].rating=4.54 ;
    bangalore[3].max_guests=10;
    
    strcpy(bangalore[4].name, "Luxury farmhouse");
    strcpy(bangalore[4].contact,"5635631111");
    strcpy(bangalore[4].mail, "luxuryfarmhouse@gmail.com");
    strcpy(bangalore[4].address, "Bhanashankari, Bengaluru");
    bangalore[4].price=17500;
    bangalore[4].petallowed=false;
    bangalore[4].wifi=true;
    strcpy(bangalore[4].description, "A wildlife themed luxury farmhouse tucked in a 1.5 acre fruit orchard in Rajanukunte, Bangalore. \nThe farmhouse is perfect for get-togethers, bachelor's, intimate weddings and more. \nWe have 4 themed rooms with attached ensuite bathrooms, one Dormitory/game room, indoor plunge pool and much more.");
    bangalore[4].rating=4.40;
    bangalore[4].max_guests=12;

    strcpy(bangalore[5].name, "Glass Villa");
    strcpy(bangalore[5].contact,"8876363471");
    strcpy(bangalore[5].mail, "glassvilla@gmail.com");
    strcpy(bangalore[5].address, "Whitefield, Bangalore");
    bangalore[5].price=16450;
    bangalore[5].petallowed=true;
    bangalore[5].wifi=true;
    strcpy(bangalore[5].description, "An ultra luxurious villa with a private swimming pool, large garden and 4 palacial rooms. \nThe villa has a spacious living room with a 65 inch TV and comfortable sofas. \nThe villa boasts a teak dining table, open kitchen and a breakfast knook overlooking the garden. \nAll the rooms have 55 inch 4k televesions with Amazon Prime Video and Netflix, king size beds and clean large bathrooms. \nA large spacious garden perfect for get togethers");
    bangalore[5].rating=5.00;
    bangalore[5].max_guests=15;

    strcpy(bangalore[6].name, "SliceInn");
    strcpy(bangalore[6].contact,"8208200000");
    strcpy(bangalore[6].mail,"sliceinn@gmail.com");
    strcpy(bangalore[6].address, "Marathahalli, Bangalore");
    bangalore[6].price=5830;
    bangalore[6].petallowed=false;
    bangalore[6].wifi=true;
    strcpy(bangalore[6].description, "Forget your worries in this spacious and serene space. \nOur features include: A swimming pool, Washing machine, Dedicated workspace, Carbon Monoxide alarm");
    bangalore[6].rating=4.72;
    bangalore[6].max_guests=9;
	struct Hotel Mumbai[7];
    strcpy(Mumbai[0].name, "Cosy Studio");
    strcpy(Mumbai[0].contact,"9298756872");
    strcpy(Mumbai[0].mail, "cosystudio@gmail.com");
    strcpy(Mumbai[0].address, "Bandra West,Mumbai");
    Mumbai[0].price=3490;
    Mumbai[0].petallowed=true;
    Mumbai[0].wifi=true;
    strcpy(Mumbai[0].description,"My studio in Bandra West is perfect for your stay in Mumbai. \nIt's 30 mins away from the airport and a short walk away from the main areas in Bandra. \nEasily accessible from Pali Market, Hill Road, Reclamation. \nIt is equipped with a comfy murphy double bed, AC, TV with Cable, WIFI, a small kitchenette with induction, micro, kettle, water purifier & fridge. \nStudio is about 200 sqft. No parking in building.");
    Mumbai[0].rating = 4.94;
    Mumbai[0].max_guests = 4;

	strcpy(Mumbai[1].name,"Rosy Private Rooms");
	strcpy(Mumbai[1].contact, "7564839475");
	strcpy(Mumbai[1].mail, "Rosyprivaterooms@gmail.com");
	strcpy(Mumbai[1].address, "Worli, Mumbai");
	Mumbai[1].price = 2710;
	Mumbai[1].petallowed = false;
	Mumbai[1].wifi = true;
	strcpy(Mumbai[1].description, "The flat is located right next to the sea in a quiet neighborhood in Prabhadevi. \nThe feel of the flat is very modern and the Teak wood flooring gives it a very cosy feel. \nThere is ample natural light and fresh sea breeze in the flat.\nThe room has an attached bathroom.");
	Mumbai[1].rating = 4.70;
	Mumbai[1].max_guests = 3;


	strcpy(Mumbai[2].name, "Sand and Shore Cottage");
	strcpy(Mumbai[2].contact,"9452134558");
	strcpy(Mumbai[2].mail, "sandandshorecottage@gmail.com");
	strcpy(Mumbai[2].address, "Gorai, Munbai");
	Mumbai[2].price = 8500;
	Mumbai[2].petallowed = true;
	Mumbai[2].wifi = true;
	strcpy(Mumbai[2].description, "Sand and Shore Cottage by Arch Hospitality Services is a premium sea facing property at Culvem Village, Gorai.\nThe property has an astonishing sea view with lush green lawn area, children play area, selfie points,etc. \nWe also host birthday parties, corporate events, etc.");
	Mumbai[1].rating = 4.64;
	Mumbai[1].max_guests = 2;

	strcpy(Mumbai[3].name, "Casa Marina");
	strcpy(Mumbai[3].contact,"9576840987");
	strcpy(Mumbai[3].mail, "casamarina@gmail.com");
	strcpy(Mumbai[3].address, "Andheri, Mumbai");
	Mumbai[3].price = 14000;
	Mumbai[3].petallowed = false;
	Mumbai[3].wifi = true;
	strcpy(Mumbai[3].description, "Casa Marina is a 3BHK villa with a common living area. \nFully air conditioned with Generator backup in case of electricity failure allowing you to rest and refresh with ease. \nOur staff offers delicious 'Konkani food' (Jain, Veg and Non-veg). \nCasa Marina is located just few minutes away from Nagaon Beach."); 
	Mumbai[3].rating = 4.98;
	Mumbai[3].max_guests = 4;

	strcpy(Mumbai[4].name, "Colonial Home ");
	strcpy(Mumbai[4].contact,"8675840987");
	strcpy(Mumbai[4].mail, "colonialhome@gmail.com");
	strcpy(Mumbai[4].address, "Malabar Hills, Mumbai");
	Mumbai[4].price = 16000;
	Mumbai[4].petallowed = true;
	Mumbai[4].wifi = true;
	strcpy(Mumbai[4].description, "A 1200 sq.ft. newly renovated, spacious two-bedroom apartment with en-suite bathrooms. \nThe apartment is an extension to a beautiful heritage colonial bungalow, with high ceilings and old-world charm. \nIts timeless appearance conceals interiors that have been restored and refurnished to provide comfort. \nIt is ideal for families, couples and solo travellers.");
	Mumbai[4].rating = 4.68;
	Mumbai[4].max_guests = 4;

	strcpy(Mumbai[5].name, "The Canvas");
	strcpy(Mumbai[5].contact , "6547384466");
	strcpy(Mumbai[5].mail, "canvas@gmail.com");
	strcpy(Mumbai[5].address,"Vile Parle,mumbai");
	Mumbai[5].price = 11000;
	Mumbai[5].petallowed = true;
	Mumbai[5].wifi = true;
	strcpy(Mumbai[5].description, "Perched on a hillock, it is your beautiful, airy, and earthy home away from home. \nA green zone at the backdrop ensures your peaceful private stay. \nThis house is decorated with unique artifacts, spacious rooms, and elaborate lounging arrangements.");
	Mumbai[5].rating = 4.54;
	Mumbai[5].max_guests = 4;

	strcpy(Mumbai[6].name, "The Blue Horizon");
	strcpy(Mumbai[6].contact ,"9466097865");
	strcpy(Mumbai[6].mail, "Thebluehorizon@gmail.com");
	strcpy(Mumbai[6].address,"Alibaug, Mumbai");
	Mumbai[6].price = 30000;
	Mumbai[6].petallowed = true;
	Mumbai[6].wifi = true;
	strcpy(Mumbai[6].description, "Soak in the whiffs of the sandy air and wake up to the sounds of the beach waves crashing against the coastline at The Blue Horizon. \nThis quintessential Alibaug getaway, perched right on the beach and just a stone's throw away from the humdrum of Mumbai, is a must-visit for a quick vacation. \nOne can see the Mumbai skyline and the unending hues of the horizon on a clear day! \nWith a 360 degree view of the ocean, a private infinity pool and other meticulously designed plush amenities, \na stay here would undoubtedly fill your treasure trove with some amazing memories.");
	Mumbai[6].rating = 4.74;
	Mumbai[6].max_guests = 6;
    FILE *user_file;//*review_file;
	user_file = fopen("users.txt", "a");//will open users.txt in append mode
	//review_file =fopen("reviews.txt", "a");////will open reviews.txt in append mode(will be used for future features)
	int startup_choice;
	char choice,ch;
	int citychoice;
    int hotel_choice;
    int noguests;
	char whatelse;
	struct Person person_list[100]; 
	float  rating;
	char review[400];
	int numpersons = make_users(person_list),index = -1;	//initializes the number of people from pre-existing users
	int ratehotelchoice;
	while(true){
		printf("\n\t\tWelcome to airbnb \n\n");
		printf("1. Login \t 2. Signup \t 3. Exit (choose an option1,2,3) \n");
		scanf("%d",&startup_choice);
		if(startup_choice==1){
			index = login(person_list,numpersons);//to login
			if(index==-1){
				while(index==-1){
					printf("Wrong password\n");//if user exists, but wrong password
					index = login(person_list,numpersons);	
				}
			}
			if(index==-2){
				printf("You haven't registered with us, kindly create a new account \n");//if such a user doesn't exist
				continue;
			}
			if(index>=0){
				int dashboardchoice=0;
				while(dashboardchoice!=2){
					printf("\t\tWelcome %s! \n",person_list[index].name);
					printf("'b' - Book Room \n");
					printf("'r' - Rate/Review a Hotel \n");
					printf("'l' - logout \n");
					printf("'e' - Exit App\n");//now at the home page. You can either leave a review or book a room
					while ((choice = getchar()) != '\n' && choice != EOF){};
					scanf("%c",&choice);//accepts the input
					if(choice == 'e'){
						printf("Thank you, have a nice day! \n");//to exit
						exit(0);
					}
					else if(choice == 'r'){//review block
						printf("Select City: \n");
						printf("1. Bengaluru \n");
						printf("2. Mumbai \n");
						printf("3. Hyderabad \n");
						printf("4. Chennai \n");
						printf("5. Delhi \n");
                        int hotelchoice;
						while(true){
							scanf("%d",&citychoice);//gives the choice of choosing a city to user
							switch (citychoice){
								case 1: printf("Hotels in Bangalore :\n"); 
										for(int bglr = 0; bglr <7; bglr++)
											printf("%d %s \n",bglr+1,bangalore[bglr].name);
											break;
								case 2: printf("Hotels in Mumbai :\n");
										for(int mum = 0; mum <7; mum++)
											printf("%d %s \n",mum+1,Mumbai[mum].name);
											break; 

								case 3: printf("Hotels in Hyderabad :\n");
										for(int hy = 0; hy <7; hy++)
											printf("%d %s \n",hy+1,hyd[hy].name);
											break; 

								case 4: printf("Hotels in Chennai :\n");
										for(int che = 0; che <7; che++)
											printf("%d %s \n",che+1,chennai[che].name);
											break; 
								
								case 5: printf("Hotels in Delhi :\n");
										for(int del = 0; del <7; del++)
											printf("%d %s \n",del+1,Delhi[del].name);
											break; 

								default: printf("Enter a Valid choice");
											scanf("%d",&ratehotelchoice);
							}
                            break;
						}
                        printf("Select Restaurant:\n");
                        scanf("%d",&hotelchoice);
                        while(hotelchoice<=0 || hotelchoice>7){
                            printf("Enter a valid choice\n");//for an 'invalid' choice
                            scanf("%d",&hotelchoice); 
                        }
						printf("Enter your rating from 0-5 \n");
						scanf("%f",&rating);
                        while(rating>5||rating<0){
                            printf("Enter a valid choice(0-5)\n");
                            scanf("%f",&rating); 
                        }
						// if(citychoice==1)
						// 	bangalore[hotelchoice].rating = (bangalore[hotelchoice].rating+rating)/2; 
						// else if(citychoice==2)
						// 	bangalore[hotelchoice].rating = (bangalore[hotelchoice].rating+rating)/2;
						// else if(citychoice==3)
						// 	bangalore[hotelchoice].rating = (bangalore[hotelchoice].rating+rating)/2;
						// else if(citychoice==4)
						// 	bangalore[hotelchoice].rating = (bangalore[hotelchoice].rating+rating)/2;
						// else if(citychoice==5)
						// 	bangalore[hotelchoice].rating = (bangalore[hotelchoice].rating+rating)/2;	
						//The above block updates the rating of the hotel
						printf("Would you like to leave a review? (y/n)\n");
						// Consume the newline character left over from the previous input
						while ((ch = getchar()) != '\n' && ch != EOF){};
						scanf("%c",&ch);
						if(ch == 'y'){
							printf("Enter your review of below 400 characters down below(in one line):\n ");
							scan_sentences(review);//scan the review
							//fprintf(review_file,"%s: \n %s",person_list[index].name,review);//puts the review in review_file
							printf("Thank you for reviewing! \n");
							printf("You helped in making the app better!\n");
							printf("What next? \n");
							char choiceafterreview;
							printf("1.Dashboard \t 2.Logout \t 3.Exit\n");
							while(true){
								scanf("%c",&choiceafterreview);
								if(choiceafterreview=='1'){
									break;//displays dashboard
								}
								else if(choiceafterreview=='2'){
									choice ='l';//to logout
									break;
								}
								else if(choiceafterreview=='3'){
									printf("Thank you, have a nice day! \n");//to exit
									exit(0);
								}
							}
						}
						else if(ch=='n'){
							printf("Thank you for choosing us\n");
						}
					}//end of review
					if(choice=='l')
						break;//to logout
                    if(choice=='b'){
                        printf("Select City: \n");
						printf("1. Bengaluru \n");
						printf("2. Mumbai \n");
						printf("3. Hyderabad \n");
						printf("4. Chennai \n");
						printf("5. Delhi \n");
                        int hotelchoice;
						while(true){
							scanf("%d",&ratehotelchoice);
							switch (ratehotelchoice){
								case 1: printf("Hotels in Bangalore :\n");
										display_hotels(bangalore);
                                        hotel_choice = choose_hotel();
                                        printf("\t\t%s \n\t Phone-\t\t %s \n %s \t %f-per day\n",bangalore[hotel_choice-1].name,bangalore[hotel_choice-1].contact,bangalore[hotel_choice-1].address,bangalore[hotel_choice-1].price);
										printf("%f stars \n",bangalore[hotel_choice-1].rating);//displays rating
										pets(bangalore[hotel_choice-1].petallowed);//prints if pets are allowed or not
										if(bangalore[hotel_choice-1].wifi)//printf if wifi is available
											printf("WIFI Available \n");
										else
											printf("WIFI not available \n");
                                        printf("%s",bangalore[hotel_choice-1].description);//prints description
                                        noguests = guests(bangalore[hotel_choice-1].max_guests);
                                        printf("Grand Total: Rs.%f \n",price_cal(bangalore[hotel_choice-1].price));//Generates the total amount to be paid
                                        break;
								case 2: printf("Hotels in Mumbai :\n");
										display_hotels(Mumbai);
                                        hotel_choice = choose_hotel();
                                        printf("\t\t%s \n\t Phone-\t\t %s \n %s \t %f-per day\n",Mumbai[hotel_choice-1].name,Mumbai[hotel_choice-1].contact,Mumbai[hotel_choice-1].address,Mumbai[hotel_choice-1].price);
										printf("%f stars \n",Mumbai[hotel_choice-1].rating);
										pets(Mumbai[hotel_choice-1].petallowed);
										if(Mumbai[hotel_choice-1].wifi)
											printf("WIFI Available \n");
										else
											printf("WIFI not available \n");
                                        printf("%s",Mumbai[hotel_choice-1].description);
                                        noguests = guests(Mumbai[hotel_choice-1].max_guests);
                                        printf("Grand Total: Rs.%f \n",price_cal(Mumbai[hotel_choice-1].price));
										break; 
								case 3: printf("Hotels in Hyderabad :\n");
										display_hotels(hyd);
										hotel_choice = choose_hotel();
                                        printf("\t\t%s \n\t Phone-\t\t %s \n %s \t %f-per day\n",hyd[hotel_choice-1].name,hyd[hotel_choice-1].contact,hyd[hotel_choice-1].address,hyd[hotel_choice-1].price);
         								printf("%f stars \n",hyd[hotel_choice-1].rating);
										pets(hyd[hotel_choice-1].petallowed);
										if(hyd[hotel_choice-1].wifi)
											printf("WIFI Available \n");
										else
											printf("WIFI not available \n");                             
										printf("%s",hyd[hotel_choice-1].description);
                                        noguests = guests(hyd[hotel_choice-1].max_guests);
                                        printf("Grand Total: Rs.%f \n",price_cal(hyd[hotel_choice-1].price));	
                                        break; 

								case 4: printf("Hotels in Chennai :\n");
										display_hotels(chennai);
										hotel_choice = choose_hotel();
                                        printf("\t\t%s \n\t Phone-\t\t %s \n %s \t %f-per day\n",chennai[hotel_choice-1].name,chennai[hotel_choice-1].contact,chennai[hotel_choice-1].address,chennai[hotel_choice-1].price);
										printf("%f stars\n",chennai[hotel_choice-1].rating);
										pets(chennai[hotel_choice-1].petallowed);
										if(chennai[hotel_choice-1].wifi)
											printf("WIFI Available \n");
										else
											printf("WIFI not available \n");
										printf("%s",chennai[hotel_choice-1].description);
                                        noguests = guests(chennai[hotel_choice-1].max_guests);
                                        printf("Grand Total: Rs.%f \n",price_cal(chennai[hotel_choice-1].price));
                                        break; 
								
								case 5: printf("Hotels in Delhi :\n");
										display_hotels(Delhi);
                                        hotel_choice = choose_hotel();
                                        printf("\t\t%s \n\t Phone-\t\t %s \n %s \t %f-per day\n",Delhi[hotel_choice-1].name,Delhi[hotel_choice-1].contact,Delhi[hotel_choice-1].address,Delhi[hotel_choice-1].price);
										printf("%f stars \n",Delhi[hotel_choice-1].rating);
										pets(Delhi[hotel_choice-1].petallowed);
										if(Delhi[hotel_choice-1].wifi)
											printf("WIFI Available \n");
										else
											printf("WIFI not available \n");
                                        printf("%s",Delhi[hotel_choice-1].description);
                                        noguests = guests(Delhi[hotel_choice-1].max_guests);
                                        printf("Grand Total: Rs.%f \n",price_cal(Delhi[hotel_choice-1].price));
										break; 

								default:printf("Enter a Valid choice \n");
										//scanf("%d",&ratehotelchoice);
										continue;
										
							}
                            
							printf("What next?\n");
							printf("1.Checkout and Dashboard \t 2.Checkout and logout \t 3.Exit Application\n");
							char p;
							while ((p = getchar()) != '\n' && p != EOF){};	
							scanf("%c",&whatelse);//scans the next action
							while(whatelse!='1' && whatelse!='2' && whatelse!='3'){
								printf("Enter a Valid Choice\n");
								scanf("%c",&whatelse);	
							}
							if(whatelse=='1'){}
							if(whatelse=='2')
								break;
							if(whatelse=='3'){
								printf("Have a nice day!\n");
								exit(0);
							}
							break;
                        }
                    }
					if(whatelse=='2'){
						break;
					}
				}
			}
			
			}
		else if(startup_choice==2){
			create_user(person_list,numpersons,user_file);//to signup
			numpersons++;
		}
		else if(startup_choice==3){
			printf("Thank you, have a nice day! \n");//to exit
			exit(0);	
		}
		else{
			printf("Please choose a valid operation \n");
			continue;
		}
		
	}
	fclose(user_file);
	return 0;
}


