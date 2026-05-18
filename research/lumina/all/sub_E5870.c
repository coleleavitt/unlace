__int64 *__fastcall sub_E5870(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 v5; // rax
  int *v6; // rsi
  __int64 *v7; // rax

  v2 = *a1;
  v3 = sub_DC720(*a1, *(const char **)(a2 + 24));
  v4 = sub_E5750(a1, nullptr, 0, nullptr);
  if ( v4 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 40LL);
    v4[3] = (__int64)v3;
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 32) + 56LL) != v5 )
      v4[1] = v5;
    v6 = *(int **)(a2 + 32);
    if ( v6 )
    {
      v7 = sub_DDB50(v2, v6, 0);
      if ( v7 )
        return sub_E56C0(a1, v4, (int *)v7);
    }
  }
  else if ( v3 )
  {
    sub_C9250(v2, v3);
  }
  return v4;
}
