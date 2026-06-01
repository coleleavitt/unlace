__int64 __fastcall sub_15EB0(__int64 a1, __int64 a2, int a3, char a4)
{
  int v6; // eax
  __m128i si128; // xmm0
  int v9; // eax
  __m128i v10; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h]
  int v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( *(_QWORD *)(get_ash() + 392) )
  {
    v6 = 25;
    si128 = _mm_load_si128((const __m128i *)&xmmword_250C0);
    if ( a3 == 4 )
      v6 = 18;
    v10 = si128;
    v12 = v6;
  }
  else
  {
    v9 = 649;
    v10.m128i_i64[0] = -1;
    if ( a3 == 4 )
      v9 = 642;
    v10.m128i_i64[1] = a2;
    v12 = v9;
  }
  v11 = 0;
  op_offset_ex(a1, 0, &v10);
  if ( a4 )
    return create_xrefs_from(a1);
  else
    return v13 - __readfsqword(0x28u);
}
