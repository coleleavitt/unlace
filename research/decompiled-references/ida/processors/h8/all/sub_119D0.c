unsigned __int64 __fastcall sub_119D0(__int64 a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 721) & 8) == 0 && get_name_expr() > 0 )
    set_cmt();
  return v2 - __readfsqword(0x28u);
}

