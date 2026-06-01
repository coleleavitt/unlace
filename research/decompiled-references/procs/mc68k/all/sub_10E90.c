__int64 __fastcall sub_10E90(_QWORD *a1, char *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 (__fastcall *v4)(_QWORD *, char, __int64, __int64, __int64, __int64); // rdx
  char *v5; // r15
  char v6; // al
  char v7; // bp
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // r14
  unsigned __int64 v11; // r13
  __int64 (__fastcall *v12)(_QWORD *, char, __int64, __int64, __int64, __int64); // rax
  __int64 v13; // rbp
  unsigned __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rsi
  char *v17; // r13
  unsigned __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // r9
  char v22; // bp
  __int64 (__fastcall *v23)(_QWORD *, char, __int64, __int64, __int64, __int64); // rax
  char v24; // bp
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rsi
  __int64 (__fastcall *v29)(_QWORD *, char, __int64, __int64, __int64, __int64); // rax
  char v30; // bp
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 (__fastcall *v34)(_QWORD *, char, __int64, __int64, __int64, __int64); // rax
  __int64 v35; // rbp
  unsigned __int64 v36; // r13
  __int64 v37; // r14
  __int64 v38; // rsi
  char v39; // al
  __int64 (__fastcall *v40)(_QWORD *, char, __int64, __int64, __int64, __int64); // rax
  __int64 v41; // rbp
  __int64 v42; // r14
  unsigned __int64 v43; // r13
  __int64 v44; // rsi
  int v45; // eax
  char v46; // bp
  __int64 (__fastcall *v47)(_QWORD *, char, __int64, __int64, __int64, __int64); // rdx
  __int64 v48; // r13
  __int64 v49; // r15
  unsigned __int64 v50; // r14
  __int64 v51; // rsi
  char v52; // al
  char v53; // r14
  __int64 (__fastcall *v54)(_QWORD *, char, __int64, __int64, __int64, __int64); // rdx
  __int64 v55; // rbp
  __int64 v56; // r15
  unsigned __int64 v57; // r13
  __int64 v58; // rsi
  unsigned __int8 v59; // si
  char v60; // si
  char v61; // bp
  __int64 (__fastcall *v62)(_QWORD *, char, __int64, __int64, __int64, __int64); // rax
  __int64 v63; // r12
  unsigned __int64 v64; // r13
  __int64 v65; // r14
  __int64 v66; // rsi
  __int64 (__fastcall *v68)(_QWORD *, char, __int64, __int64, __int64, __int64); // rax
  __int64 v69; // rbp
  __int64 v70; // rsi
  __int64 v71; // r14
  unsigned __int64 v72; // r13
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  _QWORD *v81; // [rsp+8h] [rbp-50h]
  __int64 v82; // [rsp+8h] [rbp-50h]
  unsigned __int64 v83; // [rsp+10h] [rbp-48h]
  unsigned __int64 v84; // [rsp+10h] [rbp-48h]
  __int64 v85; // [rsp+18h] [rbp-40h]
  __int64 v86; // [rsp+18h] [rbp-40h]

  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 12);
  if ( *a2 < 0 )
  {
    v68 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
    if ( v68 != sub_109F0 )
    {
      ((void (__fastcall *)(_QWORD *, __int64))v68)(a1, 45);
      goto LABEL_2;
    }
    v69 = a1[4];
    if ( v69 )
    {
      v72 = v69 + 1;
      v71 = a1[4];
      v70 = a1[3];
      --v69;
      if ( a1[5] >= v72 )
        goto LABEL_61;
    }
    else
    {
      v70 = a1[3];
      v71 = 1;
      v72 = 2;
      if ( a1[5] >= 2u )
      {
LABEL_61:
        a1[4] = v72;
        *(_BYTE *)(v70 + v69) = 45;
        *(_BYTE *)(a1[3] + v71) = 0;
        goto LABEL_2;
      }
    }
    v76 = qvector_reserve(a1 + 3, v70, v72, 1, v2, v3);
    a1[3] = v76;
    v70 = v76;
    goto LABEL_61;
  }
