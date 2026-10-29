unsigned __int64 __fastcall sub_DF60(__int64 a1, __int64 a2)
{
  __m128i si128; // xmm0
  signed __int64 v3; // rax
  signed __int64 v4; // rbp
  void *v5; // rax
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_F370);
  v8 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = 0;
  *(__m128i *)(a1 + 16) = si128;
  *(__m128i *)(a1 + 32) = si128;
  *(_QWORD *)(a1 + 96) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = -1;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = a1 + 128;
  *(_QWORD *)(a1 + 152) = a1 + 128;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 312) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  v3 = qlsize(a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *(_QWORD *)(a1 + 32) = v3;
    *(_QWORD *)(a1 + 16) = v3;
    v5 = malloc(v3);
    *(_QWORD *)(a1 + 8) = v5;
    if ( v4 != qlread(a2, v5, v4) )
      sub_3890((__int64)"couldn't read the file");
    if ( !(unsigned int)file2base(a2, 0, 0, *(_QWORD *)(a1 + 16), 1) )
      sub_3890((__int64)"file2base failed");
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    netnode_check(&v7, "$ wasm", 0, 0);
    *(_QWORD *)(a1 + 112) = v7;
    sub_3FE0(a1);
    sub_D770(a1);
  }
  return v8 - __readfsqword(0x28u);
}

