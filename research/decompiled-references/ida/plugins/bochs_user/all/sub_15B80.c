unsigned __int64 sub_15B80()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-C0h]

  v1 = __readfsqword(0x28u);
  qvprintf();
  sub_15AC0();
  return v1 - __readfsqword(0x28u);
}

