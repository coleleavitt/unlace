__int64 __fastcall sub_250B50(_QWORD *a1, int a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, int, int); // rax
  int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rbp
  __int64 v13; // rax
  _QWORD *v14; // r15
  __m128i *v15; // rax
  __int64 (__fastcall *v16)(__int64, int, int); // rax
  __int64 v17; // rsi
  __int64 result; // rax
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx

  v4 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v4 == sub_64AD0 )
    v5 = **(_DWORD **)(a1[6] + 24LL * a2);
  else
    v5 = v4((__int64)a1, a2, 0);
  v8 = sub_250390(a1, v5);
  if ( *(_DWORD *)(a1[38] + 4LL * a2) == 14 )
    v8 = sub_244820(*(_QWORD *)(a1[41] + 112LL), (__int64)v8, v6, v7, v9);
  v10 = sub_2418B0((__int64)a1);
  v11 = sub_241780(a3, v10);
  *((_DWORD *)v11 + 2) = 75;
  v12 = v11;
  v13 = j__qalloc_or_throw();
  *(_OWORD *)(v13 + 24) = 0;
  *(_QWORD *)(v13 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)v13 = -1;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0;
  *(_QWORD *)(v13 + 56) = 0;
  *(_QWORD *)(v13 + 64) = 0;
  v12[3] = v13;
  v14 = (_QWORD *)j__qalloc_or_throw();
  *v14 = -1;
  v14[2] = 0xFFFFFFFFLL;
  v14[1] = -4294967225LL;
  v14[3] = 0;
  v15 = (__m128i *)qalloc_or_throw();
  v15[1].m128i_i64[0] = 0;
  *v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
  v14[3] = v15;
  *(_QWORD *)(v12[3] + 64LL) = v14;
  v16 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v16 == sub_64AD0 )
    v17 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24LL * a2) + 4LL);
  else
    v17 = (unsigned int)v16((__int64)a1, a2, 1);
  sub_2508D0(a1, v17, v14, 0);
  result = v12[3];
  v19 = *v8;
  *v8 = *(_QWORD *)result;
  v20 = *(_DWORD *)(result + 8);
  *(_QWORD *)result = v19;
  LODWORD(v19) = *((_DWORD *)v8 + 2);
  *((_DWORD *)v8 + 2) = v20;
  v21 = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 8) = v19;
  LODWORD(v19) = *((_DWORD *)v8 + 3);
  *((_DWORD *)v8 + 3) = v21;
  v22 = *(_QWORD *)(result + 24);
  *(_DWORD *)(result + 12) = v19;
  v23 = v8[3];
  v8[3] = v22;
  v24 = *(_QWORD *)(result + 32);
  *(_QWORD *)(result + 24) = v23;
  v25 = v8[4];
  v8[4] = v24;
  v26 = *(_QWORD *)(result + 40);
  *(_QWORD *)(result + 32) = v25;
  v27 = v8[5];
  v8[5] = v26;
  v28 = *(_QWORD *)(result + 48);
  *(_QWORD *)(result + 40) = v27;
  v29 = v8[6];
  v8[6] = v28;
  LODWORD(v28) = *(_DWORD *)(result + 56);
  *(_QWORD *)(result + 48) = v29;
  LODWORD(v29) = *((_DWORD *)v8 + 14);
  *((_DWORD *)v8 + 14) = v28;
  *(_DWORD *)(result + 56) = v29;
  if ( v8 )
  {
    sub_2559F0(v8);
    clear_tinfo_t();
    return j__qfree();
  }
  return result;
}

