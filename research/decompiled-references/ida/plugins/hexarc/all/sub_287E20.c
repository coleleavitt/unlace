__int64 __fastcall sub_287E20(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // r8
  int v11; // eax
  __int64 *v12; // rdx
  unsigned __int8 v13; // al
  __int64 v14; // rsi
  unsigned __int8 v15; // [rsp+1h] [rbp-19h]
  unsigned __int8 v16; // [rsp+1h] [rbp-19h]

  if ( *(_DWORD *)(a2 + 8) != 52 )
    return 0;
  v4 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v4 + 8) != 58 )
    return 0;
  v5 = *(_QWORD *)(v4 + 32);
  if ( *(_DWORD *)(v5 + 8) != 61 )
    return 0;
  if ( **(_QWORD **)(v5 + 24) )
    return 0;
  if ( (get_tinfo_property() & 0xF) == 0xB )
    return 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL);
  v8 = *(_DWORD *)(v7 + 8);
  if ( v8 == 51 || v8 == 58 )
    return 0;
  v9 = a1[3];
  v10 = a1[2];
  v11 = a1[3] - 1;
  if ( v11 >= 0 )
  {
    v12 = (__int64 *)(v10 + 8LL * (unsigned int)v11);
    while ( *(_DWORD *)(*v12 + 8) != 51 )
    {
      --v11;
      --v12;
      if ( v11 == -1 )
        goto LABEL_17;
    }
    if ( (unsigned __int8)sub_2876D0((__int64)a1, *v12, 0, 0) )
      return 0;
    v10 = a1[2];
    v9 = a1[3];
  }
LABEL_17:
  v13 = sub_31C610(a1[8], *(_QWORD *)(v10 + 8 * v9 - 8), a2, v7 + 48);
  if ( !v13 )
    return 0;
  v14 = *(_QWORD *)(a2 + 24);
  if ( *(_QWORD *)(v14 + 32) )
  {
    v15 = v13;
    sub_24E2B0(*(_QWORD *)(v14 + 32));
    clear_tinfo_t();
    j__qfree();
    v14 = *(_QWORD *)(a2 + 24);
    v13 = v15;
  }
  v16 = v13;
  sub_24E4D0((__int64 *)a2, v14);
  sub_24E4D0((__int64 *)a2, *(_QWORD *)(a2 + 24));
  return v16;
}

