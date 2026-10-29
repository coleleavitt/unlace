unsigned __int64 sub_2C30()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-10h]

  v1 = __readfsqword(0x28u);
  tag_remove();
  sub_2760();
  return v1 - __readfsqword(0x28u);
}

