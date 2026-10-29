void __fastcall sub_100610(__int64 a1, double a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rsi
  _QWORD *v10; // rbp
  __int64 v11; // rdi
  int v12; // eax
  signed __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9

  v8 = *(_QWORD *)(a1 + 16);
  if ( *(__int16 *)(v8 + 20) >= 0 )
    v10 = sub_EF2D0((_QWORD *)(a1 + 8), v8, 16, a5, a6, a7);
  else
    v10 = *(_QWORD **)(v8 + 8);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a4 + 8);
    v12 = byte_1BAD40[*(_WORD *)(v11 + 20) & 0x3F];
    if ( v12 == 3 )
      v12 = sub_D5960(v11);
    if ( v12 == 1 )
    {
      v13 = sub_CD0F0(*(char ***)(a4 + 8));
    }
    else
    {
      if ( v12 != 2 )
        goto LABEL_9;
      sub_CD1F0(*(_QWORD *)(a4 + 8));
      v13 = (unsigned int)(int)a2;
      if ( (double)(int)v13 != a2 )
        goto LABEL_9;
    }
    if ( v13 <= 0 )
    {
LABEL_9:
      *(_DWORD *)(a1 + 36) = 1;
      sub_F11D0(
        *(_QWORD *)a1,
        "second argument to nth_value must be a positive integer",
        -1,
        1,
        (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL,
        a7);
      return;
    }
    v14 = *v10 + 1LL;
    *v10 = v14;
    if ( v14 == v13 )
    {
      v15 = sub_1004E0(*(const __m128i **)a4, v8);
      v10[1] = v15;
      if ( !v15 )
        sub_E1560(a1, v8, v16, v17, v18, v19);
    }
  }
}
