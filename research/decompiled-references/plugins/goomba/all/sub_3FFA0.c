__int64 __fastcall sub_3FFA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  int v6; // r12d
  _QWORD *v7; // r15
  __int64 v8; // r13
  __int64 (__fastcall *hexdsp)(__int64, __int64, __int64); // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int (__fastcall *v13)(__int64, __int64, __int64); // rax
  __int64 result; // rax

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 16);
    v5 = v3 + 8;
    v6 = *(_DWORD *)(a2 + 4);
    v7 = *(_QWORD **)(a1 + 8);
    v8 = v3 + 8;
    if ( !v4 )
      goto LABEL_3;
    do
    {
      while ( 1 )
      {
        hexdsp = (__int64 (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, a2);
        a2 = v4 + 32;
        a1 = 296;
        v10 = hexdsp(296, v4 + 32, v2);
        v11 = *(_QWORD *)(v4 + 16);
        v12 = *(_QWORD *)(v4 + 24);
        if ( v10 < 0 )
          break;
        v8 = v4;
        v4 = *(_QWORD *)(v4 + 16);
        if ( !v11 )
          goto LABEL_7;
      }
      v4 = *(_QWORD *)(v4 + 24);
    }
    while ( v12 );
LABEL_7:
    if ( v5 == v8
      || (v13 = (int (__fastcall *)(__int64, __int64, __int64))get_hexdsp(296, a2), v13(296, v2, v8 + 32) < 0) )
    {
LABEL_3:
      std::__throw_out_of_range("map::at");
    }
    result = *(_QWORD *)(*v7 + 8LL * *(int *)(v8 + 48));
    if ( (unsigned int)(v6 - 1) <= 1 )
      return ~(-1LL << (8 * (unsigned __int8)v6)) & result;
  }
  else
  {
    if ( *(_BYTE *)a2 != 9 )
      goto LABEL_17;
    v6 = *(_DWORD *)(a2 + 4);
    result = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 8LL * *(int *)(*(_QWORD *)(a2 + 8) + 16LL));
    if ( (unsigned int)(v6 - 1) <= 1 )
      return ~(-1LL << (8 * (unsigned __int8)v6)) & result;
  }
  if ( v6 == 4 )
    return ~(-1LL << (8 * (unsigned __int8)v6)) & result;
  if ( v6 != 8 )
  {
    sub_3FD90();
LABEL_17:
    if ( !under_debugger )
      interr(30773);
    BUG();
  }
  return result;
}
