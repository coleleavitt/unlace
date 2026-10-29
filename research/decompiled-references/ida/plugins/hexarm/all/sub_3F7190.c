__int64 __fastcall sub_3F7190(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, double a6)
{
  unsigned __int8 v9; // al
  __int64 v11; // [rsp-10h] [rbp-38h]

  if ( sub_3EE080(a1, a2) || sub_3EE080(a1, a4) )
  {
    if ( !under_debugger )
      sub_3835A0(0xC859u, a6);
    BUG();
  }
  v9 = sub_3EE470(a1, a2, 1, a6);
  sub_3F6E70(a1, 4u, v9, a5, 0x3BEA45E214ADDC55LL, a3, a6, 0, 1);
  return v11;
}

