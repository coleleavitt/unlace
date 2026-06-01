__int64 __fastcall sub_6EEB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v7; // rbx
  __int64 qword; // r12
  __int64 v10; // rbp
  char v11; // al
  __int64 v12; // [rsp+8h] [rbp-60h]

  v7 = sub_80350(a1, a2, a3);
  if ( v7 == -1 || (unsigned __int8)segtype() == 1 )
    return v7;
  if ( !(unsigned __int8)is_loaded() )
    goto LABEL_14;
  if ( *(_BYTE *)(a4 + 45) == 7 )
  {
    qword = get_qword();
  }
  else if ( *(_BYTE *)(a2 + 45) == 2 )
  {
    qword = (unsigned int)get_dword();
  }
  else
  {
    qword = (unsigned __int16)get_word();
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) == qword )
  {
    get_flags_ex();
    if ( !(unsigned __int8)is_off() )
      goto LABEL_11;
    goto LABEL_19;
  }
  get_flags_ex();
  if ( (unsigned __int8)is_off() )
  {
LABEL_19:
    v10 = -1;
    if ( (unsigned __int8)get_refinfo() && (unsigned __int8)calc_reference_data() )
      v10 = v12;
    goto LABEL_12;
  }
  if ( !qword )
  {
LABEL_11:
    v10 = -1;
    goto LABEL_12;
  }
  v10 = sub_6EDF0(a1, a4, qword);
LABEL_12:
  if ( (unsigned __int8)is_mapped() )
  {
    v7 = v10;
    v11 = 0;
    goto LABEL_15;
  }
LABEL_14:
  v11 = 1;
LABEL_15:
  if ( a5 )
    *a5 = v11;
  return v7;
}

