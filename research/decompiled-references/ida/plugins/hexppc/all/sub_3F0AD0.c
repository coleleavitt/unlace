unsigned __int64 __fastcall sub_3F0AD0(__int64 a1, int a2, int a3)
{
  __int64 v3; // r12
  int dtype_size; // eax

  v3 = a3;
  dtype_size = get_dtype_size();
  sub_1D2710(a1, 4u, dtype_size, v3, 0x3BEA45E214ADDC55LL, a2, 0);
  return sub_3EC840(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
}

