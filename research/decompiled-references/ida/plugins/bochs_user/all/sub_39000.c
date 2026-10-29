unsigned __int64 __fastcall sub_39000(__int64 a1, __int64 a2)
{
  *(__m128i *)(a1 + 636) = _mm_unpacklo_epi64(
                             (__m128i)(unsigned __int64)(a1 + 636),
                             (__m128i)(unsigned __int64)(a1 + 636));
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = off_71C40;
  *(_QWORD *)(a1 + 612) = 0;
  *(_QWORD *)(a1 + 652) = 0;
  *(_DWORD *)(a1 + 668) = 0;
  *(_QWORD *)(a1 + 676) = 0;
  *(_QWORD *)(a1 + 684) = a1 + 668;
  *(_QWORD *)(a1 + 692) = a1 + 668;
  *(_QWORD *)(a1 + 700) = 0;
  *(_QWORD *)(a1 + 708) = 0;
  *(_DWORD *)(a1 + 788) = 0;
  *(_QWORD *)(a1 + 828) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 620) = 0;
  *(_OWORD *)(a1 + 716) = 0;
  *(_OWORD *)(a1 + 772) = 0;
  *(_OWORD *)(a1 + 836) = 0;
  *(_QWORD *)(a1 + 852) = 0;
  *(_QWORD *)(a1 + 876) = 0;
  *(_QWORD *)(a1 + 900) = 0;
  *(_OWORD *)(a1 + 860) = 0;
  *(_OWORD *)(a1 + 884) = 0;
  *(_OWORD *)(a1 + 908) = 0;
  return sub_38380(a1, a2);
}

