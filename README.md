<p><em>This project has been created as part of the 42 curriculum by &lt;tmeqdad;.</em></p>

<h1>ft_printf</h1>

<h2>Description</h2>
<p><strong>ft_printf</strong> is a custom implementation of the standard C <code>printf</code> function, built as part of the 42 curriculum.  
It handles formatted output and supports:</p>
<ul>
  <li>Characters and strings</li>
  <li>Pointers</li>
  <li>Signed and unsigned integers</li>
  <li>Hexadecimal numbers</li>
  <li>Percent signs</li>
</ul>
<p>This project enhances understanding of variadic functions, format specifiers, and low-level output handling in C.</p>

<h2>Instructions</h2>
<p>Compile the library:</p>
<pre><code>git clone &lt;git@github.com:toqameqdad/ft_printf42.git&gt;
cd ft_printf
make
</code></pre>

<p>Use it in your projects:</p>
<pre><code>gcc main.c -L. -lftprintf -I./includes
</code></pre>

<p>Example usage in code:</p>
<pre><code>#include "ft_printf.h"
#include &lt;stdio.h&gt>

int main(void)
{
    int ret;

    ret = ft_printf("Hello %s! Number: %d\n", "42", 2025);
    ft_printf("Printed characters: %d\n", ret);

    return 0;
}
</code></pre>

<h2>Supported Specifiers</h2>
<ul>
  <li><code>%c</code> - Character</li>
  <li><code>%s</code> - String</li>
  <li><code>%p</code> - Pointer</li>
  <li><code>%d</code>, <code>%i</code> - Signed integers</li>
  <li><code>%u</code> - Unsigned integers</li>
  <li><code>%x</code>, <code>%X</code> - Hexadecimal numbers (lower/upper)</li>
  <li><code>%%</code> - Percent sign</li>
</ul>

<h2>Resources</h2>
<ul>
  <li><a href="https://www.42.fr">42 Network</a></li>
  <li>C standard documentation</li>
  <li>AI (ChatGPT) was used for explanations and guidance; all code was written by the student.</li>
</ul>
