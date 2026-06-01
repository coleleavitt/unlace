__int64 __fastcall sub_3EF420(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rbp
  int dtype_size; // eax
  int v6; // eax

  v3 = *(_DWORD *)(a2 + 8);
  v4 = *(int *)(*(_QWORD *)(a1 + 832) + 388LL);
  dtype_size = get_dtype_size();
  sub_1D6310(a1, v3, dtype_size, 8, v4, 8, a3, 0);
  v6 = get_dtype_size();
  sub_1D6310(a1, 0x3Du, v6, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, v4, a3, 0);
  return 0;
}

