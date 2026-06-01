__int64 *__fastcall sub_3C4E0(__int64 *a1, unsigned __int8 a2, __int64 a3, char a4)
{
  int v4; // ebx
  char v5; // al
  unsigned __int64 dtype_size; // rax
  __int64 *result; // rax
  int v8; // esi
  int v9; // eax

  v4 = a2;
  v5 = *(_BYTE *)(a3 + 1);
  if ( (unsigned int)a2 - 129 > 0x41 )
  {
    if ( v5 == 1 && (v8 = *(unsigned __int16 *)(a3 + 6), v4 == v8) )
    {
      v9 = 0;
      if ( !a4 )
        v9 = *(char *)(a3 + 32);
      return (__int64 *)sub_39CD0(a1, v8, v9);
    }
    else
    {
      return (__int64 *)sub_3A4C0(a1, v4, -1);
    }
  }
  else if ( v5 == 1 && a2 == *(unsigned __int16 *)(a3 + 6) )
  {
    return sub_3C2A0((__int64)a1, a2, *(_BYTE *)(a3 + 5), *(char *)(a3 + 32), *(char *)(a3 + 34) - 1);
  }
  else
  {
    dtype_size = get_dtype_size();
    result = (__int64 *)sub_248F0(a1 + 1, a2, dtype_size);
    if ( (__int64)result <= 0 )
    {
      if ( under_debugger )
        BUG();
      interr();
      return (__int64 *)sub_3C5C0(10168);
    }
  }
  return result;
}

