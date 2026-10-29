_QWORD *__fastcall sub_14B20(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r12
  _QWORD *v7; // rbp
  _QWORD *v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD *, _QWORD *); // rax
  _QWORD *v10; // r13
  int v11; // eax
  int v12; // eax
  _QWORD *v13; // r15
  int (__fastcall *v14)(__int64, _QWORD *, _QWORD *); // rax
  unsigned int v16; // r13d
  __int64 v17; // rdx
  void (__fastcall *hexdsp)(__int64, _QWORD *, _QWORD *); // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  unsigned int (__fastcall *v22)(__int64, _QWORD *, _QWORD *); // rax

  v5 = a1 + 8;
  v6 = a1;
  v7 = a2;
  v8 = *(_QWORD **)(a1 + 16);
  if ( !v8 )
  {
    v8 = (_QWORD *)(a1 + 8);
    if ( v5 == *(_QWORD *)(a1 + 24) )
    {
      v13 = (_QWORD *)(a1 + 8);
      LOBYTE(v16) = 1;
LABEL_15:
      v8 = (_QWORD *)operator new(0x48u);
      hexdsp = (void (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(72, a2, v17);
      hexdsp(273, v8 + 4, v7);
      v19 = v7[3];
      v8[6] = &off_4D850;
      v20 = v7[4];
      v8[7] = v19;
      v21 = *(_QWORD *)(v19 + 8);
      v8[8] = v20;
      Z3_inc_ref(v21, v20);
      v8[6] = &off_4D890;
      std::_Rb_tree_insert_and_rebalance((unsigned __int8)v16, v8, v13, v5);
      ++*(_QWORD *)(v6 + 40);
      return v8;
    }
LABEL_9:
    a1 = (__int64)v8;
    v13 = v8;
    v8 = (_QWORD *)std::_Rb_tree_decrement(v8, a2, a3, a4, a5);
    v10 = v8 + 4;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v9 = (__int64 (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(a1, a2, a3);
    v10 = v8 + 4;
    a2 = v7;
    a1 = 296;
    v11 = v9(296, v7, v8 + 4);
    a3 = (_QWORD *)v8[3];
    if ( v11 < 0 )
      a3 = (_QWORD *)v8[2];
    v12 = (v11 >> 31) & 1;
    if ( !a3 )
      break;
    v8 = a3;
  }
  if ( (_BYTE)v12 )
  {
    if ( *(_QWORD **)(v6 + 24) == v8 )
    {
      v13 = v8;
LABEL_13:
      LOBYTE(v16) = 1;
      if ( (_QWORD *)v5 != v13 )
      {
        v22 = (unsigned int (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(296, a2, a3);
        a2 = v7;
        v16 = v22(296, v7, v13 + 4) >> 31;
      }
      goto LABEL_15;
    }
    goto LABEL_9;
  }
  v13 = v8;
LABEL_10:
  v14 = (int (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(a1, a2, a3);
  a2 = v10;
  if ( v14(296, v10, v7) < 0 )
    goto LABEL_13;
  return v8;
}

