# Orcon Final Rubric
**1. Longer, faster, harder first level layout.** I doubled the length of the level, made the jet fly a little faster, also increased fuel reserves, added turrets, homing missiles and more jets to fly around. I can't always beat the level when I play it so I think it's probably at its limits for toughness.

**2. Homing Missiles that track and damage player or other vehicles.** As I said before I have missiles with variable speed, maneuverability, and aim in front of the player as to track it more accurately. The player usually has to speed up and aim away from the missiles to dodge.

**3. Anti-air Fire streams from turrets.** The turrets themselves are rather expensive computationally so I only put them on the Mission target which is probably the most effective aiming position. It fires at a constant rate and leads the player a little to make it more challenging to dodge, especially up close.

**4. More characteristic modeled and textured cockpit.** I remodeled the entire interior of the cockpit and added a few essential textures/materials. I had to figure out how to do real time reflections for the cockpit glass as well as the mirror at the top. One of the toughest problems I had to solve for the entire project was driving the instruments and joystick of the cockpit. Due to the limitations of the animation blueprints I couldn't access and update pawn variables, instead I had modify and smoothly interpolate the animation blueprint's variables (6 or 7 of them) from the pawn blueprint. I also had to figure out UE4 asinine bone rotation system which goes from -180 to 180 for some reason and doesn't allow even full 360 articulation.

**5. Start and Loading screens that give some narrative background.** I made a couple pieces of art portraying Skinner and the pilot themselves. I also wrote up some short background that gave the gist of the narrative concept. I designed a blueprint from scratch for the start screen as well. I might add more narrative in-between levels in future updates. As a reward for completing the first level the player also gets to see a painting of the jet blowing up and the option to play again.

**6. Basic animations on other jets (side to side motion, rotation and smoke trails).** Friendly jets have subtle animations offset by playrate. I also made a custom, slower animation for the huge enemy jet.

**7. Enemy target jet has new, unique model and attached tracking turrets.** Modeled a bomber based on the Tupolev Tu-95 Bear prop plane (popular in the 60s and even in the current day in Russia). I animated the props realistically and made sure the turrets were at the right scale and functioning as expected.

**8. Properly execute key combo for eject sequence before impact.** For this first level I wanted something simple that the player could remember and not have to fumble over. I used E, J, and C which at first needed to be pushed down all at once but I later changed to pressed in sequence.

**9. Playtest with 3 people and adjust game.** Played with Leah, Amber and Ash. One had little to no experience with video games, one had medium and the last was the most experienced.

**10. Uploaded to Gamejolt.**
Link: https://gamejolt.com/games/orcon/304008

Full gameplay video: 
https://vimeo.com/246914812



## Playtesting notes:

Please note the first two playtests were done using an older build of the game that has the midterm level layout.

**Leah Pease:**
Deaths: 20+
Had the least amount of experience with flight sims and video games in general. She struggled even with the initial easy level I had created. She finally got the end but tried to press all the buttons in order rather than hold them all down (maybe because of the animation I added to the prompt). From that I decided that perhaps I should just allow the player to press them once each in order which makes it slightly more user friendly. I made sure to make this adjustment by adding the option to change from inverted to normal controls before playing. She didn't seem to understand the black clouds, seemingly a pattern among people who aren't familiar with old World War 2 films.

**Amber Taylor:**
Deaths: 3
Amber has experience with a good amount of video games and picked up the controls within a death or two. She wasn't really used to the inverted pitch and vied instead to just roll and use yaw. She completed it relatively easily by just not changing course once which I had to correct by making the player's path to the boss blocked by planes and hindered by missiles. She liked the graphics and mood of it, said it seemed wild and unique. She suggested adding geese or some other sort of obstacle in place of the black clouds. Also said that maybe weather would be another form of obstacle, having wind and lightning, limited visibility etc.

**Ash Neiman:**
Deaths: 10
Ash of course is very experienced with games. As she was my last playtester, she got to try out my close to final version of the first map. She pointed out a couple typos which will be corrected and commented on how it might be easier to pilot with a joystick or gamepad interface. She also had trouble detecting the skin of the missile and would bump into things quite easily. Because a lot of her deaths were from going outside the killzone, she felt like there should be some warning that you aren't supposed to go out (otherwise you just assume a missile killed you or something). She really appreciated the lens widening and how boosting felt. One thing she didn't pick up until near the end was the health meter, which I could probably emphasize with a pulsing glow, secondary damaged effects or something in the tutorial. Otherwise she just assumed one hit was enough to be destroyed.