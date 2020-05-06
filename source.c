#include <Elementary.h>
 
typedef struct _APP
{
  Evas_Object *tb1, *tb2;
  Evas_Object *btnLoad, *btnRelease;
} APP;

const char * SET_TEXT_1 = "set text 1";
const char * SET_TEXT_2 = "set text 2";
const char * CLEAR_TEXT_1 = "clear text 1";
const char * CLEAR_TEXT_2 = "clear text 2";
 
char *text = "<align=center><color=#4DE0FFFF underline=on underline_color=#4DE0FFFF><a href='tel:1234567890'>1234567890</a></color>qwertyuiopasdfghjklñzxcvbnm+×÷=/_€£()@#$%^&amp;*¿¡!-'&quot;:;,?`~|&lt;&gt;{}[]°•○●□■♤♡◇♧☆▪¤《》¥₩😀😁😂🤣😃😄😅😆😉😊😋😎😍😘😗😙😚☺🙂🤗🤔😐😑😶🙄😏😣😥😮🤐😯😪😫😴😌🤓😛😜😝🤤😒😓😔😕🙃🤑😲☹🙁😖😞😟😤😢😭😦😧😨😩😬😰😱😳😵😡😠😇🤠🤡🤥😷🤒🤕🤢🤧☻😈👿👹👺💀☠👻👽👾🤖💩😺😸😹😻😼😽🙀😿😾🙈🙉🙊👦👧👨👩👵👶👼👨‍⚕️👩‍⚕️👨‍🎓👩‍🎓👨‍🏫👩‍🏫👨‍⚖👩‍⚖👨‍🌾👩‍🌾👨‍🍳👩‍🍳👨‍🔧👩‍🔧👨‍🏭👩‍🏭👨‍💼👩‍💼👨‍🔬👩‍🔬👨‍💻👩‍💻👨‍🎤👩‍🎤👨‍🎨👩‍🎨👨‍✈️👩‍✈️👨‍🚀👩‍🚀👨‍🚒👩‍🚒👮‍♂️👮‍♀️🕵️‍♂️🕵️‍♀️💂‍♂️💂‍♀️👷‍♂️👷‍♀️👳‍♂️👳‍♀️👱‍♂️👱‍♀️🎅🤶👸🤴👰🤵🤰👲🙍‍♂️🙍‍♀️🙎‍♂️🙎‍♀️🙅‍♂️🙅‍♀️🙆‍♂️🙆‍♀️💁‍♂️💁‍♀️🙋‍♂️🙋‍♀️🙇‍♂️🙇‍♀️🤦‍♂️🤦‍♀️🤷‍♂️🤷‍♀️💆‍♂️💆‍♀️💇‍♂️💇‍♀️🚶‍♂️🚶‍♀️🏃‍♂️🏃‍♀️💃🕺👯‍♂️👯‍♀️🕴🗣👤👥👫👬👭💏💑👪👨‍👩‍👧👨‍👩‍👧‍👦👨‍👩‍👦‍👦👨‍👩‍👧‍👧👨‍👦👨‍👦‍👦👨‍👧👨‍👧‍👦👨‍👧‍👧👩‍👦👩‍👦‍👦👩‍👧👩‍👧‍👦👩‍👧‍👧💪🤳👈👉☝️👆🖕👇✌🤞🖖🤘👊🖐✋👌👍👎✊👊🤛🤜🤚👋👏✍👐🙌🙏🤝💅👂👃👣👀👁👅👄💋💘❤💓💔💕💖💗💙💚💛💜🖤💝💞💟❣💌💤💢💣💥💦💨💫💬🗨🗯💭🕳👓🕶👔👕👖👗👘👙👚👛👜👝🛍🎒👞👟👠👡👢👑👒🎩🎓⛑📿💄💍💎🐵🐒🦍🐶🐕🐩🐺🦊🐱🐈🦁🐯🐅🐆🐴🐎🦌🦄🐮🐂🐃🐄🐷🐖🐗🐽🐏🐑🐐🐪🐫🐘🦏🐭🐁🐀🐹🐰🐇🐿🦇🐻🐨🐼🐾🦃🐔🐓🐣🐤🐥🐦🐧🕊🦅🦆🦉🐸🐊🐢🦎🐍🐲🐉🐳🐋🐬🐟🐠🐡🦈🐙🐚🦀🦐🦑🦋🐌🐛🐜🐝🐞🕷🕸🦂💐🌸💮🏵🌹🥀🌺🌻🌼🌷⚘🌱🌲🌳🌴🌵🌾🌿☘🍀🍁🍂🍃🍇🍈🍉🍊🍋🍌🍍🍎🍏🍐🍑🍒🍓🍅🥝🥑🍆🥔🥕🌽🌶🥒🍄🥜🌰🍞🥐🥖🥞🧀🍖🍗🥓🍔🍟🍕🌭🌮🌯🥙🥚🍳🥘🍲🥗🍿🍱🍘🍙🍚🍛🍜🍝🍠🍢🍣🍤🍥🍡🍦🍧🍨🍩🍪🎂🍰🍫🍬🍭🍮🍯🍼🥛☕🍵🍶🍾🍷🍸🍹🍺🍻🥂🍽🍴🥄🔪🏺🎃🎄🎆🎇✨🎈🎉🎊🎋🎍🎎🎏🎐🎑🎀🎁🎗🎟🎫🎖🏆🏅🥇🥈🥉⚽️⚾️🏀🏐🏈🏉🎾🎱🎳🏏🏑🏒🏓🏸🥊🥋🥅🎯⛳🏌️‍♂️🏌️‍♀️⛸🎣🎽🎿⛷🏂🏄‍♂️🏄‍♀️🏇🏊‍♂️🏊‍♀️⛹️‍♂️⛹️‍♀️🏋️‍♂️🏋️‍♀️🚴‍♂️🚴‍♀️🚵‍♂️🚵‍♀️🏎🏍🤸‍♂️🤸‍♀️🤼‍♂️🤼‍♀️🤽‍♂️🤽‍♀️🤾‍♂️🤾‍♀️🤺🤹‍♂️🤹‍♀️🎮🕹🎲♠️♥️♦️♣️🃏🀄🎴🌍🌎🌏🌐🗺🏔⛰🌋🗻🏕🏖🏜🏝🏞🏟🏛🏗🏘🏙🏚🏠🏡🏢🏣🏤🏥🏦🏨🏩🏪🏫🏬🏭🏯🏰💒🗼🗽⛪🕌🕍⛩🕋⛲⛺🌁🌃🌄🌅🌆🌇🌉⛼♨️🌌🎠🎡🎢💈🎪🎭🖼🎨🎰🚂🚃🚄🚅🚆🚇🚈🚉🚊🚝🚞🚋🚌🚍🚎🚐🚑🚒🚓🚔🚕🚖🚗🚘🚙🚚🚛⛟🚜🚲🛴🛵🚏🛣🛤⛽🚨🚥🚦🚧🛑⚓⛵🚣‍♂️🚣‍♀️🛶🚤🛳⛴🛥🚢✈🛩🛫🛬💺🚁🚟🚠🚡🚀🛰🛎🚪🛌🛏🛋🚽🚿🛀🛁⌛⏳⌚⏰⏱⏲🕰🕛🕧🕐🕜🕑🕝🕒🕞🕓🕟🕔🕠🕕🕡🕖🕢🕗🕣🕘🕤🕙🕥🕚🕦🌑🌒🌓🌔🌕🌖🌗🌘🌙🌚🌛🌜🌡☀️🌝🌞⭐🌟🌠☁️⛅⛈🌤🌥🌦🌧🌨🌩🌪🌫🌬🌀🌈🌂☂️☔⛱⚡❄☃️⛄☄🔥💧🌊🔇🔈🔉🔊📢📣📯🔔🔕🎼🎵🎶🎙🎚🎛🎤🎧📻🎷🎸🎹🎺🎻🥁📱📲☎️📞📟📠🔋🔌💻🖥🖨⌨🖱🖲💽💾💿📀🎥🎞📽🎬📺📷📸📹📼🔍🔎🔬🔭📡🕯💡🔦🏮📔📕📖📗📘📙📚📓📒📃📜📄📰🗞📑🔖🏷💰💴💵💶💷💸💳💱💲✉📧📨📩📤📥📦📫📪📬📭📮🗳✏✒🖋🖊🖌🖍📝💼📁📂🗂📅📆🗒🗓📇📈📉📊📋📌📍📎🖇📏📐✂️🗃🗄🗑🔒🔓🔏🔐🔑🗝🔨⛏⚒🛠🗡⚔🔫🏹🛡🔧🔩⚙🗜⚗⚖🔗⛓💉💊🚬⚰⚱🗿🛢🔮🔮🏧🚮🚰♿🚹🚺🚻🚼🚾🛂🛃🛄🛅⚠️🚸⛔🚫🚳🚭🚯🚱🚷📵🔞☢☣⬆️↗️➡️↘️⬇️↙️⬅️↖️↕️↔️↩↪⤴️⤵️🔃🔄🔙🔚🔛🔜🔝🛐⚛🕉✡☸☯️☦☮🕎🔯♈♉♊♋♌♍♎♏♐♑♒♓⛎🔀🔁🔂▶️⏩⏭⏯◀️⏪⏮🔼⏫🔽⏬⏸⏹⏺⏏🎦🔅🔆📶📳📴♻️📛⚜🔰🔱⭕✅☑✔✖❌❎➕♀️♂️⚕➖➗➰➿〽✳✴❇⁉️❓❔❕❗〰🔟💯🔠🔡🔢🔣🔤🅰️🆎️🅱️🆑️🆒️🆓️ℹ🆔️Ⓜ️🆕️🆖️🅾️🆗️🅿️🆘️🆙️🆚️🈁🈂🈷🈶🈯🉐🈹🈚🈲🉑🈸🈴🈳㊗㊙🈺🈵▫️◻◼◽◾⬛⬜🔶️🔷️🔸️🔹️🔺️🔻💠🔘🔲🔳⚪⚫🔴🔵🏁🚩🏴🏳🏳️‍🌈⚀⚁⚂⚃⚄⚅⛾♾🇦🇨🇦🇩🇦🇪🇦🇫🇦🇬🇦🇮🇦🇱🇦🇲🇦🇴🇦🇶🇦🇷🇦🇸🇦🇹🇦🇺🇦🇼🇦🇽🇦🇿🇧🇦🇧🇧🇧🇩🇧🇪🇧🇫🇧🇬🇧🇭🇧🇮🇧🇯🇧🇱🇧🇲🇧🇳🇧🇴🇧🇶🇧🇷🇧🇸🇧🇹🇧🇼🇧🇾🇧🇿🇨🇦🇨🇨🇨🇩🇨🇫🇨🇬🇨🇭🇨🇮🇨🇰🇨🇱🇨🇲🇨🇳🇨🇴🇨🇷🇨🇺🇨🇻🇨🇼🇨🇽🇨🇾🇨🇿🇩🇪🇩🇯🇩🇰🇩🇲🇩🇴🇩🇿🇪🇨🇪🇪🇪🇬🇪🇭🇪🇷🇪🇸🇪🇹🇪🇺🇫🇮🇫🇯🇫🇰🇫🇲🇫🇴🇫🇷🇬🇦🇬🇧🇬🇩🇬🇪🇬🇫🇬🇬🇬🇭🇬🇮🇬🇱🇬🇲🇬🇳🇬🇵🇬🇶🇬🇷🇬🇸🇬🇹🇬🇺🇬🇼🇬🇾🇭🇰🇭🇲🇭🇳🇭🇷🇭🇹🇭🇺🇮🇨🇮🇩🇮🇪🇮🇱🇮🇲🇮🇳🇮🇴🇮🇶🇮🇷🇮🇸🇮🇹🇯🇪🇯🇲🇯🇴🇯🇵🇰🇪🇰🇬🇰🇭🇰🇮🇰🇲🇰🇳🇰🇵🇰🇷🇰🇼🇰🇾🇰🇿🇱🇦🇱🇧🇱🇨🇱🇮🇱🇰🇱🇷🇱🇸🇱🇹🇱🇺🇱🇻🇱🇾🇲🇦🇲🇨🇲🇩🇲🇪🇲🇬🇲🇭🇲🇰🇲🇱🇲🇲🇲🇳🇲🇴🇲🇵🇲🇶🇲🇷🇲🇸🇲🇹🇲🇺🇲🇻🇲🇼🇲🇽🇲🇾🇲🇿🇳🇦🇳🇨🇳🇪🇳🇫🇳🇬🇳🇮🇳🇱🇳🇴🇳🇵🇳🇷🇳🇺🇳🇿🇴🇲🇵🇦🇵🇪🇵🇫🇵🇬🇵🇭🇵🇰🇵🇱🇵🇲🇵🇳🇵🇷🇵🇸🇵🇹🇵🇼🇵🇾🇶🇦🇷🇪🇷🇴🇷🇸🇷🇺🇷🇼🇸🇦🇸🇧🇸🇨🇸🇩🇸🇪🇸🇬🇸🇭🇸🇮🇸🇰🇸🇱🇸🇲🇸🇳🇸🇴🇸🇷🇸🇸🇸🇹🇸🇻🇸🇽🇸🇾🇸🇿🇹🇦🇹🇨🇹🇩🇹🇫🇹🇬🇹🇭🇹🇯🇹🇰🇹🇱🇹🇲🇹🇳🇹🇴🇹🇷🇹🇹🇹🇻🇹🇼🇹🇿🇺🇦🇺🇬🇺🇳🇺🇸🇺🇾🇺🇿🇻🇦🇻🇨🇻🇪🇻🇬🇻🇮🇻🇳🇻🇺🇼🇫🇼🇸🇽🇰🇾🇪🇾🇹🇿🇦🇿🇲🇿🇼8<br/><br/><br/><br/>Sent from my Samsung Galaxy smartphone.</align>";
void _button_clicked(void *data, Evas_Object *obj, void *event_info)
{
   APP *app = data;
   if(obj == app->btnLoad)
    {
       int w,h;
       if (!strcmp(elm_object_text_get(app->btnLoad), SET_TEXT_1))
       {
          elm_object_text_set(app->btnLoad, SET_TEXT_2);
          evas_object_textblock_text_markup_set(app->tb1, text);
          evas_object_textblock_size_formatted_get(app->tb1, &w, &h);
          evas_object_size_hint_min_set(app->tb1, 340, w/340 + h + 150);
       }
       else if (!strcmp(elm_object_text_get(app->btnLoad), SET_TEXT_2))
       {
          elm_object_text_set(app->btnLoad, CLEAR_TEXT_1);
          evas_object_textblock_text_markup_set(app->tb2, text);
          evas_object_textblock_size_formatted_get(app->tb2, &w, &h);
          evas_object_size_hint_min_set(app->tb2, 340, w/340 + h + 150);
       }
       else if (!strcmp(elm_object_text_get(app->btnLoad), CLEAR_TEXT_1))
       {
          elm_object_text_set(app->btnLoad, CLEAR_TEXT_2);
          evas_object_textblock_text_markup_set(app->tb1, "");
       }
       else
       {
          elm_object_text_set(app->btnLoad, SET_TEXT_1);
          evas_object_textblock_text_markup_set(app->tb2, "");
       }
    }
    else if (obj == app->btnRelease)
    {
       evas_text_cache_release(EVAS_TEXT_CACHE_POLICY_TEXTURE);
    }
}
 
