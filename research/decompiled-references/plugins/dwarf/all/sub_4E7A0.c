__int64 __fastcall sub_4E7A0(__int64 a1, _QWORD *a2, __int64 *a3, __m128i *a4, char a5)
{
  void (__fastcall ***v7)(_QWORD); // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  unsigned int (__fastcall *v19)(__int64, __int64, __int64 *, unsigned int **); // r8
  __int64 v20; // rdi
  __int64 v21; // rax
  char *v22; // rdx
  char *v23; // rdi
  __int64 v24; // rdx
  __m128i v25; // xmm0
  unsigned int *v26; // rax
  void (__fastcall *v27)(unsigned int *); // rcx
  void (__fastcall *v28)(unsigned int *); // rdx
  _QWORD *v29; // rcx
  __int64 v30; // rbx
  void *v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  const __m128i *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rsi
  __m128i v43; // xmm0
  bool v44; // cf
  int v45; // esi
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  unsigned __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // rsi
  unsigned int v54; // r12d
  __int64 v55; // rax
  int v56; // r8d
  int v57; // r9d
  __int64 *v58; // r12
  __int64 v59; // r13
  int v60; // r8d
  int v61; // r9d
  bool v62; // zf
  __int64 v63; // rax
  __int64 v64; // r15
  __m128i *v65; // rax
  unsigned __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned __int64 v70; // rcx
  __int64 idati; // rax
  unsigned int v72; // eax
  __int64 v73; // rsi
  __int64 v74; // rdx
  const __m128i *v75; // rdi
  __int64 v76; // r11
  __int64 v77; // rax
  const __m128i *v78; // rcx
  __m128i v79; // xmm0
  __int64 v80; // [rsp+0h] [rbp-230h]
  _QWORD *v81; // [rsp+8h] [rbp-228h]
  __int64 v82; // [rsp+8h] [rbp-228h]
  __int64 v83; // [rsp+8h] [rbp-228h]
  __int64 v84; // [rsp+8h] [rbp-228h]
  __int64 v85; // [rsp+8h] [rbp-228h]
  unsigned int *v86; // [rsp+10h] [rbp-220h]
  unsigned int *v87; // [rsp+10h] [rbp-220h]
  unsigned int *v88; // [rsp+10h] [rbp-220h]
  unsigned int *v89; // [rsp+10h] [rbp-220h]
  __int64 v90; // [rsp+10h] [rbp-220h]
  __int64 v91; // [rsp+10h] [rbp-220h]
  __int64 v92; // [rsp+10h] [rbp-220h]
  __int64 *v94; // [rsp+20h] [rbp-210h]
  void *v95; // [rsp+20h] [rbp-210h]
  __int64 v96; // [rsp+30h] [rbp-200h]
  int v98; // [rsp+38h] [rbp-1F8h]
  __m128i v99; // [rsp+40h] [rbp-1F0h] BYREF
  __int64 v100; // [rsp+50h] [rbp-1E0h]
  unsigned int v101; // [rsp+64h] [rbp-1CCh] BYREF
  __int64 v102; // [rsp+68h] [rbp-1C8h] BYREF
  const __m128i *v103; // [rsp+70h] [rbp-1C0h] BYREF
  __int128 v104; // [rsp+78h] [rbp-1B8h]
  __int64 v105; // [rsp+90h] [rbp-1A0h] BYREF
  __int128 v106; // [rsp+98h] [rbp-198h]
  __int64 v107; // [rsp+B0h] [rbp-180h] BYREF
  __int128 v108; // [rsp+B8h] [rbp-178h]
  unsigned int *v109; // [rsp+D0h] [rbp-160h] BYREF
  char *v110; // [rsp+D8h] [rbp-158h]
  __int16 v111; // [rsp+E0h] [rbp-150h]
  _BYTE v112[264]; // [rsp+F0h] [rbp-140h] BYREF
  unsigned __int64 v113; // [rsp+1F8h] [rbp-38h]

  v94 = a3;
  v113 = __readfsqword(0x28u);
  v7 = (void (__fastcall ***)(_QWORD))a3[2];
  if ( v7 )
    (**v7)(v7);
  v8 = a4->m128i_i64[0];
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  v96 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 144LL);
  sub_84A60(v112);
  v9 = a4->m128i_i64[0];
  v109 = nullptr;
  LODWORD(v107) = 0;
  v10 = *(_QWORD *)(v9 + 24);
  v11 = a4[16].m128i_i64[0];
  v103 = nullptr;
  v105 = 0;
  v104 = 0;
  v106 = 0;
  if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64 *, unsigned int **))(v11 + 112))(
          v10,
          71,
          &v107,
          &v109)
    && (_DWORD)v107 )
  {
    v14 = sub_95990(a4, 71);
    v15 = v12;
    if ( (v14 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v14 == -1 )
      goto LABEL_7;
LABEL_51:
    v36 = v104;
    if ( *((_QWORD *)&v104 + 1) < (unsigned __int64)(v104 + 1) )
    {
      v83 = v15;
      v90 = *((_QWORD *)&v104 + 1);
      v38 = qvector_reserve(&v103, 0, v104 + 1, 16);
      v39 = *((_QWORD *)&v104 + 1);
      v40 = v103;
      v41 = v104 - 1;
      *((_QWORD *)&v104 + 1) = v90;
      if ( (__int64)v104 - 1 >= 0 )
      {
        v42 = v38;
        do
        {
          v43 = _mm_loadu_si128(v40);
          v42 += 16;
          ++v40;
          *(__m128i *)(v42 - 16) = v43;
          v44 = v41-- == 0;
        }
        while ( !v44 );
        v40 = v103;
      }
      v80 = v83;
      v84 = v38;
      v91 = v39;
      qfree(v40);
      v37 = v84;
      v13 = v91;
      v36 = v104;
      v15 = v80;
      v103 = (const __m128i *)v84;
      *((_QWORD *)&v104 + 1) = v91;
    }
    else
    {
      v37 = (__int64)v103;
    }
    v12 = 16 * v36 + v37;
    *(_QWORD *)v12 = v14;
    *(_QWORD *)(v12 + 8) = v15;
    *(_QWORD *)&v104 = v104 + 1;
    goto LABEL_7;
  }
  v14 = (unsigned int)sub_97630(a4, 60);
  v19 = *(unsigned int (__fastcall **)(__int64, __int64, __int64 *, unsigned int **))(a4[16].m128i_i64[0] + 112);
  v20 = *(_QWORD *)(a4->m128i_i64[0] + 24);
  if ( (_BYTE)v14 )
  {
    v109 = nullptr;
    LODWORD(v107) = 0;
    if ( v19(v20, 105, &v107, &v109)
      || !(_DWORD)v107
      || (v21 = sub_95990(a4, 105),
          v23 = v22,
          v109 = (unsigned int *)v21,
          v12 = v21 & 0x7FFFFFFFFFFFFFFFLL,
          v110 = v23,
          (v21 & 0x7FFFFFFFFFFFFFFFLL) == 0)
      || v21 == -1
      || !(unsigned __int8)sub_98E20(&v109, v112) )
    {
      v14 = 0;
      if ( (a5 & 1) != 0 )
        goto LABEL_22;
      goto LABEL_9;
    }
    v15 = a4[14].m128i_i64[0];
    LOBYTE(v14) = v15 != -1 && (v15 & 0x7FFFFFFFFFFFFFFFLL) != 0;
    if ( (_BYTE)v14 )
    {
      v63 = v104;
      v64 = a4[14].m128i_i64[1];
      v12 = v104 + 1;
      if ( *((_QWORD *)&v104 + 1) < (unsigned __int64)(v104 + 1) )
      {
        v85 = *((_QWORD *)&v104 + 1);
        v92 = v15;
        v73 = qvector_reserve(&v103, 0, v12, 16);
        v74 = v73;
        v75 = v103;
        v76 = *((_QWORD *)&v104 + 1);
        v77 = v104 - 1;
        *((_QWORD *)&v104 + 1) = v85;
        v78 = v103;
        if ( (__int64)v104 - 1 >= 0 )
        {
          do
          {
            v79 = _mm_loadu_si128(v78);
            v74 += 16;
            ++v78;
            *(__m128i *)(v74 - 16) = v79;
            v44 = v77-- == 0;
          }
          while ( !v44 );
          v75 = v103;
        }
        v80 = v76;
        qfree(v75);
        v15 = v92;
        v63 = v104;
        v103 = (const __m128i *)v73;
        *((_QWORD *)&v104 + 1) = v80;
      }
      v65 = (__m128i *)&v103[v63];
      v65->m128i_i64[1] = v64;
      a4 = (__m128i *)v112;
      v65->m128i_i64[0] = v15;
      *(_QWORD *)&v104 = v104 + 1;
      goto LABEL_8;
    }
    if ( under_debugger )
      goto LABEL_127;
    interr(30478);
LABEL_74:
    if ( (_DWORD)v13 != 6 )
      goto LABEL_7;
    goto LABEL_75;
  }
  v109 = nullptr;
  LODWORD(v107) = 0;
  if ( v19(v20, 11, &v107, &v109) )
    goto LABEL_8;
  v15 = (unsigned int)v107;
  if ( !(_DWORD)v107 )
    goto LABEL_8;
  v26 = *(unsigned int **)(sub_87DA0(a4) + 216);
  v109 = v26;
  v13 = v26[31];
  if ( !v26 )
    goto LABEL_74;
  v12 = v26[2];
  v26[2] = v12 + 1;
  if ( (_DWORD)v13 != 6 )
  {
    v14 = 1;
    goto LABEL_31;
  }
LABEL_75:
  v12 = sub_97A10(a4);
  v26 = v109;
  if ( v12 )
  {
    if ( v109 )
    {
      v13 = v109[2];
      v14 = 1;
      v12 = (unsigned int)(v13 - 1);
      goto LABEL_31;
    }
LABEL_7:
    v14 = 1;
    goto LABEL_8;
  }
  if ( !v109 )
    goto LABEL_8;
  v13 = v109[2];
  v12 = (unsigned int)(v13 - 1);
LABEL_31:
  v26[2] = v12;
  if ( !(_DWORD)v12 )
  {
    v27 = **(void (__fastcall ***)(unsigned int *))v26;
    if ( (char *)v27 == (char *)sub_15E30 )
    {
      v28 = *(void (__fastcall **)(unsigned int *))(*(_QWORD *)v26 + 16LL);
      if ( (char *)v28 != (char *)sub_15D70 )
        goto LABEL_107;
      *(_QWORD *)v26 = &off_C71D8;
      v29 = *((_QWORD **)v26 + 16);
      if ( v29 )
      {
        if ( v29[2] )
        {
          v86 = v26;
          v81 = *((_QWORD **)v26 + 16);
          v80 = a1;
          v30 = v29[2];
          do
          {
            sub_293E0(*(_QWORD **)(v30 + 24));
            v31 = (void *)v30;
            v30 = *(_QWORD *)(v30 + 16);
            operator delete(v31, 0x30u);
          }
          while ( v30 );
          v26 = v86;
          v29 = v81;
          a1 = v80;
        }
        v87 = v26;
        operator delete(v29, 0x30u);
        v26 = v87;
      }
      if ( *((_QWORD *)v26 + 19) )
      {
        v88 = v26;
        v82 = a1;
        v32 = *((_QWORD *)v26 + 19);
        v80 = (__int64)v94;
        do
        {
          sub_29E10(*(_QWORD **)(v32 + 24));
          v33 = v32;
          v95 = (void *)v32;
          v32 = *(_QWORD *)(v32 + 16);
          v34 = *(_QWORD *)(v33 + 32);
          if ( v34 )
          {
            *(_QWORD *)(v33 + 40) = 0;
            qfree(v34);
          }
          operator delete(v95, 0x48u);
        }
        while ( v32 );
        v26 = v88;
        a1 = v82;
        v94 = (__int64 *)v80;
      }
      v35 = *((_QWORD *)v26 + 12);
      if ( v35 )
      {
        *((_QWORD *)v26 + 13) = 0;
        v89 = v26;
        qfree(v35);
        v26 = v89;
      }
      operator delete(v26, 0xC0u);
    }
    else
    {
      v27(v26);
    }
  }
LABEL_8:
  while ( 2 )
  {
    if ( (a5 & 1) == 0 )
    {
LABEL_9:
      v16 = sub_58830(v96, a4, v12, v13, v15);
      if ( v16 )
      {
        *(_DWORD *)a1 = 2;
        v17 = *(_QWORD *)(v96 + 8);
        *(_DWORD *)(a1 + 16) = v16;
        *(_QWORD *)(a1 + 8) = v17;
        goto LABEL_11;
      }
    }
LABEL_22:
    v24 = a4[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL;
    if ( !v24 || a4[14].m128i_i64[0] == -1 )
    {
      if ( !under_debugger )
      {
        interr(30478);
        goto LABEL_51;
      }
LABEL_127:
      BUG();
    }
    if ( (unsigned __int8)sub_5C210(*v94, &a4[14], v24, v13, v15) )
    {
      v25 = _mm_loadu_si128(a4 + 14);
      *(_DWORD *)a1 = 3;
      *(__m128i *)(a1 + 8) = v25;
      goto LABEL_11;
    }
    switch ( sub_97BF0(a4) )
    {
      case 1LL:
        sub_51EA0(&v99, a2, v94, a4);
        goto LABEL_89;
      case 2LL:
      case 19LL:
      case 23LL:
        sub_4E540((__int64)&v99, (__int64)a2, v94, (__int64)a4, (__int64)&v103, (__int64)&v105, v14);
        *(__m128i *)a1 = _mm_loadu_si128(&v99);
        *(_QWORD *)(a1 + 16) = v100;
        goto LABEL_79;
      case 4LL:
        sub_31410((__int64)&v99, (__int64)a2, v94, a4, (__int64)&v103, (__int64)&v105);
        goto LABEL_89;
      case 15LL:
      case 31LL:
        sub_52250(&v99, a2, v94, a4, 2);
        goto LABEL_89;
      case 16LL:
      case 66LL:
        sub_52250(&v99, a2, v94, a4, 1);
        goto LABEL_89;
      case 18LL:
        sub_323D0((__int64)&v99, (__int64)a2, v94, (__int64)a4);
        goto LABEL_89;
      case 21LL:
        sub_528B0(&v99, a2, v94, a4);
        goto LABEL_89;
      case 22LL:
        sub_501A0(&v99, a2, v94, a4);
        goto LABEL_89;
      case 33LL:
        if ( (a5 & 2) == 0 )
          goto LABEL_61;
        goto LABEL_91;
      case 36LL:
        sub_43410((__int64)&v99, a2, (__int64)v94, a4, (__int64)&v103, (__int64)&v105);
        goto LABEL_89;
      case 38LL:
        sub_52250(&v99, a2, v94, a4, 3);
        goto LABEL_89;
      case 53LL:
        sub_52250(&v99, a2, v94, a4, 4);
        goto LABEL_89;
      case 55LL:
LABEL_91:
        sub_52250(&v99, a2, v94, a4, 7);
        goto LABEL_89;
      case 59LL:
        sub_320F0((__int64)&v99, (__int64)a2, v94, (__int64)a4);
        goto LABEL_89;
      case 61LL:
        sub_32610((__int64)&v99, (__int64)a2, (__int64)v94, (__int64)a4);
LABEL_89:
        *(__m128i *)a1 = _mm_loadu_si128(&v99);
        *(_QWORD *)(a1 + 16) = v100;
LABEL_79:
        if ( *(_DWORD *)a1 == 1 )
        {
          v58 = v94 + 3;
          if ( unk_CC8D0 )
            sub_66090(
              (_DWORD)v94 + 24,
              (_DWORD)a2,
              (unsigned int)"dispatch_maybe_saving_graph_node_%p",
              *(_QWORD *)(a1 + 8),
              v56,
              v57,
              v80);
          v59 = *(_QWORD *)(a1 + 8);
          if ( !(unsigned int)sub_56BD0(v58, v59)
            && !(unsigned __int8)sub_58790(v58, v59)
            && (unsigned int)(*(_DWORD *)(v59 + 336) - 4) > 1 )
          {
            sub_60EF0(v58, v59, *v94);
            v98 = *(_DWORD *)(v59 + 276);
            sub_576A0(v58, v59);
            v62 = unk_CC8D0 == 0;
            *(_DWORD *)a1 = 2;
            *(_QWORD *)(a1 + 8) = *(_QWORD *)(v96 + 8);
            *(_DWORD *)(a1 + 16) = v98;
            if ( !v62 )
              sub_66090((_DWORD)v58, (_DWORD)a2, (unsigned int)"after_save_of_%p", v59, v60, v61, v80);
            sub_58F00(v58);
          }
        }
        goto LABEL_11;
      default:
LABEL_61:
        if ( (debug & 0x400000) != 0 )
        {
          v14 = sub_81C40(a4);
          v45 = (unsigned __int16)sub_97BF0(a4);
          sub_88B80((unsigned int)"Unexpected DIE tag %d @ %s. Turning into invalid type.\n", v45, v14, v46, v47, v48);
        }
        v49 = a4[14].m128i_u64[0];
        v50 = v49 & 0x7FFFFFFFFFFFFFFFLL;
        if ( v49 == -1 || !v50 )
        {
          if ( under_debugger )
            goto LABEL_127;
          v26 = (unsigned int *)interr(30478);
LABEL_107:
          v28(v26);
          continue;
        }
        v108 = 0;
        v107 = 0;
        sub_20160(&v107, (__int64)"$unknown_type_%d__%llu", v49 >> 63, v50);
        v51 = a4->m128i_i64[0];
        v101 = 0;
        v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 16) + 144LL) + 8LL);
        v53 = v107;
        if ( (int)get_named_type(v52, v107, 1, 0, 0, 0, 0, 0, &v101) > 0 )
        {
          v54 = v101;
          goto LABEL_67;
        }
        v102 = 0;
        v66 = sub_97AE0(a4);
        v70 = v66;
        if ( v66 == -1 || (v70 = v66 >> 3, (v66 >> 3) - 1 > 0xFFFFFFFFFFFFFFFDLL) )
        {
          v111 = 0;
          v110 = "";
          idati = v52;
          if ( !v52 )
            idati = get_idati(a4, v53, v67, v70, v68, v69);
          v109 = (unsigned int *)idati;
          create_tinfo(&v102, 13, 189, &v109);
        }
        else
        {
          sub_59200(&v102, 13, "dummy", v70);
        }
        v72 = alloc_type_ordinals(v52, 1);
        v101 = v72;
        if ( !v72 )
        {
          if ( under_debugger )
            goto LABEL_127;
          interr(30376);
          goto LABEL_125;
        }
        if ( (unsigned int)save_tinfo(&v102, v52, v72, v107, 0) )
        {
LABEL_125:
          if ( !under_debugger )
            interr(30442);
          goto LABEL_127;
        }
        v54 = v101;
        clear_tinfo_t(&v102);
LABEL_67:
        if ( v107 )
        {
          *(_QWORD *)&v108 = 0;
          qfree(v107);
        }
        *(_DWORD *)a1 = 2;
        v55 = *(_QWORD *)(v96 + 8);
        *(_DWORD *)(a1 + 16) = v54;
        *(_QWORD *)(a1 + 8) = v55;
LABEL_11:
        if ( v105 )
        {
          *(_QWORD *)&v106 = 0;
          qfree(v105);
        }
        if ( v103 )
        {
          *(_QWORD *)&v104 = 0;
          qfree(v103);
        }
        sub_1B750((__int64)v112);
        return a1;
    }
  }
}
