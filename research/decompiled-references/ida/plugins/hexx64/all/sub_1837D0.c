__int64 __fastcall sub_1837D0(__int64 a1, __int64 a2, char a3, int a4, __int64 a5, double a6)
{
  __int64 v6; // rbp
  int v7; // ecx
  __int64 result; // rax

  if ( a3 != 2 )
  {
    if ( !under_debugger )
      sub_383060(0xCA4Au, a6);
    BUG();
  }
  v6 = sub_32ABC0(*(_QWORD *)(a5 + 16), a4, 0);
  sub_11CDA0(a2);
  *(_BYTE *)a2 = 6;
  v7 = 8 * *(_DWORD *)(a1 + 84);
  result = v7;
  if ( (unsigned __int64)v7 <= 0x3F )
  {
    result = ~(-1LL << v7);
    v6 &= result;
  }
  *(_QWORD *)(a2 + 8) = v6;
  return result;
}

