<?php
$z[0]=Array("field","",64,83);
$z[0][4]['name']="title";
$z[1]=Array("global","",84,110);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",151,180);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",220,278);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",918,954);
$z[4][4]['filename']="head2.htm";
$z[5]=Array("list","\r\n      <li> <a href=\"[field:arcurl/]\" title=\"[field:title/]\">\r\n        <div class=\"w1200\">\r\n          <div class=\"news_date\">[field:pubdate function='strftime(\"%d\",@me)'/] <span>[field:pubdate function='strftime(\"%Y-%m\",@me)'/]</span></div>\r\n          <div class=\"news_context_right\">\r\n            <h3>[field:title/]</h3>\r\n            <p>[field:description function='cn_substr(@me,150)'/]...</p>\r\n          </div>\r\n        </div>\r\n        </a> </li>\r\n      ",1201,1710);
$z[5][4]['pagesize']="6";
$z[5][4]['titlelen']="100";
$z[6]=Array("pagelist","",1755,1821);
$z[6][4]['listitem']="index,end,pre,next,pageno";
$z[6][4]['listsize']="7";
$z[7]=Array("include","",1838,1873);
$z[7][4]['filename']="foot.htm";

?>