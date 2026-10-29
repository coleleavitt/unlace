__int64 __fastcall sub_EC330(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // esi
  __int64 result; // rax
  char v4; // al
  bool v5; // zf
  int v6; // ecx
  __int64 v7; // rsi

  if ( *(char *)(a1 + 84) >= 0 )
  {
    v1 = *(_QWORD *)(a1 + 136);
    if ( *(_BYTE *)(a1 + 84) )
    {
      while ( 1 )
      {
        sub_C36A0(*(_QWORD *)(v1 + 112));
        v4 = *(_BYTE *)(a1 + 84) - 1;
        v5 = *(_BYTE *)(a1 + 84) == 1;
        *(_BYTE *)(a1 + 84) = v4;
        if ( v5 )
          break;
        v1 = *(_QWORD *)(a1 + 8LL * v4 + 144);
      }
      v1 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 136) = v1;
LABEL_5:
      *(_BYTE *)(a1 + 1) &= 0xF1u;
      *(_WORD *)(a1 + 86) = 0;
      *(_WORD *)(a1 + 70) = 0;
      if ( *(_WORD *)(v1 + 24) )
      {
        *(_BYTE *)a1 = 0;
        return 0;
      }
      if ( !*(_BYTE *)(v1 + 8) )
      {
        if ( *(_DWORD *)(v1 + 4) == 1 )
        {
          v2 = *(_DWORD *)(*(_QWORD *)(v1 + 80) + *(unsigned __int8 *)(v1 + 9) + 8LL);
          *(_BYTE *)a1 = 0;
          return sub_EBEA0(a1, _byteswap_ulong(v2));
        }
        v6 = 72106;
        goto LABEL_13;
      }
      goto LABEL_21;
    }
LABEL_3:
    if ( !*(_BYTE *)v1 || (*(_QWORD *)(a1 + 128) == 0) != *(_BYTE *)(v1 + 1) )
    {
      v6 = 72094;
LABEL_13:
      sub_E8BB0(
        0xBu,
        "%s at line %d of [%.10s]",
        "database corruption",
        v6,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      return 11;
    }
    goto LABEL_5;
  }
  v7 = *(unsigned int *)(a1 + 80);
  if ( !(_DWORD)v7 )
  {
LABEL_21:
    *(_BYTE *)a1 = 1;
    return 16;
  }
  if ( *(_BYTE *)a1 > 2u )
  {
    if ( *(_BYTE *)a1 == 4 )
      return *(unsigned int *)(a1 + 4);
    sub_C91C0(*(_QWORD *)(a1 + 24), v7);
    v7 = *(unsigned int *)(a1 + 80);
    *(_QWORD *)(a1 + 24) = 0;
    *(_BYTE *)a1 = 1;
  }
  result = sub_EBD10(*(_DWORD **)(*(_QWORD *)(a1 + 8) + 8LL), v7, (char **)(a1 + 136), 0, *(unsigned __int8 *)(a1 + 2));
  if ( !(_DWORD)result )
  {
    v1 = *(_QWORD *)(a1 + 136);
    *(_BYTE *)(a1 + 84) = 0;
    *(_BYTE *)(a1 + 85) = *(_BYTE *)(v1 + 1);
    goto LABEL_3;
  }
  *(_BYTE *)a1 = 1;
  return result;
}
