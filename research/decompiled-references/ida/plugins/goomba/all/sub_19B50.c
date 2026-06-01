__int64 __fastcall sub_19B50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 (__fastcall *hexdsp)(__int64, __int64, __int64); // rax
  int v8; // eax
  __int64 v9; // rcx
  int (__fastcall *v10)(__int64, __int64, __int64); // rax

  v3 = a1 + 8;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    return v3;
  v5 = a2;
  v6 = a1 + 8;
  do
  {
    while ( 1 )
    {
      hexdsp = (__int64 (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, a2, a3);
      a2 = v4 + 32;
      a1 = 296;
      v8 = hexdsp(296, v4 + 32, v5);
      a3 = *(_QWORD *)(v4 + 16);
      v9 = *(_QWORD *)(v4 + 24);
      if ( v8 < 0 )
        break;
      v6 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !a3 )
        goto LABEL_6;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v9 );
LABEL_6:
  if ( v3 == v6 )
    return v6;
  v10 = (int (__fastcall *)(__int64, __int64, __int64))get_hexdsp(296, a2, a3);
  if ( v10(296, v5, v6 + 32) >= 0 )
    return v6;
  else
    return v3;
}

