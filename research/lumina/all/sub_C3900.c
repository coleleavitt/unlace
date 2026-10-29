__int64 __fastcall sub_C3900(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // r8

  result = 0;
  if ( *(_BYTE *)(a1 + 17) )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v4 + 128) == a1 || (result = 262, (*(_BYTE *)(v4 + 40) & 0x40) == 0) )
    {
      result = *(_QWORD *)(v4 + 120);
      if ( result )
      {
        while ( *(_QWORD *)result == a1 || *(_DWORD *)(result + 8) != a2 || *(_BYTE *)(result + 12) == a3 )
        {
          result = *(_QWORD *)(result + 16);
          if ( !result )
            return result;
        }
        result = 262;
        if ( a3 == 2 )
          *(_WORD *)(v4 + 40) |= 0x80u;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}
