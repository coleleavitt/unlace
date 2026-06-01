__int64 __fastcall sub_2400B0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, double a6)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 result; // rax

  if ( (unsigned int)(a4 - 1) > 0xF || (a4 & (a4 - 1)) != 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC4BEu, a6);
    BUG();
  }
  v8 = sub_32ABC0(a3, a4, a5 != 2);
  *(_QWORD *)a1 = v8;
  v9 = sub_23E480(*(_DWORD *)(*(_QWORD *)(a2 + 96) + 640LL), v8, a4, a5);
  result = sub_329C80(a1 + 8, v9);
  *(_BYTE *)(a1 + 13) &= ~1u;
  *(_BYTE *)(a1 + 15) = a4;
  return result;
}

