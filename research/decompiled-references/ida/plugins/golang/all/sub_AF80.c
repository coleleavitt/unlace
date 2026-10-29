mov    rdi.8, rax.8
ldx    ds.2, (rdi.8+#0x10.8), rdi.8
mov    call !__readfsqword<fast:"unsigned int" #0x28.4> => "unsigned __int64" .8, rbx.8
mov    rbx.8, %var_20.8
mov    rdx.8, rbx.8
mov    #0.1, cf.1
mov    #0.1, of.1
setz   [ds.2:(rdi.8+#0x22E.8)].1, #0.1, zf.1
setp   [ds.2:(rdi.8+#0x22E.8)].1, #0.1, pf.1
sets   [ds.2:(rdi.8+#0x22E.8)].1, sf.1
jz     [ds.2:(rdi.8+#0x22E.8)].1, #0.1, @8
setb   rsi.8, #0x5E.8, cf.1
seto   rsi.8, #0x5E.8, of.1
setz   rsi.8, #0x5E.8, zf.1
setp   rsi.8, #0x5E.8, pf.1
sets   (rsi.8-#0x5E.8), sf.1
jz     rsi.8, #0x5E.8, @25
jcnd   lnot(((sf.1 ^ of.1) | zf.1)), @11
setb   rsi.8, #0x43.8, cf.1
seto   rsi.8, #0x43.8, of.1
setz   rsi.8, #0x43.8, zf.1
setp   rsi.8, #0x43.8, pf.1
sets   (rsi.8-#0x43.8), sf.1
jz     rsi.8, #0x43.8, @16
setb   rsi.8, #0x56.8, cf.1
seto   rsi.8, #0x56.8, of.1
setz   rsi.8, #0x56.8, zf.1
setp   rsi.8, #0x56.8, pf.1
sets   (rsi.8-#0x56.8), sf.1
jnz    rsi.8, #0x56.8, @8
mov    #1.8, rsi.8
call   $sub_AD10
mov    #0.1, cf.1
mov    #0.1, of.1
mov    #1.1, zf.1
setp   #0.4, #0.4, pf.1
mov    #0.1, sf.1
mov    #0.8, rax.8
setb   %var_20.8, call !__readfsqword<fast:"unsigned int" #0x28.4> => "unsigned __int64" .8, cf.1
seto   %var_20.8, call !__readfsqword<fast:"unsigned int" #0x28.4> => "unsigned __int64" .8, of.1
sub    %var_20.8, call !__readfsqword<fast:"unsigned int" #0x28.4> => "unsigned __int64" .8, rdx.8
setz   rdx.8, #0.8, zf.1
setp   rdx.8, #0.8, pf.1
sets   rdx.8, sf.1
mov    #0.8, rdx.8
goto   @40
setb   rsi.8, #0x60.8, cf.1
seto   rsi.8, #0x60.8, of.1
setz   rsi.8, #0x60.8, zf.1
setp   rsi.8, #0x60.8, pf.1
sets   (rsi.8-#0x60.8), sf.1
jnz    rsi.8, #0x60.8, @8
mov    rsp.8, rdi.8
mov    #0.8, rcx.8
mov    &($aGolang).8, rsi.8
mov    #0.1, cf.1
mov    #0.1, of.1
mov    #1.1, zf.1
setp   #0.4, #0.4, pf.1
mov    #0.1, sf.1
mov    #0.8, rdx.8
call   $".netnode_check"
xdu    $byte_284C8.1, rax.8
mov    #0.1, cf.1
mov    #0.1, of.1
setz   $byte_284C8.1, #0.1, zf.1
setp   $byte_284C8.1, #0.1, pf.1
sets   $byte_284C8.1, sf.1
jz     $byte_284C8.1, #0.1, @33
mov    #2.8, rdx.8
mov    &($qword_28480).8, rsi.8
mov    rbx.8, rdi.8
call   $".cvt64_node_supval_for_event"
xds    eax.4, rax.8
goto   @9
mov    #0x43.8, rsi.8
mov    #0.1, cf.1
mov    #0.1, of.1
setz   [ds.2:(rdi.8+#0x22C.8)].1, #0.1, zf.1
setp   [ds.2:(rdi.8+#0x22C.8)].1, #0.1, pf.1
sets   [ds.2:(rdi.8+#0x22C.8)].1, sf.1
jz     [ds.2:(rdi.8+#0x22C.8)].1, #0.1, @8
xdu    [ds.2:rbx.8].4, rcx.8
setb   ecx.4, #0x2F.4, cf.1
seto   ecx.4, #0x2F.4, of.1
setz   ecx.4, #0x2F.4, zf.1
setp   ecx.4, #0x2F.4, pf.1
sets   (ecx.4-#0x2F.4), sf.1
ja     ecx.4, #0x2F.4, @30
ldx    ds.2, (rbx.8+#0x10.8), rdx.8
xdu    (ecx.4+#8.4), rdi.8
xdu    ecx.4, rsi.8
stx    edi.4, ds.2, rbx.8
ldx    ds.2, (rdx.8+xdu.8(ecx.4)), r8.8
setb   edi.4, #0x2F.4, cf.1
seto   edi.4, #0x2F.4, of.1
setz   edi.4, #0x2F.4, zf.1
setp   edi.4, #0x2F.4, pf.1
sets   (ecx.4-#0x27.4), sf.1
ja     edi.4, #0x2F.4, @39
xdu    (ecx.4+#0x10.4), rsi.8
stx    esi.4, ds.2, rbx.8
ldx    ds.2, (rdx.8+rdi.8), rdi.8
setb   esi.4, #0x2F.4, cf.1
seto   esi.4, #0x2F.4, of.1
setz   esi.4, #0x2F.4, zf.1
setp   esi.4, #0x2F.4, pf.1
sets   (ecx.4-#0x1F.4), sf.1
ja     esi.4, #0x2F.4, @38
xdu    (ecx.4+#0x18.4), rcx.8
cfadd  rsi.8, rdx.8, cf.1
ofadd  rsi.8, rdx.8, of.1
setz   (rsi.8+rdx.8), #0.8, zf.1
setp   (rsi.8+rdx.8), #0.8, pf.1
sets   (rsi.8+rdx.8), sf.1
add    rsi.8, rdx.8, rdx.8
stx    ecx.4, ds.2, rbx.8
xdu    [ds.2:rdx.8].4, rdx.8
mov    #0.1, cf.1
mov    #0.1, of.1
setz   edx.4, #0.4, zf.1
setp   edx.4, #0.4, pf.1
sets   edx.4, sf.1
jz     edx.4, #0.4, @8
setnz  r8.8, #-1.8, cf.1
seto   r8.8, #-1.8, of.1
setz   (r8.8+#1.8), #0.8, zf.1
setp   (r8.8+#1.8), #0.8, pf.1
sets   (r8.8+#1.8), sf.1
jnz    r8.8, #-1.8, @8
mov    #-1.8, r8.8
ldx    ds.2, (rax.8+#0x10.8), rax.8
mov    rdi.8, rsi.8
mov    rax.8, rdi.8
call   $sub_7670
xdu    al.1, rax.8
goto   @9
mov    #0x5E.8, rsi.8
xdu    [ds.2:rbx.8].4, rax.8
setb   eax.4, #0x2F.4, cf.1
seto   eax.4, #0x2F.4, of.1
setz   eax.4, #0x2F.4, zf.1
setp   eax.4, #0x2F.4, pf.1
sets   (eax.4-#0x2F.4), sf.1
ja     eax.4, #0x2F.4, @29
xdu    eax.4, rdx.8
xdu    (eax.4+#8.4), rax.8
cfadd  [ds.2:(rbx.8+#0x10.8)].8, rdx.8, cf.1
ofadd  [ds.2:(rbx.8+#0x10.8)].8, rdx.8, of.1
setz   ([ds.2:(rbx.8+#0x10.8)].8+rdx.8), #0.8, zf.1
setp   ([ds.2:(rbx.8+#0x10.8)].8+rdx.8), #0.8, pf.1
sets   ([ds.2:(rbx.8+#0x10.8)].8+rdx.8), sf.1
add    [ds.2:(rbx.8+#0x10.8)].8, rdx.8, rdx.8
stx    eax.4, ds.2, rbx.8
ldx    ds.2, rdx.8, rdi.8
call   $sub_1DF70
goto   @8
ldx    ds.2, (rbx.8+#8.8), rdx.8
add    rdx.8, #8.8, rax.8
stx    (rdx.8+#8.8), ds.2, (rbx.8+#8.8)
goto   @27
ldx    ds.2, (rbx.8+#8.8), rdx.8
add    rdx.8, #8.8, rcx.8
stx    (rdx.8+#8.8), ds.2, (rbx.8+#8.8)
ldx    ds.2, rdx.8, r8.8
add    rcx.8, #8.8, rdx.8
stx    (rcx.8+#8.8), ds.2, (rbx.8+#8.8)
ldx    ds.2, rcx.8, rdi.8
add    rdx.8, #8.8, rcx.8
stx    (rdx.8+#8.8), ds.2, (rbx.8+#8.8)
goto   @21
mov    #0.1, $byte_284C8.1
mov    &($byte_284C8).8, rbp.8
mov    &($byte_284C8).8, rdi.8
call   $".__cxa_guard_acquire"
mov    #0.1, cf.1
mov    #0.1, of.1
setz   eax.4, #0.4, zf.1
setp   eax.4, #0.4, pf.1
sets   eax.4, sf.1
jz     eax.4, #0.4, @14
mov    %var_28.8, rax.8
mov    rbp.8, rdi.8
mov    %var_28.8, $qword_28480.8
mov    %var_28.8, $qword_28498.8
call   $".__cxa_guard_release"
goto   @14
ldx    ds.2, (rbx.8+#8.8), rdx.8
goto   @32
ldx    ds.2, (rbx.8+#8.8), rcx.8
goto   @31
