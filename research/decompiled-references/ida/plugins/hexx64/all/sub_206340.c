__int64 __fastcall sub_206340(__int64 a1, unsigned int a2, unsigned __int64 a3, __m128i a4, __m128 a5)
{
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 result; // rax
  int v11; // esi
  _QWORD *v12; // rdi
  __int64 v13; // r14
  int v14; // edx
  _DWORD *v15; // rdx
  __int64 v16; // r9
  int v17; // edx

  v8 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 40) = 58;
  v9 = *(_QWORD *)(v8 + 8);
  if ( *(_DWORD *)(a3 + 44) == -1 )
  {
    result = sub_2036E0(a1, a2, a3, a4, a5);
    if ( (_DWORD)result )
      goto LABEL_11;
  }
  result = sub_206210(a1, a2, a3, *(double *)a4.m128i_i64, a5);
  if ( (_DWORD)result )
    goto LABEL_11;
  v11 = *(_DWORD *)(a1 + 44);
  if ( v11 == -1 )
    goto LABEL_11;
  v12 = *(_QWORD **)(a1 + 64);
  v13 = *v12 + 104LL * v11;
  if ( v11 < (int)v9 || *(_QWORD *)(a1 + 96) || !a2 )
    goto LABEL_7;
  v15 = *(_DWORD **)a3;
  v16 = *(_QWORD *)a3 + 4LL * *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)a3 != v16 )
  {
    while ( *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) - 1 != *v15 )
    {
      if ( (_DWORD *)v16 == ++v15 )
        goto LABEL_20;
    }
    if ( v15 != (_DWORD *)v16 )
      goto LABEL_7;
  }
LABEL_20:
  if ( (*(_BYTE *)(v13 + 27) & 2) != 0 )
  {
LABEL_7:
    v14 = *(_DWORD *)(a1 + 40);
    switch ( v14 )
    {
      case 58:
        goto LABEL_11;
      case 20:
        result = sub_203500(a1, a3, *v12 + 104LL * v11);
        goto LABEL_11;
      case 26:
        sub_203650(a1, *v12 + 104LL * v11);
        *(_DWORD *)(v13 + 24) |= 0x400u;
        result = 0;
        goto LABEL_11;
    }
    if ( !under_debugger )
      sub_383060(0, *(double *)a4.m128i_i64);
LABEL_30:
    BUG();
  }
  if ( v11 != v12[1] - 1LL )
  {
    if ( !under_debugger )
      sub_383060(0xCEC1u, *(double *)a4.m128i_i64);
    goto LABEL_30;
  }
  sub_1F5100(*(_QWORD *)(a1 + 56), v11);
  v17 = *(_DWORD *)(a3 + 44);
  result = 0;
  if ( *(_DWORD *)(a1 + 44) == v17 && v17 != -1 )
  {
    *(_BYTE *)(a3 + 48) &= ~2u;
    *(_DWORD *)(a3 + 44) = -1;
    sub_107060(*(_QWORD *)(a1 + 56), a3, *(_QWORD **)(a1 + 72), *(_QWORD **)(a1 + 80));
    result = 0;
  }
  *(_DWORD *)(a1 + 40) = 58;
LABEL_11:
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 44) = -1;
  return result;
}

