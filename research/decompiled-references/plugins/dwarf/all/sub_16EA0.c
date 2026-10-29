unsigned __int64 sub_16EA0()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-C0h]

  v1 = __readfsqword(0x28u);
  callui(24, 9);
  return v1 - __readfsqword(0x28u);
}
