__int64 __fastcall std::vector<ida_mcp::mcp::Prompt>::_M_realloc_append<ida_mcp::mcp::Prompt const&>(
        __int64 a1,
        __int64 a2)
{
  char *v2; // r12
  char *v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rbp
  char *v12; // rbx
  char *v13; // r14
  __int64 v14; // rdx
  __m128i v15; // xmm0
  char *v16; // rdi
  _QWORD *v17; // rcx
  char *v18; // rdx
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  char *v21; // rdx
  __int64 v22; // rdx
  char *v23; // rdi
  unsigned int v24; // esi
  __int64 v25; // rbp
  unsigned __int64 v27; // rdx
  char *v28; // rcx
  __int64 v29; // rdi
  unsigned int v30; // esi
  unsigned int v31; // esi
  unsigned int v32; // ecx
  __int64 v33; // r8
  unsigned int v34; // esi
  __int64 v35; // rax
  __int64 v36; // r14
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rdx
  __int64 v40; // rbx
  __int16 v41; // ax
  unsigned __int64 v42; // rdx
  char *v43; // rcx
  char *v44; // rdi
  unsigned int v45; // esi
  unsigned int v46; // esi
  unsigned int v47; // ecx
  __int64 v48; // r8
  __int64 v49; // [rsp+0h] [rbp-58h]
  __int64 v50; // [rsp+8h] [rbp-50h]
  __int64 v51; // [rsp+10h] [rbp-48h]
  __int64 v52; // [rsp+18h] [rbp-40h]

  v2 = *(char **)(a1 + 8);
  v3 = *(char **)a1;
  v4 = (__int64)&v2[-*(_QWORD *)a1];
  v5 = 0x4EC4EC4EC4EC4EC5LL * (v4 >> 3);
  if ( v5 == 0x13B13B13B13B13BLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v6 = 1;
  if ( v5 )
    v6 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v8 = v5 + v6;
  if ( v8 > 0x13B13B13B13B13BLL )
    v8 = 0x13B13B13B13B13BLL;
  v51 = 104 * v8;
  v9 = operator new(104 * v8);
  v10 = v9 + v4;
  v50 = v9;
  *(_QWORD *)v10 = v10 + 16;
  std::string::_M_construct<true>();
  *(_BYTE *)(v10 + 64) = 0;
  if ( *(_BYTE *)(a2 + 64) )
  {
    *(_QWORD *)(v10 + 32) = v10 + 48;
    std::string::_M_construct<true>();
    *(_BYTE *)(v10 + 64) = 1;
  }
  *(_BYTE *)(v10 + 96) = 0;
  if ( *(_BYTE *)(a2 + 96) )
  {
    v35 = *(_QWORD *)(a2 + 80);
    v36 = *(_QWORD *)(a2 + 72);
    *(_QWORD *)(v10 + 88) = 0;
    *(_OWORD *)(v10 + 72) = 0;
    v49 = v35;
    v37 = v35 - v36;
    v38 = v37;
    if ( v37 )
      v52 = operator new(v37);
    else
      v52 = 0;
    v39 = v52 + v38;
    v40 = v52;
    *(_QWORD *)(v10 + 88) = v39;
    for ( *(__m128i *)(v10 + 72) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v52, (__m128i)(unsigned __int64)v52);
          v49 != v36;
          *(_WORD *)(v40 - 8) = v41 )
    {
      *(_QWORD *)v40 = v40 + 16;
      std::string::_M_construct<true>();
      *(_BYTE *)(v40 + 64) = 0;
      if ( *(_BYTE *)(v36 + 64) )
      {
        *(_QWORD *)(v40 + 32) = v40 + 48;
        std::string::_M_construct<true>();
        *(_BYTE *)(v40 + 64) = 1;
      }
      v41 = *(_WORD *)(v36 + 72);
      v40 += 80;
      v36 += 80;
    }
    *(_QWORD *)(v10 + 80) = v40;
    *(_BYTE *)(v10 + 96) = 1;
  }
  v11 = v50;
  v12 = v3 + 16;
  v13 = v3 + 48;
  if ( v2 != v3 )
  {
    while ( 1 )
    {
      v17 = (_QWORD *)(v11 + 16);
      *(_QWORD *)v11 = v11 + 16;
      v18 = *((char **)v12 - 2);
      if ( v18 != v12 )
        break;
      v19 = *((_QWORD *)v12 - 1);
      v24 = v19 + 1;
      if ( (unsigned int)(v19 + 1) >= 8 )
      {
        *v17 = *(_QWORD *)v12;
        *(_QWORD *)((char *)v17 + v24 - 8) = *(_QWORD *)&v12[v24 - 8];
        v27 = (v11 + 24) & 0xFFFFFFFFFFFFFFF8LL;
        v28 = (char *)v17 - v27;
        v29 = v12 - v28;
        v30 = ((_DWORD)v28 + v24) & 0xFFFFFFF8;
        if ( v30 >= 8 )
        {
          v31 = v30 & 0xFFFFFFF8;
          v32 = 0;
          do
          {
            v33 = v32;
            v32 += 8;
            *(_QWORD *)(v27 + v33) = *(_QWORD *)(v29 + v33);
          }
          while ( v32 < v31 );
        }
        goto LABEL_20;
      }
      if ( (v24 & 4) != 0 )
      {
        *(_DWORD *)v17 = *(_DWORD *)v12;
        *(_DWORD *)((char *)v17 + v24 - 4) = *(_DWORD *)&v12[v24 - 4];
        v19 = *((_QWORD *)v12 - 1);
      }
      else if ( (_DWORD)v19 != -1 )
      {
        *(_BYTE *)v17 = *v12;
        if ( (v24 & 2) == 0 )
          goto LABEL_20;
        *(_WORD *)((char *)v17 + v24 - 2) = *(_WORD *)&v12[v24 - 2];
        v19 = *((_QWORD *)v12 - 1);
      }
LABEL_21:
      *(_QWORD *)(v11 + 8) = v19;
      *((_QWORD *)v12 - 2) = v12;
      *((_QWORD *)v12 - 1) = 0;
      *v12 = 0;
      *(_BYTE *)(v11 + 64) = 0;
      if ( !v12[48] )
        goto LABEL_11;
      v20 = (_QWORD *)(v11 + 48);
      *(_QWORD *)(v11 + 32) = v11 + 48;
      v21 = *((char **)v12 + 2);
      if ( v21 != v13 )
      {
        *(_QWORD *)(v11 + 32) = v21;
        *(_QWORD *)(v11 + 48) = *((_QWORD *)v12 + 4);
LABEL_24:
        v22 = *((_QWORD *)v12 + 3);
        goto LABEL_25;
      }
      v22 = *((_QWORD *)v12 + 3);
      v34 = v22 + 1;
      if ( (unsigned int)(v22 + 1) >= 8 )
      {
        *v20 = *(_QWORD *)v13;
        *(_QWORD *)((char *)v20 + v34 - 8) = *(_QWORD *)&v13[v34 - 8];
        v42 = (v11 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        v43 = (char *)v20 - v42;
        v44 = (char *)(v13 - v43);
        v45 = ((_DWORD)v43 + v34) & 0xFFFFFFF8;
        if ( v45 >= 8 )
        {
          v46 = v45 & 0xFFFFFFF8;
          v47 = 0;
          do
          {
            v48 = v47;
            v47 += 8;
            *(_QWORD *)(v42 + v48) = *(_QWORD *)&v44[v48];
          }
          while ( v47 < v46 );
        }
        goto LABEL_24;
      }
      if ( (v34 & 4) != 0 )
      {
        *(_DWORD *)v20 = *(_DWORD *)v13;
        *(_DWORD *)((char *)v20 + v34 - 4) = *(_DWORD *)&v13[v34 - 4];
        v22 = *((_QWORD *)v12 + 3);
        goto LABEL_25;
      }
      if ( (_DWORD)v22 != -1 )
      {
        *(_BYTE *)v20 = *v13;
        if ( (v34 & 2) != 0 )
        {
          *(_WORD *)((char *)v20 + v34 - 2) = *(_WORD *)&v13[v34 - 2];
          v22 = *((_QWORD *)v12 + 3);
          goto LABEL_25;
        }
        goto LABEL_24;
      }
LABEL_25:
      *(_QWORD *)(v11 + 40) = v22;
      *((_QWORD *)v12 + 2) = v13;
      *((_QWORD *)v12 + 3) = 0;
      v12[32] = 0;
      *(_BYTE *)(v11 + 64) = 1;
LABEL_11:
      *(_BYTE *)(v11 + 96) = 0;
      if ( v12[80] )
      {
        v14 = *((_QWORD *)v12 + 9);
        v15 = _mm_loadu_si128((const __m128i *)(v12 + 56));
        *(_BYTE *)(v11 + 96) = 1;
        *(_QWORD *)(v11 + 88) = v14;
        *(__m128i *)(v11 + 72) = v15;
      }
      if ( v12[48] )
      {
        v23 = *((char **)v12 + 2);
        if ( v23 != v13 )
          operator delete(v23, *((_QWORD *)v12 + 4) + 1LL);
      }
      v16 = *((char **)v12 - 2);
      if ( v16 != v12 )
        operator delete(v16, *(_QWORD *)v12 + 1LL);
      v11 += 104;
      v13 += 104;
      if ( v2 == v12 + 88 )
        goto LABEL_33;
      v12 += 104;
    }
    *(_QWORD *)v11 = v18;
    *(_QWORD *)(v11 + 16) = *(_QWORD *)v12;
LABEL_20:
    v19 = *((_QWORD *)v12 - 1);
    goto LABEL_21;
  }
LABEL_33:
  v25 = v11 + 104;
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
  *(_QWORD *)(a1 + 8) = v25;
  *(_QWORD *)a1 = v50;
  *(_QWORD *)(a1 + 16) = v50 + v51;
  return v50;
}

