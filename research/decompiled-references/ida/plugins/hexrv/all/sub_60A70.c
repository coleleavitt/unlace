unsigned __int64 __fastcall sub_60A70(__int64 a1, __int64 a2)
{
  __m128 v3; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+10h] [rbp-28h]
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v4 = 0;
  v3 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
  sub_609F0(a1, a2, (__int64)&v3);
  return v5 - __readfsqword(0x28u);
}

