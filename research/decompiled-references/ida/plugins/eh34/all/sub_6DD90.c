_DWORD *__fastcall sub_6DD90(__int64 a1, const char *a2)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v3; // rax
  _DWORD *v4; // rbx
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
  v3 = hexdsp(129, 312);
  *(_QWORD *)v3 = -1;
  v4 = (_DWORD *)v3;
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 16) = 0x7000000000LL;
  *(_QWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 72) = 0;
  *(_QWORD *)(v3 + 80) = 0;
  *(_QWORD *)(v3 + 88) = 0;
  *(_QWORD *)(v3 + 96) = 0;
  *(_QWORD *)(v3 + 104) = 0;
  *(_QWORD *)(v3 + 112) = 0;
  *(_QWORD *)(v3 + 136) = 0;
  *(_QWORD *)(v3 + 144) = 0;
  *(_QWORD *)(v3 + 152) = 0;
  *(_QWORD *)(v3 + 176) = 0;
  *(_QWORD *)(v3 + 184) = 0;
  *(_QWORD *)(v3 + 192) = 0;
  *(_QWORD *)(v3 + 216) = 0;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = 0;
  *(_QWORD *)(v3 + 280) = 37;
  *(_QWORD *)(v3 + 288) = 0;
  *(_OWORD *)(v3 + 32) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 120) = 0;
  *(_OWORD *)(v3 + 160) = 0;
  *(_OWORD *)(v3 + 200) = 0;
  *(_OWORD *)(v3 + 224) = 0;
  *(_OWORD *)(v3 + 264) = 0;
  *(_OWORD *)(v3 + 296) = 0;
  v6[0] = 1;
  copy_tinfo_t(v3 + 72, v6);
  clear_tinfo_t(v6);
  v4[20] = 0;
  v4[2] = 0;
  if ( (_BYTE)a1 )
    v4[70] |= 8u;
  return v4;
}

