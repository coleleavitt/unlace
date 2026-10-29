char __fastcall sub_3EA350(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char result; // al
  char v7; // r13
  int dtype_size; // ecx
  __int64 v9; // rdx
  char v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // edx
  int v14; // eax
  int v15; // [rsp+8h] [rbp-30h]

  if ( !*(_BYTE *)(a1[25] + 64LL) )
    return (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, unsigned __int64, __int64, _QWORD))(*a1 + 24LL))(
             a1,
             a2,
             a3,
             a4,
             0);
  v7 = *(_BYTE *)(a1[1] + 145LL);
  dtype_size = get_dtype_size();
  if ( !dtype_size
    || (dtype_size = sub_3EA210(*(_QWORD *)(a1[1] + 112LL), a2, a1[25], dtype_size, 0, v7), result = 0, dtype_size != -1) )
  {
    result = 1;
    if ( (*(_BYTE *)(a4 + 16) & 0x2A) == 0 )
    {
      v9 = a1[1];
      v10 = *(_BYTE *)(v9 + 145);
      if ( (unsigned int)(*(_DWORD *)(a4 + 8) - 22) > 2 )
      {
        v15 = dtype_size;
        v14 = get_dtype_size();
        dtype_size = v15;
        v13 = v14;
        if ( !v14 )
          return dtype_size != -1;
        v11 = a1[25];
        v12 = *(_QWORD *)(a1[1] + 112LL);
      }
      else
      {
        v11 = a1[25];
        v12 = *(_QWORD *)(v9 + 112);
        v13 = 1;
      }
      dtype_size = sub_3EA210(v12, a3, v11, v13, dtype_size, v10);
      return dtype_size != -1;
    }
  }
  return result;
}

