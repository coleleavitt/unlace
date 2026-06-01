__int64 __fastcall sub_30B70(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+8h] [rbp-40h] BYREF
  __int64 v5; // [rsp+10h] [rbp-38h] BYREF
  __m128 v6; // [rsp+18h] [rbp-30h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  unsigned __int64 v8; // [rsp+38h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  LOBYTE(v5) = 1;
  v7 = 0;
  v6 = _mm_loadh_ps((const double *)(a1 + 32));
  v4 = -1;
  v2 = sub_135E0(a1, a2);
  sub_2CA10((_QWORD *)(v2 + 1040), &v4, &v5);
  return v4;
}

