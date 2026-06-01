__int64 __fastcall sub_20C40(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4, int a5)
{
  __int64 v6; // rbp
  __int64 (__fastcall *v7)(__int64, __int64, _DWORD *, int); // rax
  __int64 v8; // rax
  unsigned __int64 v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v10[0] = a3;
  if ( !a4 )
    return (unsigned __int8)sub_366A0(a1, a3, a2);
  v6 = a5;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *, int))(*(_QWORD *)a1 + 296LL);
  if ( v7 == sub_20B40 )
    v8 = *(_BYTE *)(a1 + 1349) || *(_DWORD *)(a1 + 1340) == -1 ? 0LL : (int)sub_207D0(a1, 0xFFFFFFFF, a3, a4, a5, 1);
  else
    v8 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _QWORD))v7)(a1, a3, a4, a5, 0);
  if ( v6 != v8 )
    return (unsigned __int8)sub_366A0(a1, a3, a2);
  sub_1CC80((_QWORD *)(a1 + 1352), v10);
  return 1;
}

