unsigned __int64 __fastcall sub_19C0B0(__int64 a1, double a2)
{
  unsigned __int64 v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rdi
  _QWORD v6[5]; // [rsp+0h] [rbp-58h] BYREF
  char v7; // [rsp+28h] [rbp-30h]
  __m128i v8; // [rsp+30h] [rbp-28h]
  unsigned __int64 v9; // [rsp+48h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 128) )
  {
    if ( !under_debugger )
      sub_383060(0xC99Cu, a2);
    BUG();
  }
  if ( **(_QWORD **)(a1 + 120) )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v7 = 0;
    v3 = (__m128i)(unsigned __int64)(a1 + 120);
    memset(&v6[1], 0, 32);
    v4 = *(_QWORD *)(v2 + 280);
    v6[0] = &off_4DE238;
    v8 = _mm_unpacklo_epi64(v3, (__m128i)v2);
    sub_11FBB0(v4, (__int64)v6);
  }
  return v9 - __readfsqword(0x28u);
}

