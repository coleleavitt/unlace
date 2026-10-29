__int64 __fastcall sub_B2F10(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdx
  __int64 v6; // r12
  signed int v7; // r13d
  unsigned int *v8; // rax

  if ( a4 )
    return 0;
  v4 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a2 + 4) > *(_DWORD *)(v4 + 68) )
    return 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL);
  if ( !(unsigned __int8)sub_120A10(a2, v6, v4 + 32, 1) )
    return 0;
  v7 = *(_DWORD *)(a2 + 4);
  sub_1205C0(a2);
  v8 = *(unsigned int **)(a1 + 48);
  if ( (int)v8[17] > v7 )
  {
    sub_1227F0(a2, v6, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL));
    v8 = *(unsigned int **)(a1 + 48);
  }
  sub_11BC20(a2, v6, *v8, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), (unsigned int)v7);
  ++*(_DWORD *)(a1 + 56);
  return 0;
}

