unsigned __int64 sub_7D60()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-40h]

  v1 = __readfsqword(0x28u);
  if ( (get_flags_ex() & 0x4000) == 0 )
    get_ea_name();
  return v1 - __readfsqword(0x28u);
}
