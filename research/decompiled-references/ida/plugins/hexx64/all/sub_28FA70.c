__int64 __fastcall sub_28FA70(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  char v15; // r15
  unsigned __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rbp

  v5 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(v5 + 8) != 61 )
  {
    v5 = *(_QWORD *)(a2 + 40);
    if ( *(_DWORD *)(v5 + 8) != 61 )
      return 0;
  }
  v7 = v5 + 48;
  v8 = sub_255A30(*(__int64 **)(v5 + 24));
  if ( v8 > 1 )
    return 0;
  v9 = *(_QWORD *)(a2 + 32);
  v10 = v9;
  if ( v9 == v5 )
    v10 = *(_QWORD *)(a2 + 40);
  if ( *(_DWORD *)(v10 + 8) == 61 )
  {
    v16 = sub_255A30(*(__int64 **)(v10 + 24));
    if ( v8 != v16 && v16 <= 1 )
    {
      v17 = *(_QWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 8) = 48;
      v15 = (v8 ^ 1) & 1;
      if ( v17 )
      {
        sub_255630(v17, *(double *)a3.m128_u64);
        clear_tinfo_t();
        j__qfree(v17);
      }
      v18 = *(_QWORD *)(a2 + 40);
      if ( v18 )
      {
        sub_255630(*(_QWORD *)(a2 + 40), *(double *)a3.m128_u64);
        clear_tinfo_t();
        j__qfree(v18);
      }
      *(_QWORD *)(a2 + 32) = 0;
      goto LABEL_14;
    }
    return 0;
  }
  if ( !(unsigned __int8)sub_29D090(v9, v7) || !(unsigned __int8)sub_29D090(*(_QWORD *)(a2 + 40), v7) )
    return 0;
  v14 = *(_QWORD *)(a2 + 32);
  v15 = (v8 ^ (v14 == v5)) & 1;
  if ( v14 == v5 )
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 8) = (v8 == 0) + 17;
  if ( v5 )
  {
    sub_255630(v5, *(double *)a3.m128_u64);
    clear_tinfo_t();
    j__qfree(v5);
  }
LABEL_14:
  if ( v15 )
    *(_QWORD *)(a2 + 24) = sub_244460(
                             *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL),
                             *(_QWORD *)(a2 + 24),
                             v11,
                             v12,
                             v13,
                             *(double *)a3.m128_u64);
  *(_QWORD *)(a2 + 40) = 0;
  sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, *(double *)a3.m128_u64);
  if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}

