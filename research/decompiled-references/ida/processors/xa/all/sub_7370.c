unsigned __int64 sub_7370()
{
  unsigned __int64 v1; // [rsp+18h] [rbp-10h]

  v1 = __readfsqword(0x28u);
  if ( get_name_expr() > 0 )
    set_cmt();
  return v1 - __readfsqword(0x28u);
}

