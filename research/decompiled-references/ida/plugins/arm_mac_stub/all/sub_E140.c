char __fastcall sub_E140(unsigned __int64 *a1, int a2)
{
  __int64 v3; // rdi
  __int64 module_data; // rax
  _QWORD *v5; // r12
  unsigned __int64 *v6; // r13
  _QWORD *v7; // r14
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rdx
  char v11; // cl

  v3 = (unsigned int)dword_48824;
  module_data = get_module_data();
  if ( module_data )
  {
    if ( a2 > 0 )
    {
      v5 = (_QWORD *)module_data;
      v6 = &a1[a2];
      v7 = (_QWORD *)(module_data + 232);
      while ( 1 )
      {
        v8 = *a1;
        if ( getseg() )
        {
          LOBYTE(module_data) = sub_D8E0() == 1;
          if ( (v8 & 1) != (_BYTE)module_data )
            LOBYTE(module_data) = sub_D8E0();
          goto LABEL_6;
        }
        v9 = (_QWORD *)v5[30];
        if ( !v9 )
          break;
        while ( 1 )
        {
          v10 = v9[4];
          module_data = v9[2];
          v11 = 1;
          if ( v8 >= v10 )
          {
            module_data = v9[3];
            v11 = 0;
          }
          if ( !module_data )
            break;
          v9 = (_QWORD *)module_data;
        }
        if ( v11 )
          goto LABEL_18;
LABEL_15:
        if ( v10 >= v8 )
        {
LABEL_6:
          *a1++ = v8 & 0xFFFFFFFFFFFFFFFELL;
          if ( v6 == a1 )
            return module_data;
        }
        else
        {
LABEL_16:
          ++a1;
          *(_QWORD *)(operator new(0x28u) + 32) = v8;
          LOBYTE(module_data) = std::_Rb_tree_insert_and_rebalance();
          ++v5[33];
          *(a1 - 1) = v8 & 0xFFFFFFFFFFFFFFFELL;
          if ( v6 == a1 )
            return module_data;
        }
      }
      v9 = v7;
LABEL_18:
      if ( v9 == (_QWORD *)v5[31] )
        goto LABEL_16;
      module_data = std::_Rb_tree_decrement();
      v10 = *(_QWORD *)(module_data + 32);
      goto LABEL_15;
    }
  }
  else
  {
    sub_BE10(v3);
    LOBYTE(module_data) = sub_E2D0();
  }
  return module_data;
}

