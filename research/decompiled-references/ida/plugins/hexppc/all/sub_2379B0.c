__int64 __fastcall sub_2379B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  int v5; // r13d
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  int v11; // r12d
  int v12; // ebp
  int v13; // eax
  _DWORD *v14; // r15
  int v15; // eax
  __int64 v16; // rdi
  int v17; // r13d
  int v18; // eax
  char v19; // al
  int v20; // eax
  unsigned __int64 v21; // rbp
  __int64 *v22; // rbx
  __int64 v23; // rax
  __int64 *v24; // r12
  __int64 v25; // rdx
  __int64 *v26; // rdi
  __int64 *v27; // rdi
  __int64 *v28; // r12
  __int64 *v29; // rdi
  __int64 *v30; // rdi
  __int64 v31; // rax
  const char *v33; // rax
  __int64 v34; // r8
  const char *v35; // r13
  __int64 v36; // r15
  const char *v37; // rdx
  char *v38; // rax
  __int64 v39; // r8
  size_t v40; // rax
  __int64 v41; // rsi
  size_t v42; // r9
  size_t v43; // r8
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // r13
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdi
  signed int v50; // ecx
  unsigned __int64 v51; // rax
  __int64 v52; // rbp
  int v53; // eax
  int v54; // r13d
  __int64 v55; // rax
  int v56; // r13d
  __int64 v57; // rcx
  int v58; // ebp
  unsigned int v59; // eax
  signed __int64 v60; // rax
  int v61; // r12d
  int v62; // ebp
  int v63; // r12d
  unsigned __int64 v64; // r15
  __int64 v65; // rdx
  signed __int64 v66; // rdx
  __int64 v67; // rsi
  bool v68; // r15
  __int64 v69; // rbp
  signed __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r15
  _QWORD *v73; // r12
  _QWORD *v74; // rdx
  _QWORD *v75; // rax
  __int64 v76; // rdx
  unsigned __int64 v77; // rcx
  char *v78; // rdi
  char *v79; // rax
  __m128i v80; // [rsp+10h] [rbp-B8h]
  signed __int64 v81; // [rsp+20h] [rbp-A8h]
  __int64 v82; // [rsp+20h] [rbp-A8h]
  const char *v83; // [rsp+20h] [rbp-A8h]
  __int64 v84; // [rsp+20h] [rbp-A8h]
  __int64 v85; // [rsp+20h] [rbp-A8h]
  const char *v86; // [rsp+28h] [rbp-A0h]
  size_t v87; // [rsp+28h] [rbp-A0h]
  unsigned int v88; // [rsp+30h] [rbp-98h]
  bool v89; // [rsp+37h] [rbp-91h]
  size_t v90; // [rsp+38h] [rbp-90h]
  int v91; // [rsp+44h] [rbp-84h] BYREF
  _QWORD *v92; // [rsp+48h] [rbp-80h] BYREF
  __int64 v93; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v94; // [rsp+58h] [rbp-70h]
  __m128i v95; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v96; // [rsp+70h] [rbp-58h] BYREF
  __int128 v97; // [rsp+78h] [rbp-50h]
  unsigned __int64 v98; // [rsp+88h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 176);
  v98 = __readfsqword(0x28u);
  v93 = 0;
  v94 = 0;
  cleanup_argloc();
  v5 = *(_DWORD *)(a1 + 196);
  v6 = *(_QWORD *)(a1 + 8);
  v94 = v3;
  LODWORD(v93) = 1;
  v7 = *(_QWORD *)(a1 + 176);
  if ( v5 <= 0 )
    v5 = 1;
  v91 = v5;
  if ( v7 >= sub_189640(v6) )
  {
    if ( (*(_BYTE *)(v6 + 5) & 0x10) != 0
      && ((v72 = *(_QWORD *)(v6 + 944), *(_QWORD *)(v72 + 8) != -1)
       || (unsigned __int8)sub_21AAE0(*(__int64 **)(v6 + 944))) )
    {
      v10 = *(_QWORD *)(a1 + 8);
      v9 = *(_QWORD *)(a1 + 176);
      v57 = v9;
      v8 = v10;
      if ( *(_QWORD *)(v72 + 16) )
      {
        v89 = 0;
        v68 = v7 < *(_QWORD *)(v72 + 8);
        if ( v9 < *(_QWORD *)(v10 + 144) )
          goto LABEL_107;
        v89 = 1;
        if ( (*(_BYTE *)(v10 + 5) & 0x10) == 0 )
          goto LABEL_107;
        goto LABEL_104;
      }
    }
    else
    {
      v57 = *(_QWORD *)(a1 + 176);
      v10 = *(_QWORD *)(a1 + 8);
    }
    v9 = v57;
    v8 = v10;
    if ( v57 < *(_QWORD *)(v10 + 144) )
    {
      v89 = 0;
      v58 = *(_DWORD *)(*(_QWORD *)(v10 + 1504) + 80LL);
      v59 = *(_DWORD *)(v10 + 72);
      if ( v59 > 0x10 )
        goto LABEL_88;
LABEL_102:
      v59 = getinf();
LABEL_88:
      if ( v59 != 176 && v59 != 256 && !(unsigned __int8)getinf_flag() )
      {
        v61 = v58;
        v62 = v58 - 1;
        v63 = -v61;
        v96 = *(_QWORD *)(a1 + 176);
        v60 = v96;
        v64 = v63 & v96;
        v91 = (v62 + v96 + v5 - v64) & v63;
        v65 = v91;
        if ( v89 )
        {
          sub_224890(&v91, (__int64 *)&v96, *(_QWORD *)(a1 + 8), (__int64 *)(a1 + 168));
          v65 = v91;
          v64 = v96;
          v60 = *(_QWORD *)(a1 + 176);
        }
        else
        {
          v96 &= v63;
        }
        v66 = v64 + v65;
        v67 = *(int *)(a1 + 196);
        if ( (_DWORD)v67 != -1 )
          v60 += v67;
        if ( v66 < v60 )
          v91 = v60 - v64;
        cleanup_argloc();
        LODWORD(v93) = 1;
        v94 = v64;
        v91 = (v91 + v62) & v63;
        v5 = v91;
      }
      v8 = *(_QWORD *)(a1 + 8);
      goto LABEL_5;
    }
    if ( (*(_BYTE *)(v10 + 5) & 0x10) == 0 )
    {
      v89 = 1;
      goto LABEL_101;
    }
    v68 = 1;
LABEL_104:
    v69 = *(_QWORD *)(v10 + 944);
    if ( *(_QWORD *)(v69 + 8) == -1 )
    {
      if ( !(unsigned __int8)sub_21AAE0(*(__int64 **)(v10 + 944)) )
      {
        v89 = 1;
        v8 = *(_QWORD *)(a1 + 8);
        goto LABEL_107;
      }
      v10 = *(_QWORD *)(a1 + 8);
    }
    v89 = 1;
    v8 = v10;
    if ( *(_QWORD *)(v69 + 16) )
      v89 = *(_QWORD *)(v69 + 8) > v9;
LABEL_107:
    if ( !v68 )
      goto LABEL_5;
LABEL_101:
    v58 = *(_DWORD *)(*(_QWORD *)(v8 + 1504) + 80LL);
    v59 = *(_DWORD *)(v8 + 72);
    if ( v59 > 0x10 )
      goto LABEL_88;
    goto LABEL_102;
  }
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(a1 + 176);
  v89 = 0;
  v10 = v8;
  if ( *(_QWORD *)(v8 + 144) <= v9 )
  {
    if ( (*(_BYTE *)(v8 + 5) & 0x10) == 0 )
    {
      v89 = 1;
      goto LABEL_5;
    }
    v68 = 0;
    goto LABEL_104;
  }
