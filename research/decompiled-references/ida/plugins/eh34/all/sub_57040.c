__int64 __fastcall sub_57040(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v6; // r9d
  int v7; // r10d
  __int64 result; // rax
  int *v9; // rcx
  int v10; // edx
  _DWORD *v11; // rsi

  v6 = a4;
  v7 = _mm_cvtsi128_si32(_mm_shuffle_epi32((__m128i)a4, 229));
  result = (a2 - 1) / 2;
  if ( a2 > a3 )
  {
    while ( 1 )
    {
      v9 = (int *)(a1 + 8 * result);
      v10 = *v9;
      if ( *v9 >= v6 && (v10 != v6 || v9[1] >= v7) )
        break;
      v11 = (_DWORD *)(a1 + 8 * a2);
      *v11 = v10;
      v11[1] = v9[1];
      a2 = result;
      if ( a3 >= result )
        goto LABEL_8;
      result = (result - 1) / 2;
    }
  }
  v9 = (int *)(a1 + 8 * a2);
LABEL_8:
  *(_QWORD *)v9 = a4;
  return result;
}

