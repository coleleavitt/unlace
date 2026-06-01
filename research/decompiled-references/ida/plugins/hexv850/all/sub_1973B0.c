unsigned __int64 __fastcall sub_1973B0(__int64 a1)
{
  unsigned __int64 v1; // rax
  __m128i v2; // xmm0
  __int64 v3; // rdi
  _QWORD v5[5]; // [rsp+0h] [rbp-58h] BYREF
  char v6; // [rsp+28h] [rbp-30h]
  __m128i v7; // [rsp+30h] [rbp-28h]
  unsigned __int64 v8; // [rsp+48h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 128) )
  {
    if ( !under_debugger )
      sub_37CFE0(51612);
    BUG();
  }
  if ( **(_QWORD **)(a1 + 120) )
  {
    v1 = *(_QWORD *)(a1 + 16);
    v6 = 0;
    v2 = (__m128i)(unsigned __int64)(a1 + 120);
    memset(&v5[1], 0, 32);
    v3 = *(_QWORD *)(v1 + 280);
    v5[0] = off_4B1C18;
    v7 = _mm_unpacklo_epi64(v2, (__m128i)v1);
    sub_11AFF0(v3, (__int64)v5);
  }
  return v8 - __readfsqword(0x28u);
}

