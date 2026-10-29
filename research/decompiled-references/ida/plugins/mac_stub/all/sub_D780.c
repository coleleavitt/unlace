unsigned __int64 sub_D780()
{
  unsigned __int64 v1; // [rsp+8h] [rbp-10h]

  v1 = __readfsqword(0x28u);
  netnode_check();
  byte_49CA8 = 0;
  return v1 - __readfsqword(0x28u);
}

