unsigned __int64 __fastcall sub_3C8970(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v3; // rbp
  unsigned __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 40);
  v6 = __readfsqword(0x28u);
  v5 = a2;
  switch_dbctx();
  if ( !(unsigned __int8)sub_2B1530(a2) )
    sub_3C7BB0(a3);
  sub_175840((_QWORD *)(v3 + 152), &v5);
  return v6 - __readfsqword(0x28u);
}

