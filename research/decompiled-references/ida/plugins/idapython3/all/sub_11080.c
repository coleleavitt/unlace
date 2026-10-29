unsigned __int64 __fastcall sub_11080(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __m128i si128; // xmm0
  _BYTE *v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 *v20; // rbp
  __int64 v21; // r15
  __int64 v22; // r13
  __int128 v23; // xmm1
  __int64 v24; // rdx
  __m128i v25; // xmm0
  __int64 v26; // rdx
  __m128i v27; // xmm0
  __int64 v28; // rdi
  bool v29; // cf
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // r15
  __int64 *v35; // rbp
  __int64 v36; // r14
  __int64 v37; // r13
  __int128 v38; // xmm1
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // [rsp+0h] [rbp-40h]

  v2 = a1 + 8;
  *(_OWORD *)(v2 - 5) = 0;
  *((_OWORD *)v2 - 1) = 0;
  *(v2 - 7) = &code_highlight_block;
  *(v2 - 8) = &off_238B8;
  *(_OWORD *)(v2 + 1) = 0;
  *((_OWORD *)v2 + 2) = 0;
  *((_OWORD *)v2 + 5) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D930);
  *(v2 - 6) = 0;
  *(v2 - 3) = 0;
  *v2 = 0;
  v2[3] = 0;
  v2[9] = 0;
  v2[14] = 0x2727222200000000LL;
  *((_WORD *)v2 + 60) = 348;
  *((_BYTE *)v2 + 48) = 0;
  *(__m128i *)((char *)v2 + 52) = si128;
  v4 = (_BYTE *)qvector_reserve();
  a1[8] = v4;
  a1[9] = 2;
  *v4 = 35;
  *(_BYTE *)(a1[8] + 1LL) = 0;
  v5 = a1[12];
  v6 = a1[13];
  if ( v6 < v5 + 1 )
  {
    v7 = qvector_reserve();
    v18 = a1[12];
    v19 = a1[13];
    a1[13] = v6;
    v20 = (__int64 *)a1[11];
    v46 = v19;
    v21 = v18 - 1;
    if ( v21 >= 0 )
    {
      v22 = v7;
      v23 = 0;
      do
      {
        v24 = *v20;
        v25 = _mm_loadu_si128((const __m128i *)(v20 + 1));
        *(_OWORD *)(v20 + 1) = v23;
        *v20 = 0;
        *(_QWORD *)v22 = v24;
        *(__m128i *)(v22 + 8) = v25;
        v26 = v20[3];
        v27 = _mm_loadu_si128((const __m128i *)v20 + 2);
        v20[3] = 0;
        *(_QWORD *)(v22 + 24) = v26;
        *(__m128i *)(v22 + 32) = v27;
        v28 = *v20;
        v20[5] = 0;
        if ( v28 )
        {
          v20[1] = 0;
          qfree();
          v23 = 0;
        }
        v20 += 6;
        v22 += 48;
        v29 = v21-- == 0;
      }
      while ( !v29 );
    }
    qfree();
    a1[11] = v7;
    a1[13] = v46;
    v5 = a1[12];
  }
  else
  {
    v7 = a1[11];
  }
  v8 = 48 * v5 + v7;
  *(_QWORD *)v8 = 0;
  *(_OWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 24) = 0;
  *(_OWORD *)(v8 + 32) = 0;
  ++a1[12];
  v9 = *(_QWORD *)v8;
  if ( *(_QWORD *)(v8 + 16) <= 3u )
  {
    v45 = qvector_reserve();
    *(_QWORD *)v8 = v45;
    v9 = v45;
  }
  *(_QWORD *)(v8 + 8) = 4;
  *(_WORD *)v9 = 8738;
  *(_BYTE *)(v9 + 2) = 34;
  *(_BYTE *)(*(_QWORD *)v8 + 3LL) = 0;
  v10 = *(_QWORD *)(v8 + 24);
  if ( *(_QWORD *)(v8 + 40) <= 3u )
  {
    v44 = qvector_reserve();
    *(_QWORD *)(v8 + 24) = v44;
    v10 = v44;
  }
  *(_QWORD *)(v8 + 32) = 4;
  *(_WORD *)v10 = 8738;
  *(_BYTE *)(v10 + 2) = 34;
  *(_BYTE *)(*(_QWORD *)(v8 + 24) + 3LL) = 0;
  v11 = a1[12];
  v12 = a1[13];
  if ( v12 < v11 + 1 )
  {
    v32 = qvector_reserve();
    v33 = a1[12];
    v34 = a1[13];
    v13 = v32;
    a1[13] = v12;
    v35 = (__int64 *)a1[11];
    v36 = v33 - 1;
    if ( v36 >= 0 )
    {
      v37 = v32;
      v38 = 0;
      do
      {
        v39 = *v35;
        v40 = _mm_loadu_si128((const __m128i *)(v35 + 1));
        *(_OWORD *)(v35 + 1) = v38;
        *v35 = 0;
        *(_QWORD *)v37 = v39;
        *(__m128i *)(v37 + 8) = v40;
        v41 = v35[3];
        v42 = _mm_loadu_si128((const __m128i *)v35 + 2);
        v35[3] = 0;
        *(_QWORD *)(v37 + 24) = v41;
        *(__m128i *)(v37 + 32) = v42;
        v43 = *v35;
        v35[5] = 0;
        if ( v43 )
        {
          v35[1] = 0;
          qfree();
          v38 = 0;
        }
        v35 += 6;
        v37 += 48;
        v29 = v36-- == 0;
      }
      while ( !v29 );
    }
    qfree();
    a1[11] = v13;
    v11 = a1[12];
    a1[13] = v34;
  }
  else
  {
    v13 = a1[11];
  }
  v14 = 48 * v11 + v13;
  *(_QWORD *)v14 = 0;
  *(_OWORD *)(v14 + 8) = 0;
  *(_QWORD *)(v14 + 24) = 0;
  *(_OWORD *)(v14 + 32) = 0;
  ++a1[12];
  v15 = *(_QWORD *)v14;
  if ( *(_QWORD *)(v14 + 16) <= 3u )
  {
    v31 = qvector_reserve();
    *(_QWORD *)v14 = v31;
    v15 = v31;
  }
  *(_QWORD *)(v14 + 8) = 4;
  *(_WORD *)v15 = 10023;
  *(_BYTE *)(v15 + 2) = 39;
  *(_BYTE *)(*(_QWORD *)v14 + 3LL) = 0;
  v16 = *(_QWORD *)(v14 + 24);
  if ( *(_QWORD *)(v14 + 40) <= 3u )
  {
    v30 = qvector_reserve();
    *(_QWORD *)(v14 + 24) = v30;
    v16 = v30;
  }
  *(_QWORD *)(v14 + 32) = 4;
  *(_WORD *)v16 = 10023;
  *(_BYTE *)(v16 + 2) = 39;
  *(_BYTE *)(*(_QWORD *)(v14 + 24) + 3LL) = 0;
  sub_84E0(
    a1,
    "and|as|assert|break|class|continue|def|del|elif|else|except|exec|finally|for|from|global|nonlocal|if|import|in|is|la"
    "mbda|not|or|pass|print|raise|return|try|while|with|yield|None|True|False",
    1);
  return sub_84E0(a1, "self", 2);
}

