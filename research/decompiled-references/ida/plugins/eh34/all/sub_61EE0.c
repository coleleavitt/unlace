_QWORD *__fastcall sub_61EE0(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax
  unsigned __int64 v3; // rbx
  _QWORD *v5; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // rdi
  __int64 v11; // rbp
  unsigned int v12; // r13d
  __int64 (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax

  result = (_QWORD *)a1[30];
  v3 = a2[5];
  if ( result )
  {
    v5 = a1 + 29;
    v7 = a1 + 29;
    do
    {
      while ( 1 )
      {
        v8 = result[2];
        v9 = result[3];
        if ( result[4] >= v3 )
          break;
        result = (_QWORD *)result[3];
        if ( !v9 )
          goto LABEL_6;
      }
      v7 = result;
      result = (_QWORD *)result[2];
    }
    while ( v8 );
LABEL_6:
    if ( v5 != v7 && v3 >= v7[4] )
    {
      v10 = (void *)std::_Rb_tree_rebalance_for_erase(v7, v5);
      operator delete(v10, 0x28u);
      --a1[33];
      result = (_QWORD *)a2[2];
      if ( v3 != result[4] )
      {
        result[5] = v3;
        v11 = a2[1];
        v12 = *(_DWORD *)(v11 + 64);
        hexdsp = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v10, (const char *)&qword_28);
        result = (_QWORD *)hexdsp(405, v11, v12);
        result[4] = v3;
        *((_DWORD *)result + 6) = 1024;
        result[5] = -1;
        a2[2] = result;
      }
    }
  }
  return result;
}

