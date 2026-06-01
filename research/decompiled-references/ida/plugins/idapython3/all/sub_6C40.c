unsigned __int64 sub_6C40()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-C0h]

  v1 = __readfsqword(0x28u);
  qveprintf();
  return v1 - __readfsqword(0x28u);
}

