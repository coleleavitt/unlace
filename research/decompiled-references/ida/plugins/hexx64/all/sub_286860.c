__int64 __fastcall sub_286860(__int64 a1, __int64 *a2, double a3)
{
  __int64 v3; // rbp
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx

  v3 = a2[3];
  if ( *(_DWORD *)(v3 + 8) != 18
    || *(_QWORD *)(v3 + 72)
    || !(unsigned __int8)sub_285160(*(_QWORD *)(v3 + 32), 1, 1)
    && !(unsigned __int8)sub_285160(v3, 1, 1)
    && !(unsigned __int8)sub_285160(v3, 66, 1)
    && !(unsigned __int8)sub_285230(v3) )
  {
    return 0;
  }
  v6 = *(_QWORD *)(v3 + 24);
  v7 = *(_QWORD *)(v3 + 32);
  sub_255850((__int64 *)v3, v6, a3);
  v8 = a2[3];
  v9 = sub_2418B0(v8);
  if ( v9 != -1 )
    *a2 = v9;
  v12 = *(_QWORD *)(v3 + 64);
  v13 = sub_241330(v8, v6, v10, v11);
  *(_QWORD *)(v3 + 64) = v13;
  *(_QWORD *)(sub_241920((__int64)v13, v7, v14, v15, a3) + 64) = v12;
  return 1;
}

