unsigned __int64 __fastcall sub_32BE0(__int64 *a1)
{
  size_t v3; // r14
  __int64 v4; // r12
  size_t v5; // rax
  size_t v6; // r9
  void *v7; // rdx
  void *v8; // rdi
  char *v9; // r10
  __int64 v10; // rax
  char *v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  const char *errdesc; // rdx
  char *v17; // rsi
  char *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rsi
  char *v21; // rdi
  __int64 v22; // r12
  __int64 v23; // r14
  char *v24; // rdx
  size_t v25; // r9
  char *v26; // r8
  size_t v27; // r11
  __int64 v28; // rsi
  const char *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  char *v32; // [rsp+8h] [rbp-C8h]
  size_t v33; // [rsp+10h] [rbp-C0h]
  size_t v34; // [rsp+10h] [rbp-C0h]
  char *v35; // [rsp+18h] [rbp-B8h]
  size_t v36; // [rsp+18h] [rbp-B8h]
  char *src; // [rsp+20h] [rbp-B0h]
  _BYTE *srcb; // [rsp+20h] [rbp-B0h]
  void *srca; // [rsp+20h] [rbp-B0h]
  char *srcc; // [rsp+20h] [rbp-B0h]
  __int64 v41; // [rsp+30h] [rbp-A0h]
  __int64 v42; // [rsp+38h] [rbp-98h]
  __int64 v43; // [rsp+38h] [rbp-98h]
  void *v44; // [rsp+40h] [rbp-90h]
  __int64 v45; // [rsp+60h] [rbp-70h]
  char *v46; // [rsp+68h] [rbp-68h]
  char *s; // [rsp+80h] [rbp-50h] BYREF
  __int128 v48; // [rsp+88h] [rbp-48h]
  unsigned __int64 v49; // [rsp+98h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  v44 = nullptr;
  if ( !a1[85] )
    goto LABEL_2;
  v3 = a1[85];
  v44 = (void *)qvector_reserve();
  memset(v44, 0, v3);
  v41 = a1[85];
  if ( !v41 )
    goto LABEL_2;
  v42 = 0;
  v4 = 0;
  do
  {
    v12 = operator new(0x360u);
    v13 = *a1;
    v14 = a1[95];
    v15 = a1[87];
    *(_QWORD *)(v12 + 8) = 0;
    *(_QWORD *)v12 = v13;
    *(_QWORD *)(v12 + 696) = v15;
    *(_QWORD *)(v12 + 760) = v14;
    *(_QWORD *)(v12 + 528) = 0;
    *(_QWORD *)(v12 + 552) = 0;
    *(_QWORD *)(v12 + 576) = 0;
    *(_QWORD *)(v12 + 600) = 0;
    *(_QWORD *)(v12 + 624) = 0;
    *(_QWORD *)(v12 + 648) = 0;
    *(_QWORD *)(v12 + 672) = 0;
    *(_QWORD *)(v12 + 704) = 0;
    *(_QWORD *)(v12 + 728) = 0;
    *(_QWORD *)(v12 + 752) = 0;
    *(_QWORD *)(v12 + 768) = 0;
    *(_QWORD *)(v12 + 808) = 0;
    *(_QWORD *)(v12 + 816) = 0;
    *(_OWORD *)(v12 + 536) = 0;
    *(_OWORD *)(v12 + 560) = 0;
    *(_OWORD *)(v12 + 584) = 0;
    *(_OWORD *)(v12 + 608) = 0;
    *(_OWORD *)(v12 + 632) = 0;
    *(_OWORD *)(v12 + 656) = 0;
    *(_OWORD *)(v12 + 680) = 0;
    *(_OWORD *)(v12 + 712) = 0;
    *(_OWORD *)(v12 + 736) = 0;
    *(_OWORD *)(v12 + 776) = 0;
    *(_OWORD *)(v12 + 792) = 0;
    *(_OWORD *)(v12 + 824) = 0;
    *(_OWORD *)(v12 + 840) = 0;
    *(_BYTE *)(v12 + 860) = 0;
    s = nullptr;
    *(_DWORD *)(v12 + 856) = v42 + 1;
    v48 = 0;
    sub_15620((__int64 *)&s);
    if ( (_QWORD)v48 && s && (src = s, v5 = strlen(s), (v6 = v5) != 0) )
    {
      v7 = (void *)(v5 + 1);
      v8 = *(void **)(v12 + 832);
      v9 = src;
      if ( *(_QWORD *)(v12 + 848) < v5 + 1 )
      {
        v33 = v5;
        v35 = src;
        srca = (void *)(v5 + 1);
        v30 = qvector_reserve();
        *(_QWORD *)(v12 + 832) = v30;
        v6 = v33;
        v8 = (void *)v30;
        v9 = v35;
        v7 = srca;
      }
      *(_QWORD *)(v12 + 840) = v7;
      srcb = (_BYTE *)v6;
      memmove(v8, v9, v6);
      srcb[*(_QWORD *)(v12 + 832)] = 0;
    }
    else
    {
      *(_QWORD *)(v12 + 840) = 0;
    }
    v10 = open_linput();
    *(_QWORD *)(v12 + 8) = v10;
    if ( !v10 )
    {
      errdesc = (const char *)get_errdesc();
      v17 = (char *)::s;
      if ( (_QWORD)v48 )
        v17 = s;
      sub_13170((__int64)"failed to open %s: %s\n", v17, errdesc);
LABEL_18:
      if ( v12 )
      {
        sub_28110(v12);
        operator delete((void *)v12, 0x360u);
      }
      if ( s )
        goto LABEL_21;
      goto LABEL_22;
    }
    *(_BYTE *)(v12 + 774) = 1;
    if ( !(unsigned __int8)sub_33380(v12, 17, 0) )
    {
      v18 = (char *)::s;
      if ( (_QWORD)v48 )
        v18 = s;
      sub_13170((__int64)"failed to parse dyld subcache header for %s\n", v18);
      goto LABEL_18;
    }
    if ( *(_OWORD *)(v4 + a1[84]) - *(_OWORD *)(v12 + 104) != 0 )
    {
      v11 = (char *)::s;
      if ( (_QWORD)v48 )
        v11 = s;
      sub_130A0(
        (__int64)"%s does not match the subcache uuid from the umbrella cache, please verify that all files are from the same source",
        v11);
      goto LABEL_18;
    }
    sub_28EA0(v12, a1 + 72);
    *((_BYTE *)v44 + v42) = 1;
    v19 = a1[99];
    v20 = a1[98];
    if ( a1[100] < (unsigned __int64)(v19 + 1) )
    {
      v31 = qvector_reserve();
      a1[98] = v31;
      v20 = v31;
      v19 = a1[99];
    }
    *(_QWORD *)(v20 + 8 * v19) = v12;
    v21 = s;
    ++a1[99];
    if ( v21 )
    {
LABEL_21:
      *(_QWORD *)&v48 = 0;
      qfree();
    }
LABEL_22:
    ++v42;
    v4 += 56;
  }
  while ( v41 != v42 );
  v22 = 0;
  v23 = 0;
  v45 = 0;
  v43 = 0;
  v46 = nullptr;
  do
  {
    if ( !*((_BYTE *)v44 + v23) )
    {
      s = nullptr;
      v48 = 0;
      ++v43;
      sub_15620((__int64 *)&s);
      v24 = (char *)v48;
      if ( (_QWORD)v48 )
      {
        v25 = v48 - 1;
        if ( (_QWORD)v48 != 1 )
        {
          v26 = v46;
          v27 = v48 - 1;
          if ( v46 )
          {
            v26 = v46 - 1;
            v27 = (size_t)&v46[v25 - 1];
            v24 = &v46[v48 - 1];
          }
          v28 = v45;
          if ( v24 )
          {
            v32 = v26;
            v34 = v48 - 1;
            v36 = v27;
            srcc = v24;
            v45 = qvector_reserve();
            v26 = v32;
            v28 = v45;
            v25 = v34;
            v27 = v36;
            v24 = srcc;
          }
          v46 = v24;
          *(_BYTE *)(v28 + v27) = 0;
          memcpy(&v26[v45], s, v25);
        }
      }
      if ( s )
      {
        *(_QWORD *)&v48 = 0;
        qfree();
      }
    }
    ++v23;
    v22 += 56;
  }
  while ( v41 != v23 );
  if ( v43 )
  {
    v29 = ::s;
    if ( v46 )
      v29 = (const char *)v45;
    sub_130A0((__int64)"%zu missing subcaches:\n%s", v43, v29);
  }
  if ( v45 )
    qfree();
LABEL_2:
  if ( v44 )
    qfree();
  return v49 - __readfsqword(0x28u);
}

