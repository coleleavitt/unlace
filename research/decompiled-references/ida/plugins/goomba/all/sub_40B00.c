unsigned __int64 __fastcall sub_40B00(__int64 a1, __int64 *a2, __int64 a3)
{
  char **v3; // rdi
  char *v5; // rsi
  unsigned __int64 v6; // rbp
  char *v7; // r12
  void (__fastcall *hexdsp)(__int64, _BYTE *, char *); // rax
  _BYTE *v9; // rsi
  __int64 v10; // rdi
  int *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int *v14; // r12
  __int64 v15; // r13
  __int64 (__fastcall *v16)(__int64, _BYTE *, int *); // rax
  int v17; // eax
  int v18; // eax
  int *v19; // r14
  int (__fastcall *v20)(__int64, __int64, _BYTE *); // rax
  __int64 v21; // rdi
  void (__fastcall *v22)(__int64, _BYTE *); // rax
  __int64 v23; // rdi
  char *v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  bool v29; // zf
  unsigned __int64 v30; // r13
  int *v31; // r12
  int *v32; // rax
  char *v33; // r12
  _QWORD *v34; // rdi
  char *v35; // rbp
  void (__fastcall *v36)(__int64, char *); // rax
  char *v37; // r14
  char *v38; // r13
  char *v39; // rbp
  char *v40; // r12
  int (__fastcall *v41)(__int64, char *, char *); // rax
  char *v42; // r14
  int (__fastcall *v43)(__int64, char *, char *); // rax
  void (__fastcall *v44)(__int64, char *, char *); // rax
  void (__fastcall *v45)(__int64, char *, char *); // rax
  void (__fastcall *v46)(__int64, char *, char *); // rax
  void (__fastcall *v47)(__int64, char *); // rax
  void (__fastcall *v48)(__int64, char *, char *); // rax
  void (__fastcall *v49)(__int64, char *, char *); // rax
  void (__fastcall *v50)(__int64, char *, char *); // rax
  void (__fastcall *v51)(__int64, char *); // rax
  unsigned int v52; // r13d
  __int64 v53; // r12
  void (__fastcall *v54)(__int64, __int64, _BYTE *); // rax
  unsigned int (__fastcall *v55)(__int64, _BYTE *, int *); // rax
  bool v56; // bp
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // r12
  __int64 i; // rbp
  __int64 v62; // r13
  __int64 v63; // rax
  __int64 v64; // rax
  char *v65; // r12
  _QWORD *v66; // rdi
  char *v67; // rbp
  void (__fastcall *v68)(__int64, char *); // rax
  void (__fastcall *v69)(__int64, char *, char *); // rax
  void (__fastcall *v70)(__int64, char *, char *); // rax
  void (__fastcall *v71)(__int64, char *, char *); // rax
  void (__fastcall *v72)(__int64, char *); // rax
  unsigned __int64 v73; // rbp
  __int64 v74; // rbx
  __int64 v75; // rax
  char *v76; // r14
  void (__fastcall *v77)(__int64, char *); // rax
  char *v80; // [rsp+20h] [rbp-108h]
  int v82; // [rsp+38h] [rbp-F0h]
  int v83; // [rsp+3Ch] [rbp-ECh]
  char *v84; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v85; // [rsp+48h] [rbp-E0h]
  _BYTE v86[16]; // [rsp+60h] [rbp-C8h] BYREF
  int v87; // [rsp+70h] [rbp-B8h]
  int v88; // [rsp+88h] [rbp-A0h] BYREF
  int *v89; // [rsp+90h] [rbp-98h]
  int *v90; // [rsp+98h] [rbp-90h]
  int *v91; // [rsp+A0h] [rbp-88h]
  __int64 v92; // [rsp+A8h] [rbp-80h]
  char v93[8]; // [rsp+B0h] [rbp-78h] BYREF
  int v94; // [rsp+B8h] [rbp-70h] BYREF
  void *v95; // [rsp+C0h] [rbp-68h]
  int *v96; // [rsp+C8h] [rbp-60h]
  int *v97; // [rsp+D0h] [rbp-58h]
  __int64 v98; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v99; // [rsp+E8h] [rbp-40h]

  v3 = &v84;
  v99 = __readfsqword(0x28u);
  v88 = 0;
  v89 = nullptr;
  v90 = &v88;
  v91 = &v88;
  v92 = 0;
  v5 = (char *)a3;
  sub_3DFC0((__int64)&v84, (_BYTE *)a3);
  v83 = 51;
  v82 = 0;
LABEL_2:
  v94 = 0;
  v95 = nullptr;
  v96 = &v94;
  v97 = &v94;
  v98 = 0;
  if ( v85 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = &v84[16 * v6];
      hexdsp = (void (__fastcall *)(__int64, _BYTE *, char *))get_hexdsp(v3, v5);
      v9 = v86;
      v10 = 273;
      hexdsp(273, v86, v7);
      v14 = (int *)v95;
      v87 = v6;
      if ( !v95 )
        break;
      while ( 1 )
      {
        v15 = (__int64)(v14 + 8);
        v16 = (__int64 (__fastcall *)(__int64, _BYTE *, int *))get_hexdsp(v10, v86);
        v9 = v86;
        v10 = 296;
        v17 = v16(296, v86, v14 + 8);
        v11 = *((int **)v14 + 3);
        if ( v17 < 0 )
          v11 = *((int **)v14 + 2);
        v18 = (v17 >> 31) & 1;
        if ( !v11 )
          break;
        v14 = v11;
      }
      if ( (_BYTE)v18 )
      {
        if ( v96 == v14 )
        {
          v19 = v14;
LABEL_38:
          LOBYTE(v52) = 1;
          if ( v14 != &v94 )
          {
            v55 = (unsigned int (__fastcall *)(__int64, _BYTE *, int *))get_hexdsp(296, v9);
            v9 = v86;
            v52 = v55(296, v86, v14 + 8) >> 31;
          }
LABEL_40:
          v53 = operator new(0x38u);
          v54 = (void (__fastcall *)(__int64, __int64, _BYTE *))get_hexdsp(56, v9);
          v54(273, v53 + 32, v86);
          v21 = (unsigned __int8)v52;
          v9 = (_BYTE *)v53;
          *(_DWORD *)(v53 + 48) = v87;
          std::_Rb_tree_insert_and_rebalance((unsigned __int8)v52, v53, v19, &v94);
          ++v98;
          goto LABEL_14;
        }
        goto LABEL_12;
      }
      v19 = v14;
LABEL_13:
      v20 = (int (__fastcall *)(__int64, __int64, _BYTE *))get_hexdsp(v10, v86);
      v9 = (_BYTE *)v15;
      v21 = 296;
      if ( v20(296, v15, v86) < 0 )
        goto LABEL_38;
LABEL_14:
      v22 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(v21, v9);
      ++v6;
      v5 = v86;
      v3 = (char **)(&qword_110 + 4);
      v22(276, v86);
      if ( v6 >= v85 )
        goto LABEL_15;
    }
    v14 = &v94;
    if ( v96 == &v94 )
    {
      v19 = &v94;
      LOBYTE(v52) = 1;
      goto LABEL_40;
    }
LABEL_12:
    v10 = (__int64)v14;
    v19 = v14;
    v15 = std::_Rb_tree_decrement(v14, v86, v11, v12, v13) + 32;
    goto LABEL_13;
  }
