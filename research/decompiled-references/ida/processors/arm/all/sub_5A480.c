unsigned __int64 __fastcall sub_5A480(_QWORD *a1)
{
  __int64 v2; // [rsp+0h] [rbp-38h] BYREF
  __int128 v3; // [rsp+8h] [rbp-30h]
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v2 = 0;
  v3 = 0;
  sub_59BD0(a1, &v2);
  netnode_setblob();
  if ( v2 )
  {
    *(_QWORD *)&v3 = 0;
    qfree(v2);
  }
  return v4 - __readfsqword(0x28u);
}
