unsigned __int64 __fastcall sub_101030(__int64 a1, unsigned __int64 a2, __int64 a3, double a4)
{
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rbp
  __int64 v24; // rsi
  __int128 v25; // rdi
  __int64 v26; // r15
  __int64 v27; // r14
  __m128i v28; // xmm0
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r14
  __m128i v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rbx
  char v40; // al
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rsi
  _DWORD *v44; // rax
  __int64 v45; // rax
  int v46; // edx
  unsigned __int64 v47; // rax
  int v48; // [rsp+0h] [rbp-138h]
  unsigned int v49; // [rsp+8h] [rbp-130h]
  __int64 v50; // [rsp+8h] [rbp-130h]
  __int64 v51; // [rsp+18h] [rbp-120h]
  __int64 v52; // [rsp+30h] [rbp-108h]
  __int64 v53; // [rsp+38h] [rbp-100h]
  _QWORD *v55; // [rsp+50h] [rbp-E8h]
  _BYTE v56[16]; // [rsp+60h] [rbp-D8h] BYREF
  _DWORD v57[4]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v59; // [rsp+88h] [rbp-B0h]
  _QWORD v60[2]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int64 *v61; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v62; // [rsp+B8h] [rbp-80h]
  __int64 v63[2]; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v64; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v65; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v66; // [rsp+F8h] [rbp-40h]

  v52 = a2;
  v66 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 24) &= ~8u;
  sub_67C50(*(_QWORD **)(a1 + 64));
  v8 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a3 + 64) != 8 )
    goto LABEL_2;
  if ( *(_DWORD *)a2 == 4
    || *(_DWORD *)a2 == 67 && (v7 = *(unsigned int *)(a2 + 36), *(_DWORD *)(a2 + 68) == (_DWORD)v7) )
  {
    v39 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    v40 = *(_BYTE *)(a2 + 64);
    if ( v40 == 1 )
    {
      a2 = *(unsigned int *)(a2 + 72);
      if ( *(_DWORD *)(v39 + 68) <= (int)a2 && (_DWORD)a2 != -1 )
        goto LABEL_50;
    }
    else if ( v40 == 15 )
    {
      v41 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL);
      if ( *(_QWORD *)(v41 + 8) == 1 )
      {
        v6 = *(_DWORD **)v41;
        if ( (unsigned int)(**(_DWORD **)v41 - 3) <= 1 )
        {
          a2 = *((unsigned __int16 *)v6 + 4);
          if ( *(_DWORD *)(v39 + 68) <= (int)a2 )
          {
LABEL_50:
            if ( v8 )
            {
              while ( 1 )
              {
                if ( *(_QWORD *)(v8 + 24) != *(_QWORD *)(v52 + 24)
                  || *(_DWORD *)v8 != 4 && (*(_DWORD *)v8 != 67 || *(_DWORD *)(v8 + 36) != *(_DWORD *)(v8 + 68)) )
                {
LABEL_54:
                  a2 = (unsigned int)a2;
                  goto LABEL_55;
                }
                v42 = *(int *)(v52 + 68);
                if ( *(_BYTE *)(v8 + 32) != 1 )
                  break;
                v47 = *(int *)(v8 + 40);
                if ( (int)v47 < *(_DWORD *)(v39 + 68)
                  || !*(_DWORD *)(v52 + 68)
                  || v47 < (int)a2
                  || (int)a2 + v42 - 1 < v47 )
                {
                  break;
                }
                sub_11D5A0(v8);
                v8 = *(_QWORD *)(v8 + 8);
                if ( !v8 )
                  goto LABEL_54;
              }
              a2 = (unsigned int)a2;
            }
            else
            {
LABEL_55:
              v42 = *(int *)(v52 + 68);
            }
            sub_137FB0(*(_QWORD *)(a1 + 64), a2, v42);
          }
        }
      }
    }
  }
  a4 = 0.0;
  v58 = 0;
  v62 = 0;
  v20 = *(_QWORD **)(v52 + 16);
  v60[0] = 0;
  v60[1] = 0;
  v55 = v20;
  v61 = nullptr;
  v21 = *(_QWORD *)(a3 + 72);
  v59 = 0;
  v22 = *(_QWORD *)(v21 + 24);
  v53 = v22 + 80LL * *(_QWORD *)(v21 + 32);
  if ( v53 == v22 )
  {
    v31 = 0;
  }
  else
  {
    do
    {
      if ( *(_DWORD *)(v22 + 56) != 1 )
      {
        v23 = j__qalloc_or_throw(80, a2, (__int64)v6, v7);
        v24 = *(_QWORD *)(a3 + 24);
        *(_QWORD *)(v23 + 40) = 0;
        v51 = v23 + 32;
        *(_QWORD *)(v23 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v23 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v23 + 56) = 0;
        *(_QWORD *)(v23 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v23 + 72) = 0;
        sub_330970(v23, v24);
        *(_DWORD *)v23 = 4;
        sub_125180(v23 + 32, (unsigned __int8 *)v22);
        sub_1C6010((__int64)v56, *(_QWORD *)(a1 + 64), v22 + 56, *(unsigned int *)(v22 + 4));
        sub_126420(v23 + 64, *(_QWORD *)(a1 + 64), (__int64)v56, *(_DWORD *)(v22 + 4));
        if ( (get_tinfo_property() & 0xF) == 9 )
          *(_DWORD *)(v23 + 4) |= 0x10u;
        *(_QWORD *)&v25 = a1;
        a4 = 0.0;
        *((_QWORD *)&v25 + 1) = v63;
        v63[0] = 0;
        v63[1] = 0;
        v64 = 0;
        v65 = 0;
        sub_123EA0(v25, v22, 0, 0xFFFF0000);
        if ( (unsigned __int8)sub_64780(v60, v63) || (unsigned __int8)sub_318470(&v61, (__int64)&v64) )
        {
          v26 = v58;
          v50 = v58 + 8 * v59;
          if ( v50 == v58 )
            goto LABEL_40;
          while ( 1 )
          {
            v27 = *(_QWORD *)v26;
            if ( sub_125B60((unsigned __int8 *)(*(_QWORD *)v26 + 32LL), v22, 0) )
              break;
            v26 += 8;
            if ( v50 == v26 )
              goto LABEL_40;
          }
          v49 = *(_DWORD *)(v27 + 72);
          if ( v49 == -1 )
          {
LABEL_40:
            v32 = *(int *)(v22 + 4);
            v49 = sub_138140(*(_QWORD **)(a1 + 64), v32, 1);
            if ( v49 == -1 )
            {
              if ( !under_debugger )
                sub_383060(0xCBFDu, 0.0);
LABEL_78:
              BUG();
            }
            v35 = j__qalloc_or_throw(80, v32, v33, v34);
            *(_QWORD *)(v35 + 32) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v35 + 40) = 0;
            *(_QWORD *)(v35 + 48) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v35 + 56) = 0;
            *(_QWORD *)(v35 + 64) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v35 + 72) = 0;
            *(_OWORD *)(v35 + 8) = 0;
            sub_1253A0(v35, v23);
            v36 = _mm_cvtsi32_si128(*(_DWORD *)(v22 + 4));
            v57[0] = 1;
            v36.m128i_i64[0] = _mm_unpacklo_epi32(v36, _mm_cvtsi32_si128(v49)).m128i_u64[0];
            *(_QWORD *)&v57[1] = v36.m128i_i64[0];
            sub_125180(v35 + 64, (unsigned __int8 *)v57);
            sub_11CDA0((__int64)v57);
            v55 = sub_A3160(a1, (_QWORD *)v35, (__int64)v55, *(double *)v36.m128i_i64);
            v37 = v59;
            v38 = v58;
            if ( *((_QWORD *)&v59 + 1) < (unsigned __int64)(v59 + 1) )
            {
              v58 = qvector_reserve((__int64)&v58, v58, v59 + 1, 8);
              v38 = v58;
              v37 = v59;
            }
            *(_QWORD *)(v38 + 8 * v37) = v55;
            *(_QWORD *)&v59 = v59 + 1;
          }
          v28 = _mm_cvtsi32_si128(*(_DWORD *)(v22 + 4));
          v57[0] = 1;
          *(_QWORD *)&a4 = _mm_unpacklo_epi32(v28, _mm_cvtsi32_si128(v49)).m128i_u64[0];
          *(double *)&v57[1] = a4;
          sub_125180(v51, (unsigned __int8 *)v57);
          sub_11CDA0((__int64)v57);
        }
        sub_127FE0(a1, (__int64)v60, v23 + 64, 0, v29, v30, v48, v49, (int)v60, v51, (__int64)v56);
        a2 = v23;
        sub_A3160(a1, (_QWORD *)v23, *(_QWORD *)(v52 + 16), a4);
        if ( v64 )
        {
          *(_QWORD *)&v65 = 0;
          qfree(v64);
        }
        qfree(v63[0]);
        cleanup_argloc();
      }
      v22 += 80;
    }
    while ( v22 != v53 );
    if ( v61 )
    {
      *(_QWORD *)&v62 = 0;
      qfree((__int64)v61);
    }
    v31 = v60[0];
  }
  qfree(v31);
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58);
  }
