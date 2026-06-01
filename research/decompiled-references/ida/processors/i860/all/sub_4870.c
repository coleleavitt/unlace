__int64 __fastcall sub_4870(__int64 *a1)
{
  __int64 v1; // rdx
  int v2; // eax
  int v3; // ecx
  __int64 v4; // rbp
  int v5; // r12d
  char *v6; // r15
  char v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // r10
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 (__fastcall *v12)(__int64 *, char); // rax
  __int64 v13; // rax
  unsigned __int16 v14; // cx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64 *, char); // rax
  __int64 v18; // rbp
  __int64 v19; // r15
  unsigned __int64 v20; // r14
  __int64 v21; // rsi
  __int64 (__fastcall *v22)(__int64 *, char); // rax
  __int64 v23; // rbp
  __int64 v24; // r15
  unsigned __int64 v25; // r14
  __int64 v26; // rsi
  __int64 (__fastcall *v27)(__int64 *, char); // rdx
  unsigned int v28; // ebp
  __int64 v29; // r14
  unsigned __int64 v30; // r15
  __int64 v31; // r8
  __int64 v32; // rsi
  __int64 (__fastcall *v33)(__int64 *, char); // rdx
  unsigned int v34; // ebp
  __int64 v35; // r14
  unsigned __int64 v36; // r15
  __int64 v37; // r8
  __int64 v38; // rsi
  unsigned __int64 v39; // r15
  __int64 v40; // r14
  __int64 v41; // rsi
  __int64 v42; // rbp
  __int64 (__fastcall *v43)(__int64 *, char); // rax
  __int64 v44; // rax
  char v45; // al
  __int64 v46; // rdx
  __int64 (__fastcall *v47)(__int64 *, char); // rax
  __int64 v48; // rbp
  unsigned __int64 v49; // r12
  __int64 v50; // r13
  __int64 v51; // rsi
  __int64 (__fastcall *v52)(__int64 *, char); // rax
  __int64 v53; // r12
  unsigned __int64 v54; // r15
  __int64 v55; // r14
  __int64 v56; // rsi
  __int64 (__fastcall *v57)(__int64 *, char); // rax
  __int64 v58; // r12
  unsigned __int64 v59; // r15
  __int64 v60; // r14
  __int64 v61; // rsi
  __int64 (__fastcall *v63)(__int64 *, char); // rax
  __int64 v64; // rbp
  unsigned __int64 v65; // r12
  __int64 v66; // r14
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 (__fastcall *v70)(__int64 *, char); // rax
  __int64 v71; // rbp
  unsigned __int64 v72; // r14
  __int64 v73; // r15
  __int64 v74; // rsi
  __int64 (__fastcall *v75)(__int64 *, char); // rax
  __int64 v76; // rbp
  unsigned __int64 v77; // r14
  __int64 v78; // r15
  __int64 v79; // rsi
  __int64 (__fastcall *v80)(__int64 *, char); // rax
  __int64 v81; // rbp
  unsigned __int64 v82; // r14
  __int64 v83; // r15
  __int64 v84; // rsi
  __int64 (__fastcall *v85)(__int64 *, char); // rax
  __int64 v86; // rbp
  unsigned __int64 v87; // r14
  __int64 v88; // r15
  __int64 v89; // rsi
  __int64 (__fastcall *v90)(__int64 *, char); // rax
  __int64 v91; // rbp
  unsigned __int64 v92; // r14
  __int64 v93; // r15
  __int64 v94; // rsi
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  unsigned __int64 v106; // [rsp+0h] [rbp-58h]
  __int64 v107; // [rsp+0h] [rbp-58h]
  __int64 v108; // [rsp+0h] [rbp-58h]
  __int64 v109; // [rsp+8h] [rbp-50h]
  char *v110; // [rsp+10h] [rbp-48h]

  (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 64))(a1, 5);
  v1 = a1[78];
  v2 = *((unsigned __int16 *)a1 + 124);
  v110 = nullptr;
  v3 = *(_DWORD *)(v1 + 104);
  if ( v2 >= v3 && v2 < *(_DWORD *)(v1 + 108) )
    v110 = *(char **)(*(_QWORD *)(v1 + 112) + 16LL * (v2 - v3));
  v4 = getinf() & 7;
  if ( (*((_BYTE *)a1 + 253) & 2) == 0 )
  {
    v5 = 16 - v4;
    goto LABEL_6;
  }
  v52 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
  if ( v52 == sub_44F0 )
  {
    v53 = a1[4];
    if ( v53 )
    {
      v54 = v53 + 1;
      v55 = a1[4];
      v56 = a1[3];
      --v53;
      if ( a1[5] >= v54 )
        goto LABEL_69;
    }
    else
    {
      v56 = a1[3];
      v55 = 1;
      v54 = 2;
      if ( (unsigned __int64)a1[5] >= 2 )
        goto LABEL_69;
    }
    v69 = qvector_reserve();
    a1[3] = v69;
    v56 = v69;
LABEL_69:
    a1[4] = v54;
    *(_BYTE *)(v56 + v53) = 100;
    *(_BYTE *)(a1[3] + v55) = 0;
    v57 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
    if ( v57 == sub_44F0 )
      goto LABEL_70;
LABEL_90:
    v57(a1, 46);
    goto LABEL_73;
  }
  v52(a1, 100);
  v57 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
  if ( v57 != sub_44F0 )
    goto LABEL_90;
