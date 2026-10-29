__int64 __fastcall sub_73080(__int64 a1, __int64 a2, bool *a3)
{
  __int64 v4; // rax
  unsigned __int8 v5; // al
  __int64 first_fcref_from; // rbx
  __int64 name_base_ea; // r12
  __int16 v8; // ax
  __int64 first_dref_from; // r12
  bool v11; // [rsp+Fh] [rbp-39h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v11 = 0;
  v4 = netnode_altval();
  if ( v4 != -1 )
  {
    first_fcref_from = v4;
    if ( (unsigned __int8)is_mapped() )
    {
      v11 = (unsigned __int8)netnode_charval() != 0;
      goto LABEL_7;
    }
  }
  v5 = *(_BYTE *)(a2 + 41);
  if ( v5 == 2 )
  {
    first_fcref_from = sub_6DEB0(a1, a2, a2 + 40, a2, (char *)&v11);
LABEL_6:
    if ( first_fcref_from != -1 )
      goto LABEL_7;
LABEL_19:
    name_base_ea = -1;
    goto LABEL_12;
  }
  if ( v5 <= 2u )
  {
    if ( v5 == 1 )
    {
      first_fcref_from = sub_72980(a1, a2, (char *)&v11);
      if ( first_fcref_from == -1 || !(unsigned __int8)is_mapped() )
      {
        first_fcref_from = -1;
      }
      else
      {
        LOBYTE(v12) = v11;
        netnode_supset();
      }
      v12 = first_fcref_from;
      netnode_supset();
      if ( first_fcref_from == -1 )
        goto LABEL_19;
      goto LABEL_7;
    }
  }
  else if ( (unsigned __int8)(v5 - 6) <= 1u )
  {
    first_fcref_from = sub_7F350(a1, a2, a2 + 40);
    goto LABEL_6;
  }
  first_fcref_from = get_first_fcref_from();
  if ( first_fcref_from == -1 )
  {
    first_dref_from = get_first_dref_from();
    if ( first_dref_from != -1 )
    {
      v11 = 1;
      first_fcref_from = get_next_dref_from();
      if ( first_fcref_from == -1 )
        first_fcref_from = first_dref_from;
      goto LABEL_7;
    }
    goto LABEL_19;
  }
LABEL_7:
  name_base_ea = get_name_base_ea();
  if ( first_fcref_from != name_base_ea )
  {
    if ( (unsigned __int8)is_spec_ea() )
    {
      v8 = *(_WORD *)(a2 + 24);
      if ( v8 == 88 || v8 == 18 )
        v11 = 1;
    }
    else
    {
      name_base_ea = first_fcref_from;
    }
  }
LABEL_12:
  if ( a3 )
    *a3 = v11;
  return name_base_ea;
}
