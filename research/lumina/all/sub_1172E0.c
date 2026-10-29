__int64 __fastcall sub_1172E0(__int64 a1)
{
  unsigned __int8 v1; // al
  __int64 v2; // rdx
  int v3; // eax
  __int64 result; // rax
  __int16 v5; // ax
  int v6; // eax

  v1 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 )
  {
    if ( v1 > 2u )
    {
      result = sub_1171C0(a1);
      if ( (_DWORD)result )
        return result;
      v1 = *(_BYTE *)a1;
    }
    if ( v1 == 1 )
      return 101;
    if ( v1 == 2 )
    {
      v6 = *(_DWORD *)(a1 + 4);
      *(_BYTE *)a1 = 0;
      if ( v6 < 0 )
        return 0;
    }
  }
  v2 = *(_QWORD *)(a1 + 136);
  v3 = *(unsigned __int16 *)(a1 + 86);
  if ( *(_BYTE *)(v2 + 8) )
  {
    if ( (_WORD)v3 )
    {
      *(_WORD *)(a1 + 86) = v3 - 1;
      if ( !*(_BYTE *)(v2 + 1) )
        return 0;
    }
    else
    {
      do
      {
        if ( !*(_BYTE *)(a1 + 84) )
        {
          *(_BYTE *)a1 = 1;
          return 101;
        }
        sub_C3C50(a1);
        v5 = *(_WORD *)(a1 + 86);
      }
      while ( !v5 );
      v2 = *(_QWORD *)(a1 + 136);
      *(_WORD *)(a1 + 86) = v5 - 1;
      if ( !*(_BYTE *)(v2 + 1) )
        return 0;
    }
    if ( !*(_BYTE *)(v2 + 8) )
      return sub_117400(a1);
    return 0;
  }
  result = sub_EBEA0(
             a1,
             _byteswap_ulong(*(_DWORD *)(*(_QWORD *)(v2 + 80)
                                       + (unsigned __int16)(*(_WORD *)(v2 + 26)
                                                          & __ROL2__(
                                                              *(_WORD *)(*(_QWORD *)(v2 + 96) + ((2 * v3) & 0x1FFFE)),
                                                              8)))));
  if ( !(_DWORD)result )
    return sub_EBF40(a1);
  return result;
}
