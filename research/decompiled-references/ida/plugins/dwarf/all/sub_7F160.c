unsigned __int64 sub_7F160()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-C0h]

  v1 = __readfsqword(0x28u);
  callui(24, 11);
  return v1 - __readfsqword(0x28u);
}

