unsigned __int64 __fastcall sub_3F1660(__int64 a1, int a2, int a3, unsigned int a4, char a5)
{
  int dtype_size; // eax
  int v8; // edx
  int v10; // eax
  __int64 v11; // [rsp+0h] [rbp-60h] BYREF
  int v12; // [rsp+8h] [rbp-58h]
  __int64 v13; // [rsp+10h] [rbp-50h] BYREF
  int v14; // [rsp+18h] [rbp-48h]
  unsigned __int64 v15; // [rsp+28h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( a5 )
  {
    v12 = a3;
    v14 = a2;
    v11 = 0x800000001LL;
    v13 = 0x400000001LL;
    sub_1D2850(a1, a4, (unsigned __int8 *)&v11, nullptr, (unsigned __int8 *)&v13);
    dtype_size = get_dtype_size();
    sub_1D2710(a1, 0x3Du, dtype_size, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, a2 + 4, 0);
    sub_119360((__int64)&v13);
    sub_119360((__int64)&v11);
    v8 = 4;
  }
  else
  {
    v10 = get_dtype_size();
    sub_1D2710(a1, a4, v10, a3, 0x3BEA45E214ADDC55LL, a2, 0);
    v8 = 8;
  }
  return sub_3EC840(a1, a2, v8);
}

