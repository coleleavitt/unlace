unsigned __int64 __fastcall sub_91610(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_168790(a1, 1, 0xFFFFFFFFLL, &unk_23EA40, 1);
  *(_QWORD *)(a1 + 96) = a2;
  *(_BYTE *)(a1 + 104) = 1;
  *(_DWORD *)(a1 + 108) = 8;
  *(_QWORD *)a1 = &off_23DB68;
  sub_1687E0(a1, &unk_239060, 103);
  *(_QWORD *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  memset(
    (void *)((a1 + 128) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 128) & 0xFFFFFFF8) + 248) >> 3));
  *(_QWORD *)a1 = &off_23D890;
  *(_QWORD *)(a1 + 296) = sub_19A2A0();
  *(_QWORD *)(a1 + 304) = a3;
  *(_BYTE *)(a1 + 312) = 10;
  if ( (unsigned __int8)sub_19AD90("VAULT_RECV_TIMEOUT_SECS") )
  {
    v4 = strtol(s1, nullptr, 10);
    if ( v4 > 0 || v4 == -1 )
      dword_23EA44 = 1000 * v4;
  }
  return v6 - __readfsqword(0x28u);
}