LABEL_70:
  v58 = a1[4];
  if ( !v58 )
  {
    v61 = a1[3];
    v60 = 1;
    v59 = 2;
    if ( (unsigned __int64)a1[5] >= 2 )
      goto LABEL_72;
LABEL_84:
    v68 = qvector_reserve();
    a1[3] = v68;
    v61 = v68;
    goto LABEL_72;
  }
  v59 = v58 + 1;
  v60 = a1[4];
  v61 = a1[3];
  --v58;
  if ( a1[5] < v59 )
    goto LABEL_84;
LABEL_72:
  a1[4] = v59;
  *(_BYTE *)(v61 + v58) = 46;
  *(_BYTE *)(a1[3] + v60) = 0;
LABEL_73:
  v5 = 14 - v4;
LABEL_6:
  v6 = v110;
  v7 = *v110;
  if ( !*v110 )
    goto LABEL_16;
  do
  {
    while ( 1 )
    {
      ++v6;
      v12 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( v12 != sub_44F0 )
        break;
      v11 = a1[4];
      if ( v11 )
      {
        v8 = v11 + 1;
        v9 = a1[4];
        v10 = a1[3];
        --v11;
        if ( a1[5] < v8 )
          goto LABEL_13;
      }
      else
      {
        v10 = a1[3];
        v9 = 1;
        v8 = 2;
        if ( (unsigned __int64)a1[5] < 2 )
        {
LABEL_13:
          v109 = v9;
          v106 = v8;
          v13 = qvector_reserve();
          v9 = v109;
          v8 = v106;
          a1[3] = v13;
          v10 = v13;
        }
      }
      a1[4] = v8;
      *(_BYTE *)(v10 + v11) = v7;
      *(_BYTE *)(a1[3] + v9) = 0;
      v7 = *v6;
      if ( !*v6 )
        goto LABEL_15;
    }
    v12(a1, v7);
    v7 = *v6;
  }
  while ( *v6 );
LABEL_15:
  v5 += (_DWORD)v110 - (_DWORD)v6;
