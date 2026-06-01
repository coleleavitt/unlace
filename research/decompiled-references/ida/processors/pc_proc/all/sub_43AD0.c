unsigned __int64 __fastcall sub_43AD0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64))
{
  __int64 v7; // r13
  __int64 v9; // r12
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r13
  char v15; // cl
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // [rsp+8h] [rbp-70h]
  __m128i v20; // [rsp+10h] [rbp-68h] BYREF
  __m128i v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v7 = (a3 - 1) / 2;
  v20.m128i_i64[0] = a4;
  v20.m128i_i64[1] = a5;
  v22 = __readfsqword(0x28u);
  v19 = a3 & 1;
  if ( a2 >= v7 )
  {
    v12 = a1 + 16 * a2;
    if ( (a3 & 1) != 0 )
    {
      v21 = _mm_load_si128(&v20);
      goto LABEL_10;
    }
    v9 = a2;
  }
  else
  {
    v9 = a2;
    do
    {
      v10 = a6(a1 + 32 * (v9 + 1), a1 + 32 * (v9 + 1) - 16);
      v11 = a1 + 16 * v9;
      v9 = 2 * (v9 + 1) - v10;
      v12 = a1 + 16 * v9;
      *(_QWORD *)v11 = *(_QWORD *)v12;
      *(_DWORD *)(v11 + 8) = *(_DWORD *)(v12 + 8);
    }
    while ( v9 < v7 );
    if ( v19 )
      goto LABEL_5;
  }
  if ( (a3 - 2) / 2 == v9 )
  {
    v17 = v9 + 1;
    v9 = 2 * (v9 + 1) - 1;
    v18 = a1 + 32 * v17;
    *(_QWORD *)v12 = *(_QWORD *)(v18 - 16);
    *(_DWORD *)(v12 + 8) = *(_DWORD *)(v18 - 8);
    v12 = a1 + 16 * v9;
  }
LABEL_5:
  v21 = _mm_load_si128(&v20);
  v13 = (v9 - 1) / 2;
  if ( v9 > a2 )
  {
    while ( 1 )
    {
      v14 = a1 + 16 * v13;
      v15 = a6(v14, (__int64)&v21);
      v12 = a1 + 16 * v9;
      if ( !v15 )
        break;
      v9 = v13;
      *(_QWORD *)v12 = *(_QWORD *)v14;
      *(_DWORD *)(v12 + 8) = *(_DWORD *)(v14 + 8);
      if ( a2 >= v13 )
      {
        v12 = a1 + 16 * v13;
        break;
      }
      v13 = (v13 - 1) / 2;
    }
  }
LABEL_10:
  *(_QWORD *)v12 = v21.m128i_i64[0];
  *(_DWORD *)(v12 + 8) = v21.m128i_i32[2];
  return v22 - __readfsqword(0x28u);
}

