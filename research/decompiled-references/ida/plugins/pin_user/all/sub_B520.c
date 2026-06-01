unsigned __int64 sub_B520()
{
  unsigned __int64 v1; // [rsp+8h] [rbp-20h]

  v1 = __readfsqword(0x28u);
  netnode_check();
  byte_3C3A8 = 0;
  return v1 - __readfsqword(0x28u);
}

