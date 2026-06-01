unsigned __int64 __fastcall sub_3F01A0(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 a4,
        char a5,
        char a6,
        double a7)
{
  unsigned __int8 dtype_by_size; // al
  __int64 v13; // rdi
  unsigned __int8 v14; // r12
  __int64 (__fastcall *v15)(_DWORD *, unsigned int); // rax
  unsigned int v16; // r8d
  __int64 v17; // rdx
  unsigned int v18; // r13d
  unsigned int v20; // eax

  dtype_by_size = get_dtype_by_size();
  v13 = *(_QWORD *)(a1 + 832);
  v14 = dtype_by_size;
  v15 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v13 + 168LL);
  if ( v15 == sub_3E59C0 )
  {
    v16 = sub_3E59C0((_DWORD *)v13, a4);
  }
  else
  {
    v20 = v15((_DWORD *)v13, a4);
    v13 = *(_QWORD *)(a1 + 832);
    v16 = v20;
  }
  v17 = *(_QWORD *)(v13 + 4464);
  if ( !v17 )
    sub_3E6800(a7);
  v18 = *(_DWORD *)(*(_QWORD *)(v13 + 4456) + 4 * v17 - 4);
  *(_QWORD *)(v13 + 4464) = v17 - 1;
  sub_1D3050(a1, 0, v14, a3, v16, v18);
  return sub_3EFAA0(a1, a2, v18, a5, a6, a7);
}

