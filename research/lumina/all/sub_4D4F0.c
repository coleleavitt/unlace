unsigned __int64 __fastcall sub_4D4F0(__int64 a1)
{
  unsigned __int64 v2; // [rsp+8h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 66) = 1;
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)a1 = &unk_23D478;
  *(_WORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_WORD *)(a1 + 204) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_BYTE *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 336) = 0;
  *(_OWORD *)(a1 + 368) = 0;
  return v2 - __readfsqword(0x28u);
}
