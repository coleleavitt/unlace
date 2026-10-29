__int64 __fastcall sub_3EFAF0(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5, double a6, __m128 a7)
{
  int dtype_size; // eax
  unsigned __int8 *v10; // rcx
  __int64 v11; // rbx
  unsigned int v13; // [rsp+Ch] [rbp-5Ch]
  unsigned __int64 v14; // [rsp+10h] [rbp-58h] BYREF
  __int64 v15; // [rsp+18h] [rbp-50h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v14 = 0xFFFFFFFF00000000LL;
  v15 = 0;
  if ( a4 == -1 )
  {
    v10 = nullptr;
  }
  else
  {
    v13 = a5;
    dtype_size = get_dtype_size();
    LOBYTE(v14) = 1;
    a5 = v13;
    v10 = (unsigned __int8 *)&v14;
    LODWORD(v15) = a4;
    HIDWORD(v14) = dtype_size;
  }
  v11 = sub_3EF590(a1, a2, a3, v10, a5, a6, a7);
  sub_11C7E0((__int64)&v14);
  return v11;
}

