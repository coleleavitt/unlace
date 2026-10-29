__int64 __fastcall sub_2C930(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v3; // r13
  _QWORD *v4; // rbp
  __int64 v5; // rax
  _QWORD *v7; // rax
  __m128i v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v3 = a1 + 23;
  v9 = __readfsqword(0x28u);
  v8.m128i_i64[0] = a2;
  v8.m128i_i64[1] = a3;
  v4 = sub_24540((__int64)(a1 + 23), (unsigned __int64 *)&v8);
  if ( v4 != a1 + 24 )
  {
    v5 = *((int *)v4 + 12);
    if ( (_DWORD)v5 != -1 )
      return a1[20] + 392 * v5;
    return 0;
  }
  if ( !(unsigned __int8)sub_2B140(a1, a2) )
    return 0;
  v7 = sub_24540((__int64)v3, (unsigned __int64 *)&v8);
  if ( v4 != v7 )
  {
    v5 = *((int *)v7 + 12);
    if ( (_DWORD)v5 != -1 )
      return a1[20] + 392 * v5;
    return 0;
  }
  sub_1F510(v3, &v8)->m128i_i32[0] = -1;
  return 0;
}

