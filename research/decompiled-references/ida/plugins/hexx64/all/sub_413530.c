char __fastcall sub_413530(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5)
{
  char result; // al
  char v8; // r13
  int dtype_size; // ecx
  __int64 v10; // rdx
  char v11; // r13
  __int64 v12; // rax
  unsigned __int64 *v13; // rdi
  int v14; // edx
  int v15; // eax
  int v16; // [rsp+8h] [rbp-30h]

  if ( !*(_BYTE *)(a1[25] + 64LL) )
    return (*(char (__fastcall **)(_QWORD *, __int64, __int64, __int64, _QWORD))(*a1 + 24LL))(a1, a2, a3, a4, 0);
  v8 = *(_BYTE *)(a1[1] + 145LL);
  dtype_size = get_dtype_size();
  if ( !dtype_size
    || (dtype_size = sub_4133F0(*(unsigned __int64 **)(a1[1] + 112LL), a2, a1[25], dtype_size, 0, v8, a5),
        result = 0,
        dtype_size != -1) )
  {
    result = 1;
    if ( (*(_BYTE *)(a4 + 16) & 0x2A) == 0 )
    {
      v10 = a1[1];
      v11 = *(_BYTE *)(v10 + 145);
      if ( (unsigned int)(*(_DWORD *)(a4 + 8) - 22) > 2 )
      {
        v16 = dtype_size;
        v15 = get_dtype_size();
        dtype_size = v16;
        v14 = v15;
        if ( !v15 )
          return dtype_size != -1;
        v12 = a1[25];
        v13 = *(unsigned __int64 **)(a1[1] + 112LL);
      }
      else
      {
        v12 = a1[25];
        v13 = *(unsigned __int64 **)(v10 + 112);
        v14 = 1;
      }
      dtype_size = sub_4133F0(v13, a3, v12, v14, dtype_size, v11, a5);
      return dtype_size != -1;
    }
  }
  return result;
}

