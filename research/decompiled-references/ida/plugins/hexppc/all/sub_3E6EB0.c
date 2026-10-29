bool __fastcall sub_3E6EB0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  int v4; // eax
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // r13
  void *(*v10)(); // rdx
  int v11; // eax
  __int64 v12; // r12
  __int64 v13; // rbp
  void *(*v14)(); // rdx
  int v15; // eax

  if ( *(_BYTE *)(a1 + 400) )
  {
    v3 = *(_QWORD *)a2;
    if ( v3 > (int)(sub_EF340(*(_QWORD *)(a1 + 280)) + 4 * *(_DWORD *)(*(_QWORD *)(a1 + 360) + 80LL)) )
      return 0;
  }
  sub_195E50(a1, a2);
  v4 = *(_DWORD *)(a2 + 24);
  if ( v4 < 0 )
    return 0;
  v5 = *(_QWORD *)(a1 + 24);
  if ( v4 > (int)v5 )
    return 0;
  v6 = *(_DWORD *)(a2 + 28);
  if ( v6 < 0 )
    return 0;
  v7 = *(_QWORD *)(a1 + 48);
  if ( v6 > (int)v7 )
    return 0;
  if ( *(_QWORD *)(a2 + 8) == -1 )
  {
    if ( v4 != (_DWORD)v5 || v6 != (_DWORD)v7 )
      return 0;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 376);
  }
  if ( !*(_BYTE *)(a1 + 400) )
    return 1;
  v8 = *(_QWORD *)(a1 + 24);
  if ( v4 != (_DWORD)v8 )
  {
    v9 = *(_QWORD *)(a2 + 8);
    v10 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
    v11 = 4;
    if ( v10 != sub_3E5F90 )
      v11 = *(char *)(((__int64 (__fastcall *)(__int64))v10)(a1) + 12);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 280) + 144LL) >= (unsigned __int64)(v9 + (int)v8 * v11) )
    {
      v6 = *(_DWORD *)(a2 + 28);
      goto LABEL_14;
    }
    return 0;
  }
LABEL_14:
  v12 = *(_QWORD *)(a1 + 48);
  if ( (_DWORD)v12 == v6 )
    return 1;
  v13 = *(_QWORD *)(a2 + 16);
  v14 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
  v15 = 8;
  if ( v14 != sub_3E5F90 )
    v15 = *(char *)(((__int64 (__fastcall *)(__int64))v14)(a1) + 13);
  return *(_QWORD *)(*(_QWORD *)(a1 + 280) + 144LL) >= (unsigned __int64)(v13 + (int)v12 * v15);
}

