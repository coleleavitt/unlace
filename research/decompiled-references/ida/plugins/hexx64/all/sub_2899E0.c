__int64 __fastcall sub_2899E0(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v5; // rdi
  int v6; // r12d
  __int64 *v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8

  result = 0;
  v5 = *(_QWORD *)(a2 + 24);
  v6 = *(_DWORD *)(v5 + 8);
  if ( (unsigned int)(v6 - 17) <= 1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL) + 6LL) & 1) == 0 )
    {
      if ( !under_debugger )
        sub_383060(0xC5BBu, a3);
      BUG();
    }
    v7 = *(__int64 **)(v5 + 32);
    v8 = *(_QWORD **)(v5 + 24);
    sub_254DA0(v5);
    sub_255050(a2, a3);
    *(_DWORD *)(a2 + 8) = 73;
    v11 = j__qalloc_or_throw(80, a2, v9, v10);
    *(_QWORD *)v11 = -1;
    *(_QWORD *)(v11 + 8) = 0xFFFFFFFF00000000LL;
    *(_OWORD *)(v11 + 24) = 0;
    *(_OWORD *)(v11 + 64) = 0;
    *(_QWORD *)(v11 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v11 + 40) = 0;
    *(_QWORD *)(v11 + 48) = 0;
    *(_QWORD *)(v11 + 56) = 0;
    *(_QWORD *)(a2 + 24) = v11;
    *(_QWORD *)(v11 + 64) = sub_241330(80, a2, v12, v13);
    v16 = sub_2413C0(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL), *v7, v14, v15, 0.0);
    *((_DWORD *)v16 + 2) = 72;
    v16[3] = (__int64)v7;
    if ( v6 == 17 )
      v8 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (__int64)v8, v17, v18, v19, 0.0);
    sub_255850(*(__int64 **)(a2 + 24), (__int64)v8, 0.0);
    return 1;
  }
  return result;
}

