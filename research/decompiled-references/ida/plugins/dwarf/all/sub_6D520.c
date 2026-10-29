__int64 __fastcall sub_6D520(__int64 a1, const char *a2, char a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v9; // r13
  __m128i si128; // xmm1
  __int64 v11; // rax
  __int64 v12; // r13
  size_t v13; // r15
  void *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdi
  const __m128i *v17; // rax
  __int64 v18; // rdx
  __m128i *v19; // rax
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 *v24; // rsi
  const char *v25; // rdi
  __int64 v26; // rcx
  __int64 idati; // r15
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r15
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rdi
  bool v37; // al
  __int64 v38; // rax
  __int64 v39; // r13
  size_t v40; // r15
  void *v41; // rax
  const char *v42; // rdx
  bool v43; // zf
  __int64 v44; // [rsp+0h] [rbp-60h]
  char *sa; // [rsp+8h] [rbp-58h]
  __int64 v47; // [rsp+18h] [rbp-48h] BYREF
  _QWORD v48[8]; // [rsp+20h] [rbp-40h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 64LL);
  v48[1] = __readfsqword(0x28u);
  sub_1E2A0(v6);
  if ( !a2 || !*a2 )
    return 0;
  v9 = operator new(0x160u);
  *(_QWORD *)v9 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_AB160);
  *(_QWORD *)(v9 + 104) = 0;
  *(_QWORD *)(v9 + 128) = 0;
  *(_OWORD *)(v9 + 112) = 0;
  *(_OWORD *)(v9 + 136) = 0;
  *(_OWORD *)(v9 + 152) = 0;
  *(_QWORD *)(v9 + 168) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v9 + 176) = 0xFFFFFFFFLL;
  *(_QWORD *)(v9 + 184) = -1;
  *(_QWORD *)(v9 + 192) = 0;
  *(_QWORD *)(v9 + 232) = 0;
  *(_QWORD *)(v9 + 240) = 0;
  *(_QWORD *)(v9 + 248) = 0;
  *(_QWORD *)(v9 + 256) = 0;
  *(_QWORD *)(v9 + 264) = 0;
  *(_QWORD *)(v9 + 272) = 0;
  *(_QWORD *)(v9 + 280) = 0;
  *(_QWORD *)(v9 + 304) = 0;
  *(_QWORD *)(v9 + 328) = 0;
  *(_OWORD *)(v9 + 200) = 0;
  *(__m128i *)(v9 + 216) = si128;
  *(_OWORD *)(v9 + 312) = 0;
  *(_OWORD *)(v9 + 336) = 0;
  sub_83090(v9);
  *(_QWORD *)(a1 + 88) = v9;
  if ( a3 )
  {
    v38 = operator new(0x50u);
    *(_DWORD *)(v38 + 8) = 2;
    v39 = v38;
    *(_QWORD *)(v38 + 16) = 0;
    *(_OWORD *)(v38 + 24) = 0;
    *(_QWORD *)v38 = &off_C94A8;
    v40 = strlen(a2);
    v41 = (void *)qvector_reserve(v39 + 16, 0, v40 + 1, 1);
    *(_QWORD *)(v39 + 16) = v41;
    *(_QWORD *)(v39 + 24) = v40 + 1;
    memmove(v41, a2, v40);
    v42 = src;
    *(_BYTE *)(*(_QWORD *)(v39 + 16) + v40) = 0;
    v43 = *(_QWORD *)(v39 + 24) == 0;
    *(_QWORD *)(v39 + 40) = 0;
    *(_QWORD *)(v39 + 64) = 0;
    *(_DWORD *)(v39 + 72) = -1;
    *(_OWORD *)(v39 + 48) = 0;
    if ( !v43 )
      v42 = *(const char **)(v39 + 16);
    sub_20160((__int64 *)(v39 + 40), (__int64)"remote://%s", v42);
    v16 = 1000;
    **(_QWORD **)(a1 + 88) = v39;
  }
  else
  {
    v11 = operator new(0x28u);
    *(_DWORD *)(v11 + 8) = 1;
    v12 = v11;
    *(_QWORD *)(v11 + 16) = 0;
    *(_OWORD *)(v11 + 24) = 0;
    *(_QWORD *)v11 = &off_C9478;
    v13 = strlen(a2);
    v14 = (void *)qvector_reserve(v12 + 16, 0, v13 + 1, 1);
    *(_QWORD *)(v12 + 16) = v14;
    *(_QWORD *)(v12 + 24) = v13 + 1;
    memmove(v14, a2, v13);
    *(_BYTE *)(*(_QWORD *)(v12 + 16) + v13) = 0;
    **(_QWORD **)(a1 + 88) = v12;
    v15 = sub_1B1A0((__int64)a2);
    v16 = v15;
    if ( v15 == -1 )
      return 0;
  }
  v17 = (const __m128i *)sub_83020(v16);
  v18 = *(_QWORD *)(a1 + 88);
  *(__m128i *)(v18 + 8) = _mm_loadu_si128(v17);
  *(__m128i *)(v18 + 24) = _mm_loadu_si128(v17 + 1);
  *(__m128i *)(v18 + 40) = _mm_loadu_si128(v17 + 2);
  *(__m128i *)(v18 + 56) = _mm_loadu_si128(v17 + 3);
  *(__m128i *)(v18 + 72) = _mm_loadu_si128(v17 + 4);
  *(__m128i *)(v18 + 88) = _mm_loadu_si128(v17 + 5);
  sub_83240(*(_QWORD *)(a1 + 88), 0);
  v19 = *(__m128i **)(a1 + 88);
  if ( a3 )
    a4 = *(_QWORD *)(v19->m128i_i64[0] + 64);
  v19[18] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)&v19->m128i_u64[1]);
  v20 = sub_87270();
  if ( (unsigned int)sub_84060(v20, *(_QWORD *)(a1 + 88), sub_1E1F0, 0, &v47) )
    return 0;
  v21 = (unsigned __int8)getinf_flag(3, 4) || (getinf(3) & 0x1006) == 0x1002 ? 64LL : 32LL;
  v22 = sub_8A1E0(
          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 64LL) + 8LL) + 4LL),
          *(_QWORD *)(*(_QWORD *)(a1 + 64) + 64LL) + 328LL,
          v21);
  if ( !v22 )
    return 0;
  sub_16EA0();
  v23 = sub_1CBE0(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 64LL));
  v24 = **(__int64 ***)(a1 + 88);
  v25 = *(const char **)(*(_QWORD *)(a1 + 64) + 64LL);
  v26 = sub_1CF10((__int64)v25, v24);
  LODWORD(v44) = debug;
  if ( (debug & 0x40000) != 0 )
  {
    v24 = (__int64 *)v23;
    v25 = "DWARF: idati mappings: %a. Module %s mappings: %a\n";
    v44 = v26;
    sub_16DD0((__int64)"DWARF: idati mappings: %a. Module %s mappings: %a\n");
    v26 = v44;
  }
  if ( v23 == v26 )
  {
    idati = get_idati(v25, (const char *)v24);
  }
  else
  {
    idati = new_til(a2);
    enable_numbered_types(idati, 1);
  }
  sa = (char *)operator new(0xD0u);
  sub_57E60((__int64)sa, idati);
  *(_QWORD *)(a1 + 80) = sa;
  if ( (debug & 0x40000) != 0 )
  {
    sub_59480((__int64)sa, idati, v28, v29, v30, v31);
    sub_16DD0((__int64)"DWARF: module '%s' uses til '%s'\n");
  }
  v32 = operator new(0x1D0u);
  sub_9EC40(
    v32,
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 64LL),
    v20,
    *(_QWORD *)(a1 + 88),
    *(_QWORD *)(a1 + 80),
    v47,
    v22,
    *(_QWORD *)(a1 + 48),
    a4,
    0,
    0);
  *(_QWORD *)(a1 + 72) = v32;
  sub_A29F0(v32, 0, 1, v33, v34, v35, v44, (_DWORD)sa);
  v36 = v47;
  *(_QWORD *)(a1 + 176) = *(_QWORD *)(a1 + 80);
  v48[0] = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(v20 + 408))(
         v36,
         a1 + 192,
         a1 + 200,
         a1 + 208,
         a1 + 216) )
  {
    v37 = (*(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD *))(v20 + 400))(
            v47,
            a1 + 192,
            a1 + 200,
            a1 + 208,
            a1 + 216,
            v48) == 0;
  }
  else
  {
    v37 = 1;
  }
  *(_BYTE *)(a1 + 224) = v37;
  callui(24, 10);
  return 1;
}

