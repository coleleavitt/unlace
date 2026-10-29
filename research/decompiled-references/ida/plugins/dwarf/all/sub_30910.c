__int64 __fastcall sub_30910(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const __m128i **a5)
{
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_30760(a1, a2, a3, a4, a5, 1u) )
  {
    v6[0] = 1;
    copy_tinfo_t(a2, v6);
    clear_tinfo_t(v6);
  }
  return 1;
}

