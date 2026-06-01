unsigned __int64 __fastcall sub_AEA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rsi
  int v8; // r13d
  __int64 v9; // [rsp+8h] [rbp-460h]
  unsigned __int64 v10; // [rsp+428h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  lread();
  set_name();
  set_name();
  if ( (unsigned int)get_dword() )
  {
    get_default_reftype();
    op_offset();
  }
  set_name();
  set_name();
  if ( (unsigned int)get_dword() )
  {
    get_default_reftype();
    op_offset();
  }
  set_name();
  set_name();
  if ( (unsigned int)get_dword() )
  {
    get_default_reftype();
    op_offset();
  }
  set_name();
  set_name();
  if ( (unsigned int)get_dword() )
  {
    get_default_reftype();
    op_offset();
  }
  set_name();
  create_data();
  set_name();
  create_data();
  set_name();
  v5 = *(int *)(a4 + 12);
  netnode_check();
  netnode_supset();
  v6 = -1;
  netnode_supset();
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
  {
    v9 = getseg();
    if ( v9 && (unsigned __int8)is_mapped() )
    {
      v8 = 0;
      while ( (unsigned __int8)is_loaded() && *(_QWORD *)(v9 + 8) >= (unsigned __int64)(v5 + 4) )
      {
        if ( !(unsigned int)get_dword() )
        {
          sub_7020(v5, 4, 0);
          return v10 - __readfsqword(0x28u);
        }
        ++v8;
        qsnprintf();
        add_entry();
        get_default_reftype();
        v6 = 0;
        op_offset();
        v5 = *(_QWORD *)(a1 + 16) & (v5 + 4);
      }
    }
    sub_A980(
      (__int64)"AUTOHIDE REGISTRY\n"
               "The input file contains non-empty TLS (Thread Local Storage) callback table.\n"
               "However, IDA could not find the TLS callback procedures in the loaded code.\n"
               "Please reload the input file manually and load all segments.\n"
               "To load the input file manually, check the appropriate box in the\n"
               "\"Load file\" dialog box",
      v6);
  }
  return v10 - __readfsqword(0x28u);
}

