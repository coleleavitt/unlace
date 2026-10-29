__int64 sub_4960()
{
  __int64 ph; // rbx
  char v1; // bp
  __int64 v2; // rbx
  __m128i v3; // xmm0
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+0h] [rbp-38h]

  ph = get_ph();
  if ( (unsigned int)getinf() != 11 || *(_DWORD *)(ph + 4) )
    return 0;
  netnode_check();
  if ( v9 == -1 )
    v1 = get_name_ea() != -1;
  else
    v1 = netnode_altval() != 0;
  v2 = qalloc_or_throw();
  *(_QWORD *)(v2 + 8) = get_ph();
  *(_QWORD *)(v2 + 16) = get_ash();
  *(_QWORD *)(v2 + 24) = get_eah();
  *(_QWORD *)v2 = off_7C38;
  *(_QWORD *)(v2 + 104) = off_7C68;
  *(_QWORD *)(v2 + 136) = off_7BB8;
  *(_OWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 184) = v2 + 136;
  *(_OWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 216) = 0x4FFFFFFFFLL;
  *(_QWORD *)(v2 + 224) = &off_7BE8;
  *(_OWORD *)(v2 + 64) = 0;
  *(_OWORD *)(v2 + 80) = 0;
  v3 = _mm_loadl_epi64((const __m128i *)&off_7C80);
  *(_WORD *)(v2 + 264) = 0;
  *(_QWORD *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_DWORD *)(v2 + 144) = 1;
  *(_QWORD *)(v2 + 152) = v2;
  *(_DWORD *)(v2 + 160) = 64;
  *(_QWORD *)(v2 + 192) = v2;
  *(_QWORD *)(v2 + 232) = 0;
  *(_QWORD *)(v2 + 240) = v2;
  *(_QWORD *)(v2 + 256) = 0;
  *(_QWORD *)(v2 + 248) = off_7C10;
  *(_OWORD *)(v2 + 120) = 0;
  *(__m128i *)(v2 + 168) = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)"Scan for CLSIDs");
  *(_OWORD *)(v2 + 200) = 0;
  sub_47B0(v2, v1, v4, v5, v6, v7);
  hook_event_listener();
  set_module_data();
  return v2;
}

