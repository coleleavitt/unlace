__int64 __fastcall sub_C770(_BYTE *a1, _DWORD *a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  char v10; // r10
  int v11; // edx
  int v12; // ecx
  char v13; // r10
  __int64 (__fastcall *v15)(_QWORD *, __int64, __int64, unsigned int, unsigned int, __int64); // r10
  __int64 (*v16)(void); // rax
  __int64 v17; // rdi

  v8 = a3 + 56LL * (int)a4;
  if ( a3 == v8 )
  {
    v13 = 1;
    goto LABEL_14;
  }
  v9 = a3;
  v10 = 0;
  do
  {
    if ( *(_BYTE *)(v9 + 40) == 9 )
      goto LABEL_12;
    v11 = *(_DWORD *)(v9 + 32);
    if ( v11 == 4 )
    {
LABEL_11:
      *(_BYTE *)(v9 + 40) = 0;
      v10 = 1;
      goto LABEL_12;
    }
    if ( (a1[154] & 0x40) != 0 )
    {
      if ( v11 )
        goto LABEL_11;
LABEL_24:
      *(_BYTE *)(v9 + 40) = 2;
      goto LABEL_12;
    }
    v12 = *(_DWORD *)(v9 + 36);
    if ( (v11 & 0xFFFFFFFD) != 1 )
    {
      if ( v11 != 8 )
        goto LABEL_24;
      if ( v12 == 1 )
        goto LABEL_11;
LABEL_27:
      *(_BYTE *)(v9 + 40) = 5;
      goto LABEL_12;
    }
    if ( v12 == 1 )
      goto LABEL_11;
    if ( ((v12 - 2) & 0xFFFFFFFD) != 0 && v12 != 8 )
      goto LABEL_27;
    if ( (*(_QWORD *)v9 & (v12 - 1)) == 0 )
      goto LABEL_11;
    *(_BYTE *)(v9 + 40) = 3;
LABEL_12:
    v9 += 56;
  }
  while ( v8 != v9 );
  v13 = v10 ^ 1;
LABEL_14:
  if ( a5 || !v13 )
  {
    v15 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, unsigned int, unsigned int, __int64))(*(_QWORD *)a1 + 56LL);
    if ( v15 == sub_AA10 )
    {
      v16 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
      if ( (char *)v16 == (char *)sub_A6F0 )
        v17 = (__int64)(a1 + 224);
      else
        v17 = v16();
      return (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD))(*(_QWORD *)v17 + 328LL))(v17, a2, a3, a4);
    }
    else
    {
      return ((__int64 (__fastcall *)(_BYTE *, _DWORD *, __int64, _QWORD))v15)(a1, a2, a3, a4);
    }
  }
  else
  {
    if ( a2 )
      *a2 = 0;
    return 1;
  }
}

