char __fastcall sub_3F67C0(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        double a6)
{
  unsigned int v8; // r13d
  unsigned int v9; // eax
  __int64 v10; // r13
  int dtype_size; // ebp
  char result; // al
  unsigned int v13; // [rsp+Ch] [rbp-3Ch]

  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL);
  v8 = sub_3F6740(a1, a3, a2, v13, 1, a6);
  v9 = sub_3F6740(a1, a4, a2, v13, 1, a6);
  sub_1D6F50(a1, 1u, a2, v8, v9, a5);
  v10 = *(_QWORD *)(a1 + 832);
  dtype_size = get_dtype_size();
  result = sub_11E2E0(0x17u);
  if ( result )
  {
    if ( *(_DWORD *)(v10 + 80) == 8 )
    {
      result = a5 - 8;
      if ( a5 - 8 <= 0x107 && dtype_size == 4 )
        return sub_1D6180(a1, 2, 7, a5, a5, 0);
    }
  }
  return result;
}

