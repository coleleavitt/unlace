__int64 *__fastcall std::to_string(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r12
  unsigned int v4; // ebp
  __int64 v5; // r13
  _BYTE *v6; // rsi
  unsigned int v7; // ecx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  char v10; // r9
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rax
  _OWORD v15[11]; // [rsp+0h] [rbp-108h]
  __m128i v16[2]; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v17; // [rsp+D8h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v3 = a2;
  if ( a2 <= 9 )
  {
    v5 = 1;
    v4 = 1;
  }
  else
  {
    v4 = 1;
    while ( 1 )
    {
      if ( a2 <= 0x63 )
      {
        v5 = ++v4;
        goto LABEL_9;
      }
      if ( a2 <= 0x3E7 )
      {
        v5 = v4 + 2;
        v4 += 2;
        goto LABEL_9;
      }
      if ( a2 <= 0x270F )
      {
        v5 = v4 + 3;
        v4 += 3;
        goto LABEL_9;
      }
      v4 += 4;
      if ( a2 <= 0x1869F )
        break;
      a2 /= 0x2710u;
    }
    v5 = v4;
  }
LABEL_9:
  *((_BYTE *)a1 + 16) = 0;
  *a1 = (__int64)(a1 + 2);
  a1[1] = 0;
  std::string::reserve();
  v6 = (_BYTE *)*a1;
  v15[0] = _mm_load_si128((const __m128i *)&xmmword_3E1F70);
  v15[1] = _mm_load_si128((const __m128i *)&xmmword_3E1F80);
  v15[2] = _mm_load_si128((const __m128i *)&xmmword_3E1F90);
  v15[3] = _mm_load_si128((const __m128i *)&xmmword_3E1FA0);
  v15[4] = _mm_load_si128((const __m128i *)&xmmword_3E1FB0);
  v15[5] = _mm_load_si128((const __m128i *)&xmmword_3E1FC0);
  v15[6] = _mm_load_si128((const __m128i *)&xmmword_3E1FD0);
  v15[7] = _mm_load_si128((const __m128i *)&xmmword_3E1FE0);
  v15[8] = _mm_load_si128((const __m128i *)&xmmword_3E1FF0);
  v15[9] = _mm_load_si128((const __m128i *)&xmmword_3E2000);
  v15[10] = _mm_load_si128((const __m128i *)&xmmword_3E2010);
  v16[0] = _mm_load_si128((const __m128i *)&xmmword_3E2020);
  *(__m128i *)((char *)v16 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E2030);
  if ( v3 > 0x63 )
  {
    v7 = v4 - 1;
    do
    {
      v8 = v3 % 0x64;
      v9 = v3;
      v3 /= 0x64u;
      v10 = *((_BYTE *)v15 + 2 * v8 + 1);
      LOBYTE(v8) = *((_BYTE *)v15 + 2 * v8);
      v6[v7] = v10;
      v11 = v7 - 1;
      v7 -= 2;
      v6[v11] = v8;
    }
    while ( v9 > 0x270F );
  }
  v12 = v3 + 48;
  if ( v3 > 9 )
  {
    v6[1] = *((_BYTE *)v15 + 2 * v3 + 1);
    v12 = *((_BYTE *)v15 + 2 * v3);
  }
  *v6 = v12;
  v13 = *a1;
  a1[1] = v5;
  *(_BYTE *)(v13 + v5) = 0;
  return a1;
}

