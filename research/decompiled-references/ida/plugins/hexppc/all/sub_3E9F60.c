unsigned __int64 __fastcall sub_3E9F60(__int64 a1, const __m128i *a2, int a3)
{
  __int64 v3; // rax
  char v5; // dl
  __int64 v6; // rax
  __int64 v7; // rcx
  bool v8; // zf
  _OWORD v10[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+20h] [rbp-18h]
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  v3 = a2[2].m128i_i64[0];
  v12 = __readfsqword(0x28u);
  v5 = 7;
  v10[0] = _mm_loadu_si128(a2);
  v11 = v3;
  v6 = *(_QWORD *)(a1 + 832);
  v7 = *((_QWORD *)&v10[0] + 1) << 16;
  v10[1] = _mm_loadu_si128(a2 + 1);
  v8 = *(_DWORD *)(v6 + 84) == 8;
  *((_QWORD *)&v10[0] + 1) <<= 16;
  if ( !v8 )
    v5 = 2;
  sub_3E9DD0(a1, (unsigned __int8 *)v10, v5, v7, a3);
  return v12 - __readfsqword(0x28u);
}

