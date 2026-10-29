__int64 __fastcall sub_198E0(__int64 a1, char a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // r12
  _QWORD *v7; // rax
  int v8; // eax
  bool v9; // zf
  const char *v10; // rax
  __m256i *p_haystack; // rbp
  __int64 *first_seg; // r15
  __m128i v13; // xmm0
  __int64 segm_name; // rax
  __int64 v15; // r14
  const char *v16; // rbx
  char *v17; // rax
  int v19; // eax
  const char *v20; // rax
  __int64 *next_seg; // r15
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // r14
  const char *v25; // rbx
  char *v26; // rax
  __int64 v27; // r8
  char *v28; // rbx
  char *v29; // r8
  const char *v30; // r13
  const char *v31; // rsi
  __int64 v32; // r14
  char *v33; // rax
  const char *v34; // r12
  const char *v35; // r15
  char *v36; // r13
  char *v37; // rbp
  const char *v38; // rbx
  const char *v39; // rsi
  const char *v40; // rdi
  int v41; // eax
  const char *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  const char *v45; // r10
  const char *v46; // rsi
  const char *v47; // rsi
  int v48; // eax
  const char *v49; // r13
  char *v50; // rax
  char *v51; // rsi
  const char *v52; // r13
  int v53; // edx
  int v54; // eax
  unsigned int v55; // edx
  __int64 v56; // [rsp+0h] [rbp-F8h]
  char *needle; // [rsp+8h] [rbp-F0h]
  char *needlea; // [rsp+8h] [rbp-F0h]
  char *needlee; // [rsp+8h] [rbp-F0h]
  char *needleb; // [rsp+8h] [rbp-F0h]
  char *needlef; // [rsp+8h] [rbp-F0h]
  char *needlec; // [rsp+8h] [rbp-F0h]
  char *needleg; // [rsp+8h] [rbp-F0h]
  char *needled; // [rsp+8h] [rbp-F0h]
  char *v65; // [rsp+10h] [rbp-E8h]
  const char *v66; // [rsp+18h] [rbp-E0h]
  __int64 v67; // [rsp+20h] [rbp-D8h]
  __m256i *v68; // [rsp+28h] [rbp-D0h]
  int v70; // [rsp+3Ch] [rbp-BCh]
  char *s2; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v72; // [rsp+48h] [rbp-B0h]
  __m256i haystack; // [rsp+60h] [rbp-98h] BYREF
  __int128 v74; // [rsp+80h] [rbp-78h]
  __int128 v75; // [rsp+90h] [rbp-68h]
  __int128 v76; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v77; // [rsp+B8h] [rbp-40h]

  v6 = a1;
  v77 = __readfsqword(0x28u);
  v7 = (_QWORD *)(a1 + 248);
  do
  {
    *v7 = 0;
    v7 += 2;
    *((_DWORD *)v7 - 2) = 0;
  }
  while ( v7 != (_QWORD *)(a1 + 440) );
  sub_7C10(*(void **)(a1 + 456));
  *(_QWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 464) = a1 + 448;
  *(_QWORD *)(a1 + 472) = a1 + 448;
  *(_QWORD *)(a1 + 480) = 0;
  v56 = a1 + 448;
  sub_141D0(a1);
  v8 = getinf(5);
  needle = ".sw5tymd";
  if ( v8 != 11 )
  {
    v9 = v8 == 18;
    v10 = "__swift5_types";
    if ( v9 )
      v10 = "swift5_type_metadata";
    needle = (char *)v10;
  }
  p_haystack = &haystack;
  first_seg = (__int64 *)get_first_seg();
  if ( !first_seg )
    return 0;
  while ( 1 )
  {
    v13 = 0;
    memset(&haystack, 0, 24);
    segm_name = get_segm_name(&haystack, first_seg, 0);
    v15 = haystack.m256i_i64[0];
    if ( segm_name )
    {
      v16 = s1;
      if ( haystack.m256i_i64[1] )
        v16 = (const char *)haystack.m256i_i64[0];
      v17 = strstr(v16, needle);
      if ( v17 )
      {
        if ( v17 - v16 != -1 )
          break;
      }
    }
    if ( v15 )
    {
      haystack.m256i_i64[1] = 0;
      qfree(v15);
    }
    first_seg = (__int64 *)get_next_seg(*first_seg);
    if ( !first_seg )
      return 0;
  }
  if ( v15 )
  {
    haystack.m256i_i64[1] = 0;
    *(double *)v13.m128i_i64 = qfree(v15);
  }
  v70 = *(_DWORD *)(a1 + 240);
  if ( a2 )
    *(_DWORD *)(a1 + 240) = v70 & 0xFFFFFFFB;
  sub_19800(a1, first_seg, v13, a4, a5, a6);
  v19 = getinf(5);
  needlea = ".sw5prt";
  if ( v19 != 11 )
  {
    v9 = v19 == 18;
    v20 = "__swift5_protos";
    if ( v9 )
      v20 = "swift5_protocols";
    needlea = (char *)v20;
  }
  next_seg = (__int64 *)get_first_seg();
  if ( next_seg )
  {
    while ( 1 )
    {
      v22 = 0;
      memset(&haystack, 0, 24);
      v23 = get_segm_name(&haystack, next_seg, 0);
      v24 = haystack.m256i_i64[0];
      if ( v23 )
      {
        v25 = s1;
        if ( haystack.m256i_i64[1] )
          v25 = (const char *)haystack.m256i_i64[0];
        v26 = strstr(v25, needlea);
        if ( v26 )
        {
          if ( v26 - v25 != -1 )
            break;
        }
      }
      if ( v24 )
      {
        haystack.m256i_i64[1] = 0;
        qfree(v24);
      }
      next_seg = (__int64 *)get_next_seg(*next_seg);
      if ( !next_seg )
        goto LABEL_34;
    }
    if ( v24 )
    {
      haystack.m256i_i64[1] = 0;
      *(double *)v22.m128i_i64 = qfree(v24);
    }
    sub_19800(a1, next_seg, v22, a4, a5, a6);
  }
LABEL_34:
  sub_A6F0(a1);
  v27 = *(_QWORD *)(a1 + 464);
  if ( v27 == v56 )
    goto LABEL_63;
  do
  {
    if ( !*(_BYTE *)(v27 + 156) || (unsigned int)(*(_DWORD *)(v27 + 40) - 1) > 1 )
      goto LABEL_62;
    v28 = (char *)(v27 + 40);
    needlee = (char *)v27;
    sub_A400((__int64 *)&s2, v27 + 40, ".");
    v29 = needlee;
    v30 = *(const char **)(v6 + 504);
    v76 = 0;
    v31 = (const char *)(v6 + 496);
    *(_OWORD *)haystack.m256i_i8 = 0;
    LODWORD(v76) = 12;
    v74 = 0;
    v75 = 0;
    *(__m128i *)&haystack.m256i_u64[2] = _mm_load_si128((const __m128i *)&xmmword_216F0);
    if ( !v30 )
    {
      v35 = (const char *)(v6 + 496);
      goto LABEL_57;
    }
    v32 = v72;
    v67 = v6;
    v33 = (char *)s1;
    v68 = p_haystack;
    v34 = v30;
    v35 = v31;
    needleb = v28;
    v36 = s2;
    if ( v72 )
      v33 = s2;
    v65 = v29;
    v66 = v31;
    v37 = v33;
    while ( 1 )
    {
      v43 = *((_QWORD *)v34 + 5);
      if ( !v32 )
        break;
      v38 = v34;
      v39 = v36;
      v40 = s1;
      if ( v43 )
        goto LABEL_42;
LABEL_43:
      v41 = strcmp(v40, v39);
      v42 = *((const char **)v34 + 2);
      v34 = *((const char **)v34 + 3);
      if ( v41 >= 0 )
      {
        v35 = v38;
        v34 = v42;
      }
      if ( !v34 )
      {
        v28 = needleb;
        v29 = v65;
        v45 = v36;
        v46 = v66;
        v6 = v67;
        p_haystack = v68;
        goto LABEL_52;
      }
    }
    if ( v43 )
    {
LABEL_50:
      v38 = v34;
LABEL_42:
      v40 = *((const char **)v34 + 4);
      v39 = v37;
      goto LABEL_43;
    }
    while ( 1 )
    {
      v44 = *((_QWORD *)v34 + 2);
      if ( !v44 )
        break;
      v35 = v34;
      v34 = *((const char **)v34 + 2);
      if ( *(_QWORD *)(v44 + 40) )
        goto LABEL_50;
    }
    v45 = v36;
    v52 = v34;
    v28 = needleb;
    v29 = v65;
    v46 = v66;
    v6 = v67;
    v35 = v52;
    p_haystack = v68;
LABEL_52:
    if ( v46 == v35 )
      goto LABEL_57;
    if ( *((_QWORD *)v35 + 5) )
    {
      v47 = *((const char **)v35 + 4);
      if ( !v32 )
        v45 = s1;
LABEL_56:
      needlef = v29;
      v48 = strcmp(v45, v47);
      v29 = needlef;
      if ( v48 < 0 )
      {
LABEL_57:
        needlec = v29;
        v49 = sub_138A0((_QWORD *)(v6 + 488), v35, (__int64)&s2, p_haystack->m256i_i64);
        if ( (_QWORD)v74 )
        {
          *((_QWORD *)&v74 + 1) = 0;
          qfree(v74);
        }
        clear_tinfo_t();
        v27 = (__int64)needlec;
        *((_QWORD *)v49 + 14) = v28;
        *((_DWORD *)v49 + 31) = 2;
        goto LABEL_60;
      }
    }
    else
    {
      v47 = s1;
      if ( v32 )
        goto LABEL_56;
    }
    needled = v29;
    clear_tinfo_t();
    v50 = *((char **)v35 + 14);
    v27 = (__int64)needled;
    if ( v50 != v28 )
    {
      v51 = (char *)s1;
      if ( v50 )
      {
        if ( v72 )
          v51 = s2;
        sub_CB10((__int64)"internal: bad descriptor for %s\n", v51);
      }
      else
      {
        if ( v72 )
          v51 = s2;
        sub_CB10((__int64)"ignoring a descriptor of the predefined type %s\n", v51);
      }
      v27 = (__int64)needled;
    }
LABEL_60:
    if ( s2 )
    {
      needleg = (char *)v27;
      v72 = 0;
      qfree(s2);
      v27 = (__int64)needleg;
    }
LABEL_62:
    v27 = std::_Rb_tree_increment(v27);
  }
  while ( v27 != v56 );
LABEL_63:
  if ( a2 )
  {
    v53 = *(_DWORD *)(v6 + 240);
    v54 = v53 | 4;
    v55 = v53 & 0xFFFFFFFB;
    if ( (v70 & 4) == 0 )
      v54 = v55;
    *(_DWORD *)(v6 + 240) = v54;
  }
  return 1;
}

