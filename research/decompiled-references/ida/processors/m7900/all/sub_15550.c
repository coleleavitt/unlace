__int64 __fastcall sub_15550(_QWORD *a1)
{
  unsigned int v1; // ebp
  _DWORD *v3; // rsi
  __int64 v4; // rax

  getinf_buf();
  qstrlwr();
  qstrncat();
  v1 = choose_ioport_device2();
  if ( !(_BYTE)v1 )
  {
    v3 = (_DWORD *)a1[17];
    if ( a1[19] <= 4u )
    {
      v4 = qvector_reserve();
      a1[17] = v4;
      v3 = (_DWORD *)v4;
    }
    a1[18] = 5;
    *v3 = 1162760014;
    *(_BYTE *)(a1[17] + 4LL) = 0;
    if ( get_first_seg() )
    {
      create_data();
      if ( (unsigned __int16)get_word() != 0xFFFF )
      {
        if ( (unsigned __int8)is_mapped() )
        {
          get_default_reftype();
          op_offset();
          add_entry();
          set_cmt();
        }
      }
    }
  }
  return v1;
}

