unsigned __int64 sub_1DC80()
{
  __int64 v1; // [rsp+8h] [rbp-30h] BYREF
  __int64 v2; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  netnode_check(&v2, "$ eh34 metadata", 0, 0);
  if ( v2 == -1 )
  {
    netnode_check(&v1, "$ eh34 metadata", 0, 1);
    v2 = 1;
    netnode_supset(v1, 0, &v2, 8, 65);
  }
  return v3 - __readfsqword(0x28u);
}

