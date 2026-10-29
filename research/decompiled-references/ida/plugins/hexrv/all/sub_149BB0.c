__int64 __fastcall sub_149BB0(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax
  _DWORD *v9; // rdx

  result = 0;
  if ( *(_BYTE *)a4 == 4 )
  {
    v9 = *(_DWORD **)(a4 + 8);
    if ( a6 == *v9 )
    {
      result = sub_12A5C0(a1, a2, a3, a5, a3, (__int64)(v9 + 8), 0);
      if ( !(_BYTE)result )
        return sub_12A5C0(a1, a2, a3, a5, a3, *(_QWORD *)(a4 + 8) + 48LL, 0);
    }
  }
  return result;
}