LABEL_15:
  v23 = a1;
  v24 = (char *)a3;
  v25 = sub_40540(a1, a3, (__int64)v93);
  v29 = v83-- == 1;
  v30 = v25;
  if ( v29 )
  {
    v23 = (__int64)v95;
    sub_400F0(v95, a3);
    v37 = v84;
    goto LABEL_63;
  }
  v31 = v89;
  if ( !v89 )
  {
    v31 = &v88;
    if ( v90 == &v88 )
    {
      v31 = &v88;
      v56 = 1;
LABEL_46:
      v57 = operator new(0x28u);
      *(_QWORD *)(v57 + 32) = v30;
      std::_Rb_tree_insert_and_rebalance(v56, v57, v31, &v88);
      v23 = a1;
      v58 = v30;
      ++v92;
      v59 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 16LL))(a1, v30);
      if ( v59 )
      {
        v60 = *(_QWORD *)(v59 + 24);
        for ( i = v59 + 8; i != v60; v60 = std::_Rb_tree_increment(v60) )
        {
          v58 = *(_QWORD *)(v60 + 32);
          v23 = *(_QWORD *)(a3 + 24);
          ++v82;
          v62 = sub_40830(v23, v58, (__int64)&v84, *(_DWORD *)(a3 + 68));
          if ( v62 )
          {
            v23 = (__int64)a2;
            v63 = a2[1];
            v58 = *a2;
            if ( a2[2] < (unsigned __int64)(v63 + 1) )
            {
              v64 = qvector_reserve(a2, v58, v63 + 1, 8);
              *a2 = v64;
              v58 = v64;
              v63 = a2[1];
            }
            *(_QWORD *)(v58 + 8 * v63) = v62;
            ++a2[1];
          }
          if ( v82 > 9 )
            break;
          v23 = v60;
        }
      }
      v65 = (char *)v95;
      if ( v95 )
      {
        do
        {
          v66 = *((_QWORD **)v65 + 3);
          v67 = v65;
          sub_400F0(v66, v58);
          v65 = *((char **)v65 + 2);
          v68 = (void (__fastcall *)(__int64, char *))get_hexdsp(v66, v58);
          v68(276, v67 + 32);
          v58 = 56;
          v23 = (__int64)v67;
          operator delete(v67, 0x38u);
        }
        while ( v65 );
      }
      goto LABEL_26;
    }
