unsigned __int64 __fastcall sub_235C00(__int64 a1, __int64 a2, int a3, char a4)
{
  _DWORD *v4; // r12
  __int64 v6; // r14
  __int64 *v7; // rbx
  char v8; // al
  char v9; // r13
  int v10; // r14d
  int v11; // r15d
  __int64 v12; // rax
  unsigned __int64 v13; // xmm0_8
  char v14; // dl
  int v15; // ecx
  __m128i v16; // xmm1
  __m128i *v17; // r8
  __m128 v18; // xmm2
  unsigned __int64 *v19; // rsi
  unsigned __int64 v20; // rax
  char v21; // dl
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // edi
  unsigned __int64 v27; // r11
  _QWORD *v28; // rdx
  __int64 v29; // r14
  unsigned __int64 v30; // r10
  bool v31; // cl
  _QWORD *v32; // rcx
  _QWORD *v33; // r9
  __int64 v34; // rsi
  __int64 v35; // rax
  _QWORD *v37; // rsi
  unsigned __int64 *v38; // rax
  char v39; // si
  unsigned __int64 v40; // rcx
  unsigned __int64 *v41; // rdx
  unsigned __int64 *v42; // rdx
  char v43; // dl
  __int64 v44; // r13
  _BYTE *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r10
  __m128i v58; // xmm0
  __int64 v59; // r9
  int v60; // r8d
  char v61; // r13
  __int64 v62; // rsi
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  __m128i v67; // xmm1
  __int64 v68; // rsi
  _QWORD *v69; // rcx
  __int64 v70; // rsi
  unsigned __int64 v71; // r9
  __int64 v72; // rax
  _QWORD *exception; // rdi
  __int64 *v75; // [rsp+10h] [rbp-D8h]
  _DWORD *v76; // [rsp+18h] [rbp-D0h]
  __m128i *v77; // [rsp+18h] [rbp-D0h]
  __int64 v78; // [rsp+18h] [rbp-D0h]
  __int64 v79; // [rsp+20h] [rbp-C8h]
  int v81; // [rsp+2Ch] [rbp-BCh]
  __m128i v82; // [rsp+30h] [rbp-B8h] BYREF
  int v83; // [rsp+48h] [rbp-A0h] BYREF
  int v84; // [rsp+4Ch] [rbp-9Ch] BYREF
  unsigned __int64 v85; // [rsp+50h] [rbp-98h] BYREF
  signed __int64 v86; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int64 v87; // [rsp+60h] [rbp-88h] BYREF
  __m128 *v88; // [rsp+68h] [rbp-80h] BYREF
  __m128 v89; // [rsp+70h] [rbp-78h] BYREF
  __int64 v90; // [rsp+80h] [rbp-68h]
  int v91; // [rsp+88h] [rbp-60h]
  __m128i v92; // [rsp+90h] [rbp-58h]
  int v93; // [rsp+A0h] [rbp-48h]
  char v94; // [rsp+A4h] [rbp-44h]
  unsigned __int64 v95; // [rsp+A8h] [rbp-40h]

  v95 = __readfsqword(0x28u);
  v4 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104LL * a3);
  v4[6] &= ~0x80000u;
  if ( !*(_QWORD *)(*(_QWORD *)a2 + 96LL) )
  {
    if ( !under_debugger )
      sub_37EEE0(52281);
    goto LABEL_116;
  }
  v6 = *(_QWORD *)a2 + 24LL;
  if ( !(unsigned __int8)sub_1BFAA0((__int64)v4, (__int64 *)&v85, &v86, v4[22]) )
  {
    if ( !under_debugger )
      sub_37EEE0(52291);
    goto LABEL_116;
  }
  v7 = *(__int64 **)(v6 + 64);
  if ( &v7[5 * *(_QWORD *)(v6 + 72)] == v7 )
    goto LABEL_42;
  v75 = &v7[5 * *(_QWORD *)(v6 + 72)];
  v8 = sub_32AEE0(v7[3], &v87);
  while ( 2 )
  {
    v9 = v8;
    if ( !v8 )
    {
      if ( !under_debugger )
        sub_37EEE0(52282);
      goto LABEL_116;
    }
    v10 = *(_DWORD *)(v7[3] + 4);
    if ( v10 == -1 )
      v10 = 1;
    v11 = sub_1BFC70((__int64)v4, *(_QWORD *)(a1 + 48), v87, v10, (unsigned int)v4[22], &v83, &v84);
    v83 += v84;
    if ( !v11 )
    {
      v83 = v87 - v85;
      if ( *v4 == 2 )
      {
        v68 = *(_QWORD *)(a1 + 48);
        v89.m128_i32[0] = 0;
        if ( (unsigned int)sub_1BFC70((__int64)v4, v68, v85, 1, (unsigned int)v4[22], &v89, nullptr) != 1 )
        {
          if ( !under_debugger )
            sub_37EEE0(52292);
          goto LABEL_116;
        }
        v83 += v89.m128_i32[0];
      }
    }
    if ( v10 != v11 && a4 )
    {
      sub_1F0930(*(_QWORD *)(a1 + 8), *(_QWORD *)(v7[2] + 24), (__int64)v4);
      v4[6] |= 0x400u;
    }
    v12 = v83;
    if ( v83 < 0 )
    {
      if ( (unsigned __int8)sub_1EADE0(*(unsigned __int8 **)(a1 + 8)) )
      {
        v12 = v83;
        goto LABEL_16;
      }
      if ( !under_debugger )
        sub_37EEE0(52285);
LABEL_116:
      BUG();
    }
LABEL_16:
    v13 = v7[3];
    v14 = *((_BYTE *)v7 + 36);
    v15 = *((_DWORD *)v7 + 8);
    v16 = _mm_loadu_si128((const __m128i *)(v7 + 1));
    v88 = &v89;
    v90 = v12;
    v17 = *(__m128i **)(a1 + 64);
    v18 = _mm_loadh_ps((const double *)(a1 + 8));
    v93 = v15;
    v94 = v14;
    v91 = a3;
    v89 = v18;
    v92 = v16;
    v19 = (unsigned __int64 *)v17->m128i_i64[0];
    if ( !v17->m128i_i64[0] )
    {
      v77 = v17;
      v66 = qalloc();
      v17 = v77;
      v67 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v66, (__m128i)(unsigned __int64)v66);
      if ( !v66 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_OWORD *)(v66 + 16) = 0;
      *(_OWORD *)(v66 + 32) = 0;
      *(_OWORD *)(v66 + 48) = 0;
      *(_QWORD *)v66 = v66 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(_OWORD *)(v66 + 64) = 0;
      *(__m128i *)(v66 + 8) = v67;
      v77->m128i_i64[0] = v66;
      *(_QWORD *)v66 = v66 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v66 & 3LL;
      *(__m128i *)(v77->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v77->m128i_u64[0], (__m128i)v77->m128i_u64[0]);
      *(_QWORD *)v77->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)v77->m128i_i64[0] |= 2uLL;
      v19 = (unsigned __int64 *)v77->m128i_i64[0];
