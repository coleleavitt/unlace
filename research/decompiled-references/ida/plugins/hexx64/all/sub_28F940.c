__int64 __fastcall sub_28F940(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rbp
  int v5; // eax
  __int64 v6; // r13
  int v7; // edx
  __int64 v8; // rax
  int v9; // eax

  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 61 )
  {
    v3 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(v3 + 8) != 61 )
      return 0;
  }
  if ( !v3 || sub_255A30(*(__int64 **)(v3 + 24)) != 1 )
    return 0;
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 == 36 )
  {
    if ( *(_QWORD *)(a2 + 32) != v3 )
      return 0;
    v6 = *(_QWORD *)(a2 + 24);
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 == v3 )
      v6 = *(_QWORD *)(a2 + 32);
    if ( v5 == 35 )
    {
      v9 = *(_DWORD *)(v6 + 8);
      if ( v9 == 53 || v9 == 56 )
        goto LABEL_11;
      return 0;
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v6 + 8) - 54) > 1 )
    return 0;
LABEL_11:
  sub_255630(v3, *(double *)a3.m128_u64);
  clear_tinfo_t();
  j__qfree(v3);
  sub_255850((__int64 *)a2, v6, *(double *)a3.m128_u64);
  v7 = 54;
  v8 = (unsigned int)(*(_DWORD *)(a2 + 8) - 53);
  if ( (unsigned int)v8 <= 2 )
    v7 = dword_42D358[v8];
  *(_DWORD *)(a2 + 8) = v7;
  if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}

