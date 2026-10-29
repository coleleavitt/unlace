unsigned __int64 __fastcall sub_3B0A0(__int64 *a1)
{
  size_t v3; // r14
  __int64 v4; // r12
  size_t v5; // rax
  size_t v6; // r9
  void *v7; // rdx
  void *v8; // rdi
  char *v9; // r10
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  const char *errdesc; // rdx
  char *v16; // rsi
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  char *v20; // rdi
  __int64 v21; // r12
  __int64 v22; // r14
  char *v23; // rdx
  size_t v24; // r9
  char *v25; // r8
  size_t v26; // r11
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // [rsp+8h] [rbp-C8h]
  size_t v31; // [rsp+10h] [rbp-C0h]
  size_t v32; // [rsp+10h] [rbp-C0h]
  char *v33; // [rsp+18h] [rbp-B8h]
  size_t v34; // [rsp+18h] [rbp-B8h]
  char *src; // [rsp+20h] [rbp-B0h]
  _BYTE *srcb; // [rsp+20h] [rbp-B0h]
  void *srca; // [rsp+20h] [rbp-B0h]
  char *srcc; // [rsp+20h] [rbp-B0h]
  __int64 v39; // [rsp+30h] [rbp-A0h]
  __int64 v40; // [rsp+38h] [rbp-98h]
  __int64 v41; // [rsp+38h] [rbp-98h]
  void *v42; // [rsp+40h] [rbp-90h]
  __int64 v43; // [rsp+60h] [rbp-70h]
  char *v44; // [rsp+68h] [rbp-68h]
  char *s; // [rsp+80h] [rbp-50h] BYREF
  __int128 v46; // [rsp+88h] [rbp-48h]
  unsigned __int64 v47; // [rsp+98h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  v42 = nullptr;
  if ( !a1[85] )
    goto LABEL_2;
  v3 = a1[85];
  v42 = (void *)qvector_reserve();
  memset(v42, 0, v3);
  v39 = a1[85];
  if ( !v39 )
    goto LABEL_2;
  v40 = 0;
  v4 = 0;
  do
  {
    v11 = operator new(0x360u);
    v12 = *a1;
    v13 = a1[95];
    v14 = a1[87];
    *(_QWORD *)(v11 + 8) = 0;
    *(_QWORD *)v11 = v12;
    *(_QWORD *)(v11 + 696) = v14;
    *(_QWORD *)(v11 + 760) = v13;
    *(_QWORD *)(v11 + 528) = 0;
    *(_QWORD *)(v11 + 552) = 0;
    *(_QWORD *)(v11 + 576) = 0;
    *(_QWORD *)(v11 + 600) = 0;
    *(_QWORD *)(v11 + 624) = 0;
    *(_QWORD *)(v11 + 648) = 0;
    *(_QWORD *)(v11 + 672) = 0;
    *(_QWORD *)(v11 + 704) = 0;
    *(_QWORD *)(v11 + 728) = 0;
    *(_QWORD *)(v11 + 752) = 0;
    *(_QWORD *)(v11 + 768) = 0;
    *(_QWORD *)(v11 + 808) = 0;
    *(_QWORD *)(v11 + 816) = 0;
    *(_OWORD *)(v11 + 536) = 0;
    *(_OWORD *)(v11 + 560) = 0;
    *(_OWORD *)(v11 + 584) = 0;
    *(_OWORD *)(v11 + 608) = 0;
    *(_OWORD *)(v11 + 632) = 0;
    *(_OWORD *)(v11 + 656) = 0;
    *(_OWORD *)(v11 + 680) = 0;
    *(_OWORD *)(v11 + 712) = 0;
    *(_OWORD *)(v11 + 736) = 0;
    *(_OWORD *)(v11 + 776) = 0;
    *(_OWORD *)(v11 + 792) = 0;
    *(_OWORD *)(v11 + 824) = 0;
    *(_OWORD *)(v11 + 840) = 0;
    *(_BYTE *)(v11 + 860) = 0;
    s = nullptr;
    *(_DWORD *)(v11 + 856) = v40 + 1;
    v46 = 0;
    sub_35470((__int64 *)&s);
    if ( (_QWORD)v46 && s && (src = s, v5 = strlen(s), (v6 = v5) != 0) )
    {
      v7 = (void *)(v5 + 1);
      v8 = *(void **)(v11 + 832);
      v9 = src;
      if ( *(_QWORD *)(v11 + 848) < v5 + 1 )
      {
        v31 = v5;
        v33 = src;
        srca = (void *)(v5 + 1);
        v28 = qvector_reserve();
        *(_QWORD *)(v11 + 832) = v28;
        v6 = v31;
        v8 = (void *)v28;
        v9 = v33;
        v7 = srca;
      }
      *(_QWORD *)(v11 + 840) = v7;
      srcb = (_BYTE *)v6;
      memmove(v8, v9, v6);
      srcb[*(_QWORD *)(v11 + 832)] = 0;
    }
    else
    {
      *(_QWORD *)(v11 + 840) = 0;
    }
    v10 = open_linput();
    *(_QWORD *)(v11 + 8) = v10;
    if ( !v10 )
    {
      errdesc = (const char *)get_errdesc();
      v16 = (char *)s1;
      if ( (_QWORD)v46 )
        v16 = s;
      sub_112F0((__int64)"failed to open %s: %s\n", v16, errdesc);
LABEL_16:
      if ( v11 )
      {
        sub_1A3D0(v11);
        operator delete((void *)v11, 0x360u);
      }
      if ( s )
        goto LABEL_19;
      goto LABEL_20;
    }
    *(_BYTE *)(v11 + 774) = 1;
    if ( !(unsigned __int8)sub_3B840(v11, 17, 0) )
    {
      v17 = (char *)s1;
      if ( (_QWORD)v46 )
        v17 = s;
      sub_112F0((__int64)"failed to parse dyld subcache header for %s\n", v17);
      goto LABEL_16;
    }
    if ( *(_OWORD *)(v4 + a1[84]) - *(_OWORD *)(v11 + 104) != 0 )
    {
      sub_196C0((__int64)"%s does not match the subcache uuid from the umbrella cache, please verify that all files are f"
                         "rom the same source");
      goto LABEL_16;
    }
    sub_1C2E0(v11, a1 + 72);
    *((_BYTE *)v42 + v40) = 1;
    v18 = a1[99];
    v19 = a1[98];
    if ( a1[100] < (unsigned __int64)(v18 + 1) )
    {
      v29 = qvector_reserve();
      a1[98] = v29;
      v19 = v29;
      v18 = a1[99];
    }
    *(_QWORD *)(v19 + 8 * v18) = v11;
    v20 = s;
    ++a1[99];
    if ( v20 )
    {
LABEL_19:
      *(_QWORD *)&v46 = 0;
      qfree();
    }
LABEL_20:
    ++v40;
    v4 += 56;
  }
  while ( v39 != v40 );
  v21 = 0;
  v22 = 0;
  v43 = 0;
  v41 = 0;
  v44 = nullptr;
  do
  {
    if ( !*((_BYTE *)v42 + v22) )
    {
      s = nullptr;
      v46 = 0;
      ++v41;
      sub_35470((__int64 *)&s);
      v23 = (char *)v46;
      if ( (_QWORD)v46 )
      {
        v24 = v46 - 1;
        if ( (_QWORD)v46 != 1 )
        {
          v25 = v44;
          v26 = v46 - 1;
          if ( v44 )
          {
            v25 = v44 - 1;
            v26 = (size_t)&v44[v24 - 1];
            v23 = &v44[v46 - 1];
          }
          v27 = v43;
          if ( v23 )
          {
            v30 = v25;
            v32 = v46 - 1;
            v34 = v26;
            srcc = v23;
            v43 = qvector_reserve();
            v25 = v30;
            v27 = v43;
            v24 = v32;
            v26 = v34;
            v23 = srcc;
          }
          v44 = v23;
          *(_BYTE *)(v27 + v26) = 0;
          memcpy(&v25[v43], s, v24);
        }
      }
      if ( s )
      {
        *(_QWORD *)&v46 = 0;
        qfree();
      }
    }
    ++v22;
    v21 += 56;
  }
  while ( v39 != v22 );
  if ( v41 )
    sub_196C0((__int64)"%zu missing subcaches:\n%s");
  if ( v43 )
    qfree();
LABEL_2:
  if ( v42 )
    qfree();
  return v47 - __readfsqword(0x28u);
}

