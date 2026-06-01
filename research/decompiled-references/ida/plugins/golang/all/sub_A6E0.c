unsigned __int64 sub_A6E0()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-40h]

  v1 = __readfsqword(0x28u);
  get_data_value();
  return v1 - __readfsqword(0x28u);
}