LABEL_18:
      v20 = sub_204BF0(v17, v19, 1, (const __m128i **)&v88);
      if ( v21 )
        goto LABEL_19;
LABEL_57:
      v41 = (unsigned __int64 *)(v20 + 24);
      goto LABEL_82;
    }
    if ( !v17->m128i_i64[1] )
      goto LABEL_18;
    v38 = (unsigned __int64 *)(*v19 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (*(_BYTE *)v38 & 2) != 0 )
    {
      v20 = sub_204BF0(v17, v19, 1, (const __m128i **)&v88);
LABEL_56:
      if ( v43 )
        goto LABEL_19;
      goto LABEL_57;
    }
    v39 = v9;
    while ( 1 )
    {
      v40 = v38[3];
      v41 = v38 + 3;
      if ( v13 < v40 )
      {
        v42 = (unsigned __int64 *)v38[1];
        v39 = v9;
        if ( (*(_BYTE *)v42 & 2) != 0 )
          goto LABEL_55;
        goto LABEL_80;
      }
      if ( v40 >= v13 )
        break;
      v42 = (unsigned __int64 *)v38[2];
      v39 = 0;
      if ( (*(_BYTE *)v42 & 2) != 0 )
        goto LABEL_55;
LABEL_80:
      v38 = v42;
    }
    if ( !v38 )
    {
LABEL_55:
      v20 = sub_204BF0(v17, v38, v39, (const __m128i **)&v88);
      goto LABEL_56;
    }
