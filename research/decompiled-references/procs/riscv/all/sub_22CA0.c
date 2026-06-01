unsigned __int64 __fastcall sub_22CA0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v5 = 0;
  v6 = 0;
  sub_22950(a1, &v5, a3);
  netnode_setblob(*(_QWORD *)(a2 + 152), v5, v6, a3, 371);
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5);
  }
  return v7 - __readfsqword(0x28u);
}
