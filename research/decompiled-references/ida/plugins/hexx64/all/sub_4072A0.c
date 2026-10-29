__int64 __fastcall sub_4072A0(__int64 a1, unsigned int a2, unsigned __int8 a3, signed int a4, int a5, double a6)
{
  unsigned int v7; // r12d
  __int64 v9; // r15
  int dtype_size; // eax
  __int64 v11; // rbp
  int v12; // eax
  int v13; // eax

  v7 = a3;
  v9 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
  dtype_size = get_dtype_size();
  sub_1D6310(a1, a2, dtype_size, a4, a5, v9, a6, 0);
  sub_1D6C50(a1, a2 == 28, v7, a4, a5, a4);
  v11 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
  v12 = get_dtype_size();
  sub_1D6310(a1, 4u, v12, v11, 0x3BEA45E214ADDC55LL, 0, a6, 0);
  v13 = get_dtype_size();
  return sub_1D6310(a1, 0x3Du, v13, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 3, a6, 0);
}

