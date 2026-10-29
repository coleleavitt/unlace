__int64 __fastcall sub_199550(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __m128i si128; // xmm1
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __m128i v7[2]; // [rsp+0h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a1 + 288) & 1) != 0 )
  {
    v7[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4A85D0, (__m128i)(unsigned __int64)off_4A85B0);
    result = operator new(0x1D8u);
    v2 = *(_QWORD *)(a1 + 280);
    si128 = _mm_load_si128(v7);
    *(_QWORD *)(result + 16) = a1;
    v4 = *(_QWORD *)(v2 + 1496);
    *(_QWORD *)(result + 96) = off_4A85B0;
    *(_QWORD *)(result + 192) = off_4A85B0;
    *(_QWORD *)(result + 8) = v4;
    LOBYTE(v4) = *(_BYTE *)(v4 + 145);
    *(_QWORD *)(result + 24) = 0;
    *(_QWORD *)(result + 48) = 0xFFFFFFFFLL;
    *(_BYTE *)(result + 56) = v4;
    *(_QWORD *)result = &off_4AA9C0;
    *(_QWORD *)(result + 80) = -1;
    *(_DWORD *)(result + 88) = -1;
    *(_QWORD *)(result + 104) = -1;
    *(_DWORD *)(result + 112) = -1;
    *(_QWORD *)(result + 120) = 0;
    *(_QWORD *)(result + 144) = 0;
    *(_DWORD *)(result + 152) = 0;
    *(_QWORD *)(result + 176) = -1;
    *(_DWORD *)(result + 184) = -1;
    *(_QWORD *)(result + 200) = -1;
    *(_DWORD *)(result + 208) = -1;
    *(_QWORD *)(result + 232) = -1;
    *(_QWORD *)(result + 240) = 0;
    *(_OWORD *)(result + 32) = 0;
    *(__m128i *)(result + 64) = si128;
    *(_OWORD *)(result + 128) = 0;
    *(__m128i *)(result + 160) = si128;
    *(_OWORD *)(result + 216) = -1;
    *(_OWORD *)(result + 248) = 0;
    *(_OWORD *)(result + 264) = 0;
    *(_DWORD *)(result + 280) = 0;
    *(_QWORD *)(result + 304) = -1;
    *(_DWORD *)(result + 312) = -1;
    *(_QWORD *)(result + 320) = off_4A85B0;
    *(_QWORD *)(result + 328) = -1;
    *(_DWORD *)(result + 336) = -1;
    *(_QWORD *)(result + 360) = -1;
    *(_QWORD *)(result + 368) = 0;
    *(_QWORD *)(result + 424) = 0;
    *(_DWORD *)(result + 464) = -1;
    *(_BYTE *)(result + 468) = 0;
    *(__m128i *)(result + 288) = si128;
    *(_OWORD *)(result + 344) = -1;
    *(_OWORD *)(result + 376) = 0;
    *(_OWORD *)(result + 392) = 0;
    *(_OWORD *)(result + 408) = 0;
    *(_OWORD *)(result + 432) = 0;
    *(_OWORD *)(result + 448) = 0;
  }
  else
  {
    result = operator new(0x78u);
    v5 = *(_QWORD *)(a1 + 280);
    *(_QWORD *)(result + 16) = a1;
    v6 = *(_QWORD *)(v5 + 1496);
    *(_QWORD *)(result + 24) = 0;
    *(_QWORD *)(result + 48) = 0xFFFFFFFFLL;
    *(_QWORD *)(result + 8) = v6;
    LOBYTE(v6) = *(_BYTE *)(v6 + 145);
    *(_QWORD *)result = &off_4AAB18;
    *(_BYTE *)(result + 56) = v6;
    *(_QWORD *)(result + 64) = 0;
    *(_QWORD *)(result + 88) = 0;
    *(_QWORD *)(result + 96) = 0;
    *(_QWORD *)(result + 104) = -1;
    *(_DWORD *)(result + 112) = -1;
    *(_BYTE *)(result + 116) = 1;
    *(_OWORD *)(result + 32) = 0;
    *(_OWORD *)(result + 72) = 0;
  }
  return result;
}

