__int64 __fastcall sub_28D8B0(__int64 a1, __int64 a2, __m128 a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // r13
  __int64 v10; // r13

  v3 = sub_29CC80((_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL));
  if ( !(_BYTE)v3 )
    return 0;
  v4 = v3;
  v5 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(v5 + 8) != 61 )
    return 0;
  v7 = sub_255A30(*(__int64 **)(v5 + 24));
  v8 = *(_DWORD *)(a2 + 8);
  if ( (unsigned int)(v8 - 21) <= 1 )
  {
    if ( v7 != 1 )
    {
      if ( v8 == 22 && !v7 )
        goto LABEL_9;
      return 0;
    }
LABEL_19:
    v10 = *(_QWORD *)(a2 + 32);
    if ( v10 )
    {
      sub_255630(*(_QWORD *)(a2 + 32), *(double *)a3.m128_u64);
      clear_tinfo_t();
      j__qfree(v10);
    }
    sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), *(double *)a3.m128_u64);
    goto LABEL_12;
  }
  if ( v8 != 23 )
  {
    if ( v8 == 20 )
      goto LABEL_8;
    return 0;
  }
  if ( !v7 )
    goto LABEL_19;
LABEL_8:
  if ( v7 != 1 )
    return 0;
LABEL_9:
  v9 = *(_QWORD *)(a2 + 32);
  if ( v9 )
  {
    sub_255630(*(_QWORD *)(a2 + 32), *(double *)a3.m128_u64);
    clear_tinfo_t();
    j__qfree(v9);
  }
  *(_DWORD *)(a2 + 8) = 49;
LABEL_12:
  sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, *(double *)a3.m128_u64);
  if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return v4;
}