EAPI_MAIN int
elm_main(int argc EINA_UNUSED, char **argv EINA_UNUSED)
{
  APP *app = calloc(1, sizeof(APP));
  Evas_Object *win, *scroller1, *scroller2, *box;
 
  elm_policy_set(ELM_POLICY_QUIT, ELM_POLICY_QUIT_LAST_WINDOW_CLOSED);
 
  win = elm_win_util_standard_add("", "");
  elm_win_autodel_set(win, EINA_TRUE);
 
  box = elm_box_add(win);
  evas_object_size_hint_weight_set(box, EVAS_HINT_EXPAND, EVAS_HINT_EXPAND);
  evas_object_size_hint_align_set(box, EVAS_HINT_FILL, EVAS_HINT_FILL);
  scroller1 = elm_scroller_add(win);
  evas_object_size_hint_weight_set(scroller1, EVAS_HINT_EXPAND, EVAS_HINT_EXPAND);
  evas_object_size_hint_align_set(scroller1, EVAS_HINT_FILL, EVAS_HINT_FILL);
  scroller2 = elm_scroller_add(win);
  evas_object_size_hint_weight_set(scroller2, EVAS_HINT_EXPAND, EVAS_HINT_EXPAND);
  evas_object_size_hint_align_set(scroller2, EVAS_HINT_FILL, EVAS_HINT_FILL);


  //evas_text_cache_policy_set(EVAS_TEXT_CACHE_POLICY_TEXTURE ,EVAS_TEXT_CACHE_NONE);

  app->tb1 = evas_object_textblock_add(win);
  app->tb2 = evas_object_textblock_add(win);
  Evas_Textblock_Style *style = evas_textblock_style_new();
  evas_textblock_style_set(style, "DEFAULT='font=arial font_size=40 color=red ellipsis=-1.0 wrap=mixed'");
  evas_object_textblock_style_set(app->tb1, style);
  evas_object_textblock_style_set(app->tb2, style);
  evas_textblock_style_free(style);
  style = NULL;

  int w,h;
  evas_object_textblock_text_markup_set(app->tb1, "");
  evas_object_textblock_text_markup_set(app->tb2, "");
  evas_object_size_hint_min_set(app->tb1, 340, 12360);
  evas_object_size_hint_min_set(app->tb2, 340, 12360);
  elm_object_content_set(scroller1, app->tb1);
  elm_object_content_set(scroller2, app->tb2);
  elm_box_pack_end(box, scroller1);
  elm_box_pack_end(box, scroller2);
  elm_object_content_set(win, box);
 
  app->btnLoad = elm_button_add(win);
  elm_object_text_set(app->btnLoad, SET_TEXT_1);
  evas_object_smart_callback_add(app->btnLoad, "clicked", _button_clicked, app);
  evas_object_show(app->btnLoad);
  evas_object_move(app->btnLoad, 0, 20);
  evas_object_resize(app->btnLoad, 100, 20);

  app->btnRelease = elm_button_add(win);
  elm_object_text_set(app->btnRelease, "Release Mem");
  evas_object_smart_callback_add(app->btnRelease, "clicked", _button_clicked, app);
  evas_object_show(app->btnRelease);
  evas_object_move(app->btnRelease, 0, 50);
  evas_object_resize(app->btnRelease, 100, 20);

  evas_object_resize(win, 360, 720);
  evas_object_show(box);
  evas_object_show(scroller1);
  evas_object_show(scroller2);
  evas_object_show(win);
  elm_run();
 
  return 0;
}
ELM_MAIN()

