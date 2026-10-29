__int64 __fastcall sub_1E4F0(__int64 a1, int a2, unsigned __int8 a3, _BYTE *a4, __int64 a5)
{
  __int64 v8; // rax
  size_t v9; // r9
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r10
  __int64 v12; // rax
  size_t v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r10
  int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // rcx
  size_t v19; // r8
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r9
  size_t v22; // r14
  unsigned __int64 v23; // r8
  void *v24; // r9
  unsigned __int64 v25; // r10
  __int64 v26; // rdi
  __int64 (__fastcall *v27)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v28; // rax
  unsigned int *v29; // rbp
  __int64 v30; // rax
  unsigned int v31; // r14d
  char *v32; // rbx
  char *v33; // rax
  size_t v35; // rax
  size_t v36; // r12
  void *v37; // rdi
  size_t v38; // r15
  unsigned __int8 *v39; // r13
  unsigned __int64 v40; // rax
  _BYTE *v41; // r15
  unsigned __int64 v42; // r12
  _QWORD *v43; // r15
  char *v44; // rax
  unsigned __int64 v45; // rdx
  int v46; // esi
  char *v47; // rcx
  char v48; // al
  __int64 v49; // rdi
  unsigned int v50; // eax
  __int64 v51; // rdx
  int v52; // eax
  char *v53; // rdx
  char *v54; // rax
  char v55; // dl
  __int64 v56; // rcx
  unsigned int v57; // r10d
  unsigned int k; // edx
  __int64 v59; // rcx
  int v60; // eax
  size_t v61; // rdi
  size_t v62; // r10
  char *v63; // rax
  char *v64; // rsi
  __int64 v65; // rsi
  unsigned __int64 v66; // rax
  __int64 v67; // rsi
  unsigned __int64 v68; // rax
  __int64 v69; // rsi
  unsigned __int64 v70; // rax
  __int64 v71; // rsi
  unsigned __int64 v72; // rax
  char *v73; // rdx
  char *v74; // rax
  char v75; // dl
  __int64 v76; // rcx
  unsigned int v77; // r10d
  unsigned int i; // edx
  __int64 v79; // rcx
  int v80; // eax
  char *v81; // rdx
  char *v82; // rax
  char v83; // dl
  __int64 v84; // rcx
  unsigned int v85; // r10d
  unsigned int j; // edx
  __int64 v87; // rcx
  __int64 v88; // rax
  unsigned __int64 v89; // [rsp+0h] [rbp-E8h]
  _BYTE *v90; // [rsp+8h] [rbp-E0h]
  void *v91; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v92; // [rsp+18h] [rbp-D0h]
  _BYTE *v93; // [rsp+20h] [rbp-C8h]
  _BYTE *v94; // [rsp+28h] [rbp-C0h]
  _BYTE *v95; // [rsp+30h] [rbp-B8h]
  _BYTE *v96; // [rsp+38h] [rbp-B0h]
  char *s; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v98; // [rsp+48h] [rbp-A0h]
  __int64 v99; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v100; // [rsp+58h] [rbp-90h]
  unsigned __int64 v101; // [rsp+60h] [rbp-88h]
  void *v102; // [rsp+70h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+78h] [rbp-70h]
  _BYTE v104[5]; // [rsp+94h] [rbp-54h] BYREF
  _BYTE v105[5]; // [rsp+99h] [rbp-4Fh] BYREF
  _BYTE v106[5]; // [rsp+9Eh] [rbp-4Ah] BYREF
  _BYTE src[5]; // [rsp+A3h] [rbp-45h] BYREF
  unsigned __int64 v108; // [rsp+A8h] [rbp-40h]

  LODWORD(v89) = a2;
  v90 = a4;
  v108 = __readfsqword(0x28u);
  sub_267D0(&v99, 31);
  v8 = pack_dd() - (_QWORD)src;
  v9 = v8;
  if ( v8 )
  {
    v10 = v100;
    v11 = v100 + v8;
    if ( __CFADD__(v100, v8) )
    {
      if ( v100 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v100 != 0x7FFFFFFFFFFFFFFFLL )
          v100 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v10 + v99), src, v9);
        goto LABEL_7;
      }
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v69 = v99;
    v70 = v100;
    if ( v101 < v11 )
    {
      v92 = v100;
      v91 = (void *)v9;
      v89 = v11;
      v99 = qvector_reserve();
      v69 = v99;
      v10 = v92;
      v70 = v100;
      v9 = (size_t)v91;
      v11 = v89;
    }
    v92 = v10;
    v91 = (void *)v9;
    v89 = v11;
    memset((void *)(v69 + v70), 0, v11 - v70);
    v9 = (size_t)v91;
    v10 = v92;
    v100 = v89;
    goto LABEL_6;
  }
