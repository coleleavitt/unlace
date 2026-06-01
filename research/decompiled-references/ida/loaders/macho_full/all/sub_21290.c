__int64 __fastcall sub_21290(__int64 a1, __int64 a2, char a3)
{
  char *v4; // rbp
  unsigned int v5; // ecx
  char *v6; // rax

  if ( !a3 )
  {
    v4 = "section";
    v5 = 68;
    if ( byte_66C3C )
      return sub_211A0(a1, a2, v4, v5);
    v6 = &byte_66C3C;
LABEL_6:
    *v6 = 1;
    get_idati();
    create_tinfo();
    set_tinfo_property4();
    set_tinfo_property4();
    clear_tinfo_t();
    v5 = a3 == 0 ? 68 : 80;
    return sub_211A0(a1, a2, v4, v5);
  }
  v4 = "section_64";
  v5 = 80;
  v6 = &byte_66C3B;
  if ( !byte_66C3B )
    goto LABEL_6;
  return sub_211A0(a1, a2, v4, v5);
}

