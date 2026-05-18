__int64 __fastcall sub_899F0(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r14
  unsigned __int64 v15; // r15
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rbp
  unsigned __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // rsi
  __m128i v24; // xmm0
  __int64 v25; // rbp
  unsigned __int64 v26; // rbp
  __int64 v27; // r15
  __int64 v28; // rbp
  unsigned __int64 v29; // r12
  __int64 v30; // r15
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rbp
  unsigned __int64 v34; // r12
  __int64 v35; // r14
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // rbp
  unsigned __int64 v39; // rbp
  __int64 v40; // r14
  __int64 v41; // rbp
  unsigned __int64 v42; // r15
  __int64 v43; // r8
  __int64 v44; // r12
  __int64 v45; // rsi
  __int64 v46; // rax
  unsigned __int64 v47; // r12
  __int64 v48; // r15
  __int64 v49; // r12
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // [rsp+0h] [rbp-48h]
  __int64 v56; // [rsp+0h] [rbp-48h]
  __int64 v57; // [rsp+0h] [rbp-48h]
  __int64 v58; // [rsp+8h] [rbp-40h]

  v3 = a1[1];
  if ( !v3 )
  {
    v6 = *a1;
    v5 = 27;
    v4 = 26;
    if ( (unsigned __int64)a1[2] >= 0x1B )
      goto LABEL_3;
LABEL_7:
    v12 = sub_1987B0(a1, v6, v5, 1);
    *a1 = v12;
    v6 = v12;
    goto LABEL_3;
  }
  v4 = v3 + 25;
  v5 = v3 + 26;
  v6 = *a1;
  --v3;
  if ( a1[2] < v5 )
    goto LABEL_7;
LABEL_3:
  si128 = _mm_load_si128(xmmword_1B6DB0);
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  v8 = *a1 + v3;
  *(__m128i *)v8 = si128;
  *(__m128i *)(v8 + 10) = _mm_load_si128((const __m128i *)&xmmword_1B6F20);
  sub_171F20(a1, 1);
  v9 = a2[3];
  if ( v9 > 0x7FFFFFFF || !(unsigned __int8)sub_171FB0(a1, (unsigned int)v9, 1) )
    return 0;
  v13 = 0;
  v14 = 4LL * (unsigned int)v9;
  if ( (_DWORD)v9 )
  {
    do
    {
      v18 = a1[1];
      if ( v18 )
      {
        v15 = v18 + 1;
        v16 = a1[1];
        v17 = *a1;
        --v18;
        if ( a1[2] < v15 )
          goto LABEL_16;
      }
      else
      {
        v17 = *a1;
        v16 = 1;
        v15 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_16:
          v55 = v16;
          v19 = sub_1987B0(a1, v17, v15, 1);
          v16 = v55;
          *a1 = v19;
          v17 = v19;
        }
      }
      a1[1] = v15;
      *(_BYTE *)(v17 + v18) = 32;
      *(_BYTE *)(*a1 + v16) = 0;
      if ( !(unsigned __int8)sub_7DC70(a1) )
        return 0;
      v13 += 4;
    }
    while ( v13 != v14 );
  }
  v20 = a1[1];
  if ( v20 )
  {
    v22 = v20 + 29;
    v21 = v20 + 30;
    --v20;
  }
  else
  {
    v21 = 31;
    v22 = 30;
  }
  v23 = *a1;
  if ( a1[2] < v21 )
  {
    v32 = sub_1987B0(a1, v23, v21, 1);
    *a1 = v32;
    v23 = v32;
  }
  v24 = _mm_load_si128((const __m128i *)&xmmword_1B6F30);
  a1[1] = v21;
  *(_BYTE *)(v23 + v22) = 0;
  v25 = *a1 + v20;
  *(__m128i *)v25 = v24;
  *(__m128i *)(v25 + 14) = _mm_load_si128((const __m128i *)&xmmword_1B6F40);
  sub_171F20(a1, 1);
  v26 = a2[6];
  if ( v26 < 0x80000000 && (unsigned __int8)sub_171FB0(a1, (unsigned int)v26, 1) )
  {
    if ( (_DWORD)v26 )
    {
      v27 = 3LL * (unsigned int)v26;
      v28 = 0;
      v56 = 8 * v27;
      while ( 1 )
      {
        v29 = *(_QWORD *)(a2[5] + v28 + 8);
        if ( v29 >= 0x80000000 || !(unsigned __int8)sub_171FB0(a1, (unsigned int)v29, 1) )
          break;
        if ( (_DWORD)v29 )
        {
          v30 = 0;
          v31 = 80LL * (unsigned int)v29;
          while ( (unsigned __int8)sub_896E0(a1, v30 + *(_QWORD *)(a2[5] + v28), 1u) )
          {
            v30 += 80;
            if ( v30 == v31 )
              goto LABEL_33;
          }
          return 0;
        }
LABEL_33:
        v28 += 24;
        if ( v56 == v28 )
          goto LABEL_34;
      }
    }
    else
    {
LABEL_34:
      v33 = a1[1];
      if ( v33 )
      {
        v35 = v33 + 27;
        v34 = v33 + 28;
        --v33;
      }
      else
      {
        v34 = 29;
        v35 = 28;
      }
      if ( a1[2] < v34 )
        *a1 = sub_1987B0(a1, *a1, v34, 1);
      v36 = *a1;
      a1[1] = v34;
      v37 = _mm_load_si128((const __m128i *)&xmmword_1B6F50);
      *(_BYTE *)(v36 + v35) = 0;
      v38 = *a1 + v33;
      *(__m128i *)v38 = v37;
      *(__m128i *)(v38 + 12) = _mm_load_si128((const __m128i *)&xmmword_1B6F60);
      sub_171F20(a1, 1);
      v39 = a2[9];
      if ( v39 <= 0x7FFFFFFF && (unsigned __int8)sub_171FB0(a1, (unsigned int)v39, 1) )
      {
        if ( (_DWORD)v39 )
        {
          v40 = 0;
          v41 = 24LL * (unsigned int)v39;
          while ( 1 )
          {
            v44 = a1[1];
            if ( v44 )
            {
              v42 = v44 + 1;
              v43 = a1[1];
              --v44;
            }
            else
            {
              v43 = 1;
              v42 = 2;
            }
            v45 = *a1;
            if ( a1[2] < v42 )
            {
              v57 = v43;
              v46 = sub_1987B0(a1, v45, v42, 1);
              v43 = v57;
              *a1 = v46;
              v45 = v46;
            }
            a1[1] = v42;
            *(_BYTE *)(v45 + v44) = 32;
            *(_BYTE *)(*a1 + v43) = 0;
            if ( !(unsigned __int8)sub_1721B0(a1, v40 + a2[8], 1) )
              break;
            v40 += 24;
            if ( v41 == v40 )
              goto LABEL_50;
          }
        }
        else
        {
LABEL_50:
          sub_7DED0(a1, " // authors");
          sub_171F20(a1, 1);
          v47 = a2[12];
          if ( v47 <= 0x7FFFFFFF )
          {
            v10 = sub_171FB0(a1, (unsigned int)v47, 1);
            if ( (_BYTE)v10 )
            {
              if ( !(_DWORD)v47 )
              {
LABEL_60:
                sub_7DED0(a1, " // idb_paths");
                sub_171F20(a1, 1);
                sub_7DE50(a1, 59);
                return v10;
              }
              v48 = 0;
              v49 = 24LL * (unsigned int)v47;
              while ( 1 )
              {
                v51 = a1[1];
                v52 = 1;
                if ( v51 )
                {
                  v52 = a1[1];
                  --v51;
                }
                v53 = v51 + 2;
                if ( a1[2] < (unsigned __int64)(v51 + 2) )
                {
                  v58 = v52;
                  v54 = sub_1987B0(a1, *a1, v53, 1);
                  v52 = v58;
                  v53 = v51 + 2;
                  *a1 = v54;
                }
                v50 = *a1;
                a1[1] = v53;
                *(_BYTE *)(v50 + v51) = 32;
                *(_BYTE *)(*a1 + v52) = 0;
                if ( !(unsigned __int8)sub_1721B0(a1, v48 + a2[11], 1) )
                  break;
                v48 += 24;
                if ( v49 == v48 )
                  goto LABEL_60;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