LABEL_59:
    v23 = (__int64)v31;
    v26 = *(_QWORD *)(std::_Rb_tree_decrement(v31, v24, v26, v27, v28) + 32);
    goto LABEL_23;
  }
  while ( 1 )
  {
    v26 = *((_QWORD *)v31 + 4);
    v24 = *((char **)v31 + 2);
    v27 = 0;
    v32 = *((int **)v31 + 3);
    if ( v30 < v26 )
    {
      v32 = *((int **)v31 + 2);
      v27 = 1;
    }
    if ( !v32 )
      break;
    v31 = v32;
  }
  if ( (_BYTE)v27 )
  {
    if ( v31 == v90 )
    {
LABEL_44:
      v56 = 1;
      if ( v31 != &v88 )
        v56 = v30 < *((_QWORD *)v31 + 4);
      goto LABEL_46;
    }
    goto LABEL_59;
  }
LABEL_23:
  if ( v26 < v30 )
    goto LABEL_44;
  v33 = (char *)v95;
  if ( v95 )
  {
    do
    {
      v34 = *((_QWORD **)v33 + 3);
      v35 = v33;
      sub_400F0(v34, (__int64)v24);
      v33 = *((char **)v33 + 2);
      v36 = (void (__fastcall *)(__int64, char *))get_hexdsp(v34, v24);
      v36(276, v35 + 32);
      v24 = (char *)&word_38;
      v23 = (__int64)v35;
      operator delete(v35, 0x38u);
    }
    while ( v33 );
  }
LABEL_26:
  v37 = v84;
  v24 = &v84[16 * v85];
  v80 = v24;
  if ( v84 != v24 && 16 * v85 != 16 )
  {
    v38 = v24 - 16;
    v39 = v24 - 16;
    do
    {
      v40 = v39;
      v39 -= 16;
      v41 = (int (__fastcall *)(__int64, char *, char *))get_hexdsp(v23, v24);
      v24 = v39;
      v23 = 296;
      if ( v41(296, v39, v40) < 0 )
      {
        v42 = v80;
        do
        {
          v42 -= 16;
          v43 = (int (__fastcall *)(__int64, char *, char *))get_hexdsp(296, v24);
          v24 = v39;
        }
        while ( v43(296, v39, v42) >= 0 );
        v44 = (void (__fastcall *)(__int64, char *, char *))get_hexdsp(296, v39);
        v44(273, v93, v39);
        v45 = (void (__fastcall *)(__int64, char *, char *))get_hexdsp(273, v93);
        v45(274, v39, v42);
        v46 = (void (__fastcall *)(__int64, char *, char *))get_hexdsp(274, v39);
        v46(274, v42, v93);
        v47 = (void (__fastcall *)(__int64, char *))get_hexdsp(274, v42);
        v5 = v93;
        v3 = (char **)(&qword_110 + 4);
        v47(276, v93);
        if ( v80 != v40 && v40 < v38 )
        {
          do
          {
            v48 = (void (__fastcall *)(__int64, char *, char *))get_hexdsp(276, v93);
            v48(273, v93, v40);
            v49 = (void (__fastcall *)(__int64, char *, char *))get_hexdsp(273, v93);
            v49(274, v40, v38);
            v50 = (void (__fastcall *)(__int64, char *, char *))get_hexdsp(274, v40);
            v50(274, v38, v93);
            v51 = (void (__fastcall *)(__int64, char *))get_hexdsp(274, v38);
            v40 += 16;
            v38 -= 16;
            v5 = v93;
            v3 = (char **)(&qword_110 + 4);
            v51(276, v93);
          }
          while ( v40 < v38 );
        }
        goto LABEL_2;
      }
    }
    while ( v37 != v39 );
    while ( v37 < v38 )
    {
      v69 = (void (__fastcall *)(__int64, char *, char *))get_hexdsp(v23, v24);
      v69(273, v93, v37);
      v70 = (void (__fastcall *)(__int64, char *, char *))get_hexdsp(273, v93);
      v70(274, v37, v38);
      v71 = (void (__fastcall *)(__int64, char *, char *))get_hexdsp(274, v37);
      v71(274, v38, v93);
      v72 = (void (__fastcall *)(__int64, char *))get_hexdsp(274, v38);
      v37 += 16;
      v38 -= 16;
      v24 = v93;
      v23 = 276;
      v72(276, v93);
    }
    v37 = v84;
  }
LABEL_63:
  if ( v37 )
  {
    v73 = v85;
    if ( v85 )
    {
      v74 = 0;
      do
      {
        v75 = v74++;
        v76 = &v37[16 * v75];
        v77 = (void (__fastcall *)(__int64, char *))get_hexdsp(v23, v24);
        v24 = v76;
        v23 = 276;
        v77(276, v76);
        v37 = v84;
      }
      while ( v73 != v74 );
    }
    v85 = 0;
    qfree(v37);
  }
  sub_3FDD0(v89);
  return v99 - __readfsqword(0x28u);
}

