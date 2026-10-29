_BOOL8 __fastcall sub_28E260(_QWORD *a1, __int64 a2, __m128i a3)
{
  _BOOL4 v3; // r12d
  __int64 v5; // r15
  const __m128i *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // esi
  int v22; // esi
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rcx
  _QWORD *v32; // r14
  _QWORD *v33; // rbx
  __int64 v34; // r13
  __int64 *v35; // r12
  __int64 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // esi
  int v40; // esi
  __m128d v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // [rsp+8h] [rbp-B0h]
  __int64 v44; // [rsp+10h] [rbp-A8h]
  __int64 *v45; // [rsp+18h] [rbp-A0h]
  const __m128i *v46; // [rsp+20h] [rbp-98h]
  bool v47; // [rsp+2Dh] [rbp-8Bh]
  bool v48; // [rsp+2Eh] [rbp-8Ah]
  char v49; // [rsp+2Fh] [rbp-89h]
  __int64 v50; // [rsp+30h] [rbp-88h]
  _QWORD v51[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v52[13]; // [rsp+50h] [rbp-68h] BYREF

  v3 = 0;
  v45 = (__int64 *)a2;
  v52[5] = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0x2F) != 0xD )
  {
    sub_283C00(v51, a1, a2, *(double *)a3.m128i_i64);
    v5 = v51[1];
    do
    {
      v6 = (const __m128i *)v45[3];
      v7 = v6[4].m128i_i64[1];
      v46 = v6;
      v43 = v7;
      if ( !v7 )
        break;
      v8 = *(_QWORD *)v5;
      v9 = v51[0];
      v44 = *(_QWORD *)v5;
      if ( v51[0] == *(_QWORD *)v5 )
        break;
      v10 = v8 + 16;
      v50 = v8 + 16;
      if ( *(_DWORD *)(v8 + 24) != 80 )
        break;
      v47 = sub_28DE40(*(_QWORD *)(v8 + 40));
      if ( !v47 )
        break;
      v11 = v6[4].m128i_i64[0];
      v48 = 0;
      v12 = sub_27F110(v11, v7, v10, v3, *(double *)a3.m128i_i64);
      if ( !v12 )
      {
        v12 = sub_27F110(v43, v11, v50, v3, *(double *)a3.m128i_i64);
        if ( !v12 )
          return v3;
        v43 = v11;
        v48 = v47;
      }
      v13 = *(_QWORD *)(v12 + 24);
      sub_28BB60((__int64)a1, v13);
      *(_DWORD *)(v12 + 8) = 80;
      v16 = j__qalloc_or_throw(64, v13, v14, v15);
      a3.m128i_i64[0] = 0;
      *(_QWORD *)v16 = -1;
      v18 = v16;
      *(_QWORD *)(v16 + 8) = 0xFFFFFFFF00000000LL;
      *(_OWORD *)(v16 + 24) = 0;
      *(_QWORD *)(v16 + 40) = 0;
      *(_QWORD *)(v16 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v16 + 48) = 0;
      *(_DWORD *)(v16 + 56) = 0;
      *(_QWORD *)(v12 + 24) = v16;
      v19 = *(_QWORD *)(v13 + 32);
      v20 = *(_QWORD *)v18;
      *(_QWORD *)v18 = *(_QWORD *)v19;
      v21 = *(_DWORD *)(v19 + 8);
      *(_QWORD *)v19 = v20;
      LODWORD(v20) = *(_DWORD *)(v18 + 8);
      *(_DWORD *)(v18 + 8) = v21;
      v22 = *(_DWORD *)(v19 + 12);
      *(_DWORD *)(v19 + 8) = v20;
      LODWORD(v20) = *(_DWORD *)(v18 + 12);
      *(_DWORD *)(v18 + 12) = v22;
      v23 = *(_QWORD *)(v19 + 24);
      *(_DWORD *)(v19 + 12) = v20;
      v24 = *(_QWORD *)(v18 + 24);
      *(_QWORD *)(v18 + 24) = v23;
      v25 = *(_QWORD *)(v19 + 32);
      *(_QWORD *)(v19 + 24) = v24;
      v26 = *(_QWORD *)(v18 + 32);
      *(_QWORD *)(v18 + 32) = v25;
      v27 = *(_QWORD *)(v19 + 40);
      *(_QWORD *)(v19 + 32) = v26;
      v28 = *(_QWORD *)(v18 + 40);
      *(_QWORD *)(v18 + 40) = v27;
      *(_QWORD *)(v19 + 40) = v28;
      v29 = *(_QWORD *)(v18 + 48);
      *(_QWORD *)(v18 + 48) = *(_QWORD *)(v19 + 48);
      v30 = *(unsigned int *)(v19 + 56);
      *(_QWORD *)(v19 + 48) = v29;
      v31 = *(unsigned int *)(v18 + 56);
      *(_DWORD *)(v18 + 56) = v30;
      *(_DWORD *)(v19 + 56) = v31;
      if ( v13 )
      {
        sub_255630(v13, 0.0);
        clear_tinfo_t();
        j__qfree(v13);
      }
      v49 = 0;
      if ( *(_DWORD *)(v44 + 28) == -1 )
        v49 = sub_241B40(v43, v30, v18, v31, v17) ^ 1;
      v32 = *(_QWORD **)(v43 + 24);
      v33 = v32;
      if ( v32 == (_QWORD *)*v32 )
      {
        v5 = v44;
        v35 = (__int64 *)(v44 + 16);
      }
      else
      {
        v5 = v44;
        do
        {
          v34 = v5;
          v52[0] = -1;
          v52[1] = -4294967226LL;
          v52[2] = 0xFFFFFFFFLL;
          v52[3] = 0;
          v5 = qalloc_or_throw(48, v30, v18, v31);
          *(_QWORD *)(v5 + 16) = -1;
          *(_DWORD *)(v5 + 24) = 70;
          v35 = (__int64 *)(v5 + 16);
          *(_QWORD *)(v5 + 28) = -1;
          sub_25AA70(v5 + 16, (__int64)v52, 0.0);
          *(_QWORD *)v5 = v34;
          v36 = *(__int64 **)(v34 + 8);
          *(_QWORD *)(v5 + 8) = v36;
          *v36 = v5;
          *(_QWORD *)(v34 + 8) = v5;
          ++*(_QWORD *)(v9 + 16);
          sub_255050((__int64)v52, 0.0);
          v37 = v33[1];
          v38 = *(_QWORD *)(v5 + 16);
          *(_QWORD *)(v5 + 16) = *(_QWORD *)(v37 + 16);
          v39 = *(_DWORD *)(v37 + 24);
          *(_QWORD *)(v37 + 16) = v38;
          LODWORD(v38) = *(_DWORD *)(v5 + 24);
          *(_DWORD *)(v5 + 24) = v39;
          v40 = *(_DWORD *)(v37 + 28);
          *(_DWORD *)(v37 + 24) = v38;
          LODWORD(v38) = *(_DWORD *)(v5 + 28);
          *(_DWORD *)(v5 + 28) = v40;
          v30 = *(_QWORD *)(v37 + 40);
          *(_DWORD *)(v37 + 28) = v38;
          v18 = *(_QWORD *)(v5 + 40);
          *(_QWORD *)(v5 + 40) = v30;
          *(_QWORD *)(v37 + 40) = v18;
          v33 = (_QWORD *)v33[1];
        }
        while ( v33 != (_QWORD *)*v32 );
      }
      if ( v43 )
      {
        sub_255050(v43, 0.0);
        j__qfree(v43);
      }
      if ( v48 )
      {
        v41 = (__m128d)_mm_loadu_si128(v46 + 4);
        a3 = (__m128i)_mm_shuffle_pd(v41, v41, 1);
        v46[4] = a3;
        sub_2800E0(a1[9], v45, (__int64)v46, v31);
      }
      v46[4].m128i_i64[1] = 0;
      if ( v49 )
      {
        v42 = *(_QWORD *)v44;
        **(_QWORD **)(v44 + 8) = *(_QWORD *)v44;
        *(_QWORD *)(v42 + 8) = *(_QWORD *)(v44 + 8);
        sub_255050(v50, *(double *)a3.m128i_i64);
        qfree(v44);
        --*(_QWORD *)(v9 + 16);
      }
      v45 = v35;
      v3 = v47;
    }
    while ( *(_DWORD *)(v5 + 24) == 73 );
  }
  return v3;
}

