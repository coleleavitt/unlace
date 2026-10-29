unsigned __int64 __fastcall sub_22D560(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __m128 v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  get_func();
  delete_frame_members();
  v8 = *(_QWORD *)(a1 + 816);
  v7 = _mm_loadh_ps((const double *)&v8);
  if ( (unsigned __int8)sub_222380((__int64)&v7, a3, a4) )
    sub_22B0F0((__int64)&v7, 0xFFFFFFFFFFFFFFFFLL, 0);
  return v9 - __readfsqword(0x28u);
}

