__int64 __fastcall sub_2B90(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 file_ext; // rax
  __int64 v10; // rsi
  const char *v11; // r13
  int v12; // eax
  void *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  __m128i v16; // xmm0
  __int64 v17; // rsi
  __m128i si128; // xmm0
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // edx
  char *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // [rsp+Ch] [rbp-5Ch] BYREF
  __int16 v26; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int16 v27; // [rsp+12h] [rbp-56h]
  unsigned __int16 v28; // [rsp+14h] [rbp-54h]
  unsigned __int16 v29; // [rsp+16h] [rbp-52h]
  unsigned __int16 v30; // [rsp+18h] [rbp-50h]
  unsigned __int16 v31; // [rsp+28h] [rbp-40h]
  unsigned __int64 v32; // [rsp+38h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  if ( dword_B384 > 3 )
    return 0;
  v25 = qlsize(a3);
  file_ext = get_file_ext(a4);
  v10 = *a2;
  v11 = (const char *)file_ext;
  if ( !file_ext )
    v11 = "";
  if ( (unsigned __int64)a2[2] <= 6 )
  {
    v14 = qvector_reserve(a2, v10, 7, 1);
    *a2 = v14;
    v10 = v14;
  }
  a2[1] = 7;
  *(_DWORD *)v10 = 1635018093;
  *(_WORD *)(v10 + 4) = 25456;
  *(_BYTE *)(*a2 + 6) = 0;
  v12 = dword_B384;
  if ( dword_B384 == 1 )
    goto LABEL_19;
  if ( dword_B384 > 1 )
  {
    if ( (unsigned int)(dword_B384 - 2) > 1 )
      return 0;
    ++dword_B384;
    if ( v12 != 2 )
    {
LABEL_11:
      if ( !strcasecmp(v11, "com") )
      {
        qlseek(a3, 0, 0);
        if ( qlread(a3, &v25, 1) == 1 )
        {
          v13 = (void *)*a1;
          if ( (unsigned __int64)a1[2] <= 0xF )
          {
            v24 = qvector_reserve(a1, v13, 16, 1);
            *a1 = v24;
            v13 = (void *)v24;
          }
          a1[1] = 16;
          qmemcpy(v13, "MS-DOS COM-file", 15);
          *(_BYTE *)(*a1 + 15) = 0;
          return 23;
        }
      }
      return 0;
    }
LABEL_25:
    if ( !strcasecmp(v11, "sys") || !strcasecmp(v11, "drv") )
    {
      v17 = *a1;
      if ( (unsigned __int64)a1[2] <= 0x27 )
      {
        v23 = qvector_reserve(a1, v17, 40, 1);
        *a1 = v23;
        v17 = v23;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_8C00);
      a1[1] = 40;
      *(__m128i *)v17 = si128;
      *(__m128i *)(v17 + 16) = _mm_load_si128((const __m128i *)&xmmword_8C10);
      *(_QWORD *)(v17 + 31) = 0x2972657669726420LL;
      *(_BYTE *)(*a1 + 39) = 0;
      return 16387;
    }
LABEL_18:
    dword_B384 = 4;
    goto LABEL_11;
  }
  if ( dword_B384 )
    return 0;
  if ( v25 <= 0x1C )
    goto LABEL_18;
  lread(a3, &v26, 28);
  if ( v26 != 19802 && v26 != 23117 || (v20 = 16 * v30, v20 <= 27) )
  {
    dword_B384 = 3;
    goto LABEL_25;
  }
  if ( v25 < v20 || v29 && (v25 < v31 + 4 * (unsigned int)v29 || v31 <= 0x1Bu) )
    return 0;
  v21 = 16 * (32 * v28 - v30);
  if ( v27 )
    v21 = v21 + v27 - 512;
  if ( v21 >= v25 - v20 || !(unsigned int)sub_5B10(a3, &v26) )
  {
LABEL_19:
    v15 = *a1;
    if ( (unsigned __int64)a1[2] <= 0x17 )
    {
      v19 = qvector_reserve(a1, v15, 24, 1);
      *a1 = v19;
      v15 = v19;
    }
    v16 = _mm_load_si128((const __m128i *)&xmmword_8BF0);
    a1[1] = 24;
    dword_B384 = 5;
    *(__m128i *)v15 = v16;
    *(_QWORD *)(v15 + 15) = 0x294558452820656CLL;
    *(_BYTE *)(*a1 + 23) = 0;
    return 22;
  }
  else
  {
    if ( (unsigned __int64)a1[2] <= 0x25 )
      *a1 = qvector_reserve(a1, *a1, 38, 1);
    v22 = (char *)*a1;
    a1[1] = 38;
    qmemcpy(v22, "MS-DOS executable (perhaps overlayed)", 0x25u);
    ++dword_B384;
    *(_BYTE *)(*a1 + 37) = 0;
    return 16406;
  }
}
