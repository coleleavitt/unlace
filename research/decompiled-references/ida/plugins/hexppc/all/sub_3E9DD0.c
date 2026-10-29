unsigned __int64 __fastcall sub_3E9DD0(__int64 a1, unsigned __int8 *a2, char a3, __int64 a4, int a5)
{
  int dtype_size; // r8d
  int v9; // ebx
  int v10; // eax
  int v11; // [rsp+0h] [rbp-70h]
  unsigned __int64 v13; // [rsp+10h] [rbp-60h] BYREF
  __int64 v14; // [rsp+18h] [rbp-58h]
  _DWORD v15[6]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  v14 = 0;
  v13 = 0xFFFFFFFF00000000LL;
  dtype_size = get_dtype_size();
  if ( a2[1] != 7 && ((unsigned __int8)(a3 - 3) <= 1u || a3 == 15) )
  {
    v11 = dtype_size;
    LOBYTE(v13) = 13;
    v14 = j__qalloc_or_throw();
    *(_DWORD *)(v14 + 16) = v11;
    HIDWORD(v13) = v11;
    sub_CC530();
    dtype_size = v11;
  }
  if ( (_BYTE)v13 )
  {
    v15[0] = 1;
    v15[2] = a5;
    v15[1] = dtype_size;
    sub_1D2850(a1, 4, (unsigned __int8 *)&v13, nullptr, (unsigned __int8 *)v15);
    sub_119360((__int64)v15);
  }
  else
  {
    v9 = *a2;
    v10 = get_dtype_size();
    sub_1D2710(a1, 3u, v10, a4, 0x3BEA45E214ADDC55LL, a5, v9);
  }
  sub_119360((__int64)&v13);
  return v16 - __readfsqword(0x28u);
}

