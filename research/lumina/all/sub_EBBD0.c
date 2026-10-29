__int64 __fastcall sub_EBBD0(__int64 a1)
{
  unsigned __int8 *v1; // rbp
  __int64 v2; // r12
  int v3; // eax
  int v4; // ecx
  __int64 v5; // rcx
  __int16 v6; // dx
  __int16 v7; // ax
  __int64 v8; // rdx
  unsigned __int16 v9; // ax

  v1 = (unsigned __int8 *)(*(_QWORD *)(a1 + 80) + *(unsigned __int8 *)(a1 + 9));
  v2 = *(_QWORD *)(a1 + 72);
  v3 = sub_E8E80(a1, *v1);
  v4 = 68807;
  if ( v3 )
    goto LABEL_7;
  v5 = *(unsigned __int8 *)(a1 + 10);
  v6 = *(unsigned __int8 *)(a1 + 9);
  v7 = *(_WORD *)(v2 + 52);
  *(_BYTE *)(a1 + 12) = 0;
  *(_WORD *)(a1 + 18) = v6 + v5 + 8;
  *(_WORD *)(a1 + 26) = v7 - 1;
  *(_QWORD *)(a1 + 96) = &v1[v5 + 8];
  v8 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 88) = v8 + *(unsigned int *)(v2 + 52);
  *(_QWORD *)(a1 + 104) = v8 + v5;
  v9 = _byteswap_ushort(*(_WORD *)(v1 + 3));
  *(_WORD *)(a1 + 24) = v9;
  if ( v9 > (*(_DWORD *)(v2 + 52) - 8) / 6u )
  {
    v4 = 68821;
LABEL_7:
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      v4,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 11;
  }
  *(_DWORD *)(a1 + 20) = -1;
  *(_BYTE *)a1 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(v2 + 8) + 50LL) & 0x20) != 0 )
    return sub_EBAA0(a1);
  else
    return 0;
}
