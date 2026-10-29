__int64 __fastcall sub_EBEA0(__int64 a1, __int64 a2)
{
  char v2; // al
  _DWORD *v4; // rdi
  __int16 v5; // r8
  unsigned int v6; // r8d

  v2 = *(_BYTE *)(a1 + 84);
  if ( v2 > 18 )
  {
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      71956,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 11;
  }
  else
  {
    v4 = *(_DWORD **)(a1 + 32);
    v5 = *(_WORD *)(a1 + 86);
    *(_WORD *)(a1 + 70) = 0;
    *(_BYTE *)(a1 + 1) &= 0xF9u;
    *(_WORD *)(a1 + 2LL * v2 + 88) = v5;
    *(_QWORD *)(a1 + 8LL * v2 + 144) = *(_QWORD *)(a1 + 136);
    *(_WORD *)(a1 + 86) = 0;
    v6 = *(unsigned __int8 *)(a1 + 2);
    *(_BYTE *)(a1 + 84) = v2 + 1;
    return sub_EBD10(v4, a2, (char **)(a1 + 136), a1, v6);
  }
}
