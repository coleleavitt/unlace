unsigned __int64 sub_3C4B00()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-10h]

  v1 = __readfsqword(0x28u);
  tag_remove();
  sub_62740();
  return v1 - __readfsqword(0x28u);
}

