unsigned __int64 __fastcall sub_10F6F0(__int64 a1, _QWORD *a2, __int64 *a3, unsigned __int64 **a4, __m128i a5)
{
  __int64 *v5; // r11
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 *v10; // rbp
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r15
  __int64 *v14; // rdi
  __int64 *v15; // rdi
  __int64 v16; // rdi
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r10
  __int64 v25; // r14
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // r10
  int v29; // ebx
  __int64 v30; // rbp
  int v31; // r12d
  __int64 v32; // r13
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r15
  __int64 v36; // r10
  char v37; // al
  _QWORD *v38; // rdi
  unsigned __int64 v39; // rsi
  int v40; // eax
  __int64 v42; // rsi
  __int64 v43; // rcx
  int v44; // eax
  char v45; // al
  unsigned __int64 v46; // rsi
  bool v47; // al
  unsigned __int64 v48; // r11
  const __m128i *v49; // r10
  char v50; // al
  unsigned __int64 v51; // r12
  __int64 v52; // rbx
  const __m128i *v53; // rsi
  __int64 v54; // rax
  __int64 *v55; // r11
  __int64 v56; // rsi
  __int64 v57; // rbx
  __int64 v58; // r14
  __int64 v59; // rbx
  __int64 v60; // r12
  unsigned __int64 *v61; // rdx
  __int64 v62; // rdx
  __int64 *v65; // [rsp+0h] [rbp-E8h]
  __int64 *v66; // [rsp+0h] [rbp-E8h]
  __int64 v67; // [rsp+0h] [rbp-E8h]
  unsigned __int64 *v68; // [rsp+0h] [rbp-E8h]
  __int64 v69; // [rsp+0h] [rbp-E8h]
  __int64 v70; // [rsp+0h] [rbp-E8h]
  __int64 *v72; // [rsp+10h] [rbp-D8h]
  __int64 v73; // [rsp+18h] [rbp-D0h]
  const __m128i *v74; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v75; // [rsp+18h] [rbp-D0h]
  const __m128i *v76; // [rsp+18h] [rbp-D0h]
  __int64 v77; // [rsp+18h] [rbp-D0h]
  const __m128i *v78; // [rsp+18h] [rbp-D0h]
  __int64 *v79; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v80; // [rsp+20h] [rbp-C8h]
  __int64 *v82; // [rsp+38h] [rbp-B0h]
  __int64 v83; // [rsp+40h] [rbp-A8h]
  __int64 v84; // [rsp+48h] [rbp-A0h]
  __m128i *v85; // [rsp+50h] [rbp-98h]
  __int64 v86; // [rsp+58h] [rbp-90h]
  bool v87; // [rsp+63h] [rbp-85h]
  int v88; // [rsp+64h] [rbp-84h]
  const __m128i *v89; // [rsp+68h] [rbp-80h]
  unsigned __int64 v90; // [rsp+68h] [rbp-80h]
  _QWORD v91[2]; // [rsp+70h] [rbp-78h] BYREF
  int v92; // [rsp+80h] [rbp-68h]
  unsigned __int64 **v93; // [rsp+90h] [rbp-58h] BYREF
  __int64 v94; // [rsp+98h] [rbp-50h]
  int v95; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v96; // [rsp+A8h] [rbp-40h]

  v5 = a3;
  v6 = a1;
  v96 = __readfsqword(0x28u);
  v7 = a3[1];
  if ( v7 )
  {
    v8 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = (__int64 *)(*a3 + 24 * v8);
        v11 = *v10;
        if ( *v10 )
          break;
LABEL_14:
        if ( v7 == ++v8 )
          goto LABEL_15;
      }
      v12 = *(_QWORD *)v11;
      if ( !v10[1] )
      {
        *(_QWORD *)v11 = *(_QWORD *)v11 & 3LL | v11 & 0xFFFFFFFFFFFFFFFCLL;
        a5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v10, (__m128i)(unsigned __int64)*v10);
        *(__m128i *)(*v10 + 8) = a5;
        *(_QWORD *)*v10 &= ~1uLL;
        *(_QWORD *)*v10 |= 2uLL;
        v16 = *v10;
        if ( !*v10 )
          goto LABEL_14;
        goto LABEL_24;
      }
      v13 = v12 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        break;
