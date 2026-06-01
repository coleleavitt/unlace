__int64 __fastcall sub_36DA80(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // eax

  result = sub_36D5C0(a1);
  if ( !(_BYTE)result )
  {
    if ( *(_BYTE *)(a1 + 320) || (*(_BYTE *)(*(_QWORD *)(a1 + 1496) + 606LL) & 0x10) != 0 )
    {
      if ( !under_debugger )
        sub_37DDE0(51621);
      BUG();
    }
    v2 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF0;
    if ( v2 == 64 || v2 == 208 )
    {
      *(_DWORD *)(a1 + 72) = 208;
      return sub_36D5C0(a1);
    }
    else
    {
      *(_DWORD *)(a1 + 72) = 240;
      return sub_36D5C0(a1);
    }
  }
  return result;
}

