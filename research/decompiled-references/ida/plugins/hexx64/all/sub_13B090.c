__int64 __fastcall sub_13B090(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 func; // rax
  unsigned int v5; // eax

  result = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 60LL) != a2 )
  {
    result = 0;
    if ( *(_DWORD *)(a1 + 1184) == a2 )
    {
      sub_330F80((_QWORD *)a1, a3);
      func = get_func();
      if ( func )
        v5 = *(_DWORD *)(func + 16);
      else
        v5 = *(_DWORD *)(a1 + 112);
      return (v5 >> 4) & 1;
    }
  }
  return result;
}

