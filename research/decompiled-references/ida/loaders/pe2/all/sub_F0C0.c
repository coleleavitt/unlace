unsigned __int64 sub_F0C0()
{
  unsigned __int64 v1; // [rsp+8h] [rbp-10h]

  v1 = __readfsqword(0x28u);
  netnode_supset();
  return v1 - __readfsqword(0x28u);
}

