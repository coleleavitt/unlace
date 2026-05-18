__int64 __fastcall sub_167490(_QWORD *a1, __int64 a2, char a3)
{
  unsigned int v5; // r12d
  const char *v7; // rsi
  size_t v8; // rax
  int v9; // edx
  time_t v10; // rax
  size_t v11; // rax
  int v12; // edx
  int v13; // ebx
  time_t v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  char v17; // [rsp+1Eh] [rbp-9Ah] BYREF
  char v18; // [rsp+1Fh] [rbp-99h] BYREF
  unsigned int v19; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v20; // [rsp+24h] [rbp-94h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-90h] BYREF
  unsigned int v22; // [rsp+2Ch] [rbp-8Ch] BYREF
  unsigned int v23; // [rsp+30h] [rbp-88h]
  unsigned int v24; // [rsp+34h] [rbp-84h]
  int v25; // [rsp+38h] [rbp-80h] BYREF
  int v26; // [rsp+3Ch] [rbp-7Ch] BYREF
  struct tm tp; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( !a2 || *(_BYTE *)a2 == 48 && !*(_BYTE *)(a2 + 1) )
  {
    *a1 = 0;
    return 1;
  }
  v7 = "%04u-%02u-%02uT%02u:%02u:%02u%n";
  v19 = 0;
  v20 = 0;
  if ( (a3 & 2) == 0 )
    v7 = "%04u-%02u-%02u %02u:%02u:%02u%n";
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( (unsigned int)sub_19DA80(
                       a2,
                       (_DWORD)v7,
                       (unsigned int)&v19,
                       (unsigned int)&v20,
                       (unsigned int)&v21,
                       (unsigned int)&v22) != 6
    && (unsigned int)sub_19DA80(
                       a2,
                       (unsigned int)"%04u-%02u-%02u%n",
                       (unsigned int)&v19,
                       (unsigned int)&v20,
                       (unsigned int)&v21,
                       (unsigned int)&v25) != 3 )
  {
    v17 = 0;
    v5 = 0;
    v18 = 0;
    v26 = 0;
    tp.tm_sec = 0;
    if ( (unsigned int)sub_19DA80(
                         a2,
                         (unsigned int)"%c%d%c%n",
                         (unsigned int)&v17,
                         (unsigned int)&v26,
                         (unsigned int)&v18,
                         (unsigned int)&tp) != 3 )
      return v5;
    v11 = strlen((const char *)a2);
    if ( tp.tm_sec != v11 || ((v17 - 43) & 0xFD) != 0 || !v26 )
      return v5;
    if ( v18 == 83 )
    {
      v13 = 1;
      goto LABEL_26;
    }
    if ( v18 > 83 )
    {
      if ( v18 == 100 )
      {
        v16 = 1;
      }
      else
      {
        if ( v18 != 119 )
          return v5;
        v16 = 7;
      }
      v12 = 24 * v16;
    }
    else
    {
      v12 = 1;
      if ( v18 != 72 )
      {
        if ( v18 != 77 )
          return v5;
        goto LABEL_25;
      }
    }
    v12 *= 60;
LABEL_25:
    v13 = 60 * v12;
LABEL_26:
    v14 = time(nullptr);
    v15 = (unsigned int)(v26 * v13);
    if ( v17 != 43 )
      v15 = (unsigned int)-(int)v15;
    v5 = 1;
    *a1 = (v15 + v14) << 32;
    return v5;
  }
  v8 = strlen((const char *)a2);
  v9 = a3 & 1;
  if ( v25 == v8 || (v5 = 0, v9) && v25 + 1 == v8 && *(_BYTE *)(a2 + v25) == 90 )
  {
    memset(&tp.tm_wday, 0, 32);
    tp.tm_isdst = -1;
    *(_QWORD *)&tp.tm_mon = _mm_add_epi32(
                              _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(v19)),
                              _mm_loadl_epi64((const __m128i *)&qword_1B73A0)).m128i_u64[0];
    *(__m128i *)&tp.tm_sec = _mm_unpacklo_epi64(
                               _mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), _mm_cvtsi32_si128(v23)),
                               _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(v21)));
    if ( v9 )
      v10 = j__timegm(&tp);
    else
      v10 = mktime(&tp);
    v5 = 1;
    *a1 = v10 << 32;
  }
  return v5;
}
