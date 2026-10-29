__int64 __fastcall sub_216F20(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  int v6; // eax
  __int64 v7; // rsi
  __m128i v8; // xmm0
  __int64 v10; // rax
  __m128i v11; // xmm1
  __int64 v12; // r15
  unsigned __int64 i; // rbx
  __int64 v14; // rcx
  int *v15; // rdx
  _QWORD *v16; // r11
  unsigned __int64 v17; // r10
  int v18; // eax
  __int64 v19; // rdx
  _DWORD *v20; // rcx
  _DWORD *v21; // rax
  unsigned __int64 v22; // rdx
  int v23; // eax
  _QWORD *v24; // r10
  __int64 v25; // rsi
  __m128i si128; // xmm0
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rsi
  __m128i v31; // xmm0
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int *v35; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v36; // [rsp+10h] [rbp-98h]
  __int64 v37; // [rsp+18h] [rbp-90h]
  _QWORD *v38; // [rsp+18h] [rbp-90h]
  _QWORD *v39; // [rsp+20h] [rbp-88h]
  __int64 v40; // [rsp+20h] [rbp-88h]
  int *v41; // [rsp+28h] [rbp-80h]
  __int64 (__fastcall **v42)(); // [rsp+30h] [rbp-78h] BYREF
  __int64 v43; // [rsp+38h] [rbp-70h]
  __int64 v44; // [rsp+40h] [rbp-68h]
  __int64 v45; // [rsp+48h] [rbp-60h]
  __int64 v46; // [rsp+50h] [rbp-58h]
  unsigned __int64 v47; // [rsp+58h] [rbp-50h]
  __int64 *v48; // [rsp+60h] [rbp-48h]
  unsigned __int64 v49; // [rsp+68h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( a3 )
    a3[1] = 0;
  v6 = *(_DWORD *)(a2 + 24);
  if ( (v6 & 0x100) != 0 )
  {
    if ( a4 )
    {
      v25 = *a4;
      if ( (unsigned __int64)a4[2] <= 0x1A )
      {
        v32 = qvector_reserve((__int64)a4, v25, 27, 1);
        *a4 = v32;
        v25 = v32;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_4248B0);
      a4[1] = 27;
      *(__m128i *)v25 = si128;
      *(__m128i *)(v25 + 10) = _mm_load_si128((const __m128i *)&xmmword_4248C0);
      *(_BYTE *)(*a4 + 26) = 0;
    }
    return 0;
  }
  if ( (v6 & 0x80u) != 0 )
  {
    if ( a4 )
    {
      v7 = *a4;
      if ( (unsigned __int64)a4[2] <= 0x21 )
      {
        v33 = qvector_reserve((__int64)a4, v7, 34, 1);
        *a4 = v33;
        v7 = v33;
      }
      v8 = _mm_load_si128((const __m128i *)&xmmword_4248D0);
      a4[1] = 34;
      *(_BYTE *)(v7 + 32) = 100;
      *(__m128i *)v7 = v8;
      *(__m128i *)(v7 + 16) = _mm_load_si128((const __m128i *)&xmmword_4248E0);
      *(_BYTE *)(*a4 + 33) = 0;
    }
    return 0;
  }
  v48 = a3;
  v10 = a2 - *(_QWORD *)(a1 + 432);
  v11 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 88));
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v42 = &off_4DF6F8;
  v47 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(-991146299 * (unsigned int)(v10 >> 3)), v11).m128i_u64[0];
  if ( !(unsigned int)sub_11FC20(a1, (__int64)&v42) )
  {
    v12 = 0;
    for ( i = 0; i < *(_QWORD *)(a1 + 440); v12 += 104 )
    {
      if ( (int)v47 != i )
      {
        v14 = v43;
        v15 = (int *)(*(_QWORD *)(v43 + 432) + 104LL * (int)i);
        if ( HIDWORD(v47) == v15[22] )
        {
          v16 = *(_QWORD **)(v43 + 1280);
          if ( !v16 )
            goto LABEL_19;
          v17 = *v16 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v17 )
          {
            if ( (*(_BYTE *)(*v16 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
              goto LABEL_19;
            do
            {
              v39 = v16;
              v37 = v14;
              v36 = v17;
              v35 = v15;
              v41 = (int *)(v17 + 24);
              v23 = sub_3307E0(v15, (int *)(v17 + 24));
              v15 = v35;
              v14 = v37;
              v16 = v39;
              if ( v23 >= 0 )
              {
                v38 = v39;
                v40 = v14;
                v29 = sub_3307E0(v41, v35);
                v15 = v35;
                v24 = (_QWORD *)v36;
                v16 = v38;
                if ( v29 >= 0 )
                  goto LABEL_34;
                v17 = *(_QWORD *)(v36 + 16);
                v14 = v40;
              }
              else
              {
                v17 = *(_QWORD *)(v36 + 8);
              }
            }
            while ( (*(_BYTE *)v17 & 2) == 0 );
            v24 = *(_QWORD **)(v14 + 1280);
LABEL_34:
            if ( v16 == v24 )
            {
LABEL_19:
              v18 = v15[6];
              if ( (v18 & 1) != 0 || (v18 & 0x100) != 0 )
              {
                if ( (unsigned __int8)compare_tinfo() )
                {
                  if ( !a3 )
                    return 1;
                  v19 = a3[1];
                  v20 = (_DWORD *)(*a3 + 4 * v19);
                  if ( (_DWORD *)*a3 == v20 )
                    goto LABEL_27;
                  v21 = (_DWORD *)*a3;
                  while ( *v21 != (_DWORD)i )
                  {
                    if ( v20 == ++v21 )
                      goto LABEL_27;
                  }
                  if ( v20 == v21 )
                  {
LABEL_27:
                    v22 = v19 + 1;
                    if ( a3[2] < v22 )
                    {
                      v27 = qvector_reserve((__int64)a3, *a3, v22, 4);
                      v28 = a3[1];
                      *a3 = v27;
                      v20 = (_DWORD *)(v27 + 4 * v28);
                    }
                    *v20 = i;
                    ++a3[1];
                  }
                }
              }
            }
          }
        }
      }
      ++i;
    }
    if ( !a3 || !a3[1] )
    {
      if ( a4 )
      {
        v30 = *a4;
        if ( (unsigned __int64)a4[2] <= 0x1D )
        {
          v34 = qvector_reserve((__int64)a4, v30, 30, 1);
          *a4 = v34;
          v30 = v34;
        }
        v31 = _mm_load_si128((const __m128i *)&xmmword_4248F0);
        a4[1] = 30;
        *(__m128i *)v30 = v31;
        *(__m128i *)(v30 + 13) = _mm_load_si128((const __m128i *)&xmmword_424900);
        *(_BYTE *)(*a4 + 29) = 0;
      }
      return 0;
    }
  }
  return 1;
}

