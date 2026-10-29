unsigned __int64 __fastcall sub_12C00(__int64 a1)
{
  __m128i si128; // xmm0
  size_t v3; // rbp
  __int64 v4; // rax
  size_t v5; // rax
  size_t v6; // r12
  __int64 v7; // r14
  const char *v8; // rsi
  void *v9; // rax
  const void *v10; // rsi
  const char *v11; // rsi
  void *v13; // rdi
  size_t v14; // r13
  void *dest; // [rsp+10h] [rbp-78h] BYREF
  __int128 v16; // [rsp+18h] [rbp-70h]
  const char *v17; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+38h] [rbp-50h]
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  *(_QWORD *)(a1 + 24) = get_eah();
  *(_QWORD *)a1 = off_27708;
  *(_QWORD *)(a1 + 168) = off_27690;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_21840);
  *(_QWORD *)(a1 + 192) = &off_276B8;
  *(_QWORD *)(a1 + 216) = off_276E0;
  *(__m128i *)(a1 + 96) = si128;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = a1;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = a1;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = a1;
  *(_DWORD *)(a1 + 240) = 0;
  *(_WORD *)(a1 + 244) = 0;
  *(_BYTE *)(a1 + 246) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  memset((void *)(a1 + 248), 0, 0xC0u);
  *(_DWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 464) = a1 + 448;
  *(_QWORD *)(a1 + 472) = a1 + 448;
  *(_QWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 480) = 0;
  *(_DWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = a1 + 496;
  *(_QWORD *)(a1 + 520) = a1 + 496;
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 536) = 0;
  *(_OWORD *)(a1 + 544) = 0;
  netnode_check(a1 + 104, "$ swift", 0, 1);
  sub_12570(a1);
  v3 = *(_QWORD *)(a1 + 120);
  dest = nullptr;
  v16 = 0;
  if ( v3 )
  {
    v9 = (void *)qalloc_or_throw(v3);
    v10 = *(const void **)(a1 + 112);
    dest = v9;
    *((_QWORD *)&v16 + 1) = v3;
    memcpy(v9, v10, v3);
    *(_QWORD *)&v16 = v3;
    if ( v3 != 1 )
    {
      v17 = nullptr;
      v7 = a1 + 136;
      v18 = 0;
LABEL_6:
      v8 = (const char *)dest;
      goto LABEL_7;
    }
  }
  v4 = idadir(0);
  qmakepath(src, 4096, v4, "libSwiftDemangle.so", 0);
  v5 = strlen(src);
  v6 = v5;
  if ( !v5 )
  {
    v7 = a1 + 136;
    *(_QWORD *)&v16 = 0;
    v8 = s1;
    v17 = nullptr;
    v18 = 0;
    goto LABEL_7;
  }
  v13 = dest;
  v14 = v5 + 1;
  if ( *((_QWORD *)&v16 + 1) < v5 + 1 )
  {
    dest = (void *)qvector_reserve(&dest, dest, v14, 1);
    v13 = dest;
  }
  *(_QWORD *)&v16 = v14;
  v7 = a1 + 136;
  memmove(v13, src, v6);
  v8 = s1;
  *((_BYTE *)dest + v6) = 0;
  v17 = nullptr;
  v18 = 0;
  if ( (_QWORD)v16 )
    goto LABEL_6;
LABEL_7:
  if ( !(unsigned __int8)sub_1C050(v7, v8, &v17) )
  {
    v11 = s1;
    if ( (_QWORD)v18 )
      v11 = v17;
    sub_CB10((__int64)"WARNING: %s\n", v11);
  }
  hook_event_listener(1, a1 + 168, a1, 0);
  hook_event_listener(0, a1 + 192, a1, 0);
  hook_event_listener(3, a1 + 216, a1, 0);
  set_module_data(&dword_29940, a1);
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  if ( dest )
  {
    *(_QWORD *)&v16 = 0;
    qfree(dest);
  }
  return v19 - __readfsqword(0x28u);
}

