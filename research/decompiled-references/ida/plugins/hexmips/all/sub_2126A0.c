__int64 __fastcall sub_2126A0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  int v6; // eax
  __m128i *v7; // rsi
  __m128i v8; // xmm0
  __int64 v10; // rax
  __m128i v11; // xmm1
  __int64 v12; // r15
  unsigned __int64 i; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // r11
  _BYTE *v17; // r10
  int v18; // eax
  __int64 v19; // rdx
  _DWORD *v20; // rcx
  _DWORD *v21; // rax
  int v22; // eax
  _QWORD *v23; // r10
  __int64 v24; // rsi
  __m128i si128; // xmm0
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rsi
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-A0h]
  _BYTE *v35; // [rsp+10h] [rbp-98h]
  __int64 v36; // [rsp+18h] [rbp-90h]
  _QWORD *v37; // [rsp+18h] [rbp-90h]
  _QWORD *v38; // [rsp+20h] [rbp-88h]
  __int64 v39; // [rsp+20h] [rbp-88h]
  _BYTE *v40; // [rsp+28h] [rbp-80h]
  __int64 (__fastcall **v41)(); // [rsp+30h] [rbp-78h] BYREF
  __int64 v42; // [rsp+38h] [rbp-70h]
  __int64 v43; // [rsp+40h] [rbp-68h]
  __int64 v44; // [rsp+48h] [rbp-60h]
  __int64 v45; // [rsp+50h] [rbp-58h]
  unsigned __int64 v46; // [rsp+58h] [rbp-50h]
  __int64 *v47; // [rsp+60h] [rbp-48h]
  unsigned __int64 v48; // [rsp+68h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( a3 )
    a3[1] = 0;
  v6 = *(_DWORD *)(a2 + 24);
  if ( (v6 & 0x100) != 0 )
  {
    if ( a4 )
    {
      v24 = *a4;
      if ( (unsigned __int64)a4[2] <= 0x1A )
      {
        v31 = qvector_reserve();
        *a4 = v31;
        v24 = v31;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_4072F0);
      a4[1] = 27;
      *(__m128i *)v24 = si128;
      *(__m128i *)(v24 + 10) = _mm_load_si128((const __m128i *)&xmmword_407300);
      *(_BYTE *)(*a4 + 26) = 0;
    }
    return 0;
  }
  if ( (v6 & 0x80u) != 0 )
  {
    if ( a4 )
    {
      v7 = (__m128i *)*a4;
      if ( (unsigned __int64)a4[2] <= 0x21 )
      {
        v32 = qvector_reserve();
        *a4 = v32;
        v7 = (__m128i *)v32;
      }
      v8 = _mm_load_si128((const __m128i *)&xmmword_407310);
      a4[1] = 34;
      v7[2].m128i_i8[0] = 100;
      *v7 = v8;
      v7[1] = _mm_load_si128((const __m128i *)&xmmword_407320);
      *(_BYTE *)(*a4 + 33) = 0;
    }
    return 0;
  }
  v47 = a3;
  v10 = a2 - *(_QWORD *)(a1 + 432);
  v11 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 88));
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v41 = off_4BFE38;
  v46 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(-991146299 * (unsigned int)(v10 >> 3)), v11).m128i_u64[0];
  if ( !(unsigned int)sub_11BA20(a1, (__int64)&v41) )
  {
    v12 = 0;
    for ( i = 0; i < *(_QWORD *)(a1 + 440); ++i )
    {
      if ( (int)v46 != i )
      {
        v14 = v42;
        v15 = *(_QWORD *)(v42 + 432) + 104LL * (int)i;
        if ( HIDWORD(v46) == *(_DWORD *)(v15 + 88) )
        {
          v16 = *(_QWORD **)(v42 + 1280);
          if ( !v16 )
            goto LABEL_19;
          v17 = (_BYTE *)(*v16 & 0xFFFFFFFFFFFFFFFCLL);
          if ( v17 )
          {
            if ( (*(_BYTE *)(*v16 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
              goto LABEL_19;
            do
            {
              v38 = v16;
              v36 = v14;
              v35 = v17;
              v34 = v15;
              v40 = v17 + 24;
              v22 = sub_32B790(v15, v17 + 24);
              v15 = v34;
              v14 = v36;
              v16 = v38;
              if ( v22 >= 0 )
              {
                v37 = v38;
                v39 = v14;
                v28 = sub_32B790(v40, v34);
                v15 = v34;
                v23 = v35;
                v16 = v37;
                if ( v28 >= 0 )
                  goto LABEL_34;
                v17 = *((_BYTE **)v35 + 2);
                v14 = v39;
              }
              else
              {
                v17 = *((_BYTE **)v35 + 1);
              }
            }
            while ( (*v17 & 2) == 0 );
            v23 = *(_QWORD **)(v14 + 1280);
LABEL_34:
            if ( v16 == v23 )
            {
LABEL_19:
              v18 = *(_DWORD *)(v15 + 24);
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
                    if ( a3[2] < (unsigned __int64)(v19 + 1) )
                    {
                      v26 = qvector_reserve();
                      v27 = a3[1];
                      *a3 = v26;
                      v20 = (_DWORD *)(v26 + 4 * v27);
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
      v12 += 104;
    }
    if ( !a3 || !a3[1] )
    {
      if ( a4 )
      {
        v29 = *a4;
        if ( (unsigned __int64)a4[2] <= 0x1D )
        {
          v33 = qvector_reserve();
          *a4 = v33;
          v29 = v33;
        }
        v30 = _mm_load_si128((const __m128i *)&xmmword_407330);
        a4[1] = 30;
        *(__m128i *)v29 = v30;
        *(__m128i *)(v29 + 13) = _mm_load_si128((const __m128i *)&xmmword_407340);
        *(_BYTE *)(*a4 + 29) = 0;
      }
      return 0;
    }
  }
  return 1;
}