LABEL_7:
  v12 = pack_dd() - (_QWORD)src;
  v13 = v12;
  if ( !v12 )
    goto LABEL_13;
  v14 = v100;
  v15 = v100 + v12;
  if ( !__CFADD__(v100, v12) )
    goto LABEL_90;
  if ( v100 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v15 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_90:
    v67 = v99;
    v68 = v100;
    if ( v101 < v15 )
    {
      v92 = v100;
      v91 = (void *)v13;
      v89 = v15;
      v99 = qvector_reserve();
      v67 = v99;
      v14 = v92;
      v68 = v100;
      v13 = (size_t)v91;
      v15 = v89;
    }
    v92 = v14;
    v91 = (void *)v13;
    v89 = v15;
    memset((void *)(v67 + v68), 0, v15 - v68);
    v13 = (size_t)v91;
    v14 = v92;
    v100 = v89;
    goto LABEL_12;
  }
  if ( v100 != 0x7FFFFFFFFFFFFFFFLL )
    v100 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
  memcpy((void *)(v14 + v99), src, v13);
LABEL_13:
  v102 = nullptr;
  *(_OWORD *)n = 0;
  v16 = sub_1E340(a1, (unsigned __int64 *)&v102, a3);
  v17 = pack_dd() - (_QWORD)src;
  v19 = v17;
  if ( !v17 )
    goto LABEL_19;
  v20 = v100;
  v21 = v100 + v17;
  if ( !__CFADD__(v100, v17) )
    goto LABEL_98;
  if ( v100 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v21 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_98:
    v71 = v99;
    v72 = v100;
    if ( v101 < v21 )
    {
      v91 = (void *)v19;
      v89 = v21;
      v99 = qvector_reserve();
      v71 = v99;
      v19 = (size_t)v91;
      v72 = v100;
      v21 = v89;
    }
    v91 = (void *)v19;
    v89 = v21;
    memset((void *)(v71 + v72), 0, v21 - v72);
    v19 = (size_t)v91;
    v100 = v89;
    goto LABEL_18;
  }
  if ( v100 != 0x7FFFFFFFFFFFFFFFLL )
    v100 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
  memcpy((void *)(v20 + v99), src, v19);
LABEL_19:
  v22 = n[0];
  if ( !n[0] )
    goto LABEL_25;
  v23 = v100;
  v24 = v102;
  v25 = v100 + n[0];
  if ( !__CFADD__(v100, n[0]) )
    goto LABEL_86;
  if ( v100 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v25 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_86:
    v65 = v99;
    v66 = v100;
    if ( v101 < v25 )
    {
      v92 = v100;
      v91 = v102;
      v89 = v25;
      v99 = qvector_reserve();
      v65 = v99;
      v23 = v92;
      v66 = v100;
      v24 = v91;
      v25 = v89;
    }
    v92 = v23;
    v91 = v24;
    v89 = v25;
    memset((void *)(v65 + v66), 0, v25 - v66);
    v24 = v91;
    v23 = v92;
    v100 = v89;
    goto LABEL_24;
  }
  if ( v100 != 0x7FFFFFFFFFFFFFFFLL )
    v100 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_24:
  memcpy((void *)(v23 + v99), v24, v22);
