unsigned __int64 __fastcall sub_3C6370(__int64 a1, double a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  switch_dbctx();
  if ( sub_2AED00(a4, 0) == -1 )
  {
    if ( !under_debugger )
      sub_37B760(0xCD57u, a2);
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 40);
  v7 = a4;
  sub_2B3C60(a4);
  sub_173640((_QWORD *)(v5 + 152), (unsigned __int64 *)&v7);
  return v8 - __readfsqword(0x28u);
}

