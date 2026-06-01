__int64 __fastcall sub_35D60(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  int v3; // eax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rax
  int (__fastcall *v9)(__int64, __int64, __int64); // rax
  int (__fastcall *v10)(__int64, __int64, __int64); // rax
  unsigned int (__fastcall *hexdsp)(__int64, __int64, __int64); // rax
  __int64 v12; // [rsp+0h] [rbp-48h]

  v3 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
  {
    if ( !*(_DWORD *)a2 )
    {
      hexdsp = (unsigned int (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, a2);
      return hexdsp(296, a1 + 56, a2 + 56) >> 31;
    }
    goto LABEL_3;
  }
  if ( v3 != 1 || *(_DWORD *)a2 != 1 )
  {
LABEL_3:
    LOBYTE(v2) = v3 == 0;
    return v2;
  }
  v5 = *(_QWORD *)(a2 + 32);
  LODWORD(v8) = a2 + 16;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = a1 + 16;
  v12 = a2 + 16;
  LOBYTE(v8) = a2 + 16 != v5;
  LOBYTE(v2) = v8 & (a1 + 16 != v6);
  if ( (_BYTE)v2 )
  {
    while ( 1 )
    {
      v9 = (int (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, a2);
      if ( v9(296, v6 + 32, v5 + 32) < 0 )
        break;
      v10 = (int (__fastcall *)(__int64, __int64, __int64))get_hexdsp(296, v6 + 32);
      a2 = v5 + 32;
      if ( v10(296, v5 + 32, v6 + 32) < 0 )
        return 0;
      a1 = v5;
      v6 = std::_Rb_tree_increment(v6);
      v8 = std::_Rb_tree_increment(v5);
      v5 = v8;
      LOBYTE(v8) = v12 != v8;
      if ( v7 == v6 || !(_BYTE)v8 )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    LOBYTE(v2) = v7 == v6;
    v2 &= v8;
  }
  return v2;
}
