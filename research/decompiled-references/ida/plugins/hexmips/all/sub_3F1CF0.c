__int64 __fastcall sub_3F1CF0(
        __int64 a1,
        __int32 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r12d
  __m128 v13; // xmm4
  __m128 v14; // xmm5
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rax
  char *v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5

  v12 = sub_3ED570(a1, a2, 1, *(double *)a3.m128_u64);
  v15 = *(_BYTE *)(a1 + 40LL * a2 + 65);
  if ( ((unsigned __int8)(v15 - 2) <= 2u || (unsigned __int8)(v15 - 6) <= 1u) && *(_BYTE *)(a1 + 40LL * a2 + 69) != 9 )
  {
    v16 = *(_QWORD *)(a1 + 832);
    v17 = *(_QWORD *)(v16 + 760);
    if ( !v17 )
      sub_3E5460(*(double *)a3.m128_u64);
    v18 = *(char **)(v16 + 752);
    v19 = *(_DWORD *)&v18[4 * v17 - 4];
    *(_QWORD *)(v16 + 760) = v17 - 1;
    sub_3EA750(a1, a3, a4, a5, a6, v13, v14, a9, a10, a2, v16, v18, v10, v11);
    if ( (unsigned __int8)sub_3F17D0(
                            a1,
                            v19,
                            v12,
                            (char *)*(unsigned __int16 *)(a1 + 890),
                            1,
                            v20,
                            a3,
                            a4,
                            a5,
                            a6,
                            v21,
                            v22,
                            a9,
                            a10) )
    {
      return v19;
    }
    else
    {
      v12 = -1;
      sub_3E8540(*(_QWORD *)(a1 + 832), v19);
    }
  }
  return v12;
}