LABEL_5:
  v11 = *(_DWORD *)(v8 + 792);
  v12 = -1;
  v80 = 0u;
  while ( 1 )
  {
    v13 = sub_1EC980((__int64 *)(v8 + 432), (int *)&v93, v5, -1, v12 + 1);
    v12 = v13;
    if ( v13 == -1 )
      break;
    v8 = *(_QWORD *)(a1 + 8);
    v14 = (_DWORD *)(*(_QWORD *)(v8 + 432) + 104LL * v13);
    if ( v11 > v13 && *v14 == 1 )
      v11 = v13;
    v88 = v14[6] & 0x10000;
    if ( !v88 )
    {
      v15 = sub_1BFAC0(v14);
      v16 = *(_QWORD *)(a1 + 8);
      v17 = v15;
      if ( v15 < *(_QWORD *)(v16 + 128) )
      {
        v81 = v15;
        v19 = sub_312EC0(
                v16 + 848,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v16 + 1440) + v15));
        v16 = *(_QWORD *)(a1 + 8);
        if ( !v19 )
        {
          if ( (*(_BYTE *)(v16 + 2) & 4) == 0 )
          {
            v70 = *(_QWORD *)(a1 + 176);
            LODWORD(v71) = v70 + *(_DWORD *)(a1 + 196);
            if ( *(_DWORD *)(a1 + 196) == -1 )
              v71 = *(_QWORD *)(a1 + 176);
            if ( v81 > v70 )
              v17 = *(_QWORD *)(a1 + 176);
            if ( !(unsigned __int8)sub_22ED60(v16, v81, (int)v71 - v17) )
            {
              if ( !under_debugger )
                sub_37EEE0(52386);
              BUG();
            }
LABEL_116:
            *(_DWORD *)(a1 + 136) |= 4u;
LABEL_22:
            v88 = -1;
LABEL_23:
            if ( !v80.m128i_i64[0] )
              goto LABEL_45;
            if ( !v80.m128i_i64[1] )
              goto LABEL_44;
            v21 = *(_QWORD *)v80.m128i_i64[0];
            v22 = (__int64 *)(*(_QWORD *)v80.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
            v23 = *v22;
            if ( (*v22 & 2) != 0 )
              goto LABEL_44;
            v24 = (__int64 *)v22[1];
            v25 = *v24;
            if ( (*v24 & 2) != 0 )
            {
              v28 = (__int64 *)v22[2];
              if ( (*(_BYTE *)v28 & 2) == 0 )
                goto LABEL_34;
              goto LABEL_41;
            }
            v26 = (__int64 *)v24[1];
            if ( (*(_BYTE *)v26 & 2) != 0 )
            {
              v27 = (__int64 *)v24[2];
              if ( (*(_BYTE *)v27 & 2) == 0 )
              {
LABEL_29:
                sub_223260(v27);
                goto LABEL_30;
              }
            }
            else
            {
              sub_223260(v26);
              v27 = (__int64 *)v24[2];
              if ( (*(_BYTE *)v27 & 2) == 0 )
                goto LABEL_29;
LABEL_30:
              v25 = *v24;
              if ( (*v24 & 2) != 0 )
              {
LABEL_31:
                if ( v24 )
                  qfree();
                v28 = (__int64 *)v22[2];
                if ( (*(_BYTE *)v28 & 2) == 0 )
                {
LABEL_34:
                  v29 = (__int64 *)v28[1];
                  if ( (*(_BYTE *)v29 & 2) != 0 )
                  {
                    v30 = (__int64 *)v28[2];
                    if ( (*(_BYTE *)v30 & 2) == 0 )
                    {
LABEL_36:
                      sub_223260(v30);
                      goto LABEL_37;
                    }
                    v31 = *v28;
                  }
                  else
                  {
                    sub_223260(v29);
                    v30 = (__int64 *)v28[2];
                    if ( (*(_BYTE *)v30 & 2) == 0 )
                      goto LABEL_36;
LABEL_37:
                    v31 = *v28;
                    if ( (*v28 & 2) != 0 )
                    {
LABEL_38:
                      if ( v28 )
                        qfree();
                      goto LABEL_40;
                    }
                  }
                  *v28 = v31 | 2;
                  goto LABEL_38;
                }
LABEL_40:
                v23 = *v22;
                if ( (*v22 & 2) == 0 )
LABEL_41:
                  *v22 = v23 | 2;
                if ( v21 > 3 )
                  qfree();
LABEL_44:
                qfree();
                goto LABEL_45;
              }
            }
            *v24 = v25 | 2;
            goto LABEL_31;
          }
          goto LABEL_19;
        }
      }
      v18 = sub_22D7B0(v16, v12, *(_QWORD *)(a1 + 176), *(_DWORD *)(a1 + 196), (_QWORD *)(a1 + 168), 1);
      if ( v18 == 1 )
      {
        sub_236580(a1, v12, 1);
LABEL_129:
        v88 = 1;
        goto LABEL_23;
      }
      if ( v18 == -1 )
      {
        v16 = *(_QWORD *)(a1 + 8);
LABEL_19:
        if ( (*(_BYTE *)(*(_QWORD *)(v16 + 1496) + 604LL) & 0x10) == 0 )
          goto LABEL_22;
        v20 = *(_DWORD *)(a1 + 300);
        if ( *(_DWORD *)(a1 + 296) != v20 && (v20 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0) )
          goto LABEL_22;
        v96 = 0;
        v97 = 0;
        v33 = (const char *)sub_1F08D0((__int64)v14, *(_DWORD **)(v16 + 1504), (__int64 *)&v96, 2);
        v34 = *(_QWORD *)(a2 + 8);
        v35 = v33;
        v36 = 0;
        v37 = s1;
        if ( v34 )
        {
          v37 = *(const char **)a2;
          v36 = v34 - 1;
        }
        v82 = *(_QWORD *)(a2 + 8);
        v86 = v37;
        v38 = strstr(v37, v33);
        v39 = v82;
        if ( !v38 || v38 - v86 == -1 )
        {
          if ( v35 )
          {
            v83 = *(const char **)a2;
            v40 = strlen(v35);
            v41 = (__int64)v83;
            v42 = v40 + v36;
            v43 = v40;
            v44 = v40 + v36 + 1;
            if ( *(_QWORD *)(a2 + 16) < v44 )
            {
              v90 = v40;
              v87 = v40 + v36;
              v85 = v40 + v36 + 1;
              v48 = qvector_reserve();
              v43 = v90;
              v42 = v87;
              *(_QWORD *)a2 = v48;
              v41 = v48;
              v44 = v85;
            }
            *(_QWORD *)(a2 + 8) = v44;
            *(_BYTE *)(v41 + v42) = 0;
            memmove((void *)(v36 + *(_QWORD *)a2), v35, v43);
            v39 = *(_QWORD *)(a2 + 8);
          }
          v45 = 2;
          if ( v39 )
            v45 = v39-- + 1;
          v46 = *(_QWORD *)a2;
          if ( *(_QWORD *)(a2 + 16) < v45 )
          {
            v84 = v39;
            v47 = qvector_reserve();
            *(_QWORD *)a2 = v47;
            v39 = v84;
            v46 = v47;
          }
          *(_QWORD *)(a2 + 8) = v45;
          *(_BYTE *)(v46 + v39) = 44;
          *(_BYTE *)(*(_QWORD *)a2 + v39 + 1) = 0;
        }
        if ( v96 )
        {
          *(_QWORD *)&v97 = 0;
          qfree();
        }
      }
      if ( !v89 && (*(_BYTE *)(a1 + 136) & 1) == 0 )
        goto LABEL_23;
      v95 = v80;
      sub_237370(a1, v95.m128i_i64, v12);
      v8 = *(_QWORD *)(a1 + 8);
      v5 = v91;
      v80 = v95;
    }
  }
  if ( v80.m128i_i64[1]
    || v89
    && (v49 = *(_QWORD *)(a1 + 8), !*(_BYTE *)(v49 + 320))
    && (v50 = *(_DWORD *)(a1 + 196), v50 > 0)
    && (v51 = *(_QWORD *)(a1 + 176),
        LOBYTE(v97) = 5,
        v96 = v51,
        !(unsigned __int8)sub_224250(v49, (__int64)&v96, (_QWORD *)(a1 + 168), v50)) )
  {
    if ( *(_DWORD *)(a1 + 300) == 1 )
      *(_DWORD *)(a1 + 300) = 2;
    v52 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(*(_QWORD *)(v52 + 1496) + 604LL) & 0x10) == 0 )
      goto LABEL_22;
    v53 = *(_DWORD *)(a1 + 300);
    if ( *(_DWORD *)(a1 + 296) != v53 && (v53 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0) )
      goto LABEL_22;
    v54 = *(_DWORD *)(v52 + 792);
    if ( v54 > v11 && !*(_BYTE *)(v52 + 320) && (*(_BYTE *)(v52 + 2) & 4) == 0 )
    {
LABEL_79:
      while ( --v54 >= v11 )
      {
        v55 = *(_QWORD *)(v52 + 432) + 104LL * v54;
        if ( (*(_DWORD *)(v55 + 24) & 0x9048060) != 0 || *(_QWORD *)(v55 + 64) > 1u )
          break;
        v78 = *(char **)(v52 + 456);
        v79 = &v78[4 * *(_QWORD *)(v52 + 464)];
        if ( v78 != v79 )
        {
          while ( *(_DWORD *)v78 != v54 )
          {
            v78 += 4;
            if ( v79 == v78 )
              goto LABEL_79;
          }
          if ( v79 != v78 )
          {
            memmove(v78, v78 + 4, v79 - v78 - 4);
            --*(_QWORD *)(v52 + 464);
            v52 = *(_QWORD *)(a1 + 8);
          }
        }
      }
      v56 = v54 + 1;
      if ( v56 < *(_DWORD *)(v52 + 792) )
      {
        *(_DWORD *)(v52 + 792) = v56;
        goto LABEL_116;
      }
    }
    v73 = *(_QWORD **)(a1 + 112);
    while ( *(_QWORD **)(a1 + 120) != v73 )
    {
      if ( (v73[10] & 1) != 0 )
      {
        v92 = v73;
        v95 = v80;
        sub_236D00(a1, &v95, (__int64)&v92);
        v80 = v95;
      }
      if ( (*v73 & 2) == 0 )
      {
        v74 = (_QWORD *)v73[2];
        if ( (*(_BYTE *)v74 & 2) != 0 )
        {
          v75 = (_QWORD *)(*v73 & 0xFFFFFFFFFFFFFFFCLL);
          v76 = *v75;
          if ( (*v75 & 2) == 0 )
          {
            while ( (_QWORD *)v75[2] == v73 )
            {
              v73 = v75;
              v77 = v76 & 0xFFFFFFFFFFFFFFFCLL;
              v76 = *(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v76 & 2) != 0 )
              {
                v73 = (_QWORD *)v77;
                goto LABEL_128;
              }
              v75 = (_QWORD *)v77;
            }
          }
          v73 = v75;
        }
        else
        {
          do
          {
            v73 = v74;
            v74 = (_QWORD *)v74[1];
          }
          while ( (*(_BYTE *)v74 & 2) == 0 );
        }
      }
LABEL_128:
      ;
    }
    goto LABEL_129;
  }
  v88 = 0;
  if ( v80.m128i_i64[0] )
    goto LABEL_44;
LABEL_45:
  cleanup_argloc();
  return v88;
}

