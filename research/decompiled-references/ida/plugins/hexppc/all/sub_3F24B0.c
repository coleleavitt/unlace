__int64 __fastcall sub_3F24B0(__int64 a1, unsigned int a2, int a3, int a4, int a5, double a6)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v11; // r15
  int dtype_size; // eax
  int v13; // eax

  v6 = a3;
  v7 = *(_QWORD *)(a1 + 832);
  v8 = *(_QWORD *)(v7 + 4464);
  if ( !v8 )
    sub_3E6800(a6);
  v11 = *(int *)(*(_QWORD *)(v7 + 4456) + 4 * v8 - 4);
  *(_QWORD *)(v7 + 4464) = v8 - 1;
  dtype_size = get_dtype_size();
  sub_1D2710(a1, 0x47u, dtype_size, a4, a5, v11, -1);
  v13 = get_dtype_size();
  return sub_1D2710(a1, a2, v13, v11, v6, v6, -1);
}

