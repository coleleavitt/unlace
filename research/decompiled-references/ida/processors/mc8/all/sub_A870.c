const char *__fastcall sub_A870(__int64 *a1, _BYTE *a2)
{
  const char *(__fastcall *v2)(__int64, _BYTE *); // rax
  __int64 v4; // rax
  __int64 dword; // rbp
  __int64 v6; // rax
  _BYTE *v7; // rbx
  __int64 (*v8)(); // rax
  __int64 v9; // [rsp+8h] [rbp-440h] BYREF
  _BYTE v10[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v11; // [rsp+418h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v10[1023] = 0;
  if ( (unsigned int)qsscanf() == 2 )
  {
    if ( (a1[10] & 4) != 0 )
    {
      v4 = getseg();
      if ( v4 && *(_BYTE *)(v4 + 43) )
      {
        create_data();
        dword = (unsigned int)get_dword();
        v6 = 0xFFFFFFFFLL;
      }
      else
      {
        create_data();
        dword = (unsigned __int16)get_word();
        v6 = 0xFFFF;
      }
      if ( dword != v6 && (unsigned __int8)is_mapped() )
      {
        get_default_reftype();
        op_offset();
        add_entry();
      }
      else
      {
        set_name();
      }
      if ( *(_BYTE *)skip_spaces() )
        goto LABEL_14;
    }
    return nullptr;
  }
  if ( (unsigned int)qsscanf() == 2 )
  {
    if ( (a1[10] & 4) != 0 && (unsigned __int8)is_mapped() )
    {
      v7 = (_BYTE *)skip_spaces();
      v8 = *(__int64 (**)())(*a1 + 56);
      if ( v8 != sub_8390
        && ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *, _BYTE *, _BYTE *))v8)(a1, &v9, v10, v7) )
      {
        return nullptr;
      }
      add_entry();
      if ( *v7 )
      {
LABEL_14:
        set_cmt();
        return nullptr;
      }
    }
    return nullptr;
  }
  v2 = *(const char *(__fastcall **)(__int64, _BYTE *))(*a1 + 48);
  if ( v2 == sub_A830 )
    return sub_A160(a1, a1 + 7, a2);
  else
    return v2((__int64)a1, a2);
}

