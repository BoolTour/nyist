<li> <a href="[field:arcurl/]" title="[field:title/]">
        <div class="w1200">
          <div class="news_date">[field:pubdate function='strftime("%d",@me)'/] <span>[field:pubdate function='strftime("%Y-%m",@me)'/]</span></div>
          <div class="news_context_right">
            <h3>[field:title/]</h3>
            <p>[field:description function='cn_substr(@me,150)'/]...</p>
          </div>
        </div>
        </a> </li>