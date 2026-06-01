char __fastcall sub_3F8480(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned int a4, int a5, double a6)
{
  __int64 v9; // rax
  unsigned int v10; // r15d
  int v11; // r13d
  int v12; // r14d
  char v13; // al
  int v14; // r10d
  __int64 v15; // r13
  int dtype_size; // ebp
  char result; // al
  int v18; // [rsp+Ch] [rbp-3Ch]

  v9 = *(_QWORD *)(a1 + 832);
  v10 = *(_DWORD *)(v9 + 628);
  v18 = *(_DWORD *)(v9 + 620);
  sub_3F55F0(a1, 0xCu, a5);
  v11 = sub_3F6740(a1, a3, a2, v10, 1, a6);
  v12 = sub_3F6740(a1, a4, a2, v10, 1, a6);
  v13 = sub_3EAA70(a1 + 24);
  v14 = v18;
  if ( !v13 )
    v14 = -1;
  sub_1D6250(a1, a2, v11, v12, a5, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL), v14);
  v15 = *(_QWORD *)(a1 + 832);
  dtype_size = get_dtype_size();
  result = sub_11E2E0(0xCu);
  if ( result )
  {
    if ( *(_DWORD *)(v15 + 80) == 8 )
    {
      result = a5 - 8;
      if ( (unsigned int)(a5 - 8) <= 0x107 && dtype_size == 4 )
        return sub_1D6180(a1, 2, 7, a5, a5, 0);
    }
  }
  return result;
}

