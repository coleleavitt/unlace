__int64 __fastcall sub_5D00(_QWORD *a1, __int64 a2, double a3)
{
  char v3; // dl
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned int v7; // r13d
  __int64 v8; // r12
  __int64 v9; // r13
  char *v10; // rsi
  __int16 v12; // cx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(_QWORD *, char); // rax
  __int64 v16; // r13
  unsigned __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(_QWORD *, char); // rax
  __int64 v22; // rbp
  unsigned __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 (__fastcall *v26)(_QWORD *, char); // rax
  __int64 v27; // r12
  unsigned __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // rsi
  __int64 (__fastcall *v31)(_QWORD *, char); // rax
  __int64 v32; // r12
  unsigned __int64 v33; // r13
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 (__fastcall *v36)(_QWORD *, char); // rax
  __int64 v37; // r13
  unsigned __int64 v38; // r14
  __int64 v39; // r15
  __int64 v40; // rsi
  __int64 (__fastcall *v41)(_QWORD *, char); // rax
  __int64 v42; // r12
  unsigned __int64 v43; // r13
  __int64 v44; // r14
  __int64 v45; // rsi
  __int64 v46; // r14
  __int64 v47; // r12
  __int64 (__fastcall *v48)(_QWORD *, char); // rax
  __int64 v49; // r13
  unsigned __int64 v50; // r15
  __int64 v51; // r8
  __int64 v52; // rsi
  __int64 (__fastcall *v53)(_QWORD *, char); // rax
  __int64 v54; // r13
  unsigned __int64 v55; // r14
  __int64 v56; // r15
  __int64 v57; // rsi
  __int64 (__fastcall *v58)(_QWORD *, char); // rax
  __int64 v59; // rbp
  unsigned __int64 v60; // r12
  __int64 v61; // r13
  __int64 v62; // rsi
  __int64 v63; // rax
  char *v64; // rsi
  __int64 (__fastcall *v65)(_QWORD *, char); // rax
  __int64 v66; // r12
  unsigned __int64 v67; // r13
  __int64 v68; // r14
  __int64 v69; // rsi
  __int64 (__fastcall *v70)(_QWORD *, char); // rax
  __int64 v71; // r12
  unsigned __int64 v72; // r13
  __int64 v73; // r14
  __int64 v74; // rsi
  __int64 (__fastcall *v75)(_QWORD *, char); // rax
  __int64 v76; // r13
  unsigned __int64 v77; // r14
  __int64 v78; // r15
  __int64 v79; // rsi
  __int64 (__fastcall *v80)(_QWORD *, char); // rax
  __int64 v81; // rbp
  unsigned __int64 v82; // r12
  __int64 v83; // r13
  __int64 v84; // rsi
  __int64 (__fastcall *v85)(_QWORD *, char); // rax
  __int64 v86; // r12
  unsigned __int64 v87; // r13
  __int64 v88; // r14
  __int64 v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // [rsp+8h] [rbp-50h]
  __int64 v105[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_BYTE *)(a2 + 1);
  v105[1] = __readfsqword(0x28u);
  switch ( v3 )
  {
    case 0:
      return 0;
    case 1:
      v10 = *(char **)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6));
LABEL_22:
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v10, 33);
      return 1;
    case 2:
    case 8:
      if ( *((_BYTE *)a1 + 256) )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
        v3 = *(_BYTE *)(a2 + 1);
      }
      if ( v3 == 8 )
      {
        v8 = sub_5C60(a1[77], a2, v105);
        sub_5B40(a1, a2);
        v9 = v105[0];
      }
      else
      {
        if ( get_sreg() == -1 )
        {
          v8 = *(_QWORD *)(a2 + 16);
          v105[0] = v8;
          sub_59D0(a1, a2);
          if ( !*((_BYTE *)a1 + 256) )
            return 1;
          v9 = v8;
          goto LABEL_18;
        }
        v13 = sub_5C60(a1[77], a2, v105);
        v9 = v105[0];
        v8 = v13;
        sub_59D0(a1, a2);
      }
      if ( *((_BYTE *)a1 + 256) )
