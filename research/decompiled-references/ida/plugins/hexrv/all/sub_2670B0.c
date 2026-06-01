__int64 __fastcall sub_2670B0(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // r13
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx

  v2 = *(_DWORD *)(*(_QWORD *)a2 + 8LL);
  if ( (unsigned int)(v2 - 35) > 1 )
    return 0;
  v3 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  if ( *(_DWORD *)(v3 + 8) != 61 )
    return 0;
  v6 = *(_QWORD *)(v3 + 48);
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)a1 + 112LL) + 84LL) < (unsigned __int64)get_tinfo_size() )
    return 0;
  if ( *(_DWORD *)(v3 + 8) != 61 )
    sub_265300(0, v6);
  v8 = *(_QWORD *)(a2 + 24) * sub_250E30(*(__int64 **)(v3 + 24));
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL) != 8 && v8 != (int)v8 )
    return 0;
  if ( v2 == 36 )
    v8 = -v8;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL) + 24LL) == 8 )
  {
    v10 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v9 = -v8;
    if ( v8 > 0 )
      v9 = v8;
    if ( v9 > 0x7FFFFFFF )
      return 0;
    v10 = 0x7FFFFFFF;
  }
  v11 = *(_DWORD *)(a2 + 16);
  v12 = *(_QWORD *)(a2 + 8);
  if ( v8 < 0 )
  {
    v14 = *(_QWORD *)(a1 + 96);
    if ( v14 <= v8 + v10 )
    {
      *(_QWORD *)(a1 + 96) = v14 - v8;
      goto LABEL_18;
    }
    return 0;
  }
  v13 = *(_QWORD *)(a1 + 88);
  if ( v13 > v10 - v8 )
    return 0;
  *(_QWORD *)(a1 + 88) = v8 + v13;
LABEL_18:
  if ( *(_QWORD *)(a1 + 104) == -1 )
  {
    *(_QWORD *)(a1 + 104) = v12;
    *(_DWORD *)(a1 + 112) = v11;
  }
  *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
  *(_QWORD *)(a1 + 120) += v8;
  return 1;
}

