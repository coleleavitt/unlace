__int64 __fastcall sub_7B80(__int64 a1, const void *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v8; // al
  _QWORD *func; // r14
  unsigned __int8 v12; // r11
  int v13; // eax
  unsigned int v14; // r10d
  unsigned __int8 v16; // [rsp+19h] [rbp-1EFh]
  unsigned __int16 v17; // [rsp+1Ah] [rbp-1EEh]
  char v18; // [rsp+2Fh] [rbp-1D9h]
  _QWORD v19[53]; // [rsp+60h] [rbp-1A8h] BYREF

  v8 = *(_BYTE *)(a3 + 1);
  v19[45] = __readfsqword(0x28u);
  if ( v8 != 4 )
  {
    if ( v8 == 5 )
    {
      if ( (get_tinfo_property() & 0xF) == 0xA )
      {
        if ( *(_QWORD *)(a3 + 8) )
        {
          get_flags_ex();
          if ( !(unsigned __int8)is_defarg() )
          {
            get_default_reftype();
            op_offset();
            return 1;
          }
        }
      }
    }
    else if ( v8 == 1 )
    {
      v17 = *(_WORD *)(a3 + 6);
      func = (_QWORD *)get_func();
      if ( func )
      {
        qmemcpy(v19, a2, 0x168u);
        if ( (unsigned __int8)func_tail_iterator_set() )
        {
          while ( 1 )
          {
            v12 = func_item_iterator_decode_preceding_insn();
            if ( !v12 )
              break;
            if ( *(_QWORD *)(a6 + 8) > 0x1000u )
              return 0;
            v16 = v12;
            if ( !v18 )
            {
              v13 = sub_7EB0(a1, v19, v17, a4, a5, a6, 0.0);
              v14 = 0;
              if ( !v13 )
                return v14;
              if ( v13 == 1 )
                return v16;
              if ( v13 != -1 )
                return 0;
            }
          }
        }
        if ( v19[2] == *func )
          add_regarg();
      }
    }
    return 0;
  }
  if ( netnode_altval() == -1 )
    return apply_tinfo_to_stkarg();
  else
    return apply_once_tinfo_and_name();
}