LABEL_13:
      *(_QWORD *)v11 = v12 & 3 | v11 & 0xFFFFFFFFFFFFFFFCLL;
      a5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v10, (__m128i)(unsigned __int64)*v10);
      *(__m128i *)(*v10 + 8) = a5;
      *(_QWORD *)*v10 &= ~1uLL;
      *(_QWORD *)*v10 |= 2uLL;
      v16 = *v10;
      v10[1] = 0;
      if ( !v16 )
        goto LABEL_14;
LABEL_24:
      qfree(v16);
      if ( v7 == ++v8 )
      {
LABEL_15:
        v6 = a1;
        v5 = a3;
        goto LABEL_16;
      }
    }
    v14 = *(__int64 **)(v13 + 8);
    if ( (*(_BYTE *)v14 & 2) != 0 )
    {
      v15 = *(__int64 **)(v13 + 16);
      if ( (*(_BYTE *)v15 & 2) != 0 )
        goto LABEL_27;
    }
    else
    {
      sub_102130(v14);
      v15 = *(__int64 **)(v13 + 16);
      if ( (*(_BYTE *)v15 & 2) != 0 )
        goto LABEL_9;
    }
    sub_102130(v15);
LABEL_9:
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
LABEL_10:
      if ( v12 > 3 )
        qfree(v12 & 0xFFFFFFFFFFFFFFFCLL);
      v11 = *v10;
      v12 = *(_QWORD *)*v10;
      goto LABEL_13;
    }
LABEL_27:
    v22 = *(_QWORD *)(v13 + 24);
    if ( v22 )
    {
      *(_QWORD *)(v13 + 32) = 0;
      qfree(v22);
    }
    *(_QWORD *)v13 |= 2uLL;
    goto LABEL_10;
  }
