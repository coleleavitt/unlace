__int64 __fastcall sub_12CF30(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, int a5, int a6, __m128i a7)
{
  __int64 v7; // rax
  unsigned __int8 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v13; // rax
  __int64 v15; // r10
  unsigned int v16; // eax
  unsigned int *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  bool v21; // zf
  int v22; // edi
  __int64 v23; // rdx
  int v24; // eax
  __int16 v25; // si
  __int16 v26; // cx
  int v27; // edi
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int16 v31; // ax
  __int16 v32; // ax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rsi
  char v36; // al
  char v37; // cl
  __int64 v38; // rax
  char v39; // al
  int v40; // r9d
  __int64 v41; // r10
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  int v44; // r9d
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int16 v47; // si
  __int16 v48; // cx
  int v49; // edx
  __int64 v50; // rax
  int v51; // edx
  __int64 v52; // rax
  char v53; // cl
  char v54; // cl
  __int16 v55; // cx
  int v56; // ecx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rsi
  __int16 v65; // cx
  int v66; // edx
  __int64 v67; // rax
  __int64 v68; // [rsp+0h] [rbp-98h]
  __int64 v69; // [rsp+8h] [rbp-90h]
  unsigned __int8 *v70; // [rsp+18h] [rbp-80h]
  unsigned int *v71; // [rsp+20h] [rbp-78h] BYREF
  __int64 v72; // [rsp+28h] [rbp-70h]
  unsigned int *v73; // [rsp+30h] [rbp-68h] BYREF
  __int64 v74; // [rsp+38h] [rbp-60h]
  unsigned int *v75; // [rsp+40h] [rbp-58h] BYREF
  __int64 v76; // [rsp+48h] [rbp-50h]
  unsigned __int64 v77; // [rsp+58h] [rbp-40h]

  v7 = *(_QWORD *)a3 ^ *(_QWORD *)a2;
  v77 = __readfsqword(0x28u);
  v8 = a3;
  v9 = 0xFFFFFFFF000000FFLL;
  if ( (v7 & 0xFFFFFFFF000000FFLL) != 0 )
    return 0;
  v10 = a2;
  v11 = a4;
  switch ( *(_BYTE *)a2 )
  {
    case 0:
      if ( a4 )
        sub_11CDA0(a4);
      return 1;
    case 1:
      if ( !(unsigned __int8)sub_A92A0(a1, (unsigned __int8 *)a2, v8, *(double *)a7.m128i_i64) )
        return 0;
      goto LABEL_9;
    case 4:
      v15 = *((_QWORD *)v8 + 1);
      v16 = *(_DWORD *)v15;
      if ( *v8 != 4 || v16 != 11 )
        goto LABEL_13;
      sub_123A40((__int64)&v75, v8, 0xFFFFFFFF000000FFLL, a4);
      v38 = sub_339CA0();
      if ( !sub_1255D0(v8, v38, a2, 0, *(double *)a7.m128i_i64) )
      {
        if ( (unsigned __int8)sub_12CD10((__int16 *)&v75, *(unsigned __int64 **)(a1 + 1504), 0, a7) )
        {
          v61 = sub_339CA0();
          if ( sub_1255D0((unsigned __int8 *)&v75, v61, a2, 0, *(double *)a7.m128i_i64) )
          {
            if ( v11 )
            {
              v64 = *((_QWORD *)v8 + 1);
              v74 = 0;
              sub_123A40((__int64)&v73, (unsigned __int8 *)(v64 + 32), v62, v63);
              LOWORD(v64) = *(_WORD *)v11;
              v65 = *(_WORD *)(v11 + 2);
              v66 = *(_DWORD *)(v11 + 4);
              *(_QWORD *)v11 = v73;
              v67 = *(_QWORD *)(v11 + 8);
              LOWORD(v73) = v64;
              *(_QWORD *)(v11 + 8) = v74;
              WORD1(v73) = v65;
              HIDWORD(v73) = v66;
              v74 = v67;
              sub_11CDA0((__int64)&v73);
            }
            sub_11CDA0((__int64)&v75);
            return 1;
          }
        }
      }
      sub_11CDA0((__int64)&v75);
      v15 = *((_QWORD *)v8 + 1);
      v16 = *(_DWORD *)v15;
LABEL_13:
      v17 = *(unsigned int **)(a2 + 8);
      if ( *v17 != v16 )
        return 0;
      if ( v16 > 7 )
      {
        if ( v16 - 19 > 2 )
          return 0;
LABEL_48:
        v69 = v15;
        v71 = (unsigned int *)0xFFFFFFFF00000000LL;
        v73 = (unsigned int *)0xFFFFFFFF00000000LL;
        v70 = (unsigned __int8 *)(v15 + 32);
        v72 = 0;
        v74 = 0;
        v39 = sub_12CF30(a1, (__int64)(v17 + 8), (unsigned __int8 *)(v15 + 32), (__int64)&v71, 0, a6);
        v41 = v69;
        if ( v39 )
        {
          if ( (unsigned __int8)sub_12CF30(
                                  a1,
                                  (__int64)(v17 + 12),
                                  (unsigned __int8 *)(v69 + 48),
                                  (__int64)&v73,
                                  0,
                                  v40) )
          {
LABEL_57:
            if ( v11 )
            {
              if ( a5 )
              {
                sub_12AB50(&v71, *(unsigned __int64 **)(a1 + 1504), SHIDWORD(v71), 2, a7);
                sub_12AB50(&v73, *(unsigned __int64 **)(a1 + 1504), SHIDWORD(v73), 2, a7);
              }
              v76 = 0;
              sub_123A40((__int64)&v75, (unsigned __int8 *)a2, v45, v46);
              v47 = *(_WORD *)v11;
              v48 = *(_WORD *)(v11 + 2);
              v49 = *(_DWORD *)(v11 + 4);
              *(_QWORD *)v11 = v75;
              v50 = *(_QWORD *)(v11 + 8);
              LOWORD(v75) = v47;
              *(_QWORD *)(v11 + 8) = v76;
              WORD1(v75) = v48;
              HIDWORD(v75) = v49;
              v76 = v50;
              sub_11CDA0((__int64)&v75);
              v51 = HIDWORD(v71);
              LOBYTE(v47) = (_BYTE)v71;
              *(_DWORD *)(*(_QWORD *)(v11 + 8) + 68LL) = HIDWORD(v71);
              v52 = *(_QWORD *)(v11 + 8);
              *(_DWORD *)(v11 + 4) = v51;
              v53 = *(_BYTE *)(v52 + 32);
              *(_BYTE *)(v52 + 32) = v47;
              LOBYTE(v71) = v53;
              v54 = *(_BYTE *)(v52 + 33);
              *(_BYTE *)(v52 + 33) = BYTE1(v71);
              BYTE1(v71) = v54;
              v55 = *(_WORD *)(v52 + 34);
              *(_WORD *)(v52 + 34) = WORD1(v71);
              WORD1(v71) = v55;
              v56 = *(_DWORD *)(v52 + 36);
              *(_DWORD *)(v52 + 36) = v51;
              v57 = *(_QWORD *)(v52 + 40);
              HIDWORD(v71) = v56;
              v58 = v72;
              v72 = v57;
              *(_QWORD *)(v52 + 40) = v58;
              v59 = *(_QWORD *)(v11 + 8);
              LOBYTE(v57) = *(_BYTE *)(v59 + 48);
              *(_BYTE *)(v59 + 48) = (_BYTE)v73;
              LOBYTE(v73) = v57;
              LOBYTE(v57) = *(_BYTE *)(v59 + 49);
              *(_BYTE *)(v59 + 49) = BYTE1(v73);
              BYTE1(v73) = v57;
              LOWORD(v57) = *(_WORD *)(v59 + 50);
              *(_WORD *)(v59 + 50) = WORD1(v73);
              WORD1(v73) = v57;
              LODWORD(v57) = *(_DWORD *)(v59 + 52);
              *(_DWORD *)(v59 + 52) = HIDWORD(v73);
              HIDWORD(v73) = v57;
              v60 = *(_QWORD *)(v59 + 56);
              *(_QWORD *)(v59 + 56) = v74;
              v74 = v60;
            }
            sub_11CDA0((__int64)&v73);
            sub_11CDA0((__int64)&v71);
            return 1;
          }
          v41 = v69;
        }
        v42 = *v17;
        if ( (unsigned int)v42 > 0x21
          || (v43 = 0x306385000LL, !_bittest64(&v43, v42))
          || !(unsigned __int8)sub_12CF30(a1, (__int64)(v17 + 8), (unsigned __int8 *)(v41 + 48), (__int64)&v71, 0, v40)
          || !(unsigned __int8)sub_12CF30(a1, (__int64)(v17 + 12), v70, (__int64)&v73, 0, v44) )
        {
          sub_11CDA0((__int64)&v73);
          sub_11CDA0((__int64)&v71);
          return 0;
        }
        goto LABEL_57;
      }
      if ( v16 > 3 )
        goto LABEL_48;
      if ( v16 != 2 )
        return 0;
      v68 = v15;
      v18 = sub_339CA0();
      if ( !sub_1255D0((unsigned __int8 *)v17 + 32, v18, v68 + 32, 0, *(double *)a7.m128i_i64)
        || !(unsigned __int8)sub_12CAB0(
                               *(unsigned __int64 **)(a1 + 1504),
                               (unsigned __int8 *)v17 + 48,
                               (unsigned __int8 *)(v68 + 48),
                               *(unsigned int *)(a2 + 4),
                               a7) )
      {
        return 0;
      }
      if ( v11 )
      {
        sub_B57F0(a1, *(__int64 **)(v68 + 24), *((_QWORD *)v17 + 3));
        v21 = *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL) == 0;
        v76 = 0;
        if ( v21 )
          v8 = (unsigned __int8 *)a2;
        sub_123A40((__int64)&v75, v8, v19, v20);
        v22 = (int)v75;
        v23 = v76;
        v24 = 2 * *(_DWORD *)(a2 + 4);
        *(_DWORD *)(v76 + 68) = v24;
        v25 = *(_WORD *)v11;
        v26 = *(_WORD *)(v11 + 2);
        *(_DWORD *)v11 = v22;
        v27 = *(_DWORD *)(v11 + 4);
        *(_DWORD *)(v11 + 4) = v24;
        v28 = *(_QWORD *)(v11 + 8);
        *(_QWORD *)(v11 + 8) = v23;
        HIDWORD(v75) = v27;
        LOWORD(v75) = v25;
        WORD1(v75) = v26;
        v76 = v28;
        sub_11CDA0((__int64)&v75);
      }
      return 1;
    case 5:
      v29 = *(_QWORD *)(a1 + 1496);
      if ( *(_BYTE *)(v29 + 145) && sub_11BB90((unsigned __int8 *)v10, v29, 0, *(double *)a7.m128i_i64) )
      {
        v9 = *(_QWORD *)(v10 + 8);
        if ( *(_QWORD *)(*((_QWORD *)v8 + 1) + 8LL) + *((int *)v8 + 1) != *(_QWORD *)(v9 + 8) )
          return 0;
        goto LABEL_30;
      }
      v9 = *((_QWORD *)v8 + 1);
      if ( *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL) + *(int *)(v10 + 4) != *(_QWORD *)(v9 + 8) )
        return 0;
      goto LABEL_9;
    case 6:
      v30 = *(_QWORD *)(a1 + 1496);
      if ( *(_BYTE *)(v30 + 145) && sub_11BB90((unsigned __int8 *)v10, v30, 0, *(double *)a7.m128i_i64) )
      {
        if ( *((_QWORD *)v8 + 1) + *((int *)v8 + 1) != *(_QWORD *)(v10 + 8) )
          return 0;
        goto LABEL_30;
      }
      if ( *(_QWORD *)(v10 + 8) + *(int *)(v10 + 4) != *((_QWORD *)v8 + 1) )
        return 0;
      goto LABEL_9;
    case 9:
      v13 = *((_QWORD *)v8 + 1);
      v9 = *(_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(v9 + 16) != *(_DWORD *)(v13 + 16) )
        return 0;
      v35 = *(_QWORD *)(a1 + 1496);
      if ( *(_BYTE *)(v35 + 145)
        && (v36 = sub_11BB90((unsigned __int8 *)v10, v35, 0, *(double *)a7.m128i_i64),
            v9 = *(_QWORD *)(v10 + 8),
            v37 = v36,
            v13 = *((_QWORD *)v8 + 1),
            v37) )
      {
        a4 = *(_QWORD *)(v13 + 8) + *((int *)v8 + 1);
        if ( a4 != *(_QWORD *)(v9 + 8) )
          return 0;
LABEL_30:
        if ( !v11 )
          return 1;
        v10 = (__int64)v8;
      }
      else
      {
        a4 = *(_QWORD *)(v9 + 8) + *(int *)(v10 + 4);
        if ( a4 != *(_QWORD *)(v13 + 8) )
          return 0;
LABEL_9:
        if ( !v11 )
          return 1;
      }
      sub_123A40((__int64)&v75, (unsigned __int8 *)v10, v9, a4);
      if ( !(unsigned __int8)sub_12AB50(&v75, *(unsigned __int64 **)(a1 + 1504), 2 * HIDWORD(v75), a5, a7) )
      {
        sub_11CDA0((__int64)&v75);
        return 0;
      }
      v31 = *(_WORD *)v11;
      *(_WORD *)v11 = (_WORD)v75;
      LOWORD(v75) = v31;
      v32 = *(_WORD *)(v11 + 2);
      *(_WORD *)(v11 + 2) = WORD1(v75);
      WORD1(v75) = v32;
      v33 = *(_DWORD *)(v11 + 4);
      *(_DWORD *)(v11 + 4) = HIDWORD(v75);
      HIDWORD(v75) = v33;
      v34 = *(_QWORD *)(v11 + 8);
      *(_QWORD *)(v11 + 8) = v76;
      v76 = v34;
      sub_11CDA0((__int64)&v75);
      return 1;
    default:
      return 0;
  }
}

