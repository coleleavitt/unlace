unsigned __int64 __fastcall sub_283A0(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  const void ***v6; // rax
  __int64 v9; // r12
  const void **v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rax
  __int64 v14; // rax
  size_t v15; // r13
  _QWORD *v16; // rax
  const char *v17; // rdx
  _QWORD *v18; // rbp
  int v19; // r15d
  const char *v20; // r12
  _QWORD *v21; // r14
  const char *v22; // rsi
  _QWORD *v23; // rbx
  const char *v24; // rdi
  int v25; // eax
  _QWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  const char *v29; // rbx
  size_t v30; // rax
  size_t v31; // r14
  size_t v32; // r12
  void *v33; // r12
  _QWORD *v34; // rbx
  const char *v36; // rsi
  const char *v37; // rdi
  int v38; // eax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  void *v41; // r11
  _QWORD *v42; // r15
  const char *v43; // rsi
  const char *v44; // rax
  char *s2; // [rsp+8h] [rbp-C0h]
  char *s2a; // [rsp+8h] [rbp-C0h]
  char *s2b; // [rsp+8h] [rbp-C0h]
  char *s2c; // [rsp+8h] [rbp-C0h]
  _QWORD *v49; // [rsp+10h] [rbp-B8h]
  const void **v50; // [rsp+10h] [rbp-B8h]
  const void **v51; // [rsp+10h] [rbp-B8h]
  const void **v52; // [rsp+10h] [rbp-B8h]
  __int64 v53; // [rsp+18h] [rbp-B0h]
  _QWORD *v54; // [rsp+18h] [rbp-B0h]
  int v55; // [rsp+18h] [rbp-B0h]
  const void **v56; // [rsp+18h] [rbp-B0h]
  int v57; // [rsp+18h] [rbp-B0h]
  __int64 v58; // [rsp+18h] [rbp-B0h]
  const void **v59; // [rsp+20h] [rbp-A8h]
  void *v60; // [rsp+20h] [rbp-A8h]
  char *v61; // [rsp+20h] [rbp-A8h]
  int v62; // [rsp+20h] [rbp-A8h]
  int v63; // [rsp+20h] [rbp-A8h]
  _QWORD *v64; // [rsp+28h] [rbp-A0h]
  const void **v65; // [rsp+28h] [rbp-A0h]
  __int64 v66; // [rsp+28h] [rbp-A0h]
  __int64 v67; // [rsp+30h] [rbp-98h]
  int v68; // [rsp+30h] [rbp-98h]
  const void **v69; // [rsp+30h] [rbp-98h]
  __int64 v70; // [rsp+38h] [rbp-90h]
  int v71; // [rsp+38h] [rbp-90h]
  __int64 v72; // [rsp+48h] [rbp-80h] BYREF
  const char *v73; // [rsp+50h] [rbp-78h] BYREF
  __int64 v74; // [rsp+58h] [rbp-70h]
  void *v75; // [rsp+70h] [rbp-58h] BYREF
  __int128 v76; // [rsp+78h] [rbp-50h]
  unsigned __int64 v77; // [rsp+88h] [rbp-40h]

  v77 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 9) != 27 || *(_DWORD *)a6 != 3 )
    return v77 - __readfsqword(0x28u);
  v6 = *(const void ****)(a6 + 8);
  v9 = a2;
  v11 = *v6;
  v12 = (__int64)&(*v6)[5 * (_QWORD)v6[1]];
  if ( *v6 == (const void **)v12 )
    goto LABEL_26;
  while ( 2 )
  {
    if ( *((_DWORD *)v11 + 6) != 4 )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    v13 = (__int64 *)v11[4];
    if ( v13[1] != 2 )
      goto LABEL_5;
    v14 = *v13;
    if ( *(_DWORD *)v14 != 1 || *(_DWORD *)(v14 + 16) != 1 )
      goto LABEL_5;
    v15 = (size_t)v11[1];
    s2 = nullptr;
    v72 = *(_QWORD *)(v14 + 24);
    if ( v15 )
    {
      v63 = a4;
      v58 = v12;
      v52 = v11;
      s2 = (char *)qalloc_or_throw();
      memcpy(s2, *v52, v15);
      a4 = v63;
      v12 = v58;
      v11 = v52;
    }
    v16 = a1 + 230;
    v49 = a1 + 230;
    if ( !a1[231] )
    {
      v54 = a1 + 230;
      goto LABEL_50;
    }
    v17 = src;
    if ( v15 )
      v17 = s2;
    v64 = a1;
    v67 = v9;
    v18 = (_QWORD *)a1[231];
    v19 = a4;
    v70 = a5;
    v20 = v17;
    v21 = v16;
    v53 = v12;
    v59 = v11;
    while ( 1 )
    {
      v27 = v18[5];
      if ( !v15 )
        break;
      if ( v27 )
        goto LABEL_25;
      v22 = s2;
      v23 = v18;
      v24 = src;
LABEL_18:
      v25 = strcmp(v24, v22);
      v26 = (_QWORD *)v18[2];
      v18 = (_QWORD *)v18[3];
      if ( v25 >= 0 )
      {
        v21 = v23;
        v18 = v26;
      }
      if ( !v18 )
      {
        v12 = v53;
        v11 = v59;
        v54 = v21;
        a4 = v19;
        a1 = v64;
        v9 = v67;
        a5 = v70;
        goto LABEL_42;
      }
    }
    if ( v27 )
    {
LABEL_25:
      v24 = (const char *)v18[4];
      v23 = v18;
      v22 = v20;
      goto LABEL_18;
    }
    while ( 1 )
    {
      v28 = v18[2];
      if ( !v28 )
        break;
      v21 = v18;
      v18 = (_QWORD *)v18[2];
      if ( *(_QWORD *)(v28 + 40) )
        goto LABEL_25;
    }
    a4 = v19;
    v42 = v18;
    v12 = v53;
    v11 = v59;
    v9 = v67;
    a1 = v64;
    v54 = v42;
    a5 = v70;
LABEL_42:
    if ( v49 == v54 )
      goto LABEL_50;
    if ( v54[5] )
    {
      v36 = (const char *)v54[4];
      v37 = src;
      if ( v15 )
        goto LABEL_45;
LABEL_46:
      v68 = a4;
      v65 = v11;
      v60 = (void *)v12;
      v38 = strcmp(v37, v36);
      v12 = (__int64)v60;
      v11 = v65;
      a4 = v68;
      if ( v38 >= 0 )
        goto LABEL_47;
LABEL_50:
      v71 = a4;
      v69 = v11;
      v66 = v12;
      v61 = (char *)operator new(0x48u);
      *(__m128i *)(v61 + 40) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
      *((_QWORD *)v61 + 4) = s2;
      *(__m128 *)(v61 + 56) = _mm_loadh_ps((const double *)&v72);
      v39 = sub_281E0(a1 + 229, v54, (__int64)(v61 + 32));
      v41 = v61;
      v12 = v66;
      v11 = v69;
      a4 = v71;
      if ( v40 )
      {
        if ( !v39 && v49 != (_QWORD *)v40 )
        {
          v43 = src;
          if ( *(_QWORD *)(v40 + 40) )
            v43 = *(const char **)(v40 + 32);
          v44 = src;
          if ( v15 )
            v44 = s2;
          strcmp(v44, v43);
          v12 = v66;
          v11 = v69;
          a4 = v71;
        }
        v62 = a4;
        v56 = v11;
        s2b = (char *)v12;
        std::_Rb_tree_insert_and_rebalance();
        v12 = (__int64)s2b;
        v11 = v56;
        ++a1[234];
        a4 = v62;
      }
      else if ( v61 )
      {
        if ( s2 )
        {
          *((_QWORD *)v61 + 5) = 0;
          qfree();
          a4 = v71;
          v11 = v69;
          v12 = v66;
          v41 = v61;
        }
        v57 = a4;
        v51 = v11;
        s2c = (char *)v12;
        operator delete(v41, 0x48u);
        v12 = (__int64)s2c;
        v11 = v51;
        a4 = v57;
      }
    }
    else
    {
      v36 = src;
      if ( v15 )
      {
LABEL_45:
        v37 = s2;
        goto LABEL_46;
      }
LABEL_47:
      if ( s2 )
      {
        v55 = a4;
        v50 = v11;
        s2a = (char *)v12;
        qfree();
        a4 = v55;
        v11 = v50;
        v12 = (__int64)s2a;
      }
    }
LABEL_5:
    v11 += 5;
    if ( (const void **)v12 != v11 )
      continue;
    break;
  }
LABEL_26:
  if ( a4 != 1
    || !(unsigned __int8)netnode_exist()
    || !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 640LL))(a1, v9, a5) )
  {
    sub_544B0(&v73, a1, 0xFFFFFFFFLL);
    v29 = src;
    if ( v74 )
      v29 = v73;
    v75 = nullptr;
    v76 = 0;
    if ( v29 )
    {
      v30 = strlen(v29);
      v31 = v30 + 1;
      v32 = v30;
      v75 = (void *)qvector_reserve();
      *(_QWORD *)&v76 = v31;
      memmove(v75, v29, v32);
      *((_BYTE *)v75 + v32) = 0;
      v33 = v75;
      v34 = sub_25DF0((__int64)(a1 + 229), (__int64)&v75);
      if ( v33 )
      {
        *(_QWORD *)&v76 = 0;
        qfree();
      }
    }
    else
    {
      v34 = sub_25DF0((__int64)(a1 + 229), (__int64)&v75);
    }
    if ( v73 )
    {
      v74 = 0;
      qfree();
    }
    if ( v34 != a1 + 230 )
    {
      a1[235] = v34[7];
      a1[236] = v34[8];
    }
  }
  return v77 - __readfsqword(0x28u);
}

