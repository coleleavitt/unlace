unsigned __int64 __fastcall sub_1A40(__int64 a1, __int16 a2)
{
  __int64 v3; // rdx
  unsigned int v4; // r14d
  unsigned int v5; // r12d
  __int64 v6; // rsi
  unsigned int v7; // ebp
  int v8; // r15d
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 selector; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r15d
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r12
  unsigned __int16 v17; // ax
  unsigned __int64 v18; // rbp
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rsi
  const __m128i *v23; // rax
  const __m128i *v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rbx
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __int64 v30; // [rsp+8h] [rbp-5F0h]
  __int16 v31; // [rsp+1Eh] [rbp-5DAh]
  char *v32; // [rsp+20h] [rbp-5D8h]
  int v33; // [rsp+28h] [rbp-5D0h]
  int v34; // [rsp+2Ch] [rbp-5CCh]
  __int64 v35; // [rsp+30h] [rbp-5C8h]
  unsigned int v36; // [rsp+38h] [rbp-5C0h]
  char v37; // [rsp+3Ch] [rbp-5BCh]
  _BYTE v38[4]; // [rsp+40h] [rbp-5B8h] BYREF
  int v39; // [rsp+44h] [rbp-5B4h]
  int v40; // [rsp+4Ch] [rbp-5ACh]
  char v41[12]; // [rsp+50h] [rbp-5A8h] BYREF
  unsigned int v42; // [rsp+5Ch] [rbp-59Ch]
  unsigned int v43; // [rsp+98h] [rbp-560h]
  unsigned int v44; // [rsp+9Ch] [rbp-55Ch]
  unsigned __int16 v45; // [rsp+A0h] [rbp-558h]
  unsigned __int16 v46; // [rsp+A2h] [rbp-556h]
  unsigned __int16 v47; // [rsp+A4h] [rbp-554h]
  unsigned __int16 v48; // [rsp+A6h] [rbp-552h]
  int v49; // [rsp+B0h] [rbp-548h]
  int v50; // [rsp+B4h] [rbp-544h]
  __m128i v51; // [rsp+F0h] [rbp-508h] BYREF
  __m128i v52; // [rsp+100h] [rbp-4F8h]
  __m128i v53; // [rsp+110h] [rbp-4E8h]
  __m128i v54; // [rsp+120h] [rbp-4D8h]
  __m128i v55; // [rsp+130h] [rbp-4C8h]
  __m128i v56; // [rsp+140h] [rbp-4B8h]
  __m128i v57; // [rsp+150h] [rbp-4A8h]
  __m128i v58; // [rsp+160h] [rbp-498h]
  __m128i v59; // [rsp+170h] [rbp-488h]
  __m128i v60; // [rsp+180h] [rbp-478h]
  __m128i v61; // [rsp+190h] [rbp-468h]
  __m128i v62; // [rsp+1A0h] [rbp-458h]
  int v63; // [rsp+1B0h] [rbp-448h] BYREF
  __int16 v64; // [rsp+1B4h] [rbp-444h]
  unsigned __int64 v65; // [rsp+5B8h] [rbp-40h]

  v37 = a2;
  v65 = __readfsqword(0x28u);
  v31 = a2 & 0x200;
  v30 = qlsize();
  qlseek(a1, 0, 0);
  lread(a1, v41, 152);
  v4 = 28 * v45 + 96;
  v5 = 32 * v46 + v4;
  v6 = 20 * (unsigned int)v47;
  v34 = v6 + 16 * v48 + v5;
  if ( v4 >= v30
    || v5 >= v30
    || (_DWORD)v6 + 16 * v48 + v5 >= v30
    || v42 && v43 && (LODWORD(v3) = (v42 * (unsigned __int64)v43) >> 32, !is_mul_ok(v42, v43)) )
  {
    sub_1990((__int64)"Failed reading X-box XE file header", v6, v3);
  }
  v7 = v42 * v43;
  if ( v46 )
  {
    v36 = 32 * v46 + v4;
    v8 = 0;
    v35 = -1;
    v33 = 28 * v45 + 96;
    do
    {
      if ( v33 > (int)v4 || v4 != qlseek(a1, v4, 0) )
      {
        v5 = v36;
        sub_18C0((__int64)"XE: failed to load segment number %d\n", v8);
        LODWORD(v6) = 20 * v47;
        goto LABEL_23;
      }
      lread(a1, &v51, 32);
      v9 = (unsigned int)(v51.m128i_i32[3] + v51.m128i_i32[2]);
      v10 = v51.m128i_i32[2] + v7 - v49;
      if ( (int)(v51.m128i_i32[2] + v7 - v49) < 0
        || __CFADD__(v51.m128i_i32[3], v51.m128i_i32[2])
        || __CFADD__((_DWORD)v10, v51.m128i_i32[3])
        || (unsigned int)(v10 + v51.m128i_i32[3]) > v30 )
      {
        sub_1990(
          (__int64)"Corrupted or truncated input file",
          v10,
          v51.m128i_u32[2],
          __CFADD__(v51.m128i_i32[3], v51.m128i_i32[2]));
      }
      file2base(a1, (unsigned int)v10, v51.m128i_u32[2], (unsigned int)(v51.m128i_i32[3] + v51.m128i_i32[2]), 1);
      if ( !v31 )
      {
        qstrncpy(&v63, &v51, 9);
        v32 = sub_1360((char *)&v63);
        selector = allocate_selector(0);
        if ( v63 == 1952539694 )
        {
          v12 = v35;
          if ( v64 == 97 )
            v12 = selector;
          v35 = v12;
        }
        add_segm(selector, v51.m128i_u32[2], v9, &v63, v32, 0);
        v13 = getseg(v51.m128i_u32[2]);
        set_segm_addressing(v13, 1);
      }
      ++v8;
      v4 += 32;
    }
    while ( v46 > v8 );
    v5 = v36;
    LODWORD(v6) = 20 * v47;
  }
  else
  {
    v35 = -1;
  }
LABEL_23:
  if ( v5 + (_DWORD)v6 != qlseek(a1, v5 + (unsigned int)v6, 0) )
  {
    sub_17F0((__int64)"XE: Failed to read imports");
    if ( v31 )
      return v65 - __readfsqword(0x28u);
    goto LABEL_40;
  }
  if ( v48 )
  {
    v14 = 0;
    v15 = 0;
    v16 = -1;
    lread(a1, v38, 16);
    while ( 1 )
    {
      v18 = (unsigned int)(v49 + v39);
      if ( __CFADD__(v49, v39) || __CFADD__(v40, v34) )
        break;
      qlgetz(a1, (unsigned int)(v40 + v34), &v63, 1024);
      set_name(v18, &v63, 1024);
      put_dword(v18, -1);
      if ( v16 > v18 )
        v16 = v18;
      if ( v15 < v18 )
        v15 = v18;
      ++v14;
      v17 = v48;
      if ( v48 <= v14 )
        goto LABEL_35;
      lread(a1, v38, 16);
    }
    sub_18C0((__int64)"XE: failed to load import number %d\n", v14);
    v17 = v48;
LABEL_35:
    if ( v17 && (v37 & 0x20) != 0 )
    {
      v23 = (const __m128i *)getseg(v16);
      if ( v23 && v23->m128i_i64[0] != v16 )
      {
        v51 = _mm_loadu_si128(v23);
        v52 = _mm_loadu_si128(v23 + 1);
        v53 = _mm_loadu_si128(v23 + 2);
        v54 = _mm_loadu_si128(v23 + 3);
        v55 = _mm_loadu_si128(v23 + 4);
        v56 = _mm_loadu_si128(v23 + 5);
        v57 = _mm_loadu_si128(v23 + 6);
        v58 = _mm_loadu_si128(v23 + 7);
        v59 = _mm_loadu_si128(v23 + 8);
        v60 = _mm_loadu_si128(v23 + 9);
        v61 = _mm_loadu_si128(v23 + 10);
        v29 = _mm_loadu_si128(v23 + 11);
        v51.m128i_i64[0] = v16;
        v62 = v29;
        add_segm_ex(&v51, 0, 0, 2);
      }
      v24 = (const __m128i *)getseg(v16);
      if ( v24 )
      {
        v25 = v15 + 4;
        if ( v24->m128i_i64[1] != v25 )
        {
          v51 = _mm_loadu_si128(v24);
          v52 = _mm_loadu_si128(v24 + 1);
          v53 = _mm_loadu_si128(v24 + 2);
          v54 = _mm_loadu_si128(v24 + 3);
          v55 = _mm_loadu_si128(v24 + 4);
          v56 = _mm_loadu_si128(v24 + 5);
          v57 = _mm_loadu_si128(v24 + 6);
          v58 = _mm_loadu_si128(v24 + 7);
          v59 = _mm_loadu_si128(v24 + 8);
          v60 = _mm_loadu_si128(v24 + 9);
          v61 = _mm_loadu_si128(v24 + 10);
          v28 = _mm_loadu_si128(v24 + 11);
          v51.m128i_i64[0] = v25;
          v62 = v28;
          add_segm_ex(&v51, 0, 0, 2);
        }
      }
      v26 = getseg(v16);
      v27 = v26;
      if ( v26 )
      {
        *(_BYTE *)(v26 + 184) = 1;
        set_segm_name(v26, ".idata", 0);
        set_segm_class(v27, "XTRN", 0);
      }
    }
  }
  if ( !v31 )
  {
LABEL_40:
    sub_1510(v44);
    if ( v35 != -1 )
      set_default_dataseg(v35);
    v20 = (unsigned int)(v49 + v50);
    setinf(15, v20);
    v21 = getseg(v20);
    v22 = 0;
    if ( v21 )
      v22 = *(_QWORD *)(v21 + 48);
    setinf(14, v22);
    create_filename_cmt();
  }
  return v65 - __readfsqword(0x28u);
}