LABEL_2:
  v4 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
  v5 = a2 + 4;
  v6 = a2[3] & 0xF;
  v7 = v6 + 48;
  if ( v4 == sub_109F0 )
  {
    v8 = a1[4];
    if ( v8 )
    {
      v11 = v8 + 1;
      v10 = a1[4];
      v9 = a1[3];
      --v8;
      if ( a1[5] >= v11 )
        goto LABEL_5;
    }
    else
    {
      v9 = a1[3];
      v10 = 1;
      v11 = 2;
      if ( a1[5] >= 2u )
        goto LABEL_5;
    }
    v82 = v8;
    v32 = qvector_reserve(a1 + 3, v9, v11, 1, v2, v8);
    v8 = v82;
    a1[3] = v32;
    v9 = v32;
LABEL_5:
    a1[4] = v11;
    *(_BYTE *)(v9 + v8) = v7;
    *(_BYTE *)(a1[3] + v10) = 0;
    v12 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
    if ( v12 == sub_109F0 )
      goto LABEL_6;
LABEL_69:
    ((void (__fastcall *)(_QWORD *, __int64))v12)(a1, 46);
    goto LABEL_9;
  }
  ((void (__fastcall *)(_QWORD *, _QWORD))v4)(a1, (unsigned int)(char)(v6 + 48));
  v12 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
  if ( v12 != sub_109F0 )
    goto LABEL_69;
LABEL_6:
  v13 = a1[4];
  if ( !v13 )
  {
    v16 = a1[3];
    v15 = 1;
    v14 = 2;
    if ( a1[5] >= 2u )
      goto LABEL_8;
LABEL_63:
    v73 = qvector_reserve(a1 + 3, v16, v14, 1, v2, v8);
    a1[3] = v73;
    v16 = v73;
    goto LABEL_8;
  }
  v14 = v13 + 1;
  v15 = a1[4];
  v16 = a1[3];
  --v13;
  if ( a1[5] < v14 )
    goto LABEL_63;
LABEL_8:
  a1[4] = v14;
  *(_BYTE *)(v16 + v13) = 46;
  *(_BYTE *)(a1[3] + v15) = 0;
LABEL_9:
  v17 = a2 + 12;
  v81 = a1 + 3;
  do
  {
    while ( 1 )
    {
      v29 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
      v30 = ((unsigned __int8)*v5 >> 4) + 48;
      if ( v29 == sub_109F0 )
      {
        v21 = a1[4];
        if ( v21 )
        {
          v18 = v21 + 1;
          v19 = a1[4];
          v20 = a1[3];
          --v21;
          if ( a1[5] < v18 )
          {
LABEL_19:
            v85 = v21;
            v83 = v18;
            v31 = qvector_reserve(v81, v20, v18, 1, v2, v21);
            v21 = v85;
            v18 = v83;
            a1[3] = v31;
            v20 = v31;
          }
        }
        else
        {
          v20 = a1[3];
          v19 = 1;
          v18 = 2;
          if ( a1[5] < 2u )
            goto LABEL_19;
        }
        a1[4] = v18;
        *(_BYTE *)(v20 + v21) = v30;
        *(_BYTE *)(a1[3] + v19) = 0;
        goto LABEL_12;
      }
      ((void (__fastcall *)(_QWORD *, _QWORD))v29)(a1, (unsigned int)(char)(((unsigned __int8)*v5 >> 4) + 48));
LABEL_12:
      v22 = *v5++;
      v23 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
      v24 = (v22 & 0xF) + 48;
      if ( v23 != sub_109F0 )
        break;
      v25 = a1[4];
      if ( v25 )
      {
        v26 = v25 + 1;
        v27 = a1[4];
        v28 = a1[3];
        --v25;
        if ( a1[5] < v26 )
          goto LABEL_23;
      }
      else
      {
        v28 = a1[3];
        v27 = 1;
        v26 = 2;
        if ( a1[5] < 2u )
        {
LABEL_23:
          v86 = v25;
          v84 = v26;
          v33 = qvector_reserve(v81, v28, v26, 1, v2, v25);
          v25 = v86;
          v26 = v84;
          a1[3] = v33;
          v28 = v33;
        }
      }
      a1[4] = v26;
      *(_BYTE *)(v28 + v25) = v24;
      *(_BYTE *)(a1[3] + v27) = 0;
      if ( v5 == v17 )
        goto LABEL_25;
    }
    ((void (__fastcall *)(_QWORD *, _QWORD))v23)(a1, (unsigned int)v24);
  }
  while ( v5 != v17 );
