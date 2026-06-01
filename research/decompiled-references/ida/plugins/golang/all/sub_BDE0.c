__int64 sub_BDE0()
{
  __int64 v0; // rbx
  __m128i v1; // xmm0
  __m128i si128; // xmm0
  __m128i v3; // xmm1
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+0h] [rbp-28h]
  __int64 v12; // [rsp+8h] [rbp-20h]
  __int64 v13; // [rsp+10h] [rbp-18h]
  __int64 v14; // [rsp+18h] [rbp-10h]

  v0 = qalloc_or_throw();
  *(_QWORD *)(v0 + 8) = get_ph();
  *(_QWORD *)(v0 + 16) = get_ash();
  *(_QWORD *)(v0 + 24) = get_eah();
  *(_OWORD *)(v0 + 32) = 0;
  *(_QWORD *)v0 = off_27498;
  *(_QWORD *)(v0 + 104) = &off_274F0;
  *(_QWORD *)(v0 + 128) = off_27518;
  *(_QWORD *)(v0 + 152) = &off_27540;
  *(_QWORD *)(v0 + 168) = &off_274C0;
  *(_OWORD *)(v0 + 48) = 0;
  *(_OWORD *)(v0 + 64) = 0;
  *(_OWORD *)(v0 + 80) = 0;
  v1 = _mm_loadl_epi64((const __m128i *)off_27BD0);
  *(_QWORD *)(v0 + 216) = v0 + 168;
  *(_QWORD *)(v0 + 96) = 0;
  *(_QWORD *)(v0 + 248) = 0x4FFFFFFFFLL;
  *(__m128i *)(v0 + 200) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)"detect and parse golang metadata");
  *(_OWORD *)(v0 + 232) = 0;
  *(_QWORD *)(v0 + 112) = 0;
  *(_QWORD *)(v0 + 120) = v0;
  *(_QWORD *)(v0 + 136) = 0;
  *(_QWORD *)(v0 + 144) = v0;
  *(_QWORD *)(v0 + 160) = v0;
  *(_DWORD *)(v0 + 176) = 1;
  *(_QWORD *)(v0 + 184) = v0;
  *(_DWORD *)(v0 + 192) = 64;
  *(_QWORD *)(v0 + 224) = v0;
  *(_QWORD *)(v0 + 256) = v0;
  *(_QWORD *)(v0 + 264) = 0;
  *(_QWORD *)(v0 + 272) = 0;
  *(_DWORD *)(v0 + 280) = 0;
  *(_QWORD *)(v0 + 288) = 0;
  *(_DWORD *)(v0 + 296) = 0;
  *(_QWORD *)(v0 + 304) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23DF0);
  *(_QWORD *)(v0 + 336) = v0 + 320;
  v3 = _mm_load_si128((const __m128i *)&xmmword_23E00);
  *(_QWORD *)(v0 + 344) = v0 + 320;
  *(_DWORD *)(v0 + 320) = 0;
  *(_QWORD *)(v0 + 556) = 0x10001010000LL;
  *(_QWORD *)(v0 + 328) = 0;
  *(_QWORD *)(v0 + 400) = 0;
  *(_QWORD *)(v0 + 520) = -1;
  *(_QWORD *)(v0 + 528) = -1;
  *(_DWORD *)(v0 + 536) = 0;
  *(_QWORD *)(v0 + 544) = 0;
  *(_BYTE *)(v0 + 564) = 0;
  *(_WORD *)(v0 + 565) = 0;
  *(_DWORD *)(v0 + 568) = 0;
  *(_QWORD *)(v0 + 572) = 0;
  *(__m128i *)(v0 + 352) = si128;
  *(_OWORD *)(v0 + 368) = -1;
  *(__m128i *)(v0 + 384) = v3;
  *(_OWORD *)(v0 + 408) = -1;
  *(_OWORD *)(v0 + 424) = -1;
  *(__m128i *)(v0 + 440) = v3;
  *(__m128i *)(v0 + 456) = v3;
  *(_OWORD *)(v0 + 472) = -1;
  *(_OWORD *)(v0 + 488) = -1;
  *(_OWORD *)(v0 + 504) = -1;
  sub_B4B0(v0);
  hook_event_listener();
  hook_event_listener();
  register_post_event_visitor();
  if ( *(_BYTE *)(v0 + 558) )
    sub_AD10(v0, 0);
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))callui)(
                          127,
                          v0 + 192,
                          v4,
                          v5,
                          v6,
                          v7) )
    callui(129, "Edit/Other/Toggle border", "golang:detect_and_parse", 1, v8, v9, v11, v12, v13, v14);
  set_module_data();
  return v0;
}
