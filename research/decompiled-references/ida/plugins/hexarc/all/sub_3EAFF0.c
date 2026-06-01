__int64 __fastcall sub_3EAFF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
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
  int v17; // [rsp+0h] [rbp-38h]

  v5 = 0;
  if ( *(_DWORD *)(a1 + 76) != -1 )
  {
    v8 = *(unsigned __int8 *)(a4 + 12);
    if ( (unsigned __int8)v8 <= 0x12u )
    {
      v9 = 294968;
      v5 = _bittest64(&v9, v8);
    }
  }
  v10 = *(_DWORD *)(a4 + 16);
  v11 = 0;
  v12 = (v10 >> 10) & 1;
  if ( (v10 & 0x2A) == 0 )
  {
    v11 = 1;
    if ( (unsigned int)(*(_DWORD *)(a4 + 8) - 22) <= 2 )
      goto LABEL_8;
    dtype_size = get_dtype_size();
    v10 = *(_DWORD *)(a4 + 16);
    v11 = dtype_size;
  }
  v13 = 0;
  if ( (v10 & 8) == 0 )
  {
LABEL_8:
    v17 = v11;
    v15 = get_dtype_size();
    v11 = v17;
    v13 = v15;
  }
  return sub_3EAE40(a1, a2, a3, v13, v11, v5, a5, 1, v12);
}