LABEL_2:
  if ( *(_DWORD *)(a1 + 76) )
  {
    v9 = *(_QWORD *)(a3 + 24);
    sub_11D5A0(v52);
    v12 = *(_DWORD *)(a1 + 24);
    BYTE1(v12) &= ~2u;
    LOBYTE(v12) = v12 | 0x80;
    *(_DWORD *)(a1 + 24) = v12;
    if ( v8 )
    {
      while ( 1 )
      {
        a2 = *(_QWORD *)(v8 + 24);
        if ( v9 != sub_330F80(*(_QWORD **)(a1 + 64), a2) || *(_DWORD *)v8 != 4 )
          break;
        sub_11D5A0(v8);
        v13 = *(_DWORD *)(a1 + 24);
        BYTE1(v13) &= ~2u;
        LOBYTE(v13) = v13 | 0x80;
        *(_DWORD *)(a1 + 24) = v13;
        v8 = *(_QWORD *)(v8 + 8);
        if ( !v8 )
          goto LABEL_57;
      }
      v16 = sub_1D5170(*(_QWORD *)(a1 + 64), a2, v14, v15);
      if ( *(_DWORD *)v8 != 55 || *(_BYTE *)(v8 + 32) != 7 )
        goto LABEL_12;
      v17 = *(_QWORD *)(a1 + 64);
      v18 = *(unsigned int *)(v8 + 40);
      if ( (unsigned int)v18 >= *(_DWORD *)(v17 + 64) )
        sub_FDB40(a4);
      if ( v16 != sub_1120C0(*(_QWORD *)(*(_QWORD *)(v17 + 528) + 8 * v18), 0) )
      {
LABEL_12:
        if ( !under_debugger )
          sub_383060(0xC803u, a4);
        goto LABEL_78;
      }
    }
    else
    {
LABEL_57:
      v43 = sub_1D5170(*(_QWORD *)(a1 + 64), a2, v10, v11);
      if ( *(_DWORD *)(a1 + 72) + 1 != *(_DWORD *)(v43 + 72) )
      {
        v44 = *(_DWORD **)(a1 + 56);
        if ( *v44 )
        {
          if ( !under_debugger )
            sub_383060(0xCE82u, a4);
          goto LABEL_78;
        }
        *v44 = 55;
        v45 = *(_QWORD *)(a1 + 56);
        v46 = *(_DWORD *)(v43 + 72);
        *(_BYTE *)(v45 + 32) = 7;
        *(_DWORD *)(v45 + 40) = v46;
        sub_A73B0(a1, v43, a4);
      }
    }
  }
  else
  {
    *(_DWORD *)(a3 + 4) &= ~0x40u;
    sub_330990(a1, v52);
  }
  return sub_A2520(a1, "after tail_call_to_ret");
}

