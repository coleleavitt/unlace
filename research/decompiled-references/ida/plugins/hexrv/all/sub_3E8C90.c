unsigned __int64 __fastcall sub_3E8C90(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, double a5)
{
  int v6; // edx
  __int64 v8; // r9

  v6 = *(unsigned __int16 *)(a1 + 842);
  if ( (((_WORD)v6 - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37DDE0(0xCE45u, a5);
    BUG();
  }
  v8 = **(int **)(*(_QWORD *)(a1 + 832) + 632LL);
  if ( (_DWORD)v8 == a2 || (_DWORD)v8 == a3 || (_DWORD)v8 == a4 )
  {
    sub_1D1C90(a1, 3u, v6, 0, 0x3BEA45E214ADDC55LL, v8, 0);
    LOWORD(v6) = *(_WORD *)(a1 + 842);
  }
  return sub_1D2170(a1, 1u, 5 * (unsigned int)((_WORD)v6 != 4) + 2, a3, a4, a2);
}

