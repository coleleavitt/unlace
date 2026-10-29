__int64 __fastcall sub_49D80(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        double a7,
        double a8,
        _QWORD *a9,
        unsigned __int64 *a10)
{
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v18; // r15
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // rbx
  char *v24; // r9
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rcx
  _QWORD *v31; // rdi
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rcx
  _QWORD *v34; // rdi
  unsigned __int64 v35; // rdx
  __int64 v36; // rdx
  char *v37; // r10
  __int64 v38; // rax
  __m128i v39; // xmm1
  __m128i v40; // xmm0
  unsigned __int64 v41; // rdx
  __m128i *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v48; // [rsp+8h] [rbp-90h]
  unsigned __int64 v49; // [rsp+8h] [rbp-90h]
  unsigned __int64 v50; // [rsp+8h] [rbp-90h]
  unsigned __int64 v51; // [rsp+8h] [rbp-90h]
  char *s1; // [rsp+18h] [rbp-80h]
  char *s1b; // [rsp+18h] [rbp-80h]
  char *s1d; // [rsp+18h] [rbp-80h]
  char *s1e; // [rsp+18h] [rbp-80h]
  char *s1a; // [rsp+18h] [rbp-80h]
  char *s1c; // [rsp+18h] [rbp-80h]
  unsigned __int64 *v58; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 *v59; // [rsp+28h] [rbp-70h] BYREF
  __m128i v60; // [rsp+30h] [rbp-68h] BYREF
  __m128i v61; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v62; // [rsp+58h] [rbp-40h]

  v15 = *(_QWORD *)(a1 + 328) >> 4;
  v16 = *(_QWORD *)(a1 + 176) + 1LL;
  v62 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 176) = v16;
  set_selector(v16, v15);
  if ( !a6 && (*(_DWORD *)(a3 + 4) != 1 || !*(_QWORD *)(a3 + 32)) )
  {
    if ( (unsigned __int8)sub_43410(a1, (__int64)a2, &v58, &v59, a3, a5) )
    {
LABEL_16:
      v19 = 0;
      v20 = 0;
      goto LABEL_18;
    }
    return 0;
  }
  v18 = 0;
  if ( (*(_BYTE *)(a1 + 521) & 8) == 0 )
    v18 = *(_DWORD *)(a3 + 4) != 8;
  if ( !*(_QWORD *)(a1 + 184) && *(_QWORD *)(a3 + 32) )
  {
    if ( !*(_QWORD *)(a5 + 8) )
      goto LABEL_14;
    s1 = *(char **)a5;
    if ( strcmp(*(const char **)a5, ".data") )
    {
      if ( *(_DWORD *)(a3 + 4) != 1 )
        goto LABEL_14;
      goto LABEL_33;
    }
    *(_QWORD *)(a1 + 184) = *(_QWORD *)(a1 + 176);
  }
  if ( *(_DWORD *)(a3 + 4) != 1 || !*(_QWORD *)(a5 + 8) )
    goto LABEL_14;
  s1 = *(char **)a5;
LABEL_33:
  if ( !strcmp(s1, ".init") )
  {
    if ( !*(_QWORD *)(a3 + 32) )
      return 0;
    v37 = (char *)(a1 + 200);
    if ( *(_QWORD *)(a1 + 200) )
    {
      sub_BFC0((__int64)"Redeclared '%s' section", "Initialization");
      goto LABEL_14;
    }
LABEL_60:
    s1b = v37;
    if ( (unsigned __int8)sub_43410(a1, (__int64)a2, &v58, &v59, a3, a5) )
    {
      *(_QWORD *)s1b = v58;
      if ( !v18 )
        goto LABEL_16;
      goto LABEL_17;
    }
    return 0;
  }
  if ( !strcmp(s1, ".fini") )
  {
    if ( !*(_QWORD *)(a3 + 32) )
      return 0;
    v37 = (char *)(a1 + 208);
    if ( *(_QWORD *)(a1 + 208) )
    {
      sub_BFC0((__int64)"Redeclared '%s' section", "atexit");
      goto LABEL_14;
    }
    goto LABEL_60;
  }
  if ( !strcmp(s1, ".ctor") || !strcmp(s1, ".ctors") )
  {
    v43 = *(_QWORD *)(a3 + 32);
    if ( !v43 )
      return 0;
    if ( *(_DWORD *)(a1 + 192) )
    {
      sub_BFC0((__int64)"Redeclared '%s' section", "'++constructor'");
    }
    else if ( (v43 & 3) == 0 )
    {
      *(_DWORD *)(a1 + 192) = a4;
    }
  }
  else if ( !strcmp(s1, ".dtor") || !strcmp(s1, ".dtors") )
  {
    v28 = *(_QWORD *)(a3 + 32);
    if ( !v28 )
      return 0;
    if ( *(_DWORD *)(a1 + 196) )
    {
      sub_BFC0((__int64)"Redeclared '%s' section", "'++destructor'");
    }
    else if ( (v28 & 3) == 0 )
    {
      *(_DWORD *)(a1 + 196) = a4;
    }
  }
