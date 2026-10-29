__int64 __fastcall sub_27510(__int64 a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v4; // ebx

  v4 = sub_266F0(a1, (__int64)"info cpu\n", 1);
  if ( !v4 )
  {
    v4 = sub_2A4A0(a1 + 16, *(_QWORD *)(a1 + 72), a2, a3);
    if ( !v4 && (a3 & 0x10) != 0 && (*a2 & 0x10) == 0 )
    {
      v4 = sub_266F0(a1, (__int64)"xmm\n", 30);
      if ( !v4 )
        sub_2A390(a1 + 16, *(_QWORD *)(a1 + 72), a2);
    }
  }
  return v4;
}

