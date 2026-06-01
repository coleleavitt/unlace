unsigned __int64 __fastcall std::string::__resize_and_overwrite<std::to_string(int)::{lambda(char *,unsigned long)#1}>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        int a4,
        unsigned int a5)
{
  __int64 v6; // r13
  _BYTE *v10; // rsi
  __m128i si128; // xmm0
  _BYTE *v12; // rsi
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // rbx
  _BYTE *v21; // rax
  _OWORD v23[11]; // [rsp+0h] [rbp-108h]
  __m128i v24[2]; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v25; // [rsp+D8h] [rbp-30h]

  v6 = a3;
  v25 = __readfsqword(0x28u);
  std::string::reserve();
  v10 = *(_BYTE **)a1;
  v23[0] = _mm_load_si128((const __m128i *)&xmmword_3E1F70);
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E1F80);
  *v10 = 45;
  v12 = &v10[v6];
  v23[1] = si128;
  v23[2] = _mm_load_si128((const __m128i *)&xmmword_3E1F90);
  v23[3] = _mm_load_si128((const __m128i *)&xmmword_3E1FA0);
  v23[4] = _mm_load_si128((const __m128i *)&xmmword_3E1FB0);
  v23[5] = _mm_load_si128((const __m128i *)&xmmword_3E1FC0);
  v23[6] = _mm_load_si128((const __m128i *)&xmmword_3E1FD0);
  v23[7] = _mm_load_si128((const __m128i *)&xmmword_3E1FE0);
  v23[8] = _mm_load_si128((const __m128i *)&xmmword_3E1FF0);
  v23[9] = _mm_load_si128((const __m128i *)&xmmword_3E2000);
  v23[10] = _mm_load_si128((const __m128i *)&xmmword_3E2010);
  v24[0] = _mm_load_si128((const __m128i *)&xmmword_3E2020);
  *(__m128i *)((char *)v24 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E2030);
  if ( a5 > 0x63 )
  {
    v13 = a4 - 1;
    do
    {
      v14 = a5 % 0x64;
      v15 = a5;
      a5 /= 0x64u;
      v16 = 2 * v14;
      v17 = (unsigned int)(v16 + 1);
      LOBYTE(v16) = *((_BYTE *)v23 + v16);
      v12[v13] = *((_BYTE *)v23 + v17);
      v18 = (unsigned int)(v13 - 1);
      v13 -= 2;
      v12[v18] = v16;
    }
    while ( v15 > 0x270F );
  }
  v19 = a5 + 48;
  if ( a5 > 9 )
  {
    v20 = 2 * a5;
    v12[1] = *((_BYTE *)v23 + (unsigned int)(v20 + 1));
    v19 = *((_BYTE *)v23 + v20);
  }
  *v12 = v19;
  v21 = *(_BYTE **)a1;
  *(_QWORD *)(a1 + 8) = a2;
  v21[a2] = 0;
  return v25 - __readfsqword(0x28u);
}

