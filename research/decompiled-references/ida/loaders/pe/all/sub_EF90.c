unsigned __int64 sub_EF90()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-30h]

  v1 = __readfsqword(0x28u);
  netnode_check();
  netnode_supset();
  netnode_setblob();
  return v1 - __readfsqword(0x28u);
}
