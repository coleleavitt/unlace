__int64 __fastcall sub_36A540(__int64 a1)
{
  char v2; // dl
  __int64 v3; // rax
  int v4; // r12d
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 (*v15)(); // rax
  int v16; // eax

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 56LL))(*(_QWORD *)(a1 + 936));
  v3 = *(_QWORD *)(a1 + 464);
  if ( v2 && v3 == 1 || !v3 )
    return 0;
  v4 = 0;
  v5 = -1;
  do
  {
    v6 = sub_136BC0((_QWORD *)a1, v4);
    if ( *(_DWORD *)v6 != 2 )
    {
      if ( (unsigned int)(*(_DWORD *)v6 - 3) > 1 )
        goto LABEL_8;
      if ( (_DWORD)v5 != -1 )
      {
LABEL_15:
        v10 = *(_DWORD *)(a1 + 72);
        if ( v10 <= 0x10 )
          v10 = getinf();
        if ( v10 != 176 && v10 != 256 )
          return 0;
      }
LABEL_7:
      v5 = v4;
      goto LABEL_8;
    }
    v7 = *(_QWORD *)(v6 + 8);
    v8 = *(_DWORD **)v7;
    v9 = *(_QWORD *)v7 + 24LL * *(_QWORD *)(v7 + 8);
    if ( *(_QWORD *)v7 != v9 )
    {
      while ( (unsigned int)(*v8 - 3) > 1 )
      {
        v8 += 6;
        if ( (_DWORD *)v9 == v8 )
          goto LABEL_8;
      }
      if ( (_DWORD)v5 != -1 )
        goto LABEL_15;
      goto LABEL_7;
    }
LABEL_8:
    ++v4;
  }
  while ( (unsigned __int64)v4 < *(_QWORD *)(a1 + 464) );
  if ( (_DWORD)v5 == -1 )
    return 0;
  v12 = sub_136BC0((_QWORD *)a1, v5);
  v13 = *(_QWORD *)(a1 + 1504);
  v14 = v12;
  v15 = *(__int64 (**)())(*(_QWORD *)v13 + 272LL);
  if ( v15 == sub_331D40 || ((unsigned __int8 (__fastcall *)(__int64, __int64, __int64))v15)(v13, a1, v14) )
    return 0;
  if ( !(_DWORD)v5 )
    *(_DWORD *)(a1 + 4) &= 0xFFFFFFCF;
  memmove(
    (void *)(*(_QWORD *)(a1 + 456) + 4 * v5),
    (const void *)(*(_QWORD *)(a1 + 456) + 4 * v5 + 4),
    4 * (*(_QWORD *)(a1 + 464) - v5) - 4);
  --*(_QWORD *)(a1 + 464);
  v16 = *(_DWORD *)(v14 + 24);
  BYTE1(v16) &= 0x7Eu;
  *(_DWORD *)(v14 + 24) = v16 | 0x100000;
  return 1;
}

