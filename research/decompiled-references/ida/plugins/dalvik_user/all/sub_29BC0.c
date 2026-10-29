__int64 __fastcall sub_29BC0(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, int a6)
{
  int v7; // ebp
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  const char *v12; // rsi
  char v13; // al
  char v14; // dl
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // edx
  unsigned __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // rax
  _DWORD *v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  void *v27; // rsi
  __m128i si128; // xmm0
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v32; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int64 v33; // [rsp+10h] [rbp-78h] BYREF
  __int64 v34; // [rsp+18h] [rbp-70h]
  __int64 v35; // [rsp+20h] [rbp-68h]
  __int128 v36; // [rsp+28h] [rbp-60h]
  _OWORD v37[2]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp-30h]

  v7 = a2;
  v38 = __readfsqword(0x28u);
  sub_58110(a1, (unsigned int)"dalvik_debmod_t::dbg_attach_process(pid=%d)\n", a2, a4, a5, a6);
  if ( !a2 )
  {
    v32 = 0;
    if ( !(unsigned __int8)sub_1A0D0((__int64)&v32, (__int64)"Please enter the PID of JDWP process to attach to") )
      return 0xFFFFFFFFLL;
    v7 = v32;
  }
  sub_58110(a1, (unsigned int)"dalvik_debmod_t::dbg_attach_process(%d,)\n", v7, v9, v10, v11);
  if ( !(unsigned __int8)sub_23750(*(_DWORD *)(a1 + 1816)) )
    return 0xFFFFFFFFLL;
  v12 = nptr;
  if ( *(_QWORD *)(a1 + 1800) )
    v12 = *(const char **)(a1 + 1792);
  if ( !(unsigned __int8)sub_4AB10(a1 + 864, v12, *(unsigned int *)(a1 + 1816), a5) )
    return 4294967294LL;
  if ( !(unsigned __int8)sub_4A530(a1 + 864) )
    return 4294967294LL;
  *(_DWORD *)(a1 + 1820) = 1;
  if ( !(unsigned __int8)sub_293C0(a1) )
    return 4294967294LL;
  *(_DWORD *)(a1 + 656) = v7;
  v13 = getinf();
  v14 = *(_BYTE *)(a1 + 36);
  v15 = v13 & 6;
  if ( v15 )
  {
    if ( v15 != 2 )
    {
      v16 = 8;
      if ( !v14 )
        goto LABEL_14;
      v17 = *(_QWORD *)(a1 + 16);
      v16 = 8;
      v18 = 8;
      goto LABEL_13;
    }
    v16 = 4;
    if ( !v14 )
      goto LABEL_14;
LABEL_12:
    v17 = *(_QWORD *)(a1 + 8);
    v18 = 4;
LABEL_13:
    *(_QWORD *)(a1 + 24) = v17;
    *(_DWORD *)(a1 + 32) = v18;
    goto LABEL_14;
  }
  v16 = 2;
  if ( v14 )
    goto LABEL_12;
LABEL_14:
  *(_DWORD *)(a1 + 276) = v16;
  sub_27740(a1);
  v19 = *(_QWORD *)(a1 + 1856);
  if ( v19 )
  {
    v20 = 0;
    v21 = 0;
    while ( 1 )
    {
      v22 = (_DWORD *)(*(_QWORD *)(a1 + 1848) + 40 * v21);
      if ( *v22 == 1 )
        break;
      v21 = ++v20;
      if ( v20 >= v19 )
        goto LABEL_20;
    }
    if ( v22 )
      *(_QWORD *)(a1 + 1832) = 1;
  }
LABEL_20:
  v36 = 0;
  v33 = 0xFFFFFFFFLL;
  v34 = -1;
  v35 = 0;
  memset(v37, 0, sizeof(v37));
  set_debug_event_code();
  v23 = HIDWORD(v35) & 0xFFFFFFF;
  if ( (unsigned int)v23 > 0xB || (v24 = 2306, !_bittest64(&v24, v23)) )
    sub_167F0(&v33, 11);
  LOBYTE(v35) = 1;
  v25 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 656));
  v26 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 1832));
  v34 = -1;
  v27 = (void *)v36;
  v33 = _mm_unpacklo_epi32(v25, v26).m128i_u64[0];
  if ( *(_QWORD *)&v37[0] <= 0xEu )
  {
    *(_QWORD *)&v36 = qvector_reserve();
    v27 = (void *)v36;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_6A500);
  *((_QWORD *)&v36 + 1) = 15;
  qmemcpy(v27, "<JDWP process>", 14);
  *(_BYTE *)(v36 + 14) = 0;
  v29 = *(_QWORD *)(a1 + 136);
  *((_QWORD *)&v37[1] + 1) = -1;
  *(__m128i *)((char *)v37 + 8) = si128;
  if ( v29 == *(_QWORD *)(a1 + 144) )
  {
    sub_26890((_QWORD *)(a1 + 120));
  }
  else
  {
    *(_QWORD *)(v29 - 72) = 0xFFFFFFFFLL;
    v30 = v29 - 72;
    *(_QWORD *)(v30 + 8) = -1;
    *(_BYTE *)(v30 + 16) = 0;
    *(_DWORD *)(v30 + 20) = 0;
    copy_debug_event();
    *(_QWORD *)(a1 + 136) -= 72LL;
  }
  sub_26A00(a1, "<JDWP process>");
  free_debug_event();
  return 1;
}

