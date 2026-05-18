__int64 __fastcall sub_E9270(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rsi
  unsigned int v3; // r11d
  int v4; // edx
  int v5; // r9d
  int v6; // eax
  int v7; // ecx
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax

  v1 = *(unsigned __int8 *)(a1 + 9);
  v2 = *(_QWORD *)(a1 + 80);
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL);
  v4 = (unsigned __int16)(_byteswap_ushort(*(_WORD *)(v2 + v1 + 5)) - 1) + 1;
  v5 = v4 + *(unsigned __int8 *)(v2 + v1 + 7);
  v6 = *(unsigned __int8 *)(v2 + v1 + 2) | (*(unsigned __int8 *)(v2 + v1 + 1) << 8);
  if ( v6 )
  {
    v7 = 68708;
    if ( v4 > v6 )
    {
LABEL_5:
      sub_E8BB0(
        0xBu,
        "%s at line %d of [%.10s]",
        "database corruption",
        v7,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      return 11;
    }
    if ( (int)(v3 - 4) < v6 )
    {
LABEL_4:
      v7 = 68713;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v9 = *(unsigned __int8 *)(v2 + v6 + 1) | (*(unsigned __int8 *)(v2 + v6) << 8);
      v10 = *(unsigned __int8 *)(v2 + v6 + 3) | (*(unsigned __int8 *)(v2 + v6 + 2) << 8);
      v11 = v10 + v6;
      v5 += v10;
      if ( v11 + 3 >= v9 )
        break;
      v6 = v9;
      if ( v9 > (int)(v3 - 4) )
        goto LABEL_4;
    }
    v7 = 68723;
    if ( v9 )
      goto LABEL_5;
    v7 = 68727;
    if ( v3 < v11 )
      goto LABEL_5;
  }
  v12 = *(unsigned __int8 *)(a1 + 10) + *(unsigned __int8 *)(a1 + 9) + 8 + 2 * *(unsigned __int16 *)(a1 + 24);
  if ( v5 > (int)v3 || v5 < v12 )
  {
    v7 = 68739;
    goto LABEL_5;
  }
  *(_DWORD *)(a1 + 20) = (unsigned __int16)(v5 - v12);
  return 0;
}
