__int64 __fastcall sub_129FA0(__int64 a1, unsigned __int64 *a2, __int64 a3, __m128i a4)
{
  __int64 result; // rax
  char v6; // dl
  __int64 v7; // rcx
  char v8; // dl
  __int64 v9; // rcx
  char v10; // dl

  if ( !*(_BYTE *)a3 )
    return 0;
  if ( *(_DWORD *)(a3 + 4) == -1 )
    return 0;
  result = sub_121CD0((__int64)a2, a1, a3, *(double *)a4.m128i_i64);
  if ( !(_DWORD)result )
  {
    v6 = sub_1255D0((unsigned __int8 *)a1, (__int64)a2, a3, 0, *(double *)a4.m128i_i64);
    result = 1;
    if ( !v6 )
    {
      if ( *(_DWORD *)(a3 + 4) >= *(_DWORD *)(a1 + 4) )
        return 0;
      v8 = sub_127420(a3, a2, (unsigned __int8 *)a1, v7, *(double *)a4.m128i_i64);
      result = 2;
      if ( !v8 )
      {
        v10 = sub_129F00(a3, a2, (unsigned __int8 *)a1, v9, a4);
        result = 3;
        if ( !v10 )
          return 0;
      }
    }
  }
  return result;
}

