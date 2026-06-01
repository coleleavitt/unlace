unsigned __int64 sub_117E0()
{
  unsigned __int64 v1; // [rsp+8h] [rbp-20h]

  v1 = __readfsqword(0x28u);
  netnode_supset();
  netnode_supset();
  netnode_supset();
  netnode_supset();
  return v1 - __readfsqword(0x28u);
}
