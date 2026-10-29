__int64 __fastcall sub_202CA0(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        __m128i *a4,
        unsigned __int64 a5,
        __int64 a6,
        double a7,
        char a8)
{
  __int64 v13; // rdi

  v13 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(v13 + 2) & 4) != 0 )
  {
    if ( !(unsigned __int8)sub_1EEA60((unsigned __int8 *)v13) )
    {
      if ( !under_debugger )
        sub_383060(0xC4A4u, a7);
      BUG();
    }
    v13 = *(_QWORD *)(a1 + 56);
  }
  ++*(_DWORD *)(v13 + 912);
  return sub_108C40(
           a4,
           a5,
           a6,
           *(_QWORD *)(a1 + 56),
           a2,
           a3,
           a7,
           a8,
           (__int64 *)(*(_QWORD *)(a1 + 56) + 496LL),
           nullptr);
}

