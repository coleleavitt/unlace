__int64 __fastcall sub_1B240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, __int64); // rax
  __int64 v10; // r13
  int v11; // eax
  int v12; // eax
  __int64 v13; // r15
  int (__fastcall *v14)(__int64, __int64, __int64); // rax
  unsigned int v16; // r13d
  __int64 v17; // rdx
  void (__fastcall *hexdsp)(__int64, __int64, __int64); // rax
  unsigned int (__fastcall *v19)(__int64, __int64, __int64); // rax

  v5 = a1 + 8;
  v6 = a1;
  v7 = a2;
  v8 = *(_QWORD *)(a1 + 16);
  if ( !v8 )
  {
    v8 = a1 + 8;
    if ( v5 == *(_QWORD *)(a1 + 24) )
    {
      v13 = a1 + 8;
      LOBYTE(v16) = 1;
LABEL_15:
      v8 = operator new(0x30u);
      hexdsp = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(48, a2, v17);
      hexdsp(273, v8 + 32, v7);
      std::_Rb_tree_insert_and_rebalance((unsigned __int8)v16, v8, v13, v5);
      ++*(_QWORD *)(v6 + 40);
      return v8;
    }
LABEL_9:
    a1 = v8;
    v13 = v8;
    v8 = std::_Rb_tree_decrement(v8, a2, a3, a4, a5);
    v10 = v8 + 32;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v9 = (__int64 (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, a2, a3);
    v10 = v8 + 32;
    a2 = v7;
    a1 = 296;
    v11 = v9(296, v7, v8 + 32);
    a3 = *(_QWORD *)(v8 + 24);
    if ( v11 < 0 )
      a3 = *(_QWORD *)(v8 + 16);
    v12 = (v11 >> 31) & 1;
    if ( !a3 )
      break;
    v8 = a3;
  }
  if ( (_BYTE)v12 )
  {
    if ( *(_QWORD *)(v6 + 24) == v8 )
    {
      v13 = v8;
LABEL_13:
      LOBYTE(v16) = 1;
      if ( v5 != v13 )
      {
        v19 = (unsigned int (__fastcall *)(__int64, __int64, __int64))get_hexdsp(296, a2, a3);
        a2 = v7;
        v16 = v19(296, v7, v13 + 32) >> 31;
      }
      goto LABEL_15;
    }
    goto LABEL_9;
  }
  v13 = v8;
LABEL_10:
  v14 = (int (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, a2, a3);
  a2 = v10;
  if ( v14(296, v10, v7) < 0 )
    goto LABEL_13;
  return v8;
}

