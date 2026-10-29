__int64 __fastcall sub_4142A0(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3, __int64 a4, double a5)
{
  char v5; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // edx
  int v11; // r8d
  int v12; // r14d
  int v13; // ecx
  int v15; // eax
  int dtype_size; // eax
  int v17; // [rsp+Ch] [rbp-3Ch]

  v5 = 0;
  if ( *(_DWORD *)(a1 + 84) != -1 )
  {
    v8 = *(unsigned __int8 *)(a4 + 13);
    if ( (unsigned __int8)v8 <= 0x12u )
    {
      v9 = 294968;
      v5 = _bittest64(&v9, v8);
    }
  }
  v10 = *(_DWORD *)(a4 + 16);
  v11 = 0;
  v12 = (v10 >> 11) & 1;
  if ( (v10 & 1) != 0 )
  {
    dtype_size = get_dtype_size();
    v10 = *(_DWORD *)(a4 + 16);
    v11 = dtype_size;
  }
  v13 = 0;
  if ( (v10 & 0x40) == 0 )
  {
    v17 = v11;
    v15 = get_dtype_size();
    v11 = v17;
    v13 = v15;
  }
  return sub_414020(a1, a2, a3, v13, v11, v5, a5, 0, v12);
}

