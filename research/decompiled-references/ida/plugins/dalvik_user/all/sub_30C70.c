__int64 __fastcall sub_30C70(const __m128i *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v6; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h] BYREF
  __m128i v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  unsigned __int64 v10; // [rsp+38h] [rbp-10h]

  v2 = a1[2].m128i_i64[0];
  v10 = __readfsqword(0x28u);
  LOBYTE(v7) = 1;
  v3 = *(int *)(v2 + 80);
  v8 = _mm_loadu_si128(a1 + 1);
  v9 = *(_QWORD *)v2 + v3;
  v6 = 0;
  v4 = sub_135E0(a1, a2);
  sub_2DB20((_QWORD *)(v4 + 1040), &v6, nullptr, nullptr, &v7);
  return v6;
}

