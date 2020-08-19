<h1> Making our own simple shell </h1>
<img src ="https://www.entreprises-magazine.com/wp-content/uploads/2020/05/Holberton-School-696x385.jpg">
<h2> Description </h2>
<p> This a collaborative project making by <a href="https://github.com/JuanDelgado06">Juan Delgado</a> and <a href="https://github.com/steffanynaranjov">Steffany Naranjo Vargas</a> , students of Holberton School Cali. In this repository you will find the <strong> simple_shell project </strong>. In this project we have to develope our own UNIX command interpreter or shell.
<br> </br>
<p> This project works in the same ways as <code> sh </code> works <code> is equal than (/bin/sh) </code>
<br> </br>
<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://en.wikipedia.org/wiki/Unix_shell" title="Unix shell" target="_blank">Unix shell</a> </li>
<li><a href="https://en.wikipedia.org/wiki/Thompson_shell" title="Thompson shell" target="_blank">Thompson shell</a> </li>
<li><a href="https://en.wikipedia.org/wiki/Ken_Thompson" title="Ken Thompson" target="_blank">Ken Thompson</a> </li>
<li><a href="https://intranet.hbtn.io/concepts/64" title="Everything you need to know to start coding your own shell" target="_blank">Everything you need to know to start coding your own shell</a> </li>
</ul>

<p><strong>man or help</strong>: </p>

<ul>
<li><code>sh</code> (<em>Run <code>sh</code> as well</em>)</li>
</ul>
<br> </br>
<h2>Requirements</h2>

<li>Your C programs and functions will be compiled with <code>gcc 4.8.4</code> using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> <code>and -pedantic</code></li>

<h2>More Info</h2>

<h3>Output</h3>

<ul>
<li>Unless specified otherwise, your program <strong>must have the exact same output</strong> as <code>sh</code> (<code>/bin/sh</code>) as well as the exact same error output.</li>
<li>The only difference is when you print an error, the name of the program must be equivalent to your <code>argv[0]</code> (See below)</li>
</ul>

<p>Example of error with <code>sh</code>:</p>

<pre><code>$ echo &quot;qwerty&quot; | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo &quot;qwerty&quot; | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
</code></pre>

<p>Same error with your program <code>hsh</code>:</p>

<pre><code>$ echo &quot;qwerty&quot; | ./hsh
./hsh: 1: qwerty: not found
$ echo &quot;qwerty&quot; | ./././hsh
./././hsh: 1: qwerty: not found
$

</code></pre>

<h3>Compilation</h3>

<p>Your shell will be compiled this way:</p>

<pre><code>gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
</code></pre>
<p> And you manual will be compiled in this way: </p>
<pre><code>man ./man_1_simple_shell </code></pre>

<h3>Testing</h3>

<p>Your shell should work like this in interactive mode:</p>

<pre><code>$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
</code></pre>

<p>But also in non-interactive mode:</p>

<pre><code>$ echo &quot;/bin/ls&quot; | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
</code></pre>

<h2> Authors </h2>
<a href="https://github.com/JuanDelgado06">Juan Delgado</a>
<br> </br>
<a href="https://github.com/steffanynaranjov">Steffany Naranjo Vargas</a>