LABEL_16:
  v14 = *((_WORD *)a1 + 124);
  v15 = *a1;
  if ( v14 > 0x49u )
  {
    if ( (unsigned __int16)(v14 - 80) > 0x3Du )
      goto LABEL_47;
  }
  else
  {
    if ( v14 <= 0x11u )
      goto LABEL_47;
    v16 = 1LL << ((unsigned __int8)v14 - 18);
    if ( (v16 & 0x19BF2001B479LL) == 0 )
    {
      if ( (v16 & 0xC1004003804080LL) != 0 )
      {
        v17 = *(__int64 (__fastcall **)(__int64 *, char))(v15 + 96);
        if ( v17 == sub_44F0 )
        {
          v18 = a1[4];
          if ( v18 )
          {
            v20 = v18 + 1;
            v19 = a1[4];
            --v18;
          }
          else
          {
            v19 = 1;
            v20 = 2;
          }
          v21 = a1[3];
          if ( a1[5] < v20 )
          {
            v97 = qvector_reserve();
            a1[3] = v97;
            v21 = v97;
          }
          a1[4] = v20;
          *(_BYTE *)(v21 + v18) = 46;
          *(_BYTE *)(a1[3] + v19) = 0;
        }
        else
        {
          v17(a1, 46);
        }
        v15 = *a1;
        switch ( *((_BYTE *)a1 + 269) )
        {
          case 0:
            v80 = *(__int64 (__fastcall **)(__int64 *, char))(v15 + 96);
            if ( v80 == sub_44F0 )
            {
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
                v101 = qvector_reserve();
                a1[3] = v101;
                v84 = v101;
              }
              a1[4] = v82;
              *(_BYTE *)(v84 + v81) = 98;
              *(_BYTE *)(a1[3] + v83) = 0;
              v15 = *a1;
            }
            else
            {
              v80(a1, 98);
              v15 = *a1;
            }
            break;
          case 1:
            v75 = *(__int64 (__fastcall **)(__int64 *, char))(v15 + 96);
            if ( v75 == sub_44F0 )
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
              *(_BYTE *)(v79 + v76) = 115;
              *(_BYTE *)(a1[3] + v78) = 0;
              v15 = *a1;
            }
            else
            {
              v75(a1, 115);
              v15 = *a1;
            }
            break;
          case 2:
            v90 = *(__int64 (__fastcall **)(__int64 *, char))(v15 + 96);
            if ( v90 == sub_44F0 )
            {
              v91 = a1[4];
              if ( v91 )
              {
                v92 = v91 + 1;
                v93 = a1[4];
                --v91;
              }
              else
              {
                v93 = 1;
                v92 = 2;
              }
              v94 = a1[3];
              if ( a1[5] < v92 )
              {
                v103 = qvector_reserve();
                a1[3] = v103;
                v94 = v103;
              }
              a1[4] = v92;
              *(_BYTE *)(v94 + v91) = 108;
              *(_BYTE *)(a1[3] + v93) = 0;
              v15 = *a1;
            }
            else
            {
              v90(a1, 108);
              v15 = *a1;
            }
            break;
          case 7:
            v70 = *(__int64 (__fastcall **)(__int64 *, char))(v15 + 96);
            if ( v70 == sub_44F0 )
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
                v104 = qvector_reserve();
                a1[3] = v104;
                v74 = v104;
              }
              a1[4] = v72;
              *(_BYTE *)(v74 + v71) = 100;
              *(_BYTE *)(a1[3] + v73) = 0;
              v15 = *a1;
            }
            else
            {
              v70(a1, 100);
              v15 = *a1;
            }
            break;
          case 8:
            v85 = *(__int64 (__fastcall **)(__int64 *, char))(v15 + 96);
            if ( v85 == sub_44F0 )
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
                v105 = qvector_reserve();
                a1[3] = v105;
                v89 = v105;
              }
              a1[4] = v87;
              *(_BYTE *)(v89 + v86) = 113;
              *(_BYTE *)(a1[3] + v88) = 0;
              v15 = *a1;
            }
            else
            {
              v85(a1, 113);
              v15 = *a1;
            }
            break;
          default:
            break;
        }
        v5 -= 2;
      }
      goto LABEL_47;
    }
  }
  v22 = *(__int64 (__fastcall **)(__int64 *, char))(v15 + 96);
  if ( v22 == sub_44F0 )
  {
    v23 = a1[4];
    if ( v23 )
    {
      v25 = v23 + 1;
      v24 = a1[4];
      --v23;
    }
    else
    {
      v24 = 1;
      v25 = 2;
    }
    v26 = a1[3];
    if ( a1[5] < v25 )
    {
      v95 = qvector_reserve();
      a1[3] = v95;
      v26 = v95;
    }
    a1[4] = v25;
    *(_BYTE *)(v26 + v23) = 46;
    *(_BYTE *)(a1[3] + v24) = 0;
  }
  else
  {
    v22(a1, 46);
  }
  v27 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
  v28 = (*((_DWORD *)a1 + 63) & 0x100) == 0 ? 115 : 100;
  if ( v27 == sub_44F0 )
  {
    v29 = a1[4];
    if ( v29 )
    {
      v30 = v29 + 1;
      v31 = a1[4];
      --v29;
    }
    else
    {
      v31 = 1;
      v30 = 2;
    }
    v32 = a1[3];
    if ( a1[5] < v30 )
    {
      v107 = v31;
      v96 = qvector_reserve();
      v31 = v107;
      a1[3] = v96;
      v32 = v96;
    }
    a1[4] = v30;
    *(_BYTE *)(v32 + v29) = v28;
    *(_BYTE *)(a1[3] + v31) = 0;
  }
  else
  {
    v27(a1, v28);
  }
  v33 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
  v34 = (*((_DWORD *)a1 + 63) & 0x80) == 0 ? 115 : 100;
  if ( v33 == sub_44F0 )
  {
    v35 = a1[4];
    if ( v35 )
    {
      v36 = v35 + 1;
      v37 = a1[4];
      --v35;
    }
    else
    {
      v37 = 1;
      v36 = 2;
    }
    v38 = a1[3];
    if ( a1[5] < v36 )
    {
      v108 = v37;
      v98 = qvector_reserve();
      v37 = v108;
      a1[3] = v98;
      v38 = v98;
    }
    a1[4] = v36;
    *(_BYTE *)(v38 + v35) = v34;
    *(_BYTE *)(a1[3] + v37) = 0;
  }
  else
  {
    v33(a1, v34);
  }
  v15 = *a1;
  v5 -= 3;
