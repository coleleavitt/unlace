__int64 __fastcall sub_E8E80(__int64 a1, int a2)
{
  unsigned int v3; // esi
  int v4; // edx
  __int64 v5; // rax

  v3 = a2 & 0xFFFFFFF7;
  v4 = a2 >> 3;
  *(_BYTE *)(a1 + 8) = v4;
  *(_BYTE *)(a1 + 10) = -4 * v4 + 4;
  v5 = *(_QWORD *)(a1 + 72);
  if ( v3 == 5 )
  {
    *(_BYTE *)(a1 + 1) = 1;
    if ( v4 )
    {
      *(_BYTE *)(a1 + 2) = 1;
      *(_QWORD *)(a1 + 120) = sub_C3A70;
      *(_QWORD *)(a1 + 128) = sub_CCB50;
    }
    else
    {
      *(_BYTE *)(a1 + 2) = 0;
      *(_QWORD *)(a1 + 120) = sub_C3A40;
      *(_QWORD *)(a1 + 128) = sub_C3970;
    }
    *(_WORD *)(a1 + 14) = *(_WORD *)(v5 + 46);
    *(_WORD *)(a1 + 16) = *(_WORD *)(v5 + 48);
    *(_BYTE *)(a1 + 11) = *(_BYTE *)(v5 + 37);
    return 0;
  }
  else
  {
    *(_WORD *)(a1 + 1) = 0;
    *(_QWORD *)(a1 + 120) = sub_C39B0;
    *(_QWORD *)(a1 + 128) = sub_CCCE0;
    if ( v3 == 2 )
    {
      *(_WORD *)(a1 + 14) = *(_WORD *)(v5 + 42);
      *(_WORD *)(a1 + 16) = *(_WORD *)(v5 + 44);
      *(_BYTE *)(a1 + 11) = *(_BYTE *)(v5 + 37);
      return 0;
    }
    else
    {
      sub_E8BB0(
        0xBu,
        "%s at line %d of [%.10s]",
        "database corruption",
        68657,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      return 11;
    }
  }
}
