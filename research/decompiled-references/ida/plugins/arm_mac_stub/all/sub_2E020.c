unsigned __int64 __fastcall sub_2E020(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, __int64 a6)
{
  int v6; // r13d
  __m128i si128; // xmm0
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 result; // rax
  __int64 v19; // rax

  v6 = 0;
  *(__m128i *)(a1 + 4152) = _mm_unpacklo_epi64(
                              (__m128i)(unsigned __int64)(a1 + 4152),
                              (__m128i)(unsigned __int64)(a1 + 4152));
  si128 = _mm_load_si128((const __m128i *)&xmmword_3AE10);
  *(_QWORD *)a1 = &unk_46C50;
  v8 = 0;
  *(__m128i *)(a1 + 4168) = si128;
  *(_QWORD *)(a1 + 4184) = 0;
  *(_QWORD *)(a1 + 4208) = 0;
  *(_OWORD *)(a1 + 4192) = 0;
  *(_OWORD *)(a1 + 4216) = 0;
  v9 = a4[1] == 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 40) = a6;
  *(_QWORD *)(a1 + 4144) = -1;
  if ( !v9 )
  {
    do
    {
      v10 = *a4 + 80 * v8;
      if ( *(_QWORD *)(v10 + 8) )
      {
        if ( (*(_BYTE *)(a1 + 32) & 1) != 0 && !*(_QWORD *)(v10 + 32) )
        {
          v15 = *(_QWORD *)(a1 + 4192);
          v16 = *(_QWORD *)(a1 + 4184);
          v17 = v15 + 1;
          if ( *(_QWORD *)(a1 + 4200) < (unsigned __int64)(v15 + 1) )
          {
            v19 = qvector_reserve();
            v15 = *(_QWORD *)(a1 + 4192);
            *(_QWORD *)(a1 + 4184) = v19;
            v16 = v19;
            v17 = v15 + 1;
          }
          *(_DWORD *)(v16 + 4 * v15) = v6;
          *(_QWORD *)(a1 + 4192) = v17;
        }
        else
        {
          v11 = *(_QWORD *)(a1 + 4216);
          v12 = *(_QWORD *)(a1 + 4208);
          v13 = v11 + 1;
          if ( *(_QWORD *)(a1 + 4224) < (unsigned __int64)(v11 + 1) )
          {
            v14 = qvector_reserve();
            v11 = *(_QWORD *)(a1 + 4216);
            *(_QWORD *)(a1 + 4208) = v14;
            v12 = v14;
            v13 = v11 + 1;
          }
          *(_DWORD *)(v12 + 4 * v11) = v6;
          *(_QWORD *)(a1 + 4216) = v13;
        }
      }
      a4 = *(_QWORD **)(a1 + 24);
      v8 = ++v6;
    }
    while ( (unsigned __int64)v6 < a4[1] );
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 4136) = 0;
  memset(
    (void *)((a1 + 56) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 56) & 0xFFFFFFF8) + 4144) >> 3));
  result = (unsigned __int64)qtime64() >> 32;
  *(_DWORD *)(a1 + 4232) = result;
  return result;
}

