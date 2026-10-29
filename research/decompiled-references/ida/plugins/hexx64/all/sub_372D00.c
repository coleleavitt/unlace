__int64 __fastcall sub_372D00(__int64 a1, double a2, __m128 a3)
{
  __int64 result; // rax
  unsigned int v4; // eax

  result = sub_372840(a1, a2, a3);
  if ( !(_BYTE)result )
  {
    if ( *(_BYTE *)(a1 + 320) || (*(_BYTE *)(*(_QWORD *)(a1 + 1496) + 606LL) & 0x10) != 0 )
    {
      if ( !under_debugger )
        sub_383060(0xC9A5u, a2);
      BUG();
    }
    v4 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF0;
    if ( v4 == 64 || v4 == 208 )
    {
      *(_DWORD *)(a1 + 72) = 208;
      return sub_372840(a1, a2, a3);
    }
    else
    {
      *(_DWORD *)(a1 + 72) = 240;
      return sub_372840(a1, a2, a3);
    }
  }
  return result;
}

