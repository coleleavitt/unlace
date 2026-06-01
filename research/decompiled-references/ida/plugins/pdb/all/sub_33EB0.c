__int64 __fastcall sub_33EB0(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x78u);
  *(_QWORD *)result = off_AA180;
  *(__m128i *)(result + 24) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"PDB", (__m128i)(unsigned __int64)"PDB");
  *(_QWORD *)(result + 8) = 40;
  *(_DWORD *)(result + 16) = 0x4000000;
  *(_QWORD *)(result + 40) = a1;
  *(_DWORD *)(result + 56) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = result + 56;
  *(_QWORD *)(result + 80) = result + 56;
  *(_QWORD *)(result + 88) = 0;
  *(_QWORD *)(result + 96) = 0;
  *(_QWORD *)(a1 + 520) = result;
  *(_OWORD *)(result + 104) = 0;
  return result;
}

