__int64 __fastcall sub_371DC0(__int64 a1, double a2)
{
  char v3; // dl
  __int64 v4; // rax
  int v5; // r12d
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  _DWORD *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // r12
  __int64 (*v16)(); // rax
  int v17; // eax

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 56LL))(*(_QWORD *)(a1 + 936));
  v4 = *(_QWORD *)(a1 + 464);
  if ( v3 && v4 == 1 || !v4 )
    return 0;
  v5 = 0;
  v6 = -1;
  do
  {
    v7 = sub_13D280((_QWORD *)a1, v5, a2);
    if ( *(_DWORD *)v7 != 2 )
    {
      if ( (unsigned int)(*(_DWORD *)v7 - 3) > 1 )
        goto LABEL_8;
      if ( (_DWORD)v6 != -1 )
      {
LABEL_15:
        v11 = *(_DWORD *)(a1 + 72);
        if ( v11 <= 0x10 )
          v11 = getinf();
        if ( v11 != 176 && v11 != 256 )
          return 0;
      }
LABEL_7:
      v6 = v5;
      goto LABEL_8;
    }
    v8 = *(_QWORD *)(v7 + 8);
    v9 = *(_DWORD **)v8;
    v10 = *(_QWORD *)v8 + 24LL * *(_QWORD *)(v8 + 8);
    if ( *(_QWORD *)v8 != v10 )
    {
      while ( (unsigned int)(*v9 - 3) > 1 )
      {
        v9 += 6;
        if ( (_DWORD *)v10 == v9 )
          goto LABEL_8;
      }
      if ( (_DWORD)v6 != -1 )
        goto LABEL_15;
      goto LABEL_7;
    }
LABEL_8:
    ++v5;
  }
  while ( (unsigned __int64)v5 < *(_QWORD *)(a1 + 464) );
  if ( (_DWORD)v6 == -1 )
    return 0;
  v13 = sub_13D280((_QWORD *)a1, v6, a2);
  v14 = *(_QWORD *)(a1 + 1504);
  v15 = v13;
  v16 = *(__int64 (**)())(*(_QWORD *)v14 + 272LL);
  if ( v16 == sub_3392C0 || ((unsigned __int8 (__fastcall *)(__int64, __int64, unsigned __int64))v16)(v14, a1, v15) )
    return 0;
  if ( !(_DWORD)v6 )
    *(_DWORD *)(a1 + 4) &= 0xFFFFFFCF;
  memmove(
    (void *)(*(_QWORD *)(a1 + 456) + 4 * v6),
    (const void *)(*(_QWORD *)(a1 + 456) + 4 * v6 + 4),
    4 * (*(_QWORD *)(a1 + 464) - v6) - 4);
  --*(_QWORD *)(a1 + 464);
  v17 = *(_DWORD *)(v15 + 24);
  BYTE1(v17) &= 0x7Eu;
  *(_DWORD *)(v15 + 24) = v17 | 0x100000;
  return 1;
}

