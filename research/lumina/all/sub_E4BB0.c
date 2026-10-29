void __fastcall sub_E4BB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  int v5; // eax
  int v6; // eax
  __int16 v7; // dx
  __int16 v8; // ax

  v3 = *(_QWORD *)(a1 + 336);
  if ( !v3 )
  {
LABEL_13:
    if ( !a2 )
      return;
LABEL_14:
    sub_D7720(*(_QWORD *)a1, a2);
    return;
  }
  v4 = *(_QWORD *)(v3 + 8) + 16LL * *(__int16 *)(v3 + 54) - 16;
  if ( *(_BYTE *)(a1 + 292) == 1 )
  {
    sub_DBD10(a1, "virtual tables cannot use computed columns");
    if ( !a2 )
      return;
    goto LABEL_14;
  }
  if ( *(_WORD *)(v4 + 12) )
  {
LABEL_12:
    sub_DBD10(a1, "error in generated column \"%s\"", *(const char **)v4);
    goto LABEL_13;
  }
  if ( !a3 )
  {
LABEL_16:
    --*(_WORD *)(v3 + 56);
    v6 = 32;
    v7 = 32;
    goto LABEL_17;
  }
  v5 = *(_DWORD *)(a3 + 8);
  if ( v5 == 7 )
  {
    if ( !*(_QWORD *)a3 || (unsigned int)sub_CA590("virtual", *(unsigned __int8 **)a3, 7) )
      goto LABEL_12;
    goto LABEL_16;
  }
  if ( v5 != 6 || !*(_QWORD *)a3 || (unsigned int)sub_CA590("stored", *(unsigned __int8 **)a3, 6) )
    goto LABEL_12;
  v6 = 64;
  v7 = 64;
LABEL_17:
  *(_WORD *)(v4 + 14) |= v7;
  *(_DWORD *)(v3 + 48) |= v6;
  v8 = *(_WORD *)(v4 + 14);
  if ( (v8 & 1) != 0 )
  {
    *(_WORD *)(v4 + 14) = v8 | 1;
    if ( (v8 & 0x60) != 0 )
      sub_DBD10(a1, "generated columns cannot be part of the PRIMARY KEY");
  }
  sub_E0FE0((__int64 *)a1, (int **)(v3 + 80), (__int16 *)(v4 + 12), a2);
}
