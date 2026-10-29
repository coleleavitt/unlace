__int64 __fastcall sub_3EFB80(__int64 a1, unsigned __int8 *a2, int a3, double a4)
{
  __int64 v4; // r12
  unsigned __int16 v6; // ax
  __int64 v7; // rdi
  int v8; // ebp
  int v9; // eax
  int v11; // r13d
  __int64 v12; // rbp
  int dtype_size; // eax

  v4 = a3;
  v6 = *((_WORD *)a2 + 13);
  v7 = *(_QWORD *)(a1 + 832);
  if ( v6 == 0xFFFF )
  {
    v11 = *a2;
    v12 = *((unsigned __int16 *)a2 + 12);
    dtype_size = get_dtype_size();
    sub_1D6310(a1, 3u, dtype_size, v12, 0x3BEA45E214ADDC55LL, v4, a4, v11);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 168LL))(v7, v6);
    v9 = get_dtype_size();
    sub_1D6310(a1, 4u, v9, v8, 0x3BEA45E214ADDC55LL, v4, a4, 0);
  }
  return 1;
}

