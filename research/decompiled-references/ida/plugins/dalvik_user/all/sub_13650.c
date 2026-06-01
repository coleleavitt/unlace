__int64 __fastcall sub_13650(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rcx
  __int64 (__fastcall *v12)(_QWORD *, __int64, __int64, unsigned int, unsigned int, __int64); // r10
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rdi

  v7 = a3 + 56LL * (int)a4;
  if ( a3 == v7 )
  {
    v10 = 1;
    goto LABEL_9;
  }
  v8 = a3;
  v9 = 0;
  do
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(v8 + 40) == 9 )
        goto LABEL_4;
      if ( *(_DWORD *)(v8 + 32) != 8 )
        break;
      *(_BYTE *)(v8 + 40) = 0;
      v9 = 1;
LABEL_4:
      v8 += 56;
      if ( v7 == v8 )
        goto LABEL_8;
    }
    *(_BYTE *)(v8 + 40) = 2;
    v8 += 56;
  }
  while ( v7 != v8 );
LABEL_8:
  v10 = v9 ^ 1u;
LABEL_9:
  if ( a5 || !(_BYTE)v10 )
  {
    v12 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, unsigned int, unsigned int, __int64))(*(_QWORD *)a1 + 56LL);
    if ( v12 == sub_F7F0 )
    {
      v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL);
      if ( v13 == sub_F0E0 )
        v14 = a1 + 224;
      else
        v14 = ((__int64 (__fastcall *)(__int64, _DWORD *, __int64 (__fastcall *)(__int64), __int64))v13)(
                a1,
                a2,
                sub_F0E0,
                v10);
      return (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD))(*(_QWORD *)v14 + 328LL))(v14, a2, a3, a4);
    }
    else
    {
      return ((__int64 (__fastcall *)(__int64, _DWORD *, __int64, _QWORD))v12)(a1, a2, a3, a4);
    }
  }
  else
  {
    if ( a2 )
      *a2 = 0;
    return 1;
  }
}

