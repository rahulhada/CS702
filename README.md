#CS702

[![Join the chat at https://gitter.im/CS702/CryptoFrameWork](https://badges.gitter.im/CS702/CryptoFrameWork.svg)](https://gitter.im/CS702/CryptoFrameWork?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)
<br><br>This repo is  dedicated to my course CS-702 (Cryptography and Network Security ) at Alliance University.
In this repo you will finds code , projects and analytical stuff from my course CS-702.The course duration is one semester starting from sept'16 to jan'17.

#Main Folders
<ol>
    <li><a href="https://github.com/SilverFoxA/CS702/tree/gh-pages/ProgramOriented">ProgramOriented</a></li>
    <li><a href="https://github.com/SilverFoxA/CS702/tree/gh-pages/ApplicationOriented">ApplicationOriented</a></li>
    <li><a href="https://github.com/SilverFoxA/CS702/tree/gh-pages/ResearchOriented">ResearchOriented</a></li>
</ol>

<strong><u>Topics</u></strong>
<br>
<ul>
    <li><a href="https://github.com/SilverFoxA/CS702/tree/gh-pages/ProgramOriented">GCD [ Greatest Common Divisor]</a></li>
</ul>

#Keep the `gh-pages` branch updated with `master`

<small>`gh-pages` is responsible for the website not the `master` branch.</small><br>
<pre>
// Reference: http://lea.verou.me/2011/10/easily-keep-gh-pages-in-sync-with-master/

$ git add .
$ git status // to see what changes are going to be commited
$ git commit -m 'Some descriptive commit message'
$ git push origin master

$ git checkout gh-pages // go to the gh-pages branch
$ git rebase master // bring gh-pages up to date with master
$ git push origin gh-pages // commit the changes
$ git checkout master // return to the master branch
</pre>

