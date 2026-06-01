__int64 __fastcall sub_3B7FB0(__int64 a1, __int64 *a2, double a3)
{
  __int64 v3; // r12
  __int64 v4; // rax
  int v5; // edx
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rsi
  int v9; // eax
  char v10; // dl

  v3 = *a2;
  v4 = sub_384CF0(*(_QWORD *)(a1 + 16), *a2);
  if ( !v4 )
    return 6;
  v5 = *(_DWORD *)(a1 + 24);
  if ( v5 )
  {
    if ( v5 != 1 )
      goto LABEL_13;
    if ( v3 != *(_QWORD *)(v4 + 8) )
      return 6;
  }
  v7 = *a2;
  v8 = sub_384CF0(*(_QWORD *)(a1 + 16), *a2);
  if ( !v8 )
    return 7;
  v9 = *(_DWORD *)(a1 + 24);
  if ( !v9 )
    goto LABEL_11;
  if ( v9 != 1 )
LABEL_13:
    sub_3B5AD0(a3);
  if ( v7 != *(_QWORD *)(v8 + 8) )
    return 7;
LABEL_11:
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v8);
  result = 3;
  if ( !v10 )
    return 7;
  return result;
}

