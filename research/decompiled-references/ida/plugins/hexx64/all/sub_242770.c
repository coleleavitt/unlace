__int64 __fastcall sub_242770(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 *a4, __int64 a5, double a6)
{
  __int64 result; // rax

  result = sub_23F100(a4, a1, a2, a3, *(_DWORD *)(a3 + 4), a5, a6);
  if ( !(_BYTE)result )
  {
    if ( a5 )
      return sub_23F100(a4, a1, a2, a5, *(_DWORD *)(a3 + 4), 0, a6);
  }
  return result;
}