LABEL_82:
    v64 = v41[1];
    v65 = *((int *)v41 + 6);
    if ( *(_QWORD *)(v64 + 440) < v65 )
    {
      if ( !under_debugger )
        sub_37EEE0(51258);
      goto LABEL_116;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v64 + 432) + 104 * v65 + 26) & 1) == 0 )
    {
      if ( !under_debugger )
        sub_37EEE0(52927);
      goto LABEL_116;
    }
LABEL_19:
    v22 = v7[3];
    if ( *(_DWORD *)(v22 + 4) != -1 )
      goto LABEL_20;
    v44 = v7[2];
    if ( (unsigned int)(*(_DWORD *)v44 - 12) > 1 )
      goto LABEL_20;
    if ( *(_BYTE *)(v44 + 32) != 10 )
      goto LABEL_20;
    v45 = *(_BYTE **)(v44 + 40);
    if ( *v45 != 5 || (_BYTE *)v22 != v45 )
      goto LABEL_20;
    if ( (unsigned __int8)sub_11C340((char *)(v44 + 48), &v89, 0) )
      goto LABEL_71;
    v50 = v7[1];
    if ( v44 == v50 )
      goto LABEL_20;
    v51 = sub_AC9E0(v50, v44, v46, v47, v48, v49);
    if ( !v51 )
      sub_2231E0(v50, v44, v52, 0, v53, v54);
    if ( *(_BYTE *)(v51 + 32) != 4 )
      goto LABEL_20;
    if ( v44 != *(_QWORD *)(v51 + 40) )
      goto LABEL_20;
    if ( (unsigned int)(*(_DWORD *)v51 - 12) > 1 )
      goto LABEL_20;
    v76 = (_DWORD *)v51;
    if ( !(unsigned __int8)sub_11C340((char *)(v51 + 48), &v89, 0) )
      goto LABEL_20;
    if ( *(_DWORD *)v44 == 13 )
    {
      if ( *v76 != 12 )
        goto LABEL_72;
LABEL_20:
      v23 = v83;
      goto LABEL_21;
    }
    v44 = (__int64)v76;
LABEL_71:
    if ( *(_DWORD *)v44 == 12 )
      v55 = v89.m128_u64[0];
    else
LABEL_72:
      v55 = -v89.m128_u64[0];
    if ( v55 < 0 || (v23 = v83, v55 + v83 >= (int)v4[22]) )
    {
      v56 = *(_QWORD *)(a1 + 280);
      v57 = *v7;
      v58 = _mm_loadu_si128((const __m128i *)(v7 + 1));
      v59 = v7[3];
      v60 = *((_DWORD *)v7 + 8);
      v61 = *((_BYTE *)v7 + 36);
      v62 = *(_QWORD *)(a1 + 272);
      if ( *(_QWORD *)(a1 + 288) < (unsigned __int64)(v56 + 1) )
      {
        v81 = *((_DWORD *)v7 + 8);
        v79 = v7[3];
        v78 = *v7;
        v82 = v58;
        v72 = qvector_reserve();
        v58 = _mm_load_si128(&v82);
        v60 = v81;
        *(_QWORD *)(a1 + 272) = v72;
        v62 = v72;
        v59 = v79;
        v56 = *(_QWORD *)(a1 + 280);
        v57 = v78;
      }
      v63 = v62 + 40 * v56;
      *(_QWORD *)v63 = v57;
      *(_QWORD *)(v63 + 24) = v59;
      *(_DWORD *)(v63 + 32) = v60;
      *(_BYTE *)(v63 + 36) = v61;
      *(__m128i *)(v63 + 8) = v58;
      ++*(_QWORD *)(a1 + 280);
      goto LABEL_20;
    }
