unsigned __int64 sub_4E790()
{
  __int64 v1; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v2; // [rsp+8h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  v1 = sub_1DD10();
  netnode_kill(&v1);
  return v2 - __readfsqword(0x28u);
}

