__int64 __fastcall sub_46B80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int16 v14; // ax
  __m128i v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int16 v24; // ax
  __m128i v25; // xmm0
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 result; // rax
  __m128i v42; // [rsp+0h] [rbp-28h] BYREF
  __m128i v43; // [rsp+10h] [rbp-18h] BYREF

  v5 = a1 + 408;
  *(_QWORD *)(v5 + 8) = "MIPS_HA16";
  v6 = _mm_loadl_epi64((const __m128i *)off_746D8);
  *(_QWORD *)(v5 + 16) = 0x10200400000006LL;
  v7 = _mm_loadl_epi64((const __m128i *)off_746D8);
  *(_QWORD *)(v5 + 32) = sub_46800;
  *(_DWORD *)v5 = 56;
  *(_DWORD *)(v5 + 24) = 2;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = sub_467B0;
  v43 = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)sub_46340);
  v42 = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)sub_463B0);
  *(_WORD *)(a1 + 576) = register_custom_fixup(v5, a2, a3, a4);
  *(_WORD *)(a1 + 578) = register_custom_fixup(&unk_746A0, a2, v8, v9);
  *(_WORD *)(a1 + 580) = register_custom_fixup(&unk_74660, a2, v10, v11);
  v14 = register_custom_fixup(&unk_74520, a2, v12, v13);
  v15 = _mm_load_si128(&v42);
  *(_DWORD *)(a1 + 464) = 56;
  *(_WORD *)(a1 + 582) = v14;
  *(_QWORD *)(a1 + 472) = "MIPS16_HA16";
  *(_QWORD *)(a1 + 480) = 0x11200400000006LL;
  *(_DWORD *)(a1 + 488) = 2;
  *(_QWORD *)(a1 + 512) = sub_465B0;
  *(__m128i *)(a1 + 496) = v15;
  *(_WORD *)(a1 + 584) = register_custom_fixup(a1 + 464, a2, v16, v17);
  *(_WORD *)(a1 + 586) = register_custom_fixup(&unk_74620, a2, v18, v19);
  *(_WORD *)(a1 + 588) = register_custom_fixup(&unk_745E0, a2, v20, v21);
  v24 = register_custom_fixup(&unk_744E0, a2, v22, v23);
  v25 = _mm_load_si128(&v43);
  *(_DWORD *)(a1 + 520) = 56;
  *(_WORD *)(a1 + 590) = v24;
  *(_QWORD *)(a1 + 528) = "MMIPS_HA16";
  *(_QWORD *)(a1 + 536) = 0x12200400000006LL;
  *(_DWORD *)(a1 + 544) = 2;
  *(_QWORD *)(a1 + 568) = sub_46430;
  *(__m128i *)(a1 + 552) = v25;
  *(_WORD *)(a1 + 592) = register_custom_fixup(a1 + 520, a2, v26, v27);
  *(_WORD *)(a1 + 594) = register_custom_fixup(&unk_745A0, a2, v28, v29);
  *(_WORD *)(a1 + 596) = register_custom_fixup(&unk_74560, a2, v30, v31);
  *(_WORD *)(a1 + 598) = register_custom_fixup(&unk_744A0, a2, v32, v33);
  *(_WORD *)(a1 + 600) = register_custom_fixup(&unk_74460, a2, v34, v35);
  *(_WORD *)(a1 + 602) = register_custom_fixup(&unk_74420, a2, v36, v37);
  *(_WORD *)(a1 + 604) = register_custom_fixup(&unk_743E0, a2, v38, v39);
  v40 = register_custom_refinfo(&unk_743A0);
  *(_DWORD *)(a1 + 608) = v40;
  result = v40 | 0x40u;
  *(_DWORD *)(a1 + 432) = result;
  *(_DWORD *)(a1 + 488) = result;
  *(_DWORD *)(a1 + 544) = result;
  return result;
}

