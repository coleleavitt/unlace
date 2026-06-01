_DWORD *__fastcall sub_3EAAD0(_DWORD *a1, __int64 a2, int *a3, int a4, char a5, char a6)
{
  __int64 *v9; // rax
  int v10; // esi
  int v11; // r15d
  int v12; // edx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64); // rax
  char v15; // al
  int v16; // ecx

  v9 = *(__int64 **)(*(_QWORD *)(a2 + 8) + 784LL);
  if ( a5 )
  {
    if ( a6 )
      v10 = *(_DWORD *)(a2 + 76);
    else
      v10 = *(_DWORD *)(a2 + 84);
    v11 = *((_DWORD *)v9 + 7);
  }
  else
  {
    if ( a6 )
      v10 = *(_DWORD *)(a2 + 72);
    else
      v10 = *(_DWORD *)(a2 + 80);
    v11 = *((_DWORD *)v9 + 6);
  }
  v12 = -v11 & (v11 - 1 + *a3);
  *a3 = v12;
  v13 = *v9;
  v14 = (__int64 (__fastcall *)(__int64))v9[6];
  if ( v14 )
  {
    v15 = v14(v13);
    v12 = *a3;
  }
  else
  {
    v15 = *(_BYTE *)(v13 + 145);
  }
  v16 = v10 + v12;
  if ( v15 )
    v16 = v11 + v10 - ((a4 + v11 - 1) & -v11) - v12;
  *a3 = a4 + v12;
  *a1 = 1;
  a1[1] = a4;
  a1[2] = v16;
  return a1;
}

