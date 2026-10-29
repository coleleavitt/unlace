__int64 __fastcall sub_19310(_QWORD **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _QWORD *i; // rbp
  size_t v6; // rdx
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // r13
  char wide_byte; // al

  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( !a3 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)a3;
  if ( v4 == -1 || v4 + *(int *)(a3 + 28) == -1 )
  {
    v9 = *(_QWORD *)(a2 + 16);
    if ( (unsigned __int8)is_mapped() )
    {
      *(_QWORD *)a3 = v9;
      wide_byte = get_wide_byte();
      *(_DWORD *)(a3 + 24) = 1;
      *(_BYTE *)(a3 + 8) = wide_byte;
      *(_BYTE *)(a3 + 16) = wide_byte;
      goto LABEL_5;
    }
    return 0xFFFFFFFFLL;
  }
LABEL_5:
  for ( i = *a1; *i; i += 24 )
  {
    v6 = *(unsigned int *)(a3 + 24);
    *(_DWORD *)(a3 + 28) = 0;
    if ( (int)v6 > 0 )
      memmove((void *)(a3 + 16), (const void *)(a3 + 8), v6);
    v7 = (__int64)i;
    result = sub_19260(v7, a2, a3);
    if ( (_DWORD)result != -3 )
      return result;
  }
  return 0;
}

