__int64 __fastcall sub_45060(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // r12
  __int64 v8; // r11
  int v9; // ebx
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rbp
  void (__fastcall *hexdsp)(__int64, __int64 *, _QWORD); // rax
  int v14; // r13d
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdi
  signed int *v23; // r14
  __int64 v24; // rax
  unsigned int v25; // ebp
  __int64 v26; // rdi
  unsigned __int32 v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // r12
  __int64 *v32; // rdi
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  signed int v44; // ecx
  const char *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rbx
  const __m128i *v48; // rdi
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __m128i v51; // xmm0
  bool v52; // cf
  __int64 v53; // rax
  __int64 v54; // rcx
  const __m128i *v55; // rdi
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __m128i v58; // xmm0
  __int64 v59; // rdx
  __int64 v60; // rax
  __m128i v61; // xmm0
  __int64 v62; // [rsp+0h] [rbp-D8h]
  __int64 *v63; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v64; // [rsp+8h] [rbp-D0h]
  unsigned int v65; // [rsp+8h] [rbp-D0h]
  unsigned int v66; // [rsp+10h] [rbp-C8h]
  __int64 v67; // [rsp+10h] [rbp-C8h]
  __int64 v68; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v70; // [rsp+30h] [rbp-A8h]
  __int64 *v71; // [rsp+38h] [rbp-A0h]
  signed int v73; // [rsp+58h] [rbp-80h] BYREF
  unsigned int v74; // [rsp+5Ch] [rbp-7Ch] BYREF
  __m128i v75; // [rsp+60h] [rbp-78h] BYREF
  signed int *v76; // [rsp+70h] [rbp-68h] BYREF
  __m128i v77; // [rsp+78h] [rbp-60h] BYREF
  char v78; // [rsp+88h] [rbp-50h]
  unsigned __int64 v79; // [rsp+98h] [rbp-40h]

  v7 = a1;
  v8 = *a3;
  v9 = *((_DWORD *)a3 + 2);
  v79 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(v8 + 24);
  v73 = v9;
  if ( !v10 )
  {
    v43 = a2[1];
    v44 = v9;
    v45 = "make_descend_catch_scaffolding: try entry %d has empty handlers";
LABEL_45:
    sub_64B50((unsigned int)&v76, v43, (_DWORD)v45, v44, v10, a6);
    goto LABEL_27;
  }
  v11 = a3[4];
  if ( v11 != v10 )
  {
    sub_64B50(
      (unsigned int)&v76,
      a2[1],
      (unsigned int)"make_descend_unwind_scaffolding: inlined_handlers has size %d != actual num handlers %d",
      v11,
      v10,
      a6);
LABEL_27:
    *(_QWORD *)v7 = v76;
    v35 = _mm_loadu_si128(&v77);
    *(_BYTE *)(v7 + 24) = 1;
    *(__m128i *)(v7 + 8) = v35;
    return v7;
  }
  if ( v9 < 0 )
  {
    v43 = a2[1];
    v44 = v9;
    v45 = "make_descend_catch_scaffolding: from_state %d < 0";
    goto LABEL_45;
  }
  v64 = v10;
  v12 = 0;
  v62 = v8;
  hexdsp = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(a1, a2);
  hexdsp(205, a2 + 36, (unsigned int)v9);
  LODWORD(v10) = v64;
  v71 = a2 + 17;
  v66 = -1;
  v68 = v62;
  v70 = v64;
  v63 = a2 + 6;
  v14 = 0;
  while ( 1 )
  {
    v15 = *(_QWORD *)(v68 + 16) + 72 * v12;
    if ( *(_QWORD *)(v15 + 8) == -1 )
    {
      v44 = v73;
      v7 = a1;
      v45 = "make_descend_catch_scaffolding: try entry %d has no handler";
      v43 = a2[1];
      goto LABEL_45;
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( v16 == -1 )
      v17 = sub_4D4E0(v63, (unsigned int)v73);
    else
      v17 = sub_4DC70(v63, (unsigned int)v73, *(_QWORD *)(v15 + 16));
    v65 = sub_4C060(v17);
    if ( v66 != -1 )
    {
      v18 = sub_4CB00(v63, v66, 0);
      sub_4C000(v18, v65);
      goto LABEL_10;
    }
    v37 = a2[18];
    if ( v37 )
    {
      v38 = (__int64)v71;
      do
      {
        while ( 1 )
        {
          v39 = *(_QWORD *)(v37 + 16);
          v40 = *(_QWORD *)(v37 + 24);
          if ( *(_DWORD *)(v37 + 32) < v73 )
            break;
          v38 = v37;
          v37 = *(_QWORD *)(v37 + 16);
          if ( !v39 )
            goto LABEL_36;
        }
        v37 = *(_QWORD *)(v37 + 24);
      }
      while ( v40 );
LABEL_36:
      if ( v71 != (__int64 *)v38 && v73 >= *(_DWORD *)(v38 + 32) )
        goto LABEL_39;
    }
    else
    {
      v38 = (__int64)v71;
    }
    v76 = &v73;
    v38 = sub_43E90(a2 + 16, v38, &v76);
LABEL_39:
    *(_DWORD *)(v38 + 36) = v65;
LABEL_10:
    if ( v16 != -1 )
    {
      v19 = *(unsigned int *)(v15 + 24);
      v20 = *(unsigned int *)(v15 + 56);
      v21 = *(_QWORD *)(v15 + 16);
      v22 = **(_QWORD **)(v17 + 16);
      if ( (_DWORD)v19 )
        sub_4D250(v22, v21, v20, a2[5], v19, 0);
      else
        sub_4D300(v22, v21, v20);
    }
    sub_444A0((__int64)&v76, a2, (int *)&v74, *(_QWORD *)(v15 + 8), (__int64 *)(a3[3] + 16 * v12), v73, v14);
    v23 = v76;
    if ( v78 )
    {
      v7 = a1;
      *(_QWORD *)a1 = v76;
      v61 = _mm_loadu_si128(&v77);
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v61;
      return v7;
    }
    v24 = sub_4CB00(v63, v65, 1);
    v25 = v74;
    sub_4C000(v24, v74);
    if ( *(_QWORD *)(v15 + 40) )
    {
      v41 = sub_4CC70(v63, **(_QWORD **)(v15 + 32));
      v27 = sub_4C060(v41);
      v42 = sub_4CB00(v63, v25, 0);
      sub_4C000(v42, v27);
    }
    else
    {
      if ( v16 == -1 )
        v26 = sub_4D500(v63, (unsigned int)v73);
      else
        v26 = sub_4DC90(v63, (unsigned int)v73, v16);
      v27 = sub_4C060(v26);
      v28 = sub_4CB00(v63, v25, 0);
      sub_4C000(v28, v27);
    }
    if ( v23 )
    {
      v29 = a2[32];
      v30 = a2[31];
      v75.m128i_i32[0] = v27;
      v75.m128i_i64[1] = (__int64)v23;
      v31 = a2[33];
      v32 = a2 + 31;
      v33 = v29 + 1;
      if ( (unsigned __int64)&v75 < v30 || (unsigned __int64)&v75 >= v30 + 16 * v31 )
      {
        if ( v31 < v33 )
        {
          v46 = qvector_reserve(v32, 0, v29 + 1, 16);
          v47 = a2[33];
          v48 = (const __m128i *)a2[31];
          a2[33] = v31;
          v30 = v46;
          v49 = a2[32] - 1;
          if ( v49 >= 0 )
          {
            v50 = v30;
            do
            {
              v51 = _mm_loadu_si128(v48);
              v50 += 16LL;
              ++v48;
              *(__m128i *)(v50 - 16) = v51;
              v52 = v49-- == 0;
            }
            while ( !v52 );
            v48 = (const __m128i *)a2[31];
          }
          qfree(v48);
          a2[31] = v30;
          v29 = a2[32];
          a2[33] = v47;
        }
        *(__m128i *)(v30 + 16 * v29) = _mm_load_si128(&v75);
      }
      else
      {
        if ( v31 < v33 )
        {
          v53 = qvector_reserve(v32, 0, v29 + 1, 16);
          v54 = a2[33];
          v55 = (const __m128i *)a2[31];
          a2[33] = v31;
          v30 = v53;
          v56 = a2[32] - 1;
          if ( v56 >= 0 )
          {
            v57 = v30;
            do
            {
              v58 = _mm_loadu_si128(v55);
              v57 += 16LL;
              ++v55;
              *(__m128i *)(v57 - 16) = v58;
              v52 = v56-- == 0;
            }
            while ( !v52 );
            v55 = (const __m128i *)a2[31];
          }
          v67 = v54;
          qfree(v55);
          a2[31] = v30;
          v29 = a2[32];
          a2[33] = v67;
        }
        v34 = v30 + 16 * v29;
        *(_DWORD *)v34 = v27;
        *(_QWORD *)(v34 + 8) = v23;
      }
      ++a2[32];
    }
    v12 = ++v14;
    if ( v14 >= v70 )
      break;
    v66 = v65;
  }
  v59 = a2[24];
  v7 = a1;
  if ( !v59 )
  {
    v60 = (__int64)(a2 + 23);
    goto LABEL_68;
  }
  v60 = (__int64)(a2 + 23);
  do
  {
    if ( *(_DWORD *)(v59 + 32) >= v73 )
    {
      v60 = v59;
      v59 = *(_QWORD *)(v59 + 16);
    }
    else
    {
      v59 = *(_QWORD *)(v59 + 24);
    }
  }
  while ( v59 );
  if ( (__int64 *)v60 == a2 + 23 || v73 < *(_DWORD *)(v60 + 32) )
  {
LABEL_68:
    v76 = &v73;
    v60 = sub_43E90(a2 + 22, v60, &v76);
  }
  *(_DWORD *)(v60 + 36) = v65;
  *(_BYTE *)(a1 + 24) = 0;
  return v7;
}
