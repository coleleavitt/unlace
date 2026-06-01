unsigned __int64 __fastcall sub_3C89F0(__int64 a1, double a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  switch_dbctx();
  if ( sub_2B1480(a4, 0) == -1 )
  {
    if ( !under_debugger )
      sub_37DDE0(0xCD57u, a2);
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 40);
  v7 = a4;
  sub_2B63E0(a4);
  sub_175840((_QWORD *)(v5 + 152), (unsigned __int64 *)&v7);
  return v8 - __readfsqword(0x28u);
}