LABEL_25:
  if ( (*a2 & 0xF) != 0 || a2[1] )
  {
    v34 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
    if ( v34 == sub_109F0 )
    {
      v35 = a1[4];
      if ( v35 )
      {
        v36 = v35 + 1;
        v37 = a1[4];
        v38 = a1[3];
        --v35;
        if ( a1[5] >= v36 )
          goto LABEL_30;
LABEL_67:
        v75 = qvector_reserve(a1 + 3, v38, v36, 1, v2, v25);
        a1[3] = v75;
        v38 = v75;
      }
      else
      {
        v38 = a1[3];
        v37 = 1;
        v36 = 2;
        if ( a1[5] < 2u )
          goto LABEL_67;
      }
LABEL_30:
      a1[4] = v36;
      *(_BYTE *)(v38 + v35) = 101;
      *(_BYTE *)(a1[3] + v37) = 0;
    }
    else
    {
      ((void (__fastcall *)(_QWORD *, __int64))v34)(a1, 101);
    }
    v39 = *a2;
    if ( (*a2 & 0x40) != 0 )
    {
      v40 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
      if ( v40 == sub_109F0 )
      {
        v41 = a1[4];
        if ( v41 )
        {
          v43 = v41 + 1;
          v42 = a1[4];
          --v41;
        }
        else
        {
          v42 = 1;
          v43 = 2;
        }
        v44 = a1[3];
        if ( a1[5] < v43 )
        {
          v78 = qvector_reserve(a1 + 3, v44, v43, 1, v2, v25);
          a1[3] = v78;
          v44 = v78;
        }
        a1[4] = v43;
        *(_BYTE *)(v44 + v41) = 45;
        *(_BYTE *)(a1[3] + v42) = 0;
        v39 = *a2;
      }
      else
      {
        ((void (__fastcall *)(_QWORD *, __int64))v40)(a1, 45);
        v39 = *a2;
      }
    }
    v45 = v39 & 0xF;
    if ( v45 )
    {
      v46 = v45 + 48;
      v47 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
      if ( v47 == sub_109F0 )
      {
        v48 = a1[4];
        if ( v48 )
        {
          v50 = v48 + 1;
          v49 = a1[4];
          --v48;
        }
        else
        {
          v49 = 1;
          v50 = 2;
        }
        v51 = a1[3];
        if ( a1[5] < v50 )
        {
          v77 = qvector_reserve(a1 + 3, v51, v50, 1, v2, v25);
          a1[3] = v77;
          v51 = v77;
        }
        a1[4] = v50;
        *(_BYTE *)(v51 + v48) = v46;
        *(_BYTE *)(a1[3] + v49) = 0;
        v52 = (unsigned __int8)a2[1] >> 4;
      }
      else
      {
        ((void (__fastcall *)(_QWORD *, _QWORD))v47)(a1, (unsigned int)(char)(v45 + 48));
        v52 = (unsigned __int8)a2[1] >> 4;
      }
LABEL_45:
      v53 = v52 + 48;
      v54 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
      if ( v54 == sub_109F0 )
      {
        v55 = a1[4];
        if ( v55 )
        {
          v57 = v55 + 1;
          v56 = a1[4];
          --v55;
        }
        else
        {
          v56 = 1;
          v57 = 2;
        }
        v58 = a1[3];
        if ( a1[5] < v57 )
        {
          v79 = qvector_reserve(a1 + 3, v58, v57, 1, v2, v25);
          a1[3] = v79;
          v58 = v79;
        }
        a1[4] = v57;
        *(_BYTE *)(v58 + v55) = v53;
        *(_BYTE *)(a1[3] + v56) = 0;
        v59 = a2[1];
      }
      else
      {
        ((void (__fastcall *)(_QWORD *, _QWORD))v54)(a1, (unsigned int)(char)(v52 + 48));
        v59 = a2[1];
      }
    }
    else
    {
      v59 = a2[1];
      v52 = v59 >> 4;
      if ( v59 >> 4 )
        goto LABEL_45;
    }
    v60 = v59 & 0xF;
    v61 = v60 + 48;
    v62 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
    if ( v62 == sub_109F0 )
    {
      v63 = a1[4];
      if ( v63 )
      {
        v64 = v63 + 1;
        v65 = a1[4];
        v66 = a1[3];
        --v63;
        if ( a1[5] >= v64 )
          goto LABEL_56;
LABEL_65:
        v74 = qvector_reserve(a1 + 3, v66, v64, 1, v2, v25);
        a1[3] = v74;
        v66 = v74;
      }
      else
      {
        v66 = a1[3];
        v65 = 1;
        v64 = 2;
        if ( a1[5] < 2u )
          goto LABEL_65;
      }
LABEL_56:
      a1[4] = v64;
      *(_BYTE *)(v66 + v63) = v61;
      *(_BYTE *)(a1[3] + v65) = 0;
    }
    else
    {
      ((void (__fastcall *)(_QWORD *, _QWORD))v62)(a1, (unsigned int)(char)(v60 + 48));
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 12);
}
