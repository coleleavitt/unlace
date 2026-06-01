__int64 __fastcall sub_1D6840(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned __int8 a6,
        __m128i a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v11; // rsi
  __int64 v12; // rbx
  int v14; // [rsp+0h] [rbp-68h] BYREF
  int dtype_size; // [rsp+4h] [rbp-64h]
  int v16; // [rsp+8h] [rbp-60h]
  int v17; // [rsp+10h] [rbp-58h] BYREF
  int v18; // [rsp+14h] [rbp-54h]
  int v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v16 = a4;
  v11 = 4;
  v14 = 1;
  v17 = 1;
  dtype_size = get_dtype_size();
  v18 = get_dtype_size();
  v19 = a5;
  if ( dtype_size != v18 )
    v11 = 9 - (unsigned int)a6;
  v12 = sub_1D6450(a1, v11, (unsigned __int8 *)&v14, nullptr, (unsigned __int8 *)&v17, a7, a8, a9);
  sub_11CDA0((__int64)&v17);
  sub_11CDA0((__int64)&v14);
  return v12;
}

