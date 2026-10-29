_BOOL8 __fastcall sub_2899E0(_QWORD *a1, __int64 a2)
{
  _BOOL4 v2; // r12d
  __int64 v4; // r15
  const __m128i *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // esi
  int v19; // esi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rcx
  _QWORD *v29; // r14
  _QWORD *v30; // rbx
  __int64 v31; // r13
  __int64 *v32; // r12
  __int64 *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // esi
  int v37; // esi
  __int64 v38; // rsi
  __int64 v39; // rdx
  __m128d v40; // xmm0
  __int64 v41; // rax
  __int64 v42; // [rsp+8h] [rbp-B0h]
  __int64 v43; // [rsp+10h] [rbp-A8h]
  __int64 *v44; // [rsp+18h] [rbp-A0h]
  const __m128i *v45; // [rsp+20h] [rbp-98h]
  bool v46; // [rsp+2Dh] [rbp-8Bh]
  bool v47; // [rsp+2Eh] [rbp-8Ah]
  char v48; // [rsp+2Fh] [rbp-89h]
  __int64 v49; // [rsp+30h] [rbp-88h]
  _QWORD v50[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v51[13]; // [rsp+50h] [rbp-68h] BYREF

  v2 = 0;
  v44 = (__int64 *)a2;
  v51[5] = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0x2F) != 0xD )
  {
    sub_27F380(v50, a1, a2);
    v4 = v50[1];
    do
    {
      v5 = (const __m128i *)v44[3];
      v6 = v5[4].m128i_i64[1];
      v45 = v5;
      v42 = v6;
      if ( !v6 )
        break;
      v7 = *(_QWORD *)v4;
      v8 = v50[0];
      v43 = *(_QWORD *)v4;
      if ( v50[0] == *(_QWORD *)v4 )
        break;
      v9 = v7 + 16;
      v49 = v7 + 16;
      if ( *(_DWORD *)(v7 + 24) != 80 )
        break;
      v46 = sub_2895C0(*(_QWORD *)(v7 + 40));
      if ( !v46 )
        break;
      v10 = v5[4].m128i_i64[0];
      v47 = 0;
      v11 = sub_27A890(v10, v6, v9, v2);
      if ( !v11 )
      {
        v11 = sub_27A890(v42, v10, v49, v2);
        if ( !v11 )
          return v2;
        v42 = v10;
        v47 = v46;
      }
      v12 = *(_QWORD *)(v11 + 24);
      sub_2872E0((__int64)a1, v12);
      *(_DWORD *)(v11 + 8) = 80;
      v13 = j__qalloc_or_throw();
      *(_QWORD *)v13 = -1;
      v15 = v13;
      *(_QWORD *)(v13 + 8) = 0xFFFFFFFF00000000LL;
      *(_OWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 40) = 0;
      *(_QWORD *)(v13 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v13 + 48) = 0;
      *(_DWORD *)(v13 + 56) = 0;
      *(_QWORD *)(v11 + 24) = v13;
      v16 = *(_QWORD *)(v12 + 32);
      v17 = *(_QWORD *)v15;
      *(_QWORD *)v15 = *(_QWORD *)v16;
      v18 = *(_DWORD *)(v16 + 8);
      *(_QWORD *)v16 = v17;
      LODWORD(v17) = *(_DWORD *)(v15 + 8);
      *(_DWORD *)(v15 + 8) = v18;
      v19 = *(_DWORD *)(v16 + 12);
      *(_DWORD *)(v16 + 8) = v17;
      LODWORD(v17) = *(_DWORD *)(v15 + 12);
      *(_DWORD *)(v15 + 12) = v19;
      v20 = *(_QWORD *)(v16 + 24);
      *(_DWORD *)(v16 + 12) = v17;
      v21 = *(_QWORD *)(v15 + 24);
      *(_QWORD *)(v15 + 24) = v20;
      v22 = *(_QWORD *)(v16 + 32);
      *(_QWORD *)(v16 + 24) = v21;
      v23 = *(_QWORD *)(v15 + 32);
      *(_QWORD *)(v15 + 32) = v22;
      v24 = *(_QWORD *)(v16 + 40);
      *(_QWORD *)(v16 + 32) = v23;
      v25 = *(_QWORD *)(v15 + 40);
      *(_QWORD *)(v15 + 40) = v24;
      *(_QWORD *)(v16 + 40) = v25;
      v26 = *(_QWORD *)(v15 + 48);
      *(_QWORD *)(v15 + 48) = *(_QWORD *)(v16 + 48);
      v27 = *(unsigned int *)(v16 + 56);
      *(_QWORD *)(v16 + 48) = v26;
      v28 = *(unsigned int *)(v15 + 56);
      *(_DWORD *)(v15 + 56) = v27;
      *(_DWORD *)(v16 + 56) = v28;
      if ( v12 )
      {
        sub_250DB0(v12);
        clear_tinfo_t();
        j__qfree();
      }
      v48 = 0;
      if ( *(_DWORD *)(v43 + 28) == -1 )
        v48 = sub_23D2C0(v42, v27, v15, v28, v14) ^ 1;
      v29 = *(_QWORD **)(v42 + 24);
      v30 = v29;
      if ( v29 == (_QWORD *)*v29 )
      {
        v4 = v43;
        v32 = (__int64 *)(v43 + 16);
      }
      else
      {
        v4 = v43;
        do
        {
          v31 = v4;
          v51[0] = -1;
          v51[1] = -4294967226LL;
          v51[2] = 0xFFFFFFFFLL;
          v51[3] = 0;
          v4 = qalloc_or_throw();
          *(_QWORD *)(v4 + 16) = -1;
          *(_DWORD *)(v4 + 24) = 70;
          v32 = (__int64 *)(v4 + 16);
          *(_QWORD *)(v4 + 28) = -1;
          sub_2561F0(v4 + 16, (__int64)v51);
          *(_QWORD *)v4 = v31;
          v33 = *(__int64 **)(v31 + 8);
          *(_QWORD *)(v4 + 8) = v33;
          *v33 = v4;
          *(_QWORD *)(v31 + 8) = v4;
          ++*(_QWORD *)(v8 + 16);
          sub_2507D0((__int64)v51);
          v34 = v30[1];
          v35 = *(_QWORD *)(v4 + 16);
          *(_QWORD *)(v4 + 16) = *(_QWORD *)(v34 + 16);
          v36 = *(_DWORD *)(v34 + 24);
          *(_QWORD *)(v34 + 16) = v35;
          LODWORD(v35) = *(_DWORD *)(v4 + 24);
          *(_DWORD *)(v4 + 24) = v36;
          v37 = *(_DWORD *)(v34 + 28);
          *(_DWORD *)(v34 + 24) = v35;
          LODWORD(v35) = *(_DWORD *)(v4 + 28);
          *(_DWORD *)(v4 + 28) = v37;
          v38 = *(_QWORD *)(v34 + 40);
          *(_DWORD *)(v34 + 28) = v35;
          v39 = *(_QWORD *)(v4 + 40);
          *(_QWORD *)(v4 + 40) = v38;
          *(_QWORD *)(v34 + 40) = v39;
          v30 = (_QWORD *)v30[1];
        }
        while ( v30 != (_QWORD *)*v29 );
      }
      if ( v42 )
      {
        sub_2507D0(v42);
        j__qfree();
      }
      if ( v47 )
      {
        v40 = (__m128d)_mm_loadu_si128(v45 + 4);
        v45[4] = (const __m128i)_mm_shuffle_pd(v40, v40, 1);
        sub_27B860(a1[9], v44, (__int64)v45);
      }
      v45[4].m128i_i64[1] = 0;
      if ( v48 )
      {
        v41 = *(_QWORD *)v43;
        **(_QWORD **)(v43 + 8) = *(_QWORD *)v43;
        *(_QWORD *)(v41 + 8) = *(_QWORD *)(v43 + 8);
        sub_2507D0(v49);
        qfree();
        --*(_QWORD *)(v8 + 16);
      }
      v44 = v32;
      v2 = v46;
    }
    while ( *(_DWORD *)(v4 + 24) == 73 );
  }
  return v2;
}

