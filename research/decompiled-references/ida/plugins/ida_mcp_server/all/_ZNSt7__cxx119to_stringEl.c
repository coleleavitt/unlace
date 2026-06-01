__int64 *__fastcall std::to_string(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // r12
  unsigned __int64 v5; // rsi
  int v6; // ebp
  __int64 v7; // r13
  _BYTE *v8; // rsi
  __m128i si128; // xmm0
  _BYTE *v10; // rsi
  int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  char v14; // r9
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // rax
  _OWORD v19[11]; // [rsp+0h] [rbp-108h]
  __m128i v20[2]; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v21; // [rsp+D8h] [rbp-30h]

  v2 = (unsigned __int64)a2 >> 63;
  v3 = -a2;
  v21 = __readfsqword(0x28u);
  if ( a2 > 0 )
    v3 = a2;
  if ( v3 <= 9 )
  {
    v6 = 1;
  }
  else
  {
    v5 = v3;
    v6 = 1;
    while ( 1 )
    {
      if ( v5 <= 0x63 )
      {
        ++v6;
        goto LABEL_11;
      }
      if ( v5 <= 0x3E7 )
      {
        v6 += 2;
        goto LABEL_11;
      }
      if ( v5 <= 0x270F )
        break;
      v6 += 4;
      if ( v5 <= 0x1869F )
        goto LABEL_11;
      v5 /= 0x2710u;
    }
    v6 += 3;
  }
LABEL_11:
  *((_BYTE *)a1 + 16) = 0;
  v7 = (unsigned int)(v6 + v2);
  *a1 = (__int64)(a1 + 2);
  a1[1] = 0;
  std::string::reserve();
  v8 = (_BYTE *)*a1;
  v19[0] = _mm_load_si128((const __m128i *)&xmmword_3E1F70);
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E1F80);
  *v8 = 45;
  v10 = &v8[v2];
  v19[1] = si128;
  v19[2] = _mm_load_si128((const __m128i *)&xmmword_3E1F90);
  v19[3] = _mm_load_si128((const __m128i *)&xmmword_3E1FA0);
  v19[4] = _mm_load_si128((const __m128i *)&xmmword_3E1FB0);
  v19[5] = _mm_load_si128((const __m128i *)&xmmword_3E1FC0);
  v19[6] = _mm_load_si128((const __m128i *)&xmmword_3E1FD0);
  v19[7] = _mm_load_si128((const __m128i *)&xmmword_3E1FE0);
  v19[8] = _mm_load_si128((const __m128i *)&xmmword_3E1FF0);
  v19[9] = _mm_load_si128((const __m128i *)&xmmword_3E2000);
  v19[10] = _mm_load_si128((const __m128i *)&xmmword_3E2010);
  v20[0] = _mm_load_si128((const __m128i *)&xmmword_3E2020);
  *(__m128i *)((char *)v20 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E2030);
  if ( v3 > 0x63 )
  {
    v11 = v6 - 1;
    do
    {
      v12 = v3 % 0x64;
      v13 = v3;
      v3 /= 0x64u;
      v14 = *((_BYTE *)v19 + 2 * v12 + 1);
      LOBYTE(v12) = *((_BYTE *)v19 + 2 * v12);
      v10[v11] = v14;
      v15 = (unsigned int)(v11 - 1);
      v11 -= 2;
      v10[v15] = v12;
    }
    while ( v13 > 0x270F );
  }
  v16 = v3 + 48;
  if ( v3 > 9 )
  {
    v10[1] = *((_BYTE *)v19 + 2 * v3 + 1);
    v16 = *((_BYTE *)v19 + 2 * v3);
  }
  *v10 = v16;
  v17 = *a1;
  a1[1] = v7;
  *(_BYTE *)(v17 + v7) = 0;
  return a1;
}