LABEL_16:
  v5[1] = 0;
  v17 = *(int *)(v6 + 16);
  if ( !*(_DWORD *)(v6 + 16) )
  {
    if ( !a4 )
      return v96 - __readfsqword(0x28u);
    goto LABEL_31;
  }
  v18 = *v5;
  v91[0] = 0;
  v91[1] = 0;
  v19 = v5[2];
  v92 = -1;
  if ( (unsigned __int64)v91 < v18 || (unsigned __int64)v91 >= v18 + 24 * v19 )
  {
    v51 = 0;
    if ( v19 >= v17 )
      goto LABEL_97;
    v72 = v5;
    v54 = qvector_reserve((__int64)v5, 0, v17, 24);
    v55 = v72;
    v69 = v54;
    v56 = v72[2];
    v57 = v72[1];
    v72[2] = v19;
    v58 = *v72;
    v59 = v57 - 1;
    if ( v59 >= 0 )
    {
      v60 = v54;
      do
      {
        v61 = *(unsigned __int64 **)v58;
        *(_QWORD *)v58 = 0;
        *(_QWORD *)v60 = v61;
        v62 = *(_QWORD *)(v58 + 8);
        *(_QWORD *)(v58 + 8) = 0;
        *(_QWORD *)(v60 + 8) = v62;
        *(_DWORD *)(v60 + 16) = *(_DWORD *)(v58 + 16);
        if ( *(_QWORD *)v58 )
        {
          sub_106670((unsigned __int64 **)v58);
          if ( *(_QWORD *)v58 )
            qfree(*(_QWORD *)v58);
        }
        v58 += 24;
        v60 += 24;
      }
      while ( v59-- != 0 );
      v55 = v72;
      v58 = *v72;
    }
    v79 = v55;
    qfree(v58);
    v5 = v79;
    v18 = v69;
    v51 = v79[1];
    *v79 = v69;
    v79[2] = v56;
    if ( v51 < v17 )
    {
LABEL_97:
      while ( 1 )
      {
        v68 = (unsigned __int64 *)v5;
        v52 = v18 + 24 * v51;
        sub_10EFA0((unsigned __int64 **)v52, (__int64)v91);
        ++v51;
        *(_DWORD *)(v52 + 16) = -1;
        v5 = (__int64 *)v68;
        if ( v51 >= v17 )
          break;
        v18 = *v68;
      }
    }
    v5[1] = v17;
  }
  else
  {
    v93 = nullptr;
    v94 = 0;
    v95 = -1;
    v65 = v5;
    sub_10F1B0((__int64)v5, v17, (__int64)&v93);
    v5 = v65;
  }
  if ( a4 )
  {
LABEL_31:
    v66 = v5;
    sub_106670(a4);
    v23 = *(_QWORD *)(v6 + 320);
    v5 = v66;
    v21 = *(_QWORD *)(v23 + 128);
    v80 = *(_QWORD *)(v23 + 568);
    if ( *(int *)(v6 + 16) <= 0 )
    {
LABEL_50:
      v93 = a4;
      LODWORD(v94) = *(_DWORD *)(v6 + 312);
      sub_103FB0(v6, (_QWORD *)(v6 + 248), (__int64)sub_107BC0, 0, (__int64)&v93);
      return v96 - __readfsqword(0x28u);
    }
    goto LABEL_32;
  }
  v20 = *(_QWORD *)(v6 + 320);
  v21 = *(_QWORD *)(v20 + 128);
  v80 = *(_QWORD *)(v20 + 568);
  if ( *(int *)(v6 + 16) <= 0 )
    return v96 - __readfsqword(0x28u);
