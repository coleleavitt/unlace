__int64 *__fastcall sub_E0E70(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 *result; // rax
  __int64 v6; // rdx
  int v7; // ecx
  __int64 *v8; // rdx
  __int64 *v9; // [rsp+8h] [rbp-20h]

  v4 = 2 * *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v4;
  result = sub_DFAD0(a1, (_QWORD *)a2, 24LL * (v4 - 1) + 32);
  if ( result )
  {
    v6 = *(int *)result;
    v7 = v6 + 1;
    v8 = &result[3 * v6];
    *(_DWORD *)result = v7;
    *(_OWORD *)(v8 + 1) = 0;
    v8[3] = 0;
    v8[1] = a3;
  }
  else
  {
    if ( a2 )
    {
      sub_D7810(a1, (_QWORD *)a2);
      result = nullptr;
    }
    if ( a3 )
    {
      v9 = result;
      sub_D7720(a1, a3);
      return v9;
    }
  }
  return result;
}
