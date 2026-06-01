__int64 __fastcall sub_28C620(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  int v5; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // r9
  unsigned int tinfo_size; // eax
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-50h]
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]
  int tinfo_property; // [rsp+10h] [rbp-48h]
  _QWORD *v22; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_DWORD *)(v4 + 8);
  if ( *(_DWORD *)(v3 + 8) != 61 )
  {
    if ( v5 != 61 )
      return 0;
    v5 = *(_DWORD *)(v3 + 8);
    v3 = *(_QWORD *)(a2 + 32);
    v4 = *(_QWORD *)(a2 + 24);
  }
  if ( (unsigned int)(v5 - 35) > 1 )
    return 0;
  v7 = *(_QWORD *)(v4 + 24);
  if ( *(_DWORD *)(v7 + 8) == 61 )
  {
    v17 = sub_255A30(*(__int64 **)(v7 + 24));
    v10 = *(_QWORD *)(v4 + 32);
    v11 = *(_QWORD *)(v4 + 24);
    v12 = v17;
  }
  else
  {
    v8 = *(_QWORD *)(v4 + 32);
    if ( *(_DWORD *)(v8 + 8) != 61 )
      return 0;
    v9 = sub_255A30(*(__int64 **)(v8 + 24));
    v10 = *(_QWORD *)(v4 + 24);
    v11 = *(_QWORD *)(v4 + 32);
    v12 = v9;
  }
  if ( *(_DWORD *)(v3 + 8) != 61 )
    sub_27ECD0(a3);
  v18 = v12;
  v13 = sub_255A30(*(__int64 **)(v3 + 24));
  v14 = v18;
  if ( *(_DWORD *)(v4 + 8) == 35 )
  {
    v19 = v13 - v18;
  }
  else
  {
    v19 = v18 - v13;
    if ( *(_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL) != 61 )
      v19 = v14 + v13;
  }
  v20 = v13;
  if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
  {
    if ( v19 )
      return 0;
    goto LABEL_15;
  }
  if ( v20 || (v15 = (_QWORD *)v11, !v19) )
LABEL_15:
    v15 = nullptr;
  v22 = v15;
  tinfo_property = get_tinfo_property();
  tinfo_size = get_tinfo_size();
  sub_240CD0(v3, *(_QWORD *)(a1 + 72), v19, tinfo_size, tinfo_property, v22, a3);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) == 61 )
    *(_QWORD *)(a2 + 32) = v10;
  else
    *(_QWORD *)(a2 + 24) = v10;
  sub_254DA0(v4);
  if ( v4 )
  {
    sub_255630(v4, a3);
    clear_tinfo_t();
    j__qfree(v4);
  }
  if ( v11 )
  {
    sub_255630(v11, a3);
    clear_tinfo_t();
    j__qfree(v11);
  }
  return 1;
}

