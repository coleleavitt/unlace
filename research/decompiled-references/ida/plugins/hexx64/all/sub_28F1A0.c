__int64 __fastcall sub_28F1A0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // r8
  int v11; // eax
  __int64 *v12; // rdx
  unsigned __int8 v13; // al
  __int64 v14; // rsi
  __int64 v15; // rbp
  unsigned __int8 v16; // [rsp+1h] [rbp-19h]
  unsigned __int8 v17; // [rsp+1h] [rbp-19h]

  if ( *(_DWORD *)(a2 + 8) != 52 )
    return 0;
  v5 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v5 + 8) != 58 )
    return 0;
  v6 = *(_QWORD *)(v5 + 32);
  if ( *(_DWORD *)(v6 + 8) != 61 )
    return 0;
  if ( **(_QWORD **)(v6 + 24) )
    return 0;
  if ( (get_tinfo_property() & 0xF) == 0xB )
    return 0;
  v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL) + 8LL);
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
    if ( (unsigned __int8)sub_28EA50((__int64)a1, *v12, 0, 0, a3) )
      return 0;
    v10 = a1[2];
    v9 = a1[3];
  }
LABEL_17:
  v13 = sub_323990(a1[8], *(_QWORD *)(v10 + 8 * v9 - 8), a2);
  if ( !v13 )
    return 0;
  v14 = *(_QWORD *)(a2 + 24);
  v15 = *(_QWORD *)(v14 + 32);
  if ( v15 )
  {
    v16 = v13;
    sub_255630(*(_QWORD *)(v14 + 32), a3);
    clear_tinfo_t();
    j__qfree(v15);
    v14 = *(_QWORD *)(a2 + 24);
    v13 = v16;
  }
  v17 = v13;
  sub_255850((__int64 *)a2, v14, a3);
  sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), a3);
  return v17;
}

