# basic_system_call
This repo includes a basic patch for a system call. I used this to understand how system calls are implemented in the linux kernel. The linux kernel version used
for this project for v5.8. To successfully patch the linux kernel we first need to clone the linux kernel:
<pre><code>git clone https://github.com/torvalds/linux.git 
</code></pre>

After successfully cloning the kernel do:
<pre><code>git checkout v5.8
patch < syscall.patch
</code></pre>

After this, make and install the linux kernel. Various guides are available for this online hence I choose not to include this in the description.


## Testing the system call
After installing and booting into the new kernel we need to test the system call. To test the system call:
<pre><code>cd test_sys_s2_ecrypt
make
./test -k 2 -s teststring
</code></pre>

To see the kernel messages that the system call logs to the terminal run the following in a different terminal before running the test file:
<pre><code>dmesg -w
</code></pre>
