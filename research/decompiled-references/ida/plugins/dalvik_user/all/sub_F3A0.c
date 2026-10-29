unsigned __int64 __fastcall sub_F3A0(char *s1)
{
  unsigned __int64 v2; // [rsp+8h] [rbp-40h]

  v2 = __readfsqword(0x28u);
  netnode_check();
  return v2 - __readfsqword(0x28u);
}

