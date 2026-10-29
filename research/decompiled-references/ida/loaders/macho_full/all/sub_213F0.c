unsigned __int64 __fastcall sub_213F0(__int64 a1, __int64 a2, char a3)
{
  char *v4; // r12
  unsigned int v5; // r13d
  char *v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  int _32bit; // r13d
  int v11; // r12d
  unsigned __int64 v12; // rax

  if ( a3 )
  {
    v4 = "segment_command_64";
    v5 = 72;
    v6 = &byte_66C39;
    if ( byte_66C39 )
      goto LABEL_3;
  }
  else
  {
    v4 = "segment_command";
    v5 = 56;
    if ( byte_66C3A )
      goto LABEL_3;
    v6 = &byte_66C3A;
  }
  *v6 = 1;
  get_idati();
  create_tinfo();
  set_tinfo_property4();
  clear_tinfo_t();
  v5 = a3 == 0 ? 56 : 72;
LABEL_3:
  v7 = a2 + (unsigned int)get_32bit();
  v8 = sub_211A0(a1, a2, v4, v5);
  _32bit = get_32bit();
  if ( !_32bit )
  {
LABEL_4:
    if ( v7 >= v8 )
    {
      if ( v8 < v7 )
      {
        while ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) >= v8
             && (unsigned __int8)is_loaded()
             && !(unsigned __int8)get_byte() )
        {
          if ( v7 == ++v8 )
            return v7;
        }
        if ( v7 != v8 )
          sub_196C0((__int64)"inconsistent section list for segment command at %a padding to alignement not zero");
      }
      return v7;
    }
LABEL_26:
    sub_196C0((__int64)"inconsistent section list for segment command at %a exceed by %a");
    return v7;
  }
  sub_19130();
  if ( v8 >= v7 )
  {
LABEL_23:
    sub_196C0((__int64)"inconsistent section list for segment command at %a: stopped at index %d of %d");
    return v7;
  }
  v11 = 0;
  do
  {
    if ( !(unsigned __int8)is_loaded() )
    {
      if ( _32bit == v11 )
        goto LABEL_4;
      goto LABEL_23;
    }
    if ( _32bit == v11 )
      goto LABEL_4;
    ++v11;
    v12 = sub_21290(a1, v8, a3);
    v8 = v12;
  }
  while ( v12 < v7 );
  if ( _32bit != v11 )
    goto LABEL_23;
  if ( v7 < v12 )
    goto LABEL_26;
  return v7;
}