LABEL_21:
    if ( v23 <= 0 )
      goto LABEL_5;
    v24 = v7[3];
    if ( *(_BYTE *)v24 != 5 )
      goto LABEL_5;
    v25 = v7[1];
    if ( v7[2] != v25 )
      goto LABEL_5;
    v26 = *(_DWORD *)(v24 + 4);
    if ( v26 > v23 )
      goto LABEL_5;
    v27 = *(_QWORD *)(*(_QWORD *)(v24 + 8) + 8LL) - v26;
    v28 = *(_QWORD **)(a1 + 112);
LABEL_26:
    while ( 2 )
    {
      if ( *(_QWORD **)(a1 + 120) == v28 )
        goto LABEL_5;
      if ( (v28[10] & 1) == 0 )
        goto LABEL_45;
      v29 = *((int *)v28 + 19);
      v30 = v28[7];
      v31 = v27 >= v30 && v29 != 0;
      if ( !v26 )
      {
        if ( v31 && v29 + v30 - 1 >= v27 )
          goto LABEL_31;
LABEL_45:
        if ( (*v28 & 2) == 0 )
        {
          v37 = (_QWORD *)v28[2];
          if ( (*(_BYTE *)v37 & 2) != 0 )
          {
            v69 = (_QWORD *)(*v28 & 0xFFFFFFFFFFFFFFFCLL);
            v70 = *v69;
            if ( (*v69 & 2) == 0 )
            {
              while ( v28 == (_QWORD *)v69[2] )
              {
                v28 = v69;
                v71 = v70 & 0xFFFFFFFFFFFFFFFCLL;
                v70 = *(_QWORD *)(v70 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v70 & 2) != 0 )
                {
                  v28 = (_QWORD *)v71;
                  goto LABEL_26;
                }
                v69 = (_QWORD *)v71;
              }
            }
            v28 = v69;
          }
          else
          {
            do
            {
              v28 = v37;
              v37 = (_QWORD *)v37[1];
            }
            while ( (*(_BYTE *)v37 & 2) == 0 );
          }
        }
        continue;
      }
      break;
    }
    if ( !v31 || v29 + v30 - 1 < *(_QWORD *)(*(_QWORD *)(v24 + 8) + 8LL) - 1LL )
      goto LABEL_45;
LABEL_31:
    v32 = (_QWORD *)v28[11];
    v33 = &v32[5 * v28[12]];
    if ( v32 == v33 )
      goto LABEL_45;
    while ( 1 )
    {
      v34 = v32[3];
      if ( v24 != v34
        && *(_BYTE *)v34 == 5
        && v32[2] == v32[1]
        && v26 == *(_DWORD *)(v34 + 4)
        && v27 == *(_QWORD *)(*(_QWORD *)(v34 + 8) + 8LL)
        && ((v7[4] ^ v32[4]) & 0xFFFFFFFFFFLL) == 0 )
      {
        break;
      }
      v32 += 5;
      if ( v33 == v32 )
        goto LABEL_45;
    }
    v35 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v35 + 2) & 4) == 0 )
    {
      *(_BYTE *)(a1 + 304) = 1;
      v7 += 5;
      if ( v75 == v7 )
        goto LABEL_42;
LABEL_6:
      v8 = sub_32AEE0(v7[3], &v87);
      continue;
    }
    break;
  }
  sub_1762C0((_QWORD *)(v35 + 952), (unsigned __int64 *)(v25 + 24));
LABEL_5:
  v7 += 5;
  if ( v75 != v7 )
    goto LABEL_6;
LABEL_42:
  sub_22ED60(*(_QWORD *)(a1 + 8), v85, v86 - v85);
  return v95 - __readfsqword(0x28u);
}

