__int64 __fastcall sub_969E0(unsigned __int64 *a1, __int64 a2, __int64 a3, signed int a4)
{
  __int64 result; // rax
  bool v6; // zf

  result = a3;
  if ( *(_DWORD *)(a3 + 4) < a4 )
  {
    sub_125180(a2, (unsigned __int8 *)a3);
    v6 = sub_131780(a2, a1, a4, 0, 0) == 0;
    result = 0;
    if ( !v6 )
      return a2;
  }
  return result;
}

