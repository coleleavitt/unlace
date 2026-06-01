unsigned __int64 sub_136C0()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-C0h]

  v1 = __readfsqword(0x28u);
  vshow_hex();
  return v1 - __readfsqword(0x28u);
}