LABEL_32:
  v84 = v21;
  v82 = v5;
  v87 = v21 != 0;
  v24 = 0;
  do
  {
    v88 = v24;
    v25 = 24 * v24 + *a2;
    v26 = *v82 + 24 * v24;
    *(_DWORD *)(v26 + 16) = v24;
    v85 = (__m128i *)v26;
    v93 = (unsigned __int64 **)v26;
    LODWORD(v94) = -1;
    v83 = 40 * v24;
    if ( (*(_BYTE *)(v6 + 316) & 1) != 0 )
      v67 = *(_QWORD *)(v6 + 200) + v83;
    else
      v67 = *(_QWORD *)(v6 + 176) + 40 * v24;
    v73 = v24;
    sub_103FB0(v6, (_QWORD *)v67, (__int64)sub_107BC0, 0, (__int64)&v93);
    v27 = sub_64960((_QWORD *)v25, 0);
    v28 = v73;
    if ( v27 == *(_DWORD *)(v25 + 8) )
      goto LABEL_46;
    v86 = v73;
    v29 = 0;
    v30 = 0;
    v31 = v27;
    v32 = v6;
    do
    {
      v33 = *(_QWORD *)(v32 + 56);
      if ( v31 >= (unsigned __int64)*(int *)(v33 + 4 * v30) )
      {
        do
          v30 = ++v29;
        while ( v31 >= (unsigned __int64)*(int *)(v33 + 4LL * v29) );
      }
      v34 = *(_QWORD *)(v32 + 128) + 16LL * v31;
      v35 = v34;
      v36 = *(_QWORD *)(v32 + 104) + 16LL * *(_QWORD *)v34;
      v37 = *(_BYTE *)(v36 + 8);
      if ( v37 == 1 )
      {
        v42 = *(_QWORD *)(v32 + 320);
        v43 = *(_QWORD *)(v42 + 1504);
        v44 = *(_DWORD *)(v43 + 60);
        if ( (int)*(_QWORD *)v36 >= v44 && (int)*(_QWORD *)v36 < *(_DWORD *)(v43 + 84) + v44
          || (*(_BYTE *)(v32 + 316) & 2) == 0 )
        {
          goto LABEL_44;
        }
        goto LABEL_55;
      }
      if ( v37 != 5 )
        sub_101D30(*(double *)a5.m128i_i64);
      v38 = *(_QWORD **)(v32 + 320);
      v39 = *(_QWORD *)v36;
      if ( v38[16] <= *(_QWORD *)v36 )
      {
        if ( !under_debugger )
          sub_383060(0xC3EAu, *(double *)a5.m128i_i64);
LABEL_94:
        BUG();
      }
      v40 = *(_DWORD *)(v32 + 316);
      if ( (v40 & 2) != 0 )
      {
        v77 = *(_QWORD *)(v32 + 104) + 16LL * *(_QWORD *)v34;
        v50 = sub_1026C0(v38, v39, *(int *)(v34 + 8));
        v36 = v77;
        if ( !v50 )
        {
LABEL_56:
          if ( (*(_BYTE *)(v32 + 316) & 4) == 0 || *(_BYTE *)(v36 + 8) != 5 )
            goto LABEL_44;
          v38 = *(_QWORD **)(v32 + 320);
          v39 = *(_QWORD *)v36;
          goto LABEL_59;
        }
        v42 = *(_QWORD *)(v32 + 320);
LABEL_55:
        v74 = (const __m128i *)v36;
        v45 = sub_32F7B0(v36, v42, v67, 1);
        v36 = (__int64)v74;
        if ( v45 )
        {
          sub_107A10(v85, v74, *(_DWORD *)(v35 + 8), v29, a5);
          goto LABEL_44;
        }
        goto LABEL_56;
      }
      if ( (v40 & 4) == 0 )
        goto LABEL_44;
LABEL_59:
      v46 = *(_QWORD *)(*(_QWORD *)(v38[187] + 24LL) + 16LL) & (v38[180] + v39);
      if ( v46 < v80 || !v87 || v80 + v84 - 1 < v46 )
      {
        if ( !under_debugger )
          sub_383060(0xC3F0u, *(double *)a5.m128i_i64);
        goto LABEL_94;
      }
      v89 = (const __m128i *)v36;
      v75 = v46;
      v47 = sub_317040((unsigned __int64 **)(v67 + 16), v46);
      v48 = v46;
      v49 = v89;
      if ( v47 )
      {
        v53 = v89;
        v90 = v75;
        v78 = v49;
        sub_107A10(v85, v53, *(_DWORD *)(v35 + 8), v29, a5);
        v48 = v90;
        v49 = v78;
      }
      if ( *(_DWORD *)(v32 + 312) == (_DWORD)v86 )
      {
        if ( !a4 )
        {
          if ( !under_debugger )
            sub_383060(0xC3F1u, *(double *)a5.m128i_i64);
          goto LABEL_94;
        }
        v76 = v49;
        if ( !sub_317040((unsigned __int64 **)(*(_QWORD *)(v32 + 200) + v83 + 16), v48) )
          sub_107A10((__m128i *)a4, v76, *(_DWORD *)(v35 + 8), v29, a5);
      }
LABEL_44:
      v31 = sub_64960((_QWORD *)v25, v31 + 1);
    }
    while ( v31 != *(_DWORD *)(v25 + 8) );
    v28 = v86;
    v6 = v32;
LABEL_46:
    if ( (*(_BYTE *)(v6 + 316) & 2) != 0 )
    {
      v70 = v28;
      sub_1087E0(v6, (unsigned __int64 **)v85, v88, a5);
      v28 = v70;
    }
    v24 = v28 + 1;
  }
  while ( *(_DWORD *)(v6 + 16) > (int)v24 );
  if ( a4 )
    goto LABEL_50;
  return v96 - __readfsqword(0x28u);
}

