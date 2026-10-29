__int64 __fastcall sub_5D210(const char **a1, __int64 a2)
{
  int v2; // r13d
  int tinfo_size; // edx
  unsigned int v4; // ebx
  struct _Unwind_Exception *v6; // rbx

  if ( *((_BYTE *)a1 + 24) )
    return 1;
  v2 = *(unsigned __int16 *)(a2 + 16);
  if ( v2 == 4 )
    v2 = 8;
  if ( *a1 && (get_idati(), (unsigned __int8)create_tinfo()) )
  {
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      sub_52660(
        (__int64)"AUTOHIDE SESSION\nNamed type %s is wrongly declared as an array\nPlease fix it and restart IDA",
        *a1);
      v4 = 0;
      goto LABEL_13;
    }
    tinfo_size = get_tinfo_size();
    if ( v2 != tinfo_size && *(_WORD *)(a2 + 16) != 0xFFFF )
    {
      sub_52660(
        (__int64)"AUTOHIDE SESSION\nNamed type %s has wrong size %d (expected %d)\nPlease fix it and restart IDA",
        *a1,
        tinfo_size,
        v2);
      v4 = 0;
      goto LABEL_13;
    }
    copy_tinfo_t();
  }
  else
  {
    if ( !(unsigned __int8)deserialize_tinfo() )
    {
      if ( !under_debugger )
      {
        v6 = (struct _Unwind_Exception *)interr();
        clear_tinfo_t();
        _Unwind_Resume(v6);
      }
      BUG();
    }
    save_tinfo();
  }
  v4 = 1;
LABEL_13:
  clear_tinfo_t();
  return v4;
}

