__int64 __fastcall sub_23B630(__int64 a1, const char **a2, __m128i a3, __m128 a4)
{
  unsigned __int64 v5; // rbp
  int v7; // r13d
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rax
  int v13; // r12d
  int v14; // ebp
  int v15; // eax
  _DWORD *v16; // r15
  int v17; // eax
  __int64 v18; // rdi
  int v19; // r13d
  int v20; // eax
  bool v21; // al
  int v22; // eax
  unsigned __int64 v23; // rbp
  __int64 *v24; // rbx
  __int64 v25; // rax
  __int64 *v26; // r12
  __int64 v27; // rdx
  __int64 *v28; // rdi
  __int64 *v29; // rdi
  __int64 v30; // r12
  __int64 *v31; // rdi
  __int64 *v32; // rdi
  __int64 v33; // rax
  const char *v35; // rax
  __int64 v36; // r8
  const char *v37; // r13
  __int64 v38; // r15
  const char *v39; // rdx
  char *v40; // rax
  __int64 v41; // r8
  size_t v42; // rax
  __int64 v43; // rsi
  size_t v44; // r9
  size_t v45; // r8
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r13
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdi
  int v52; // ecx
  unsigned __int64 v53; // rax
  __int64 v54; // rbp
  int v55; // eax
  int v56; // r13d
  __int64 v57; // rax
  int v58; // r13d
  __int64 v59; // rcx
  int v60; // ebp
  unsigned int v61; // eax
  signed __int64 v62; // rax
  int v63; // r12d
  int v64; // ebp
  int v65; // r12d
  unsigned __int64 v66; // r15
  __int64 v67; // rdx
  signed __int64 v68; // rdx
  __int64 v69; // rsi
  bool v70; // r15
  __int64 v71; // rbp
  signed __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // r15
  _QWORD *v75; // r12
  _QWORD *v76; // rdx
  _QWORD *v77; // rax
  __int64 v78; // rdx
  unsigned __int64 v79; // rcx
  char *v80; // rdi
  char *v81; // rax
  __m128i v82; // [rsp+10h] [rbp-B8h]
  signed __int64 v83; // [rsp+20h] [rbp-A8h]
  __int64 v84; // [rsp+20h] [rbp-A8h]
  const char *v85; // [rsp+20h] [rbp-A8h]
  __int64 v86; // [rsp+20h] [rbp-A8h]
  __int64 v87; // [rsp+20h] [rbp-A8h]
  const char *v88; // [rsp+28h] [rbp-A0h]
  size_t v89; // [rsp+28h] [rbp-A0h]
  unsigned int v90; // [rsp+30h] [rbp-98h]
  bool v91; // [rsp+37h] [rbp-91h]
  size_t v92; // [rsp+38h] [rbp-90h]
  int v93; // [rsp+44h] [rbp-84h] BYREF
  _QWORD *v94; // [rsp+48h] [rbp-80h] BYREF
  __int64 v95; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v96; // [rsp+58h] [rbp-70h]
  __m128i v97; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v98; // [rsp+70h] [rbp-58h] BYREF
  __int128 v99; // [rsp+78h] [rbp-50h]
  unsigned __int64 v100; // [rsp+88h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 176);
  v100 = __readfsqword(0x28u);
  v95 = 0;
  v96 = 0;
  cleanup_argloc();
  v7 = *(_DWORD *)(a1 + 196);
  v8 = *(_QWORD *)(a1 + 8);
  v96 = v5;
  LODWORD(v95) = 1;
  v9 = *(_QWORD *)(a1 + 176);
  if ( v7 <= 0 )
    v7 = 1;
  v93 = v7;
  if ( v9 >= sub_18D080(v8) )
  {
    if ( (*(_BYTE *)(v8 + 5) & 0x10) != 0
      && ((v74 = *(_QWORD *)(v8 + 944), *(_QWORD *)(v74 + 8) != -1)
       || (unsigned __int8)sub_21E760(*(__int64 **)(v8 + 944), *(double *)a3.m128i_i64)) )
    {
      v12 = *(_QWORD *)(a1 + 8);
      v11 = *(_QWORD *)(a1 + 176);
      v59 = v11;
      v10 = v12;
      if ( *(_QWORD *)(v74 + 16) )
      {
        v91 = 0;
        v70 = v9 < *(_QWORD *)(v74 + 8);
        if ( v11 < *(_QWORD *)(v12 + 144) )
          goto LABEL_107;
        v91 = 1;
        if ( (*(_BYTE *)(v12 + 5) & 0x10) == 0 )
          goto LABEL_107;
        goto LABEL_104;
      }
    }
    else
    {
      v59 = *(_QWORD *)(a1 + 176);
      v12 = *(_QWORD *)(a1 + 8);
    }
    v11 = v59;
    v10 = v12;
    if ( v59 < *(_QWORD *)(v12 + 144) )
    {
      v91 = 0;
      v60 = *(_DWORD *)(*(_QWORD *)(v12 + 1504) + 80LL);
      v61 = *(_DWORD *)(v12 + 72);
      if ( v61 > 0x10 )
        goto LABEL_88;
LABEL_102:
      v61 = getinf();
LABEL_88:
      if ( v61 != 176 && v61 != 256 && !(unsigned __int8)getinf_flag() )
      {
        v63 = v60;
        v64 = v60 - 1;
        v65 = -v63;
        v98 = *(_QWORD *)(a1 + 176);
        v62 = v98;
        v66 = v65 & v98;
        v93 = (v64 + v98 + v7 - v66) & v65;
        v67 = v93;
        if ( v91 )
        {
          sub_228510(&v93, (__int64 *)&v98, *(_QWORD *)(a1 + 8), (__int64 *)(a1 + 168), *(double *)a3.m128i_i64);
          v67 = v93;
          v66 = v98;
          v62 = *(_QWORD *)(a1 + 176);
        }
        else
        {
          v98 &= v65;
        }
        v68 = v66 + v67;
        v69 = *(int *)(a1 + 196);
        if ( (_DWORD)v69 != -1 )
          v62 += v69;
        if ( v68 < v62 )
          v93 = v62 - v66;
        cleanup_argloc();
        LODWORD(v95) = 1;
        v96 = v66;
        v93 = (v93 + v64) & v65;
        v7 = v93;
      }
      v10 = *(_QWORD *)(a1 + 8);
      goto LABEL_5;
    }
    if ( (*(_BYTE *)(v12 + 5) & 0x10) == 0 )
    {
      v91 = 1;
      goto LABEL_101;
    }
    v70 = 1;
LABEL_104:
    v71 = *(_QWORD *)(v12 + 944);
    if ( *(_QWORD *)(v71 + 8) == -1 )
    {
      if ( !(unsigned __int8)sub_21E760(*(__int64 **)(v12 + 944), *(double *)a3.m128i_i64) )
      {
        v91 = 1;
        v10 = *(_QWORD *)(a1 + 8);
        goto LABEL_107;
      }
      v12 = *(_QWORD *)(a1 + 8);
    }
    v91 = 1;
    v10 = v12;
    if ( *(_QWORD *)(v71 + 16) )
      v91 = *(_QWORD *)(v71 + 8) > v11;
LABEL_107:
    if ( !v70 )
      goto LABEL_5;
LABEL_101:
    v60 = *(_DWORD *)(*(_QWORD *)(v10 + 1504) + 80LL);
    v61 = *(_DWORD *)(v10 + 72);
    if ( v61 > 0x10 )
      goto LABEL_88;
    goto LABEL_102;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_QWORD *)(a1 + 176);
  v91 = 0;
  v12 = v10;
  if ( *(_QWORD *)(v10 + 144) <= v11 )
  {
    if ( (*(_BYTE *)(v10 + 5) & 0x10) == 0 )
    {
      v91 = 1;
      goto LABEL_5;
    }
    v70 = 0;
    goto LABEL_104;
  }
LABEL_5:
  v13 = *(_DWORD *)(v10 + 792);
  v14 = -1;
  v82 = 0u;
  while ( 1 )
  {
    v15 = sub_1F0600((__int64 *)(v10 + 432), (int *)&v95, v7, -1, v14 + 1, *(double *)a3.m128i_i64);
    v14 = v15;
    if ( v15 == -1 )
      break;
    v10 = *(_QWORD *)(a1 + 8);
    v16 = (_DWORD *)(*(_QWORD *)(v10 + 432) + 104LL * v15);
    if ( v13 > v15 && *v16 == 1 )
      v13 = v15;
    v90 = v16[6] & 0x10000;
    if ( !v90 )
    {
      v17 = sub_1C3500(v16, *(double *)a3.m128i_i64);
      v18 = *(_QWORD *)(a1 + 8);
      v19 = v17;
      if ( v17 < *(_QWORD *)(v18 + 128) )
      {
        v83 = v17;
        v21 = sub_317040(
                (unsigned __int64 **)(v18 + 848),
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v18 + 1440) + v17));
        v18 = *(_QWORD *)(a1 + 8);
        if ( !v21 )
        {
          if ( (*(_BYTE *)(v18 + 2) & 4) == 0 )
          {
            v72 = *(_QWORD *)(a1 + 176);
            LODWORD(v73) = v72 + *(_DWORD *)(a1 + 196);
            if ( *(_DWORD *)(a1 + 196) == -1 )
              v73 = *(_QWORD *)(a1 + 176);
            if ( v83 > v72 )
              v19 = *(_QWORD *)(a1 + 176);
            if ( !(unsigned __int8)sub_2329E0(v18, v83, (int)v73 - v19) )
            {
              if ( !under_debugger )
                sub_383060(0xCCA2u, *(double *)a3.m128i_i64);
              BUG();
            }
LABEL_116:
            *(_DWORD *)(a1 + 136) |= 4u;
LABEL_22:
            v90 = -1;
LABEL_23:
            if ( !v82.m128i_i64[0] )
              goto LABEL_45;
            if ( !v82.m128i_i64[1] )
              goto LABEL_44;
            v23 = *(_QWORD *)v82.m128i_i64[0];
            v24 = (__int64 *)(*(_QWORD *)v82.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
            v25 = *v24;
            if ( (*v24 & 2) != 0 )
              goto LABEL_44;
            v26 = (__int64 *)v24[1];
            v27 = *v26;
            if ( (*v26 & 2) != 0 )
            {
              v30 = v24[2];
              if ( (*(_BYTE *)v30 & 2) == 0 )
                goto LABEL_34;
              goto LABEL_41;
            }
            v28 = (__int64 *)v26[1];
            if ( (*(_BYTE *)v28 & 2) != 0 )
            {
              v29 = (__int64 *)v26[2];
              if ( (*(_BYTE *)v29 & 2) == 0 )
              {
LABEL_29:
                sub_226EE0(v29);
                goto LABEL_30;
              }
            }
            else
            {
              sub_226EE0(v28);
              v29 = (__int64 *)v26[2];
              if ( (*(_BYTE *)v29 & 2) == 0 )
                goto LABEL_29;
LABEL_30:
              v27 = *v26;
              if ( (*v26 & 2) != 0 )
              {
LABEL_31:
                if ( v26 )
                  qfree((__int64)v26);
                v30 = v24[2];
                if ( (*(_BYTE *)v30 & 2) == 0 )
                {
LABEL_34:
                  v31 = *(__int64 **)(v30 + 8);
                  if ( (*(_BYTE *)v31 & 2) != 0 )
                  {
                    v32 = *(__int64 **)(v30 + 16);
                    if ( (*(_BYTE *)v32 & 2) == 0 )
                    {
LABEL_36:
                      sub_226EE0(v32);
                      goto LABEL_37;
                    }
                    v33 = *(_QWORD *)v30;
                  }
                  else
                  {
                    sub_226EE0(v31);
                    v32 = *(__int64 **)(v30 + 16);
                    if ( (*(_BYTE *)v32 & 2) == 0 )
                      goto LABEL_36;
LABEL_37:
                    v33 = *(_QWORD *)v30;
                    if ( (*(_QWORD *)v30 & 2) != 0 )
                    {
LABEL_38:
                      if ( v30 )
                        qfree(v30);
                      goto LABEL_40;
                    }
                  }
                  *(_QWORD *)v30 = v33 | 2;
                  goto LABEL_38;
                }
LABEL_40:
                v25 = *v24;
                if ( (*v24 & 2) == 0 )
LABEL_41:
                  *v24 = v25 | 2;
                if ( v23 > 3 )
                  qfree((__int64)v24);
LABEL_44:
                qfree(v82.m128i_i64[0]);
                goto LABEL_45;
              }
            }
            *v26 = v27 | 2;
            goto LABEL_31;
          }
          goto LABEL_19;
        }
      }
      v20 = sub_231430(
              v18,
              v14,
              *(_QWORD *)(a1 + 176),
              *(_DWORD *)(a1 + 196),
              (_QWORD *)(a1 + 168),
              1,
              *(double *)a3.m128i_i64);
      if ( v20 == 1 )
      {
        sub_23A200(a1, v14, 1, a3);
LABEL_129:
        v90 = 1;
        goto LABEL_23;
      }
      if ( v20 == -1 )
      {
        v18 = *(_QWORD *)(a1 + 8);
LABEL_19:
        if ( (*(_BYTE *)(*(_QWORD *)(v18 + 1496) + 604LL) & 0x10) == 0 )
          goto LABEL_22;
        v22 = *(_DWORD *)(a1 + 300);
        if ( *(_DWORD *)(a1 + 296) != v22 && (v22 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0) )
          goto LABEL_22;
        a3 = 0;
        v98 = 0;
        v99 = 0;
        v35 = (const char *)sub_1F4550((__int64)v16, *(_DWORD **)(v18 + 1504), (__int64 *)&v98, 2);
        v36 = (__int64)a2[1];
        v37 = v35;
        v38 = 0;
        v39 = s1;
        if ( v36 )
        {
          v39 = *a2;
          v38 = v36 - 1;
        }
        v84 = (__int64)a2[1];
        v88 = v39;
        v40 = strstr(v39, v35);
        v41 = v84;
        if ( !v40 || v40 - v88 == -1 )
        {
          if ( v37 )
          {
            v85 = *a2;
            v42 = strlen(v37);
            v43 = (__int64)v85;
            v44 = v42 + v38;
            v45 = v42;
            v46 = v42 + v38 + 1;
            if ( (unsigned __int64)a2[2] < v46 )
            {
              v92 = v42;
              v89 = v42 + v38;
              v87 = v42 + v38 + 1;
              v50 = qvector_reserve((__int64)a2, v43, v46, 1);
              v45 = v92;
              v44 = v89;
              *a2 = (const char *)v50;
              v43 = v50;
              v46 = v87;
            }
            a2[1] = (const char *)v46;
            *(_BYTE *)(v43 + v44) = 0;
            memmove((void *)&(*a2)[v38], v37, v45);
            v41 = (__int64)a2[1];
          }
          v47 = 2;
          if ( v41 )
            v47 = v41-- + 1;
          v48 = (__int64)*a2;
          if ( (unsigned __int64)a2[2] < v47 )
          {
            v86 = v41;
            v49 = qvector_reserve((__int64)a2, v48, v47, 1);
            *a2 = (const char *)v49;
            v41 = v86;
            v48 = v49;
          }
          a2[1] = (const char *)v47;
          *(_BYTE *)(v48 + v41) = 44;
          (*a2)[v41 + 1] = 0;
        }
        if ( v98 )
        {
          *(_QWORD *)&v99 = 0;
          qfree(v98);
        }
      }
      if ( !v91 && (*(_BYTE *)(a1 + 136) & 1) == 0 )
        goto LABEL_23;
      v97 = v82;
      sub_23AFF0(a1, v97.m128i_i64, v14, *(double *)a3.m128i_i64);
      v10 = *(_QWORD *)(a1 + 8);
      v7 = v93;
      v82 = v97;
    }
  }
  if ( v82.m128i_i64[1]
    || v91
    && (v51 = *(_QWORD *)(a1 + 8), !*(_BYTE *)(v51 + 320))
    && (v52 = *(_DWORD *)(a1 + 196), v52 > 0)
    && (v53 = *(_QWORD *)(a1 + 176),
        LOBYTE(v99) = 5,
        v98 = v53,
        !(unsigned __int8)sub_227ED0(v51, (__int64)&v98, (_QWORD *)(a1 + 168), v52, *(double *)a3.m128i_i64)) )
  {
    if ( *(_DWORD *)(a1 + 300) == 1 )
      *(_DWORD *)(a1 + 300) = 2;
    v54 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(*(_QWORD *)(v54 + 1496) + 604LL) & 0x10) == 0 )
      goto LABEL_22;
    v55 = *(_DWORD *)(a1 + 300);
    if ( *(_DWORD *)(a1 + 296) != v55 && (v55 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0) )
      goto LABEL_22;
    v56 = *(_DWORD *)(v54 + 792);
    if ( v56 > v13 && !*(_BYTE *)(v54 + 320) && (*(_BYTE *)(v54 + 2) & 4) == 0 )
    {
LABEL_79:
      while ( --v56 >= v13 )
      {
        v57 = *(_QWORD *)(v54 + 432) + 104LL * v56;
        if ( (*(_DWORD *)(v57 + 24) & 0x9048060) != 0 || *(_QWORD *)(v57 + 64) > 1u )
          break;
        v80 = *(char **)(v54 + 456);
        v81 = &v80[4 * *(_QWORD *)(v54 + 464)];
        if ( v80 != v81 )
        {
          while ( *(_DWORD *)v80 != v56 )
          {
            v80 += 4;
            if ( v81 == v80 )
              goto LABEL_79;
          }
          if ( v81 != v80 )
          {
            memmove(v80, v80 + 4, v81 - v80 - 4);
            --*(_QWORD *)(v54 + 464);
            v54 = *(_QWORD *)(a1 + 8);
          }
        }
      }
      v58 = v56 + 1;
      if ( v58 < *(_DWORD *)(v54 + 792) )
      {
        *(_DWORD *)(v54 + 792) = v58;
        goto LABEL_116;
      }
    }
    v75 = *(_QWORD **)(a1 + 112);
    while ( *(_QWORD **)(a1 + 120) != v75 )
    {
      if ( (v75[10] & 1) != 0 )
      {
        v94 = v75;
        v97 = v82;
        sub_23A980(a1, &v97, (__int64)&v94, a3, a4);
        v82 = v97;
      }
      if ( (*v75 & 2) == 0 )
      {
        v76 = (_QWORD *)v75[2];
        if ( (*(_BYTE *)v76 & 2) != 0 )
        {
          v77 = (_QWORD *)(*v75 & 0xFFFFFFFFFFFFFFFCLL);
          v78 = *v77;
          if ( (*v77 & 2) == 0 )
          {
            while ( (_QWORD *)v77[2] == v75 )
            {
              v75 = v77;
              v79 = v78 & 0xFFFFFFFFFFFFFFFCLL;
              v78 = *(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v78 & 2) != 0 )
              {
                v75 = (_QWORD *)v79;
                goto LABEL_128;
              }
              v77 = (_QWORD *)v79;
            }
          }
          v75 = v77;
        }
        else
        {
          do
          {
            v75 = v76;
            v76 = (_QWORD *)v76[1];
          }
          while ( (*(_BYTE *)v76 & 2) == 0 );
        }
      }
LABEL_128:
      ;
    }
    goto LABEL_129;
  }
  v90 = 0;
  if ( v82.m128i_i64[0] )
    goto LABEL_44;
LABEL_45:
  cleanup_argloc();
  return v90;
}

