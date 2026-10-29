__int64 __fastcall sub_2C22D0(__int64 a1, __int64 *a2, __m128i a3)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned int v6; // [rsp+4h] [rbp-34h] BYREF
  __int64 *v7; // [rsp+8h] [rbp-30h] BYREF
  __m128i v8[2]; // [rsp+10h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v8[0].m128i_i64[1] = __readfsqword(0x28u);
  v6 = -1;
  if ( v3 == -1 )
    return 0xFFFFFFFFLL;
  v4 = *a2;
  v7 = (__int64 *)v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 104) += 2;
    v8[0].m128i_i64[0] = v4;
  }
  else
  {
    v8[0].m128i_i64[0] = 0;
  }
  sub_38BEC0(v8, v3, nullptr, &v6, 0, a3);
  sub_140140((__int64 **)v8);
  sub_140140(&v7);
  return v6;
}

