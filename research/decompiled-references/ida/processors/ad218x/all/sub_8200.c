__int64 __fastcall sub_8200(__int64 a1, __int64 a2, signed int a3)
{
  __int64 result; // rax
  __int64 *v5; // r15
  const char *v6; // rbx
  int i; // r13d
  __m128i v8; // xmm0
  _DWORD *v9; // rdx
  int j; // edi
  int v11; // ecx
  unsigned int v12; // eax
  int v14; // [rsp+18h] [rbp-40h]
  char v15; // [rsp+1Fh] [rbp-39h]

  v15 = (a3 >> 5) & 0x1F;
  v14 = (a3 >> 5) & 0x1F;
  if ( !(_BYTE)byte_1CC48 )
  {
    v5 = &qword_132C0;
    if ( __cxa_guard_acquire(&byte_1CC48) )
    {
      do
      {
        v6 = (const char *)v5[1];
        for ( i = 0; i < strlen(v6); ++i )
        {
          v8 = _mm_slli_epi32(_mm_loadl_epi64((const __m128i *)v5 + 16), 1u);
          v5[32] = v8.m128i_i64[0];
          if ( (unsigned __int8)(v6[i] - 48) <= 1u )
          {
            *((_DWORD *)v5 + 64) = _mm_cvtsi128_si32(v8) + 1;
            if ( v6[i] == 49 )
              *((_DWORD *)v5 + 65) = _mm_cvtsi128_si32(_mm_shuffle_epi32(v8, 229)) + 1;
          }
        }
        v9 = (_DWORD *)v5 + 9;
        for ( j = 0; j != 10; ++j )
        {
          while ( !v5[3 * j + 2] )
          {
LABEL_13:
            ++j;
            v9 += 6;
            if ( j == 10 )
              goto LABEL_19;
          }
          v11 = *(v9 - 1);
          v12 = 0;
          while ( !_bittest(&v11, v12) )
          {
            ++v12;
            ++*v9;
            if ( v12 == 24 )
              goto LABEL_13;
          }
          v9 += 6;
        }
LABEL_19:
        v5 += 33;
      }
      while ( v5 != (__int64 *)&off_1CB60 );
      __cxa_guard_release(&byte_1CC48);
    }
  }
  result = sub_8150(a1, a2, (__int64)&qword_132C0, a3, v14, 0, 9);
  if ( (_BYTE)result )
    *(_BYTE *)(a2 + 33) = v15;
  return result;
}

