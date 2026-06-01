__int64 __fastcall sub_83C0(__int64 a1, __int64 a2, signed int a3)
{
  int v4; // ebp
  __int64 result; // rax
  __int64 *v6; // r15
  const char *v7; // rbx
  int i; // r14d
  __m128i v9; // xmm0
  _DWORD *v10; // rdx
  int j; // edi
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // [rsp+Ch] [rbp-4Ch]

  v4 = ((a3 >> 3) & 0xF) + 32;
  v14 = (char)(((a3 >> 3) & 0xF) + 32);
  if ( !(_BYTE)byte_1CC48 )
  {
    v6 = &qword_132C0;
    if ( __cxa_guard_acquire(&byte_1CC48) )
    {
      do
      {
        v7 = (const char *)v6[1];
        for ( i = 0; i < strlen(v7); ++i )
        {
          v9 = _mm_slli_epi32(_mm_loadl_epi64((const __m128i *)v6 + 16), 1u);
          v6[32] = v9.m128i_i64[0];
          if ( (unsigned __int8)(v7[i] - 48) <= 1u )
          {
            *((_DWORD *)v6 + 64) = _mm_cvtsi128_si32(v9) + 1;
            if ( v7[i] == 49 )
              *((_DWORD *)v6 + 65) = _mm_cvtsi128_si32(_mm_shuffle_epi32(v9, 229)) + 1;
          }
        }
        v10 = (_DWORD *)v6 + 9;
        for ( j = 0; j != 10; ++j )
        {
          while ( !v6[3 * j + 2] )
          {
LABEL_13:
            ++j;
            v10 += 6;
            if ( j == 10 )
              goto LABEL_19;
          }
          v12 = *(v10 - 1);
          v13 = 0;
          while ( !_bittest(&v12, v13) )
          {
            ++v13;
            ++*v10;
            if ( v13 == 24 )
              goto LABEL_13;
          }
          v10 += 6;
        }
LABEL_19:
        v6 += 33;
      }
      while ( v6 != (__int64 *)&off_1CB60 );
      __cxa_guard_release(&byte_1CC48);
    }
  }
  result = sub_8150(a1, a2, (__int64)&qword_132C0, a3, v14, 0, 9);
  if ( (_BYTE)result )
    *(_BYTE *)(a2 + 33) = v4;
  return result;
}