LABEL_18:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
      if ( v9 != v8 )
LABEL_11:
        sub_5BD0(a1);
      return 1;
    case 4:
      v12 = *(_WORD *)(a2 + 6);
      switch ( v12 )
      {
        case 3:
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 24LL),
            33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v70 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v70 == sub_5720 )
          {
            v71 = a1[4];
            if ( v71 )
            {
              v72 = v71 + 1;
              v73 = a1[4];
              --v71;
            }
            else
            {
              v73 = 1;
              v72 = 2;
            }
            v74 = a1[3];
            if ( a1[5] < v72 )
            {
              v92 = qvector_reserve();
              a1[3] = v92;
              v74 = v92;
            }
            a1[4] = v72;
            *(_BYTE *)(v74 + v71) = 32;
            *(_BYTE *)(a1[3] + v73) = 0;
          }
          else
          {
            v70(a1, 32);
          }
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 145);
          return 1;
        case 7:
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 56LL),
            33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v65 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v65 == sub_5720 )
          {
            v66 = a1[4];
            if ( v66 )
            {
              v67 = v66 + 1;
              v68 = a1[4];
              --v66;
            }
            else
            {
              v68 = 1;
              v67 = 2;
            }
            v69 = a1[3];
            if ( a1[5] < v67 )
            {
              v100 = qvector_reserve();
              a1[3] = v100;
              v69 = v100;
            }
            a1[4] = v67;
            *(_BYTE *)(v69 + v66) = 32;
            *(_BYTE *)(a1[3] + v68) = 0;
          }
          else
          {
            v65(a1, 32);
          }
          sub_5910(a1, a2);
          return 1;
        case 100:
        case 101:
          (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "D", 33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v36 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v36 == sub_5720 )
          {
            v37 = a1[4];
            if ( v37 )
            {
              v38 = v37 + 1;
              v39 = a1[4];
              --v37;
            }
            else
            {
              v39 = 1;
              v38 = 2;
            }
            v40 = a1[3];
            if ( a1[5] < v38 )
            {
              v93 = qvector_reserve();
              a1[3] = v93;
              v40 = v93;
            }
            a1[4] = v38;
            *(_BYTE *)(v40 + v37) = 32;
            *(_BYTE *)(a1[3] + v39) = 0;
          }
          else
          {
            v36(a1, 32);
          }
          sub_5910(a1, a2);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v41 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v41 == sub_5720 )
          {
            v42 = a1[4];
            if ( v42 )
            {
              v43 = v42 + 1;
              v44 = a1[4];
              --v42;
            }
            else
            {
              v44 = 1;
              v43 = 2;
            }
            v45 = a1[3];
            if ( a1[5] < v43 )
            {
              v94 = qvector_reserve();
              a1[3] = v94;
              v45 = v94;
            }
            a1[4] = v43;
            *(_BYTE *)(v45 + v42) = 32;
            *(_BYTE *)(a1[3] + v44) = 0;
          }
          else
          {
            v41(a1, 32);
          }
          v10 = "Y";
          if ( *(_WORD *)(a2 + 6) == 100 )
            v10 = "X";
          goto LABEL_22;
        case 102:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
          (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "D", 33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v75 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v75 == sub_5720 )
          {
            v76 = a1[4];
            if ( v76 )
            {
              v77 = v76 + 1;
              v78 = a1[4];
              --v76;
            }
            else
            {
              v78 = 1;
              v77 = 2;
            }
            v79 = a1[3];
            if ( a1[5] < v77 )
            {
              v102 = qvector_reserve();
              a1[3] = v102;
              v79 = v102;
            }
            a1[4] = v77;
            *(_BYTE *)(v79 + v76) = 32;
            *(_BYTE *)(a1[3] + v78) = 0;
          }
          else
          {
            v75(a1, 32);
          }
          sub_5910(a1, a2);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v80 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v80 == sub_5720 )
            goto LABEL_123;
          goto LABEL_130;
        case 103:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
          sub_59D0(a1, a2);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
          return 1;
        case 104:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
          sub_59D0(a1, a2);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
          return 1;
        case 105:
        case 106:
          sub_59D0(a1, a2);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v31 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v31 == sub_5720 )
          {
            v32 = a1[4];
            if ( v32 )
            {
              v33 = v32 + 1;
              v34 = a1[4];
              --v32;
            }
            else
            {
              v34 = 1;
              v33 = 2;
            }
            v35 = a1[3];
            if ( a1[5] < v33 )
            {
              v91 = qvector_reserve();
              a1[3] = v91;
              v35 = v91;
            }
            a1[4] = v33;
            *(_BYTE *)(v35 + v32) = 32;
            *(_BYTE *)(a1[3] + v34) = 0;
          }
          else
          {
            v31(a1, 32);
          }
          v10 = "X";
          if ( *(_WORD *)(a2 + 6) == 106 )
            v10 = "Y";
          goto LABEL_22;
        case 107:
          v46 = *(_QWORD *)(a2 + 16);
          v47 = sub_9880(a1[77], v46);
          sub_5B40(a1, a2);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v48 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v48 == sub_5720 )
          {
            v49 = a1[4];
            if ( v49 )
            {
              v50 = v49 + 1;
              v51 = a1[4];
              --v49;
            }
            else
            {
              v51 = 1;
              v50 = 2;
            }
            v52 = a1[3];
            if ( a1[5] < v50 )
            {
              v104 = v51;
              v103 = qvector_reserve();
              v51 = v104;
              a1[3] = v103;
              v52 = v103;
            }
            a1[4] = v50;
            *(_BYTE *)(v52 + v49) = 32;
            *(_BYTE *)(a1[3] + v51) = 0;
          }
          else
          {
            v48(a1, 32);
          }
          (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "X", 33);
          if ( v46 != v47 )
            goto LABEL_11;
          return 1;
        case 108:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
          sub_5AA0(a1, a2);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v80 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v80 == sub_5720 )
          {
LABEL_123:
            v81 = a1[4];
            if ( v81 )
            {
              v82 = v81 + 1;
              v83 = a1[4];
              --v81;
            }
            else
            {
              v83 = 1;
              v82 = 2;
            }
            v84 = a1[3];
            if ( a1[5] < v82 )
            {
              v90 = qvector_reserve();
              a1[3] = v90;
              v84 = v90;
            }
            a1[4] = v82;
            *(_BYTE *)(v84 + v81) = 32;
            *(_BYTE *)(a1[3] + v83) = 0;
          }
          else
          {
LABEL_130:
            v80(a1, 32);
          }
          v63 = *a1;
          v64 = "X";
          goto LABEL_101;
        case 109:
        case 114:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
          (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "D", 33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v26 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v26 == sub_5720 )
          {
            v27 = a1[4];
            if ( v27 )
            {
              v28 = v27 + 1;
              v29 = a1[4];
              --v27;
            }
            else
            {
              v29 = 1;
              v28 = 2;
            }
            v30 = a1[3];
            if ( a1[5] < v28 )
            {
              v96 = qvector_reserve();
              a1[3] = v96;
              v30 = v96;
            }
            a1[4] = v28;
            *(_BYTE *)(v30 + v27) = 32;
            *(_BYTE *)(a1[3] + v29) = 0;
          }
          else
          {
            v26(a1, 32);
          }
          sub_5910(a1, a2);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
          return 1;
        case 110:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
          (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "D", 33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v85 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v85 == sub_5720 )
          {
            v86 = a1[4];
            if ( v86 )
            {
              v87 = v86 + 1;
              v88 = a1[4];
              --v86;
            }
            else
            {
              v88 = 1;
              v87 = 2;
            }
            v89 = a1[3];
            if ( a1[5] < v87 )
            {
              v97 = qvector_reserve();
              a1[3] = v97;
              v89 = v97;
            }
            a1[4] = v87;
            *(_BYTE *)(v89 + v86) = 32;
            *(_BYTE *)(a1[3] + v88) = 0;
          }
          else
          {
            v85(a1, 32);
          }
          sub_5910(a1, a2);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
          return 1;
        case 111:
        case 112:
          v14 = 40;
          if ( v12 == 112 )
            v14 = 91;
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, v14);
          (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "D", 33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v15 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v15 == sub_5720 )
          {
            v16 = a1[4];
            if ( v16 )
            {
              v17 = v16 + 1;
              v18 = a1[4];
              --v16;
            }
            else
            {
              v18 = 1;
              v17 = 2;
            }
            v19 = a1[3];
            if ( a1[5] < v17 )
            {
              v95 = qvector_reserve();
              a1[3] = v95;
              v19 = v95;
            }
            a1[4] = v17;
            *(_BYTE *)(v19 + v16) = 32;
            *(_BYTE *)(a1[3] + v18) = 0;
          }
          else
          {
            v15(a1, 32);
          }
          sub_5910(a1, a2);
          v20 = 41;
          if ( *(_WORD *)(a2 + 6) == 112 )
            v20 = 93;
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, v20);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v21 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v21 == sub_5720 )
          {
            v22 = a1[4];
            if ( v22 )
            {
              v23 = v22 + 1;
              v24 = a1[4];
              --v22;
            }
            else
            {
              v24 = 1;
              v23 = 2;
            }
            v25 = a1[3];
            if ( a1[5] < v23 )
            {
              v101 = qvector_reserve();
              a1[3] = v101;
              v25 = v101;
            }
            a1[4] = v23;
            *(_BYTE *)(v25 + v22) = 32;
            *(_BYTE *)(a1[3] + v24) = 0;
          }
          else
          {
            v21(a1, 32);
          }
          (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "Y", 33);
          return 1;
        case 113:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
          (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, "S", 33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v53 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v53 == sub_5720 )
          {
            v54 = a1[4];
            if ( v54 )
            {
              v55 = v54 + 1;
              v56 = a1[4];
              --v54;
            }
            else
            {
              v56 = 1;
              v55 = 2;
            }
            v57 = a1[3];
            if ( a1[5] < v55 )
            {
              v99 = qvector_reserve();
              a1[3] = v99;
              v57 = v99;
            }
            a1[4] = v55;
            *(_BYTE *)(v57 + v54) = 32;
            *(_BYTE *)(a1[3] + v56) = 0;
          }
          else
          {
            v53(a1, 32);
          }
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 145);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v58 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v58 == sub_5720 )
          {
            v59 = a1[4];
            if ( v59 )
            {
              v60 = v59 + 1;
              v61 = a1[4];
              --v59;
            }
            else
            {
              v61 = 1;
              v60 = 2;
            }
            v62 = a1[3];
            if ( a1[5] < v60 )
            {
              v98 = qvector_reserve();
              a1[3] = v98;
              v62 = v98;
            }
            a1[4] = v60;
            *(_BYTE *)(v62 + v59) = 32;
            *(_BYTE *)(a1[3] + v61) = 0;
          }
          else
          {
            v58(a1, 32);
          }
          v63 = *a1;
          v64 = "Y";
LABEL_101:
          (*(void (__fastcall **)(_QWORD *, char *, __int64))(v63 + 56))(a1, v64, 33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
          break;
        default:
          goto LABEL_28;
      }
      return 1;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
      return 1;
    case 6:
    case 7:
      if ( *((_BYTE *)a1 + 256) )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      v5 = sub_5C60(a1[77], a2, v105);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 120LL))(a1, a2, v5, -1) )
      {
        v6 = *(_QWORD *)(a2 + 16);
        v7 = (unsigned __int16)v6;
        if ( *(_BYTE *)(a2 + 1) == 6 )
          v7 = v6 & 0xFFFFFF;
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 104LL))(a1, v7, 16);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
        remember_problem();
      }
      if ( *((_BYTE *)a1 + 256) )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
      if ( v105[0] != v5 )
        goto LABEL_11;
      return 1;
    default:
LABEL_28:
      sub_4860((__int64)"out: %a: bad optype %d", a3, a1[30]);
      return 1;
  }
}

