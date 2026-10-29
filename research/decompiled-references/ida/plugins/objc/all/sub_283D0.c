__int64 sub_283D0()
{
  __int64 v1; // [rsp+8h] [rbp-30h]
  __int64 v2; // [rsp+10h] [rbp-28h] BYREF
  __int128 v3; // [rsp+18h] [rbp-20h]
  unsigned __int64 v4; // [rsp+28h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v3 = 0;
  v2 = 0;
  sub_D6A0(&v2);
  netnode_check();
  if ( v2 )
  {
    *(_QWORD *)&v3 = 0;
    qfree();
  }
  return v1;
}
