__int64 sub_224D0()
{
  int _32bit; // eax
  int v1; // ebx
  int v2; // r13d
  unsigned int v3; // r14d
  __int64 v4; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r8
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  __m128i v14; // xmm0
  __int64 v15; // r14
  __int64 v16; // r14
  unsigned __int64 v17; // r15
  __int64 v18; // r8
  __int64 v19; // rsi
  __m128i v20; // xmm0
  __int64 v21; // r14
  __int64 v22; // r14
  unsigned __int64 v23; // r15
  __int64 v24; // r8
  __int64 v25; // rsi
  __m128i v26; // xmm0
  __int64 v27; // r14
  __int64 v28; // r14
  __int64 v29; // r8
  unsigned __int64 v30; // r15
  __int64 v31; // rsi
  __m128i v32; // xmm0
  __int64 v33; // r14
  __int64 v34; // r14
  unsigned __int64 v35; // r15
  __int64 v36; // r8
  __int64 v37; // rsi
  __m128i si128; // xmm0
  __int64 v39; // r14
  __int64 v40; // [rsp+8h] [rbp-60h]
  __int64 v41; // [rsp+8h] [rbp-60h]
  __int64 v42; // [rsp+8h] [rbp-60h]
  __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+8h] [rbp-60h]
  __int64 v45; // [rsp+8h] [rbp-60h]
  __int64 v46; // [rsp+10h] [rbp-58h] BYREF
  __int128 v47; // [rsp+18h] [rbp-50h]
  unsigned __int64 v48; // [rsp+28h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  create_data();
  create_data();
  set_cmt();
  _32bit = get_32bit();
  if ( _32bit != -1 )
  {
    v1 = _32bit;
    v2 = BYTE1(_32bit);
    v3 = _32bit & 0xFFFF00FF;
    v47 = 0;
    v4 = qvector_reserve();
    v46 = v4;
    *(_QWORD *)&v47 = 6;
    *(_DWORD *)v4 = 1734437990;
    *(_BYTE *)(v4 + 4) = 115;
    *(_BYTE *)(v46 + 5) = 0;
    if ( v3 )
    {
      v6 = v47;
      if ( (_QWORD)v47 )
      {
        v7 = v47 + 1;
        v8 = v47;
        v6 = v47 - 1;
      }
      else
      {
        v7 = 2;
        v8 = 1;
      }
      v9 = v46;
      if ( *((_QWORD *)&v47 + 1) < v7 )
      {
        v40 = v8;
        v46 = qvector_reserve();
        v8 = v40;
        v9 = v46;
      }
      *(_QWORD *)&v47 = v7;
      *(_BYTE *)(v9 + v8) = 0;
      *(_BYTE *)(v46 + v6) = 58;
      if ( (v1 & 1) != 0 )
      {
        v34 = v47;
        if ( (_QWORD)v47 )
        {
          v36 = v47 + 25;
          v35 = v47 + 26;
          v34 = v47 - 1;
        }
        else
        {
          v35 = 27;
          v36 = 26;
        }
        v37 = v46;
        if ( *((_QWORD *)&v47 + 1) < v35 )
        {
          v42 = v36;
          v46 = qvector_reserve();
          v36 = v42;
          v37 = v46;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_31B90);
        *(_QWORD *)&v47 = v35;
        *(_BYTE *)(v37 + v36) = 0;
        v39 = v46 + v34;
        *(__m128i *)v39 = si128;
        *(__m128i *)(v39 + 10) = _mm_load_si128((const __m128i *)&xmmword_31BA0);
      }
      if ( (v1 & 2) != 0 )
      {
        v28 = v47;
        if ( (_QWORD)v47 )
        {
          v29 = v47 + 25;
          v30 = v47 + 26;
          v28 = v47 - 1;
        }
        else
        {
          v30 = 27;
          v29 = 26;
        }
        v31 = v46;
        if ( *((_QWORD *)&v47 + 1) < v30 )
        {
          v41 = v29;
          v46 = qvector_reserve();
          v29 = v41;
          v31 = v46;
        }
        v32 = _mm_load_si128((const __m128i *)&xmmword_31BB0);
        *(_QWORD *)&v47 = v30;
        *(_BYTE *)(v31 + v29) = 0;
        v33 = v46 + v28;
        *(__m128i *)v33 = v32;
        *(__m128i *)(v33 + 10) = _mm_load_si128((const __m128i *)&xmmword_31BC0);
      }
      if ( (v1 & 4) != 0 )
      {
        v22 = v47;
        if ( (_QWORD)v47 )
        {
          v24 = v47 + 25;
          v23 = v47 + 26;
          v22 = v47 - 1;
        }
        else
        {
          v23 = 27;
          v24 = 26;
        }
        v25 = v46;
        if ( *((_QWORD *)&v47 + 1) < v23 )
        {
          v43 = v24;
          v46 = qvector_reserve();
          v24 = v43;
          v25 = v46;
        }
        v26 = _mm_load_si128((const __m128i *)&xmmword_31B90);
        *(_QWORD *)&v47 = v23;
        *(_BYTE *)(v25 + v24) = 0;
        v27 = v46 + v22;
        *(__m128i *)v27 = v26;
        *(__m128i *)(v27 + 10) = _mm_load_si128((const __m128i *)&xmmword_31BD0);
      }
      if ( (v1 & 8) != 0 )
      {
        v16 = v47;
        if ( (_QWORD)v47 )
        {
          v18 = v47 + 28;
          v17 = v47 + 29;
          v16 = v47 - 1;
        }
        else
        {
          v17 = 30;
          v18 = 29;
        }
        v19 = v46;
        if ( *((_QWORD *)&v47 + 1) < v17 )
        {
          v44 = v18;
          v46 = qvector_reserve();
          v18 = v44;
          v19 = v46;
        }
        v20 = _mm_load_si128((const __m128i *)&xmmword_31BE0);
        *(_QWORD *)&v47 = v17;
        *(_BYTE *)(v19 + v18) = 0;
        v21 = v46 + v16;
        *(__m128i *)v21 = v20;
        *(__m128i *)(v21 + 13) = _mm_load_si128((const __m128i *)&xmmword_31BF0);
      }
      if ( (v1 & 0x10) != 0 )
      {
        v10 = v47;
        if ( (_QWORD)v47 )
        {
          v11 = v47 + 30;
          v12 = v47 + 31;
          v10 = v47 - 1;
        }
        else
        {
          v12 = 32;
          v11 = 31;
        }
        v13 = v46;
        if ( *((_QWORD *)&v47 + 1) < v12 )
        {
          v45 = v11;
          v46 = qvector_reserve();
          v11 = v45;
          v13 = v46;
        }
        v14 = _mm_load_si128((const __m128i *)&xmmword_31C00);
        *(_QWORD *)&v47 = v12;
        *(_BYTE *)(v13 + v11) = 0;
        v15 = v46 + v10;
        *(__m128i *)v15 = v14;
        *(__m128i *)(v15 + 15) = _mm_load_si128((const __m128i *)&xmmword_31C10);
      }
      if ( (v1 & 0xFFFF00E0) != 0 )
        sub_D8D0(&v46);
    }
    if ( v2 )
      sub_D8D0(&v46);
    set_cmt();
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree();
    }
  }
  return 1;
}
