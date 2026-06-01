__int64 __fastcall sub_250790(_QWORD *a1, int a2, __int64 a3, double a4)
{
  __int64 v4; // r12
  __int64 (__fastcall *v6)(__int64, int, int); // rax
  __int64 v7; // rcx
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __m128i *v26; // rax
  __m128i v27; // xmm0
  __int64 (__fastcall *v28)(__int64, int, int); // rax
  __int64 v29; // rsi
  __int64 result; // rax
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx

  v4 = a2;
  v6 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v6 == sub_650D0 )
  {
    v7 = a1[6];
    v8 = **(_DWORD **)(v7 + 24LL * a2);
  }
  else
  {
    v8 = v6((__int64)a1, a2, 0);
  }
  v11 = sub_24FFD0(a1, v8, a3, v7, a4);
  if ( *(_DWORD *)(a1[38] + 4LL * a2) == 14 )
    v11 = sub_244460(*(_QWORD *)(a1[41] + 112LL), (__int64)v11, v9, v10, v12, a4);
  v13 = sub_2414F0(a1, v8, a4);
  v16 = sub_2413C0(a3, v13, v14, v15, a4);
  *((_DWORD *)v16 + 2) = 75;
  v17 = v16;
  v20 = j__qalloc_or_throw(72, v13, v18, v19);
  *(_OWORD *)(v20 + 24) = 0;
  *(_QWORD *)(v20 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v20 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)v20 = -1;
  *(_QWORD *)(v20 + 40) = 0;
  *(_QWORD *)(v20 + 48) = 0;
  *(_QWORD *)(v20 + 56) = 0;
  *(_QWORD *)(v20 + 64) = 0;
  v17[3] = v20;
  v23 = (_QWORD *)j__qalloc_or_throw(32, 0xFFFFFFFF00000000LL, v21, v22);
  *v23 = -1;
  v23[2] = 0xFFFFFFFFLL;
  v23[1] = -4294967225LL;
  v23[3] = 0;
  v26 = (__m128i *)qalloc_or_throw(24, 0xFFFFFFFF00000000LL, v24, v25);
  v26[1].m128i_i64[0] = 0;
  v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
  *v26 = v27;
  v23[3] = v26;
  *(_QWORD *)(v17[3] + 64) = v23;
  v28 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v28 == sub_650D0 )
    v29 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v4) + 4LL);
  else
    v29 = (unsigned int)v28((__int64)a1, a2, 1);
  sub_250510((__int64)a1, v29, (__int64)v23, 0, *(double *)v27.m128i_i64);
  result = v17[3];
  v31 = *v11;
  *v11 = *(_QWORD *)result;
  v32 = *(_DWORD *)(result + 8);
  *(_QWORD *)result = v31;
  LODWORD(v31) = *((_DWORD *)v11 + 2);
  *((_DWORD *)v11 + 2) = v32;
  v33 = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 8) = v31;
  LODWORD(v31) = *((_DWORD *)v11 + 3);
  *((_DWORD *)v11 + 3) = v33;
  v34 = *(_QWORD *)(result + 24);
  *(_DWORD *)(result + 12) = v31;
  v35 = v11[3];
  v11[3] = v34;
  v36 = *(_QWORD *)(result + 32);
  *(_QWORD *)(result + 24) = v35;
  v37 = v11[4];
  v11[4] = v36;
  v38 = *(_QWORD *)(result + 40);
  *(_QWORD *)(result + 32) = v37;
  v39 = v11[5];
  v11[5] = v38;
  v40 = *(_QWORD *)(result + 48);
  *(_QWORD *)(result + 40) = v39;
  v41 = v11[6];
  v11[6] = v40;
  LODWORD(v40) = *(_DWORD *)(result + 56);
  *(_QWORD *)(result + 48) = v41;
  LODWORD(v41) = *((_DWORD *)v11 + 14);
  *((_DWORD *)v11 + 14) = v40;
  *(_DWORD *)(result + 56) = v41;
  if ( v11 )
  {
    sub_255630((__int64)v11);
    clear_tinfo_t();
    return j__qfree((__int64)v11);
  }
  return result;
}

