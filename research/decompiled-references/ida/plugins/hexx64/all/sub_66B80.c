unsigned __int64 sub_66B80()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-10h]

  v1 = __readfsqword(0x28u);
  tag_remove();
  sub_66AC0();
  return v1 - __readfsqword(0x28u);
}

