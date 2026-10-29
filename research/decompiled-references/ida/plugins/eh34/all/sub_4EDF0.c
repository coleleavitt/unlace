unsigned __int64 __fastcall sub_4EDF0(__int64 a1, char *a2)
{
  char v3; // bl
  char v4; // bl
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  char v8; // bl
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // bl
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  char v16; // bl
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  char v20; // bl
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  size_t v25; // r12
  __int64 v26; // r13
  unsigned __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // r12
  __int64 v30; // rax
  size_t v31; // rbp
  __int64 v32; // r14
  unsigned __int64 v33; // r15
  __int64 v34; // rax
  size_t v35; // rbp
  __int64 v36; // r12
  unsigned __int64 v37; // r13
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rbp
  __int64 v41; // rbx
  __int64 v43; // rdx
  __int64 v44; // rax
  size_t v45; // r13
  size_t v46; // r14
  size_t v47; // r15
  char *v48; // r15
  char *v49; // r13
  size_t v50; // rax
  char v51; // r9
  _BYTE *v52; // rsi
  _BYTE *v53; // rsi
  size_t v54; // rax
  size_t v55; // rdx
  char v56; // r9
  _BYTE *v57; // rsi
  size_t v58; // rax
  size_t v59; // rdx
  char v60; // r9
  __int64 v61; // rax
  size_t v62; // r9
  size_t v63; // r10
  size_t v64; // r11
  char *v65; // rsi
  size_t v66; // rax
  __int64 v67; // rax
  size_t v68; // r9
  size_t v69; // r10
  size_t v70; // r11
  char *v71; // rsi
  size_t v72; // rax
  size_t v73; // r14
  void *v74; // r13
  __int64 v75; // rax
  size_t v76; // r15
  size_t v77; // r8
  unsigned __int64 v78; // r9
  __int64 v79; // r15
  unsigned __int64 v80; // r8
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rsi
  __int64 v84; // rax
  char *v85; // rsi
  size_t v86; // rax
  __int64 v87; // rsi
  __int64 v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rax
  struct _Unwind_Exception *v91; // rbx
  void **v92; // [rsp+0h] [rbp-B8h]
  __int64 v93; // [rsp+8h] [rbp-B0h]
  __int64 *v94; // [rsp+10h] [rbp-A8h]
  size_t v95; // [rsp+18h] [rbp-A0h]
  size_t n; // [rsp+20h] [rbp-98h]
  size_t v97; // [rsp+28h] [rbp-90h]
  __int64 v98; // [rsp+30h] [rbp-88h] BYREF
  __int128 v99; // [rsp+38h] [rbp-80h]
  void *v100; // [rsp+50h] [rbp-68h] BYREF
  size_t v101[2]; // [rsp+58h] [rbp-60h]
  _BYTE src[5]; // [rsp+6Eh] [rbp-4Ah] BYREF
  _BYTE v103[5]; // [rsp+73h] [rbp-45h] BYREF
  _QWORD v104[8]; // [rsp+78h] [rbp-40h] BYREF

  v93 = a1;
  v104[0] = __readfsqword(0x28u);
  v94 = &v98;
  v98 = 0;
  v99 = 0;
  v3 = *a2;
  v98 = qvector_reserve(&v98, 0, 1, 1);
  *(_BYTE *)(v98 + v99) = v3;
  v4 = a2[1];
  v5 = v98;
  v6 = v99 + 1;
  v7 = v99 + 2;
  *(_QWORD *)&v99 = v99 + 1;
  if ( *((_QWORD *)&v99 + 1) < v7 )
  {
    v98 = qvector_reserve(v94, v98, v7, 1);
    v5 = v98;
    v6 = v99;
  }
  *(_BYTE *)(v5 + v6) = v4;
  v8 = a2[2];
  v9 = v98;
  v10 = v99 + 1;
  v11 = v99 + 2;
  *(_QWORD *)&v99 = v99 + 1;
  if ( *((_QWORD *)&v99 + 1) < v11 )
  {
    v98 = qvector_reserve(v94, v98, v11, 1);
    v9 = v98;
    v10 = v99;
  }
  *(_BYTE *)(v9 + v10) = v8;
  v12 = a2[3];
  v13 = v98;
  v14 = v99 + 1;
  v15 = v99 + 2;
  *(_QWORD *)&v99 = v99 + 1;
  if ( *((_QWORD *)&v99 + 1) < v15 )
  {
    v98 = qvector_reserve(v94, v98, v15, 1);
    v13 = v98;
    v14 = v99;
  }
  *(_BYTE *)(v13 + v14) = v12;
  v16 = a2[4];
  v17 = v98;
  v18 = v99 + 1;
  v19 = v99 + 2;
  *(_QWORD *)&v99 = v99 + 1;
  if ( *((_QWORD *)&v99 + 1) < v19 )
  {
    v98 = qvector_reserve(v94, v98, v19, 1);
    v17 = v98;
    v18 = v99;
  }
  *(_BYTE *)(v17 + v18) = v16;
  v20 = a2[5];
  v21 = v98;
  v22 = v99 + 1;
  v23 = v99 + 2;
  *(_QWORD *)&v99 = v99 + 1;
  if ( *((_QWORD *)&v99 + 1) < v23 )
  {
    v98 = qvector_reserve(v94, v98, v23, 1);
    v21 = v98;
    v22 = v99;
  }
  *(_BYTE *)(v21 + v22) = v20;
  *(_QWORD *)&v99 = v99 + 1;
  if ( a2[3] )
  {
    v43 = *((unsigned int *)a2 + 4);
    *(_OWORD *)v101 = 0;
    v100 = nullptr;
    v44 = pack_dd(src, v103, v43) - (_QWORD)src;
    v45 = v44;
    if ( !v44 )
      goto LABEL_43;
    v46 = v101[0];
    v47 = v101[0] + v44;
    if ( __CFADD__(v101[0], v44) )
    {
      if ( v101[0] > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v101[0] != 0x7FFFFFFFFFFFFFFFLL )
          v101[0] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_42:
        memcpy((char *)v100 + v46, src, v45);
LABEL_43:
        v48 = *((char **)a2 + 1);
        v49 = &v48[12 * *((_QWORD *)a2 + 2)];
        v92 = &v100;
        if ( v49 != v48 )
        {
          while ( 1 )
          {
            v50 = v101[0];
            v51 = *v48;
            v52 = v100;
            if ( v101[1] < v101[0] + 1 )
            {
              LOBYTE(v95) = *v48;
              v100 = (void *)qvector_reserve(v92, v100, v101[0] + 1, 1);
              v52 = v100;
              v51 = v95;
              v50 = v101[0];
            }
            v52[v50] = v51;
            v53 = v100;
            v54 = v101[0] + 1;
            v55 = v101[0] + 2;
            ++v101[0];
            v56 = v48[1];
            if ( v101[1] < v55 )
            {
              LOBYTE(v95) = v48[1];
              v100 = (void *)qvector_reserve(v92, v100, v55, 1);
              v53 = v100;
              v56 = v95;
              v54 = v101[0];
            }
            v53[v54] = v56;
            v57 = v100;
            v58 = v101[0] + 1;
            v59 = v101[0] + 2;
            ++v101[0];
            v60 = v48[2];
            if ( v101[1] < v59 )
            {
              LOBYTE(v95) = v48[2];
              v100 = (void *)qvector_reserve(v92, v100, v59, 1);
              v57 = v100;
              v60 = v95;
              v58 = v101[0];
            }
            v57[v58] = v60;
            ++v101[0];
            v61 = pack_dd(src, v103, *((unsigned int *)v48 + 1)) - (_QWORD)src;
            v62 = v61;
            if ( v61 )
              break;
LABEL_56:
            v67 = pack_dd(src, v103, *((unsigned int *)v48 + 2)) - (_QWORD)src;
            v68 = v67;
            if ( v67 )
            {
              v69 = v101[0];
              v70 = v101[0] + v67;
              if ( !__CFADD__(v101[0], v67) )
                goto LABEL_58;
              if ( v101[0] <= 0x7FFFFFFFFFFFFFFELL )
              {
                v70 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_58:
                v71 = (char *)v100;
                v72 = v101[0];
                if ( v101[1] < v70 )
                {
                  v97 = v101[0];
                  n = v68;
                  v95 = v70;
                  v100 = (void *)qvector_reserve(&v100, v100, v70, 1);
                  v71 = (char *)v100;
                  v69 = v97;
                  v72 = v101[0];
                  v68 = n;
                  v70 = v95;
                }
                v97 = v69;
                n = v68;
                v95 = v70;
                memset(&v71[v72], 0, v70 - v72);
                v68 = n;
                v69 = v97;
                v101[0] = v95;
              }
              else if ( v101[0] != 0x7FFFFFFFFFFFFFFFLL )
              {
                v101[0] = 0x7FFFFFFFFFFFFFFFLL;
              }
              memcpy((char *)v100 + v69, src, v68);
            }
            v48 += 12;
            if ( v49 == v48 )
              goto LABEL_63;
          }
          v63 = v101[0];
          v64 = v101[0] + v61;
          if ( __CFADD__(v101[0], v61) )
          {
            if ( v101[0] > 0x7FFFFFFFFFFFFFFELL )
            {
              if ( v101[0] != 0x7FFFFFFFFFFFFFFFLL )
                v101[0] = 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_55;
            }
            v64 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v65 = (char *)v100;
          v66 = v101[0];
          if ( v101[1] < v64 )
          {
            v97 = v101[0];
            n = v62;
            v95 = v64;
            v100 = (void *)qvector_reserve(&v100, v100, v64, 1);
            v65 = (char *)v100;
            v63 = v97;
            v66 = v101[0];
            v62 = n;
            v64 = v95;
          }
          v97 = v63;
          n = v62;
          v95 = v64;
          memset(&v65[v66], 0, v64 - v66);
          v62 = n;
          v63 = v97;
          v101[0] = v95;
LABEL_55:
          memcpy((char *)v100 + v63, src, v62);
          goto LABEL_56;
        }
LABEL_63:
        v73 = v101[0];
        v74 = v100;
        if ( HIDWORD(v101[0]) )
        {
          v91 = (struct _Unwind_Exception *)sub_4E620();
          if ( v100 )
          {
            v101[0] = 0;
            qfree(v100);
          }
          if ( v98 )
          {
            *(_QWORD *)&v99 = 0;
            qfree(v98);
          }
          _Unwind_Resume(v91);
        }
        v75 = pack_dd(src, v103, LODWORD(v101[0])) - (_QWORD)src;
        v76 = v75;
        if ( !v75 )
        {
LABEL_70:
          if ( !v73 )
            goto LABEL_76;
          v79 = v99;
          v80 = v99 + v73;
          if ( __CFADD__((_QWORD)v99, v73) )
          {
            if ( (unsigned __int64)v99 > 0x7FFFFFFFFFFFFFFELL )
            {
              if ( (_QWORD)v99 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v99 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_75:
              memcpy((void *)(v79 + v98), v74, v73);
LABEL_76:
              if ( v100 )
              {
                v101[0] = 0;
                qfree(v100);
              }
              goto LABEL_12;
            }
            v80 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v87 = v98;
          v88 = v99;
          if ( *((_QWORD *)&v99 + 1) < v80 )
          {
            v92 = (void **)v80;
            v98 = qvector_reserve(v94, v98, v80, 1);
            v87 = v98;
            v80 = (unsigned __int64)v92;
            v88 = v99;
          }
          v92 = (void **)v80;
          memset((void *)(v87 + v88), 0, v80 - v88);
          *(_QWORD *)&v99 = v92;
          goto LABEL_75;
        }
        v77 = v99;
        v78 = v99 + v75;
        if ( __CFADD__((_QWORD)v99, v75) )
        {
          if ( (unsigned __int64)v99 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v99 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v99 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_69:
            memcpy((void *)(v77 + v98), src, v76);
            goto LABEL_70;
          }
          v78 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v89 = v98;
        v90 = v99;
        if ( *((_QWORD *)&v99 + 1) < v78 )
        {
          v92 = (void **)v78;
          v95 = v99;
          v98 = qvector_reserve(v94, v98, v78, 1);
          v89 = v98;
          v77 = v95;
          v90 = v99;
          v78 = (unsigned __int64)v92;
        }
        v95 = v77;
        v92 = (void **)v78;
        memset((void *)(v89 + v90), 0, v78 - v90);
        v77 = v95;
        *(_QWORD *)&v99 = v92;
        goto LABEL_69;
      }
      v47 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v85 = (char *)v100;
    v86 = v101[0];
    if ( v101[1] < v47 )
    {
      v100 = (void *)qvector_reserve(&v100, v100, v47, 1);
      v85 = (char *)v100;
      v86 = v101[0];
    }
    memset(&v85[v86], 0, v47 - v86);
    v101[0] = v47;
    goto LABEL_42;
  }
LABEL_12:
  v24 = pack_dd(src, v103, *((unsigned int *)a2 + 24)) - (_QWORD)src;
  v25 = v24;
  if ( !v24 )
    goto LABEL_18;
  v26 = v99;
  v27 = v99 + v24;
  if ( !__CFADD__((_QWORD)v99, v24) )
    goto LABEL_88;
  if ( (unsigned __int64)v99 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v27 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_88:
    v81 = v98;
    v82 = v99;
    if ( *((_QWORD *)&v99 + 1) < v27 )
    {
      v98 = qvector_reserve(v94, v98, v27, 1);
      v81 = v98;
      v82 = v99;
    }
    memset((void *)(v81 + v82), 0, v27 - v82);
    *(_QWORD *)&v99 = v27;
    goto LABEL_17;
  }
  if ( (_QWORD)v99 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v99 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_17:
  memcpy((void *)(v26 + v98), src, v25);
LABEL_18:
  v28 = 0;
  if ( a2[72] )
    v28 = v93 + 1 - *((_QWORD *)a2 + 8);
  v29 = -1;
  if ( a2[88] )
    v29 = v93 - *((_QWORD *)a2 + 10);
  v30 = pack_dq(src, v104, v28) - (_QWORD)src;
  v31 = v30;
  if ( v30 )
  {
    v32 = v99;
    v33 = v99 + v30;
    if ( __CFADD__((_QWORD)v99, v30) )
    {
      if ( (unsigned __int64)v99 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v99 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v99 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_27:
        memcpy((void *)(v32 + v98), src, v31);
        goto LABEL_28;
      }
      v33 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v83 = v98;
    v84 = v99;
    if ( *((_QWORD *)&v99 + 1) < v33 )
    {
      v98 = qvector_reserve(v94, v98, v33, 1);
      v83 = v98;
      v84 = v99;
    }
    memset((void *)(v83 + v84), 0, v33 - v84);
    *(_QWORD *)&v99 = v33;
    goto LABEL_27;
  }
LABEL_28:
  v34 = pack_dq(src, v104, v29 + 1) - (_QWORD)src;
  v35 = v34;
  if ( !v34 )
    goto LABEL_34;
  v36 = v99;
  v37 = v99 + v34;
  if ( __CFADD__((_QWORD)v99, v34) )
  {
    if ( (unsigned __int64)v99 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v99 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v99 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_33;
    }
    v37 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v38 = v98;
  v39 = v99;
  if ( *((_QWORD *)&v99 + 1) < v37 )
  {
    v98 = qvector_reserve(v94, v98, v37, 1);
    v38 = v98;
    v39 = v99;
  }
  memset((void *)(v38 + v39), 0, v37 - v39);
  *(_QWORD *)&v99 = v37;
LABEL_33:
  memcpy((void *)(v36 + v98), src, v35);
LABEL_34:
  v40 = sub_1DD10();
  v41 = netnode_suplast(v40, 1);
  netnode_setblob(v40, v98, v99, v41 + 2, 1);
  v100 = (void *)(v41 + 3);
  netnode_supset(v40, v93, &v100, 8, 358);
  if ( v98 )
  {
    *(_QWORD *)&v99 = 0;
    qfree(v98);
  }
  return v104[0] - __readfsqword(0x28u);
}

