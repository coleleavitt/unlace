unsigned __int64 __fastcall sub_22960(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( a3 )
  {
    v5 = 0;
    v6 = 0;
    sub_228A0(a2, &v5);
    netnode_check(a1 + 3, *a1, 0, 1);
    netnode_hashset(a1[3], v5, a3, 0, 72);
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree(v5);
    }
  }
  return v7 - __readfsqword(0x28u);
}
