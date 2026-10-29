__int64 __fastcall sub_251B60(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, int, int); // rdx
  __int64 (__fastcall *v5)(__int64, int, int); // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __m128i *v11; // rax
  __m128i v12; // xmm0
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rbx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 *v24; // r14
  __int64 *v25; // r13
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 result; // rax
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // [rsp-8h] [rbp-30h]

  v4 = sub_650D0;
  v5 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v5 == sub_650D0 )
  {
    v6 = a1[6];
    v7 = **(_DWORD **)(v6 + 24LL * (int)a2);
  }
  else
  {
    v7 = v5((__int64)a1, a2, 0);
  }
  v8 = (__int64 *)j__qalloc_or_throw(32, a2, (__int64)v4, v6);
  *v8 = -1;
  v8[1] = -4294967225LL;
  v8[2] = 0xFFFFFFFFLL;
  v8[3] = 0;
  v11 = (__m128i *)qalloc_or_throw(24, a2, v9, v10);
  v11[1].m128i_i64[0] = 0;
  v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
  *v11 = v12;
  v8[3] = (__int64)v11;
  v13 = *(_DWORD *)(a1[38] + 4LL * (int)a2);
  v14 = sub_250510((__int64)a1, v7, (__int64)v8, v13 != 10, *(double *)v12.m128i_i64);
  v17 = (__int64 *)v14;
  if ( !v14 )
  {
    v25 = sub_2413C0(a3, *v8, v15, v16, *(double *)v12.m128i_i64);
    v26 = sub_240F50(a1[41], 1, 0, -1, 0, 0, 0);
    *((_DWORD *)v25 + 2) = 75;
    v17 = (__int64 *)v26;
    v28 = j__qalloc_or_throw(72, 1, v45, v27);
    *(_QWORD *)v28 = -1;
    *(_DWORD *)(v28 + 8) = 0;
    *(_QWORD *)(v28 + 12) = -1;
    *(_QWORD *)(v28 + 40) = 0;
    *(_QWORD *)(v28 + 48) = 0;
    *(_DWORD *)(v28 + 56) = 0;
    *(_OWORD *)(v28 + 24) = 0;
    v25[3] = v28;
    *(_QWORD *)(v28 + 64) = v8;
    result = v25[3];
    goto LABEL_11;
  }
  v18 = *(_DWORD *)(v14 + 8);
  if ( v18 != 1 && (unsigned int)(v18 - 17) > 1 )
    goto LABEL_15;
  v15 = v17[4];
  v19 = *(_DWORD *)(v15 + 8);
  if ( v19 != 1 && (unsigned int)(v19 - 17) > 1 || (v20 = sub_2418B0(*(_QWORD *)(v15 + 32)), v20 == -1) )
  {
    v21 = *(_QWORD *)v15;
    if ( *(_QWORD *)v15 != -1 )
    {
LABEL_16:
      v24 = sub_2413C0(a3, v21, v15, v16, *(double *)v12.m128i_i64);
      goto LABEL_17;
    }
LABEL_15:
    v21 = *v17;
    goto LABEL_16;
  }
  v21 = v20;
  v24 = sub_2413C0(a3, v20, v15, v16, *(double *)v12.m128i_i64);
LABEL_17:
  *((_DWORD *)v24 + 2) = 76;
  v41 = j__qalloc_or_throw(72, v21, v22, v23);
  *(_QWORD *)v41 = -1;
  *(_DWORD *)(v41 + 8) = 0;
  *(_QWORD *)(v41 + 12) = -1;
  *(_QWORD *)(v41 + 40) = 0;
  *(_QWORD *)(v41 + 48) = 0;
  *(_DWORD *)(v41 + 56) = 0;
  *(_OWORD *)(v41 + 24) = 0;
  v24[3] = v41;
  *(_QWORD *)(v41 + 64) = v8;
  if ( v13 == 12 )
    v17 = sub_244460(*(_QWORD *)(a1[41] + 112LL), (__int64)v17, v42, v43, v44, 0.0);
  result = v24[3];
LABEL_11:
  v30 = *v17;
  *v17 = *(_QWORD *)result;
  v31 = *(_DWORD *)(result + 8);
  *(_QWORD *)result = v30;
  LODWORD(v30) = *((_DWORD *)v17 + 2);
  *((_DWORD *)v17 + 2) = v31;
  v32 = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 8) = v30;
  LODWORD(v30) = *((_DWORD *)v17 + 3);
  *((_DWORD *)v17 + 3) = v32;
  v33 = *(_QWORD *)(result + 24);
  *(_DWORD *)(result + 12) = v30;
  v34 = v17[3];
  v17[3] = v33;
  v35 = *(_QWORD *)(result + 32);
  *(_QWORD *)(result + 24) = v34;
  v36 = v17[4];
  v17[4] = v35;
  v37 = *(_QWORD *)(result + 40);
  *(_QWORD *)(result + 32) = v36;
  v38 = v17[5];
  v17[5] = v37;
  v39 = *(_QWORD *)(result + 48);
  *(_QWORD *)(result + 40) = v38;
  v40 = v17[6];
  v17[6] = v39;
  LODWORD(v39) = *(_DWORD *)(result + 56);
  *(_QWORD *)(result + 48) = v40;
  LODWORD(v40) = *((_DWORD *)v17 + 14);
  *((_DWORD *)v17 + 14) = v39;
  *(_DWORD *)(result + 56) = v40;
  if ( v17 )
  {
    sub_255630((__int64)v17);
    clear_tinfo_t();
    return j__qfree((__int64)v17);
  }
  return result;
}

