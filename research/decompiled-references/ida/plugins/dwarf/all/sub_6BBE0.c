unsigned __int64 __fastcall sub_6BBE0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rdx
  const char *v7; // rax
  __int64 v8; // rdi
  const char *v9; // rax
  __int64 v10; // rdx
  int v11; // r12d
  __int64 i; // rbp
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v21; // rax
  char v22; // [rsp+1h] [rbp-51h] BYREF
  __int64 v23; // [rsp+2h] [rbp-50h] BYREF
  __int64 v24; // [rsp+Ah] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+12h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v22 = 0;
  v24 = 0;
  v23 = 0;
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v5 = a3[32];
  *(_QWORD *)(a1 + 24) = a3;
  v6 = *a3;
  *(_QWORD *)a1 = &off_C8A28;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 80) = a4;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, char *, __int64, __int64 *))(v5 + 304))(
         *(_QWORD *)(v6 + 24),
         &v23,
         &v22,
         a1 + 32,
         &v24) )
  {
    v7 = (const char *)(*(__int64 (__fastcall **)(__int64))(v5 + 464))(v24);
    sub_1D740((__int64)"ERROR: %s\n", v7);
  }
  v8 = *(_QWORD *)(a1 + 32);
  v24 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64 *))(v5 + 320))(v8, a1 + 40, a1 + 48, &v24) )
  {
    v9 = (const char *)(*(__int64 (__fastcall **)(__int64))(v5 + 464))(v24);
    sub_1D740((__int64)"ERROR: %s\n", v9);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) = a1;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 16LL))(
    *(_QWORD *)(a1 + 80),
    v5,
    *(_QWORD *)(a1 + 40),
    *(_QWORD *)(a1 + 48));
  v10 = *(_QWORD *)(a1 + 48);
  v11 = 0;
  for ( i = 0; v11 < v10; ++*(_QWORD *)(a1 + 64) )
  {
    while ( 1 )
    {
      v13 = i;
      v14 = *(_QWORD *)(a1 + 40);
      v15 = 0;
      v16 = v11++;
      i = v11;
      if ( v11 < v10 )
        v15 = *(_QWORD *)(v14 + 8LL * v11);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 80) + 24LL))(
             *(_QWORD *)(a1 + 80),
             v5,
             *(_QWORD *)(v14 + 8 * v16),
             v13,
             v15) )
      {
        break;
      }
      v10 = *(_QWORD *)(a1 + 48);
      if ( v11 >= v10 )
        goto LABEL_14;
    }
    v17 = *(_QWORD *)(a1 + 64);
    v18 = *(_QWORD *)(a1 + 72);
    v24 = v13;
    v19 = *(_QWORD *)(a1 + 56);
    if ( v18 < v17 + 1 )
    {
      v21 = qvector_reserve(a1 + 56, v19, v17 + 1, 8);
      *(_QWORD *)(a1 + 56) = v21;
      v19 = v21;
      v17 = *(_QWORD *)(a1 + 64);
    }
    *(_QWORD *)(v19 + 8 * v17) = v13;
    v10 = *(_QWORD *)(a1 + 48);
  }
LABEL_14:
  if ( (debug & 0x40000) != 0 )
    sub_16DD0((__int64)"DWARF: dwarf_lines_iterator() with %zu entries.\n");
  return v25 - __readfsqword(0x28u);
}