LABEL_25:
  v26 = a1 + 864;
  v27 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(a1 + 864) + 16LL);
  if ( v27 == sub_A820 )
    v28 = (unsigned int *)sub_23190(v26, 31, &v99, 0);
  else
    v28 = (unsigned int *)((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64, size_t))v27)(
                            v26,
                            31,
                            &v99,
                            v18,
                            v19);
  v29 = v28;
  if ( v28 )
  {
    v30 = *v28;
    s = (char *)v29 + 5;
    v98 = (unsigned __int64)v29 + v30 + 5;
    v31 = unpack_dd();
    if ( v31 != 1 )
    {
      if ( a5 )
      {
        v32 = s;
        v33 = s;
        do
        {
          if ( (unsigned __int64)v33 >= v98 )
            goto LABEL_33;
          ++v33;
        }
        while ( *(v33 - 1) );
        s = v33;
        if ( !v32 || (v35 = strlen(v32), (v36 = v35) == 0) )
        {
LABEL_33:
          *(_QWORD *)(a5 + 8) = 0;
          goto LABEL_34;
        }
        v37 = *(void **)a5;
        v38 = v35 + 1;
        if ( *(_QWORD *)(a5 + 16) < v35 + 1 )
        {
          v88 = qvector_reserve();
          *(_QWORD *)a5 = v88;
          v37 = (void *)v88;
        }
        *(_QWORD *)(a5 + 8) = v38;
        memmove(v37, v32, v36);
        *(_BYTE *)(*(_QWORD *)a5 + v36) = 0;
      }
      goto LABEL_34;
    }
    v39 = (unsigned __int8 *)v102;
    if ( v16 <= 0 )
    {
LABEL_34:
      qfree();
      goto LABEL_35;
    }
    v40 = v16;
    v41 = v90;
    v42 = 0;
    v89 = v40;
    v90 = v104;
    v43 = v41 + 8;
    while ( 1 )
    {
      v44 = s;
      v45 = v98;
      if ( (unsigned __int64)s >= v98 )
        goto LABEL_34;
      if ( !v39 || (v46 = v39[v42 >> 3], _bittest(&v46, v42 & 7)) )
      {
        if ( *((int *)v43 - 2) >= -1 )
        {
          if ( *v43 )
          {
            v43[1] = 0;
            qfree();
            v45 = v98;
          }
          *((_DWORD *)v43 - 2) = -2;
          v44 = s;
        }
        v47 = v44 + 1;
        if ( v45 < (unsigned __int64)(v44 + 1) )
        {
          v104[0] = 0;
        }
        else
        {
          s = v44 + 1;
          v48 = *v44;
          v104[0] = v48;
          if ( v48 < 0 )
          {
            if ( (~v48 & 0xC0) != 0 )
            {
              v49 = 1;
            }
            else
            {
              v49 = 3;
              if ( (~v48 & 0xE0) == 0 )
                v49 = 4;
            }
            if ( !__CFADD__(v49, v47) && v45 >= (unsigned __int64)&v47[v49] )
            {
              s = &v47[v49];
              v50 = 0;
              do
              {
                v51 = v50++;
                v104[v51 + 1] = v47[v51];
              }
              while ( v50 < (unsigned int)v49 );
            }
          }
        }
        v93 = v90;
        v52 = unpack_dd() - 3;
        *((_DWORD *)v43 - 2) = v52;
        if ( v52 == -2 )
        {
          v73 = s;
          v74 = s + 1;
          if ( v98 < (unsigned __int64)(s + 1) )
          {
            v105[0] = 0;
          }
          else
          {
            ++s;
            v75 = *v73;
            v105[0] = v75;
            if ( v75 < 0 )
            {
              if ( (~v75 & 0xC0) != 0 )
              {
                v76 = 1;
              }
              else
              {
                v76 = 3;
                if ( (~v75 & 0xE0) == 0 )
                  v76 = 4;
              }
              if ( !__CFADD__(v76, v74) && v98 >= (unsigned __int64)&v74[v76] )
              {
                s = &v74[v76];
                v77 = v76;
                for ( i = 0; i < v77; ++i )
                {
                  v79 = i;
                  v105[v79 + 1] = v74[v79];
                }
              }
            }
          }
          v94 = v105;
          v80 = unpack_dd();
          v81 = s;
          LODWORD(v91) = v80;
          v82 = s + 1;
          if ( v98 < (unsigned __int64)(s + 1) )
          {
            v106[0] = 0;
          }
          else
          {
            ++s;
            v83 = *v81;
            v106[0] = v83;
            if ( v83 < 0 )
            {
              if ( (~v83 & 0xC0) != 0 )
              {
                v84 = 1;
              }
              else
              {
                v84 = 3;
                if ( (~v83 & 0xE0) == 0 )
                  v84 = 4;
              }
              if ( !__CFADD__(v84, v82) && v98 >= (unsigned __int64)&v82[v84] )
              {
                s = &v82[v84];
                v85 = v84;
                for ( j = 0; j < v85; ++j )
                {
                  v87 = j;
                  v106[v87 + 1] = v82[v87];
                }
              }
            }
          }
          v95 = v106;
          *v43 = ((unsigned int)v91 | (unsigned __int64)(unpack_dd() << 32)) - 1;
          goto LABEL_82;
        }
        if ( v52 != -3 )
        {
          *v43 = 0;
          *(_OWORD *)(v43 + 1) = 0;
          if ( v52 < -1 )
          {
            if ( !under_debugger )
              interr();
            BUG();
          }
          v53 = s;
          v54 = s + 1;
          if ( v98 < (unsigned __int64)(s + 1) )
          {
            src[0] = 0;
          }
          else
          {
            ++s;
            v55 = *v53;
            src[0] = v55;
            if ( v55 < 0 )
            {
              if ( (~v55 & 0xC0) != 0 )
              {
                v56 = 1;
              }
              else
              {
                v56 = 3;
                if ( (~v55 & 0xE0) == 0 )
                  v56 = 4;
              }
              if ( !__CFADD__(v56, v54) && v98 >= (unsigned __int64)&v54[v56] )
              {
                s = &v54[v56];
                v57 = v56;
                for ( k = 0; k < v57; ++k )
                {
                  v59 = k;
                  src[v59 + 1] = v54[v59];
                }
              }
            }
          }
          v96 = src;
          v60 = unpack_dd();
          v61 = v43[1];
          v62 = v60;
          v63 = (char *)*v43;
          if ( v61 < v62 )
          {
            if ( v43[2] < v62 )
            {
              v91 = (void *)v62;
              v63 = (char *)qvector_reserve();
              v61 = v43[1];
              v62 = (size_t)v91;
              *v43 = v63;
            }
            v91 = (void *)v62;
            memset(&v63[v61], 0, v62 - v61);
            v62 = (size_t)v91;
            v63 = (char *)*v43;
            v43[1] = v91;
          }
          else
          {
            if ( v62 != v61 )
              v43[1] = v62;
            if ( !v62 )
              goto LABEL_82;
          }
          v64 = s;
          if ( v98 >= (unsigned __int64)&s[v62] && &s[v62] >= s )
          {
            s += v62;
            memcpy(v63, v64, v62);
          }
        }
      }
LABEL_82:
      ++v42;
      v43 += 4;
      if ( v89 == v42 )
        goto LABEL_34;
    }
  }
  v31 = -2;
LABEL_35:
  if ( v102 )
  {
    n[0] = 0;
    qfree();
  }
  if ( v99 )
  {
    v100 = 0;
    qfree();
  }
  return v31;
}

