__int64 __fastcall sub_136E90(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 func; // rax
  unsigned int v4; // eax

  result = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 60LL) != a2 )
  {
    result = 0;
    if ( *(_DWORD *)(a1 + 1184) == a2 )
    {
      sub_32BF20(a1);
      func = get_func();
      if ( func )
        v4 = *(_DWORD *)(func + 16);
      else
        v4 = *(_DWORD *)(a1 + 112);
      return (v4 >> 4) & 1;
    }
  }
  return result;
}

