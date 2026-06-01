bool __fastcall sub_40E40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  int *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  int *v12; // rcx
  int *v13; // r14
  int v14; // r12d
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // xmm0_8
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // xmm0_8
  __int64 v27; // rax
  __int64 v28; // r12
  unsigned __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rsi
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v46; // rax
  int v47; // r12d
  __int64 v48; // rbp
  int *v49; // rdi
  int v50; // eax
  __int64 v51; // [rsp+8h] [rbp-60h]
  __int64 v52; // [rsp+8h] [rbp-60h]

  v2 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  v6 = (unsigned int)(v4 - 1);
  if ( (int)v4 > 0 )
  {
    while ( 1 )
    {
      v8 = (int *)(*(_QWORD *)(a1 + 8) + 4 * v2);
      if ( *v8 == (_DWORD)v2 )
      {
        *v8 = *(_DWORD *)(a1 + 88) | 0x40000000;
        v9 = *(_QWORD *)(a1 + 88);
        v10 = *(_QWORD *)(a1 + 80);
        if ( *(_QWORD *)(a1 + 96) < (unsigned __int64)(v9 + 1) )
        {
          v46 = qvector_reserve();
          *(_QWORD *)(a1 + 80) = v46;
          v10 = v46;
          v9 = *(_QWORD *)(a1 + 88);
        }
        *(_DWORD *)(v10 + 4 * v9) = v2;
        v7 = v2 + 1;
        ++*(_QWORD *)(a1 + 88);
        if ( v6 == v2 )
          break;
      }
      else
      {
        v7 = v2 + 1;
        if ( v6 == v2 )
          break;
      }
      v2 = v7;
    }
  }
  v11 = *(_QWORD *)(a1 + 64);
  v12 = *(int **)(a1 + 56);
  v13 = v12;
  if ( !(24 * v11) )
    return *(int *)(*(_QWORD *)a1 + 4448LL) > *(_QWORD *)(a1 + 208) - 1LL;
  while ( 1 )
  {
    v31 = *(_QWORD *)(a1 + 8);
    v32 = *(int *)(v31 + 4LL * *v13);
    if ( (_DWORD)v32 != -1 )
    {
      if ( (v32 & 0x40000000) == 0 )
      {
        LODWORD(v32) = *(_DWORD *)(v31 + 4 * v32);
        if ( (_DWORD)v32 == -1 || (v32 & 0x40000000) == 0 )
        {
LABEL_55:
          if ( !under_debugger )
            interr();
          BUG();
        }
      }
      LODWORD(v32) = v32 & 0xBFFFFFFF;
      v15 = *(int *)(v31 + 4LL * v13[1]);
      if ( (_DWORD)v15 == -1 )
        goto LABEL_35;
      if ( (v15 & 0x40000000) != 0 )
      {
        LODWORD(v15) = v15 & 0xBFFFFFFF;
        goto LABEL_35;
      }
LABEL_11:
      v14 = *(_DWORD *)(v31 + 4 * v15);
      if ( v14 == -1 || (v14 & 0x40000000) == 0 )
        goto LABEL_55;
      LODWORD(v15) = v14 & 0xBFFFFFFF;
      if ( (_DWORD)v32 == -1 )
        goto LABEL_14;
LABEL_35:
      v33 = *(_QWORD *)(a1 + 160);
      v34 = *(_QWORD *)(a1 + 152);
      if ( *(_QWORD *)(a1 + 168) < (unsigned __int64)(v33 + 1) )
      {
        v44 = qvector_reserve();
        *(_QWORD *)(a1 + 152) = v44;
        v34 = v44;
        v33 = *(_QWORD *)(a1 + 160);
      }
      *(_DWORD *)(v34 + 4 * v33) = v32;
      v35 = *(_QWORD *)(a1 + 192);
      ++*(_QWORD *)(a1 + 160);
      v36 = *(_QWORD *)(a1 + 184);
      v37 = *(_QWORD *)(a1 + 176);
      if ( v35 < v36 + 1 )
      {
        v43 = qvector_reserve();
        *(_QWORD *)(a1 + 176) = v43;
        v37 = v43;
        v36 = *(_QWORD *)(a1 + 184);
      }
      *(_QWORD *)(v37 + 8 * v36) = 0x3FF0000000000000LL;
      ++*(_QWORD *)(a1 + 184);
      if ( (_DWORD)v15 == -1 )
        goto LABEL_19;
      goto LABEL_14;
    }
    v15 = *(int *)(v31 + 4LL * v13[1]);
    if ( (_DWORD)v15 != -1 )
    {
      if ( (v15 & 0x40000000) != 0 )
      {
        LODWORD(v15) = v15 & 0xBFFFFFFF;
LABEL_14:
        v16 = *(_QWORD *)(a1 + 160);
        v17 = *(_QWORD *)(a1 + 152);
        if ( *(_QWORD *)(a1 + 168) < (unsigned __int64)(v16 + 1) )
        {
          v42 = qvector_reserve();
          *(_QWORD *)(a1 + 152) = v42;
          v17 = v42;
          v16 = *(_QWORD *)(a1 + 160);
        }
        *(_DWORD *)(v17 + 4 * v16) = v15;
        v18 = *(_QWORD *)(a1 + 192);
        ++*(_QWORD *)(a1 + 160);
        v19 = *(_QWORD *)(a1 + 184);
        v20 = *(_QWORD *)(a1 + 176);
        if ( v18 < v19 + 1 )
        {
          v41 = qvector_reserve();
          *(_QWORD *)(a1 + 176) = v41;
          v20 = v41;
          v19 = *(_QWORD *)(a1 + 184);
        }
        *(_QWORD *)(v20 + 8 * v19) = 0xBFF0000000000000LL;
        ++*(_QWORD *)(a1 + 184);
LABEL_19:
        v21 = *(_QWORD *)(a1 + 112);
        v22 = *((_QWORD *)v13 + 1);
        v23 = *(_QWORD *)(a1 + 104);
        if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v21 + 1) )
        {
          v52 = *((_QWORD *)v13 + 1);
          v40 = qvector_reserve();
          v22 = v52;
          *(_QWORD *)(a1 + 104) = v40;
          v23 = v40;
          v21 = *(_QWORD *)(a1 + 112);
        }
        *(_QWORD *)(v23 + 8 * v21) = v22;
        v24 = *(_QWORD *)(a1 + 136);
        v25 = *(_QWORD *)(a1 + 128);
        ++*(_QWORD *)(a1 + 112);
        v26 = *((_QWORD *)v13 + 2);
        if ( *(_QWORD *)(a1 + 144) < (unsigned __int64)(v24 + 1) )
        {
          v51 = *((_QWORD *)v13 + 2);
          v39 = qvector_reserve();
          v26 = v51;
          *(_QWORD *)(a1 + 128) = v39;
          v25 = v39;
          v24 = *(_QWORD *)(a1 + 136);
        }
        *(_QWORD *)(v25 + 8 * v24) = v26;
        v27 = *(_QWORD *)(a1 + 208);
        v28 = *(_QWORD *)(a1 + 160);
        v29 = *(_QWORD *)(a1 + 216);
        ++*(_QWORD *)(a1 + 136);
        v30 = *(_QWORD *)(a1 + 200);
        if ( v29 < v27 + 1 )
        {
          v38 = qvector_reserve();
          *(_QWORD *)(a1 + 200) = v38;
          v30 = v38;
          v27 = *(_QWORD *)(a1 + 208);
        }
        *(_DWORD *)(v30 + 4 * v27) = v28;
        ++*(_QWORD *)(a1 + 208);
        goto LABEL_26;
      }
      goto LABEL_11;
    }
    if ( *((double *)v13 + 1) > 0.0 || *((double *)v13 + 2) < 0.0 )
      return 0;
    v47 = *(_DWORD *)(a1 + 112);
    v48 = (unsigned int)(*(_DWORD *)(a2 + 8) - 1);
    if ( (int)v48 < 0 )
      goto LABEL_27;
    do
    {
      v49 = (int *)(*(_QWORD *)a2 + 4 * v48);
      v50 = *v49;
      if ( *v49 == v47 )
      {
        memmove(v49, v49 + 1, 4 * (*(_QWORD *)(a2 + 8) - v48) - 4);
        --*(_QWORD *)(a2 + 8);
      }
      else if ( v50 > v47 )
      {
        *v49 = v50 - 1;
      }
      --v48;
    }
    while ( (_DWORD)v48 != -1 );
LABEL_26:
    v12 = *(int **)(a1 + 56);
    v11 = *(_QWORD *)(a1 + 64);
LABEL_27:
    v13 += 6;
    if ( v13 == &v12[6 * v11] )
      return *(int *)(*(_QWORD *)a1 + 4448LL) > *(_QWORD *)(a1 + 208) - 1LL;
  }
}