LABEL_14:
  if ( !(unsigned __int8)sub_43410(a1, (__int64)a2, &v58, &v59, a3, a5) )
    return 0;
  if ( !v18 )
    goto LABEL_16;
LABEL_17:
  v20 = sub_496A0((__int64 *)a1, (__int64)a2, *(_QWORD *)(a3 + 24), v58, v59, 0, a7, a8);
  v19 = v20;
LABEL_18:
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) == 15 )
    sub_101F0(0x57u, v58, (*(_BYTE *)(a3 + 11) & 0x10) != 0);
  v21 = *(_QWORD *)(a3 + 24);
  v22 = a2[170];
  v23 = a4;
  v24 = *(char **)(a1 + 176);
  if ( a4 < v22 )
    goto LABEL_26;
  v25 = a4 + 1;
  if ( v22 != v25 )
  {
    v61.m128i_i8[8] = 0;
    v61.m128i_i64[0] = -1;
    v60 = 0;
    if ( v25 >= v22 )
    {
      v32 = a2[169];
      v33 = a2[171];
      v34 = a2 + 169;
      if ( (unsigned __int64)&v60 < v32 || (unsigned __int64)&v60 >= v32 + 32 * v33 )
      {
        if ( v33 < v25 )
        {
          s1e = v24;
          v49 = v21;
          v44 = qvector_reserve(v34, v32, (unsigned int)(v23 + 1), 32);
          v24 = s1e;
          v21 = v49;
          a2[169] = v44;
          v22 = a2[170];
        }
        if ( v22 < v25 )
        {
          v39 = _mm_load_si128(&v60);
          v40 = _mm_load_si128(&v61);
          do
          {
            v41 = v22++;
            v42 = (__m128i *)(a2[169] + 32 * v41);
            *v42 = v39;
            v42[1] = v40;
          }
          while ( v25 != v22 );
        }
      }
      else
      {
        if ( v33 < v25 )
        {
          s1c = v24;
          v51 = v21;
          v46 = qvector_reserve(v34, v32, (unsigned int)(v23 + 1), 32);
          v24 = s1c;
          v21 = v51;
          a2[169] = v46;
          v22 = a2[170];
        }
        if ( v22 < v25 )
        {
          do
          {
            v35 = v22++;
            v36 = a2[169] + 32 * v35;
            *(_QWORD *)(v36 + 16) = -1;
            *(_BYTE *)(v36 + 24) = 0;
            *(_OWORD *)v36 = 0;
          }
          while ( v25 != v22 );
        }
      }
    }
    a2[170] = v25;
  }
  v26 = a2[167];
  v60.m128i_i8[0] = 0;
  if ( v25 >= v26 )
  {
    if ( v26 >= v25 )
      goto LABEL_26;
    v29 = a2[166];
    v30 = a2[168];
    v31 = a2 + 166;
    if ( (unsigned __int64)&v60 < v29 || (unsigned __int64)&v60 >= v29 + v30 )
    {
      if ( v30 >= v25
        || (s1d = v24,
            v48 = v21,
            v38 = qvector_reserve(v31, v29, (unsigned int)(v23 + 1), 1),
            v21 = v48,
            v24 = s1d,
            v26 = a2[167],
            a2[166] = v38,
            v29 = v38,
            v26 < v25) )
      {
        while ( 1 )
        {
          *(_BYTE *)(v29 + v26++) = 0;
          if ( v25 == v26 )
            break;
          v29 = a2[166];
        }
      }
    }
    else if ( v30 >= v25
           || (s1a = v24,
               v50 = v21,
               v45 = qvector_reserve(v31, v29, (unsigned int)(v23 + 1), 1),
               v21 = v50,
               v24 = s1a,
               v26 = a2[167],
               a2[166] = v45,
               v29 = v45,
               v26 < v25) )
    {
      while ( 1 )
      {
        *(_BYTE *)(v29 + v26++) = 0;
        if ( v25 == v26 )
          break;
        v29 = a2[166];
      }
    }
  }
  a2[167] = v25;
LABEL_26:
  v27 = 32 * v23;
  *(_QWORD *)(a2[169] + v27 + 16) = v24;
  *(__m128i *)(a2[169] + v27) = _mm_unpacklo_epi64((__m128i)v21, (__m128i)(v21 + v19));
  if ( a9 )
    *a9 = v58;
  if ( a10 )
    *a10 = v20;
  return 1;
}
