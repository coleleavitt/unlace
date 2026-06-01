__int64 __fastcall sub_27B6B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  _QWORD v4[7]; // [rsp+0h] [rbp-38h] BYREF

  v4[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) == 80 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v3 + 8) == 61 && !sub_250670(*(__int64 **)(v3 + 24)) )
    {
      if ( !(unsigned __int8)*(_QWORD *)(a1 + 80) )
      {
        sub_3676A0(v4, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL), 0);
        copy_tinfo_t();
        clear_tinfo_t();
      }
      if ( (get_tinfo_property() & 0xF) == 0xA && !*(_BYTE *)(*(_QWORD *)(v3 + 24) + 13LL) )
      {
        copy_tinfo_t();
        *(_BYTE *)(a1 + 88) = 1;
      }
    }
  }
  return 0;
}