LABEL_47:
  (*(void (__fastcall **)(__int64 *, __int64))(v15 + 72))(a1, 5);
  while ( 2 )
  {
    while ( 2 )
    {
      v43 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( v43 == sub_44F0 )
      {
        v42 = a1[4];
        if ( v42 )
        {
          v39 = v42 + 1;
          v40 = a1[4];
          v41 = a1[3];
          --v42;
          if ( a1[5] < v39 )
            goto LABEL_53;
        }
        else
        {
          v41 = a1[3];
          v40 = 1;
          v39 = 2;
          if ( (unsigned __int64)a1[5] < 2 )
          {
LABEL_53:
            v44 = qvector_reserve();
            a1[3] = v44;
            v41 = v44;
          }
        }
        a1[4] = v39;
        --v5;
        *(_BYTE *)(v41 + v42) = 32;
        *(_BYTE *)(a1[3] + v40) = 0;
        if ( v5 <= 0 )
          goto LABEL_55;
        continue;
      }
      break;
    }
    --v5;
    v43(a1, 32);
    if ( v5 > 0 )
      continue;
    break;
  }
LABEL_55:
  v45 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 304))(a1, 0);
  v46 = *a1;
  if ( v45 )
  {
    if ( (*((_BYTE *)a1 + 308) & 8) != 0 && *((_BYTE *)a1 + 305) )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(v46 + 32))(a1, 44);
      v63 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( v63 == sub_44F0 )
      {
        v64 = a1[4];
        if ( v64 )
        {
          v65 = v64 + 1;
          v66 = a1[4];
          --v64;
        }
        else
        {
          v66 = 1;
          v65 = 2;
        }
        v67 = a1[3];
        if ( a1[5] < v65 )
        {
          v100 = qvector_reserve();
          a1[3] = v100;
          v67 = v100;
        }
        a1[4] = v65;
        *(_BYTE *)(v67 + v64) = 32;
        *(_BYTE *)(a1[3] + v66) = 0;
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 1);
      }
      else
      {
        v63(a1, 32);
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 1);
      }
    }
    else
    {
      (*(void (__fastcall **)(__int64 *, __int64))(v46 + 304))(a1, 1);
    }
    if ( (*((_BYTE *)a1 + 348) & 8) != 0 && *((_BYTE *)a1 + 345) )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
      v47 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( v47 == sub_44F0 )
      {
        v48 = a1[4];
        if ( v48 )
        {
          v49 = v48 + 1;
          v50 = a1[4];
          --v48;
        }
        else
        {
          v50 = 1;
          v49 = 2;
        }
        v51 = a1[3];
        if ( a1[5] < v49 )
        {
          v99 = qvector_reserve();
          a1[3] = v99;
          v51 = v99;
        }
        a1[4] = v49;
        *(_BYTE *)(v51 + v48) = 32;
        *(_BYTE *)(a1[3] + v50) = 0;
      }
      else
      {
        v47(a1, 32);
      }
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, __int64))(v46 + 304))(a1, 1);
  }
  (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 2);
  (*(void (__fastcall **)(__int64 *))(*a1 + 320))(a1);
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, 0xFFFFFFFFLL);
}

