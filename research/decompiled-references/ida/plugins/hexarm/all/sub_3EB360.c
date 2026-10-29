__int64 __fastcall sub_3EB360(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  int v5; // r14d
  __int64 (*v6)(void); // rax
  int v7; // edx
  int v8; // r13d
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rax
  __int64 (*v16)(void); // rax
  __int64 v17; // rax
  int v18; // [rsp+8h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 280) + 1504LL) + 80LL);
  v6 = *(__int64 (**)(void))(*(_QWORD *)a1 + 24LL);
  if ( (char *)v6 == (char *)sub_3EA1E0 )
  {
    v7 = *(_DWORD *)(a1 + 48);
    v8 = 8 * v4;
    v9 = 16;
  }
  else
  {
    v15 = v6();
    v7 = *(_DWORD *)(a1 + 48);
    v8 = *(char *)(v15 + 12) * (_DWORD)v4;
    v16 = *(__int64 (**)(void))(*(_QWORD *)a1 + 24LL);
    if ( (char *)v16 == (char *)sub_3EA1E0 )
    {
      v9 = 16;
    }
    else
    {
      v18 = *(_DWORD *)(a1 + 48);
      v17 = v16();
      v7 = v18;
      v9 = *(char *)(v17 + 13);
    }
  }
  v10 = v7 * v9;
  *(_QWORD *)(a2 + 80) = *(_QWORD *)a3;
  v11 = *(_DWORD *)(a3 + 24);
  if ( v11 != -1 )
    v11 = (v8 + v11) / v5;
  *(_DWORD *)(a2 + 40) = v11;
  v12 = *(_DWORD *)(a3 + 28);
  if ( v12 != -1 )
    v12 = (v10 + v12) / (2 * v5);
  *(_DWORD *)(a2 + 64) = v12;
  v13 = *(_QWORD *)(a3 + 8);
  if ( v13 != -1 )
    v13 = *(_QWORD *)(a3 + 8) - v8;
  *(_QWORD *)(a2 + 32) = v13;
  result = *(_QWORD *)(a3 + 16);
  if ( result != -1 )
    result = *(_QWORD *)(a3 + 16) - v10;
  *(_QWORD *)(a2 + 56) = result;
  return result;
}

