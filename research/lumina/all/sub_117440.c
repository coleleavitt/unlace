__int64 __fastcall sub_117440(__int64 a1)
{
  unsigned __int8 v1; // al
  __int64 v2; // r12
  unsigned __int16 v3; // bp
  char v4; // al
  __int64 result; // rax
  __int64 v6; // rax
  int v7; // eax

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
      v7 = *(_DWORD *)(a1 + 4);
      *(_BYTE *)a1 = 0;
      if ( v7 > 0 )
        return 0;
    }
  }
  v2 = *(_QWORD *)(a1 + 136);
  v3 = *(_WORD *)(a1 + 86) + 1;
  *(_WORD *)(a1 + 86) = v3;
  if ( !*(_BYTE *)v2 || qword_241610 && (unsigned int)qword_241610(412) )
  {
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      72783,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 11;
  }
  v4 = *(_BYTE *)(v2 + 8);
  if ( v3 < *(_WORD *)(v2 + 24) )
  {
    if ( !v4 )
      return sub_EBF90(a1);
    return 0;
  }
  if ( v4 )
  {
    do
    {
      if ( !*(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)a1 = 1;
        return 101;
      }
      sub_C3C50(a1);
      v6 = *(_QWORD *)(a1 + 136);
    }
    while ( *(_WORD *)(a1 + 86) >= *(_WORD *)(v6 + 24) );
    if ( *(_BYTE *)(v6 + 1) )
      return sub_1175B0(a1);
    return 0;
  }
  result = sub_EBEA0(a1, _byteswap_ulong(*(_DWORD *)(*(_QWORD *)(v2 + 80) + *(unsigned __int8 *)(v2 + 9) + 8LL)));
  if ( !(_DWORD)result )
    return sub_EBF90(a1);
  return result;
}
