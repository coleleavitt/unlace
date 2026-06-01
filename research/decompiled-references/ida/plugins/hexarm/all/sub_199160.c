__int64 __fastcall sub_199160(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // r14d
  int v4; // r12d
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r13
  int v9; // r15d
  __int64 v10; // r14
  int v11; // edx
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v17; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_DWORD *)(a2 + 24);
  v4 = v3 * *(char *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) + 12);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = v2 + v4;
  v7 = *(_QWORD *)(a2 + 16);
  v8 = (int)v5 * *(char *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) + 12) + v7;
  if ( *(_DWORD *)(a2 + 24) < *(_DWORD *)(a1 + 24) && (v6 < 0 || *(_QWORD *)(*(_QWORD *)(a1 + 280) + 136LL) < v8) )
    return 0;
  v9 = *(_DWORD *)(a2 + 48);
  if ( v9 < *(_DWORD *)(a1 + 48) )
  {
    v10 = *(_QWORD *)(a2 + 40);
    v11 = v9 * *(char *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) + 13);
    v17 = *(_QWORD *)(a2 + 40);
    v12 = *(_QWORD *)(a1 + 48);
    v13 = v11 + v10;
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    if ( v13 < 0 )
      return 0;
    v15 = v17 + (int)v12 * *(char *)(v14 + 13);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 280) + 136LL) < v15
      || *(_DWORD *)(a2 + 24) < *(_DWORD *)(a1 + 24)
      && v6 != v8
      && v13 != v15
      && v8 - 1 >= (unsigned __int64)v13
      && v15 - 1 >= (unsigned __int64)v6 )
    {
      return 0;
    }
  }
  *(_BYTE *)(a1 + 288) |= 1u;
  *(_QWORD *)(a1 + 312) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 320) = *(_DWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 336) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 344) = *(_DWORD *)(a2 + 48);
  return 1;
}

