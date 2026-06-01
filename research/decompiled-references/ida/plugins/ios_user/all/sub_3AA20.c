__int64 __fastcall sub_3AA20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r13d
  int v7; // r14d
  char *v8; // rax
  signed int v9; // r8d
  char *v10; // rbx
  int v11; // edx
  int v12; // r10d
  int v13; // r15d
  int v14; // r12d
  __int64 v15; // r11
  _DWORD *v16; // rbp
  __int64 v17; // rdx
  char v18; // cl
  int v19; // esi
  int v20; // eax
  char v21; // dl
  char *v22; // rax
  __int64 v23; // r10
  signed int v24; // r8d
  char *v25; // r15
  int v26; // ebp
  _BYTE *v27; // rax
  unsigned __int64 v28; // r11
  int v29; // r14d
  __int64 v30; // rdi
  char *v31; // rax
  int v32; // edx
  char *v33; // r14
  int v34; // r8d
  int v35; // r15d
  int v36; // esi
  int v37; // r8d
  int v38; // r15d
  signed int v39; // edx
  char *v40; // rax
  int v41; // r8d
  char v42; // si
  int v43; // ecx
  __int64 v44; // rbp
  __int64 v45; // r14
  __int64 v46; // rdi
  char v47; // r12
  int v48; // eax
  _BYTE *v49; // rax
  _BYTE *v50; // rax
  int v51; // ecx
  char *v52; // rdx
  int v53; // eax
  char v54; // r8
  __int64 v55; // rsi
  _BYTE *v57; // rdx
  int v58; // r14d
  char *v59; // rbp
  int v60; // r10d
  int v61; // r15d
  char *v62; // rax
  char v63; // cl
  int v64; // edx
  char *v65; // rax
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  __int64 v69; // rdi
  __int64 v70; // rax
  int v71; // r8d
  _BYTE *v72; // r10
  __int64 v73; // rax
  __int64 v74; // rax
  int v75; // r8d
  char *v76; // r12
  __int64 v77; // rax
  int v78; // r12d
  char *v79; // rbp
  int v80; // r15d
  char *v81; // rax
  int v82; // r15d
  char v83; // cl
  int v84; // edx
  unsigned __int64 v85; // rdi
  _BYTE *v86; // rax
  int v87; // ecx
  char *v88; // rdx
  char v89; // si
  char *v90; // rdx
  int v91; // eax
  char v92; // r8
  __int64 v93; // rsi
  char *v94; // rax
  char *v95; // r14
  signed int nb; // [rsp+0h] [rbp-98h]
  int na; // [rsp+0h] [rbp-98h]
  signed int v100; // [rsp+8h] [rbp-90h]
  signed int v101; // [rsp+10h] [rbp-88h]
  signed int v102; // [rsp+10h] [rbp-88h]
  signed int v103; // [rsp+10h] [rbp-88h]
  signed int v104; // [rsp+10h] [rbp-88h]
  int v105; // [rsp+10h] [rbp-88h]
  unsigned __int64 v106; // [rsp+10h] [rbp-88h]
  signed int v107; // [rsp+18h] [rbp-80h]
  signed int v108; // [rsp+18h] [rbp-80h]
  int v109; // [rsp+18h] [rbp-80h]
  signed int v110; // [rsp+18h] [rbp-80h]
  _BYTE *v111; // [rsp+18h] [rbp-80h]
  int v113; // [rsp+30h] [rbp-68h]
  int v114; // [rsp+30h] [rbp-68h]
  int v115; // [rsp+30h] [rbp-68h]
  _BYTE *v116; // [rsp+38h] [rbp-60h]
  void *v117; // [rsp+40h] [rbp-58h] BYREF
  int v118; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v119; // [rsp+58h] [rbp-40h]

  v119 = __readfsqword(0x28u);
  v3 = *(int *)(a3 + 12);
  if ( (int)v3 > 0 )
  {
    v4 = *(_QWORD *)a3;
    v5 = 0;
    while ( *(_BYTE *)(v4 + v5) != 38 )
    {
      if ( v3 == ++v5 )
        goto LABEL_88;
    }
    v6 = v5;
    v7 = 0;
    v8 = (char *)operator new[](1u);
    v113 = 1;
    v9 = 1;
    *v8 = 0;
    v10 = v8;
    v11 = *(_DWORD *)(a3 + 12);
LABEL_6:
    if ( v11 - 3 <= v6 )
      goto LABEL_38;
    v12 = v6 + 1;
    v13 = *(_DWORD *)(a2 + 100);
    if ( v13 <= 0 )
    {
LABEL_49:
      v108 = v9;
      sub_3A880((__int64)&v117, (__int64 *)a3, v7, v12 - v7);
      v58 = v118;
      v59 = (char *)v117;
      v60 = v6 + 1;
      v61 = v108 - 1;
      v9 = v108 - 1 + v118;
      if ( v113 < v9 )
      {
        v115 = v61 + v118;
        v74 = operator new[](v9);
        v75 = v115;
        v76 = (char *)v74;
        v60 = v6 + 1;
        if ( v61 > v115 )
          v61 = v115;
        v77 = 0;
        if ( v61 > 0 )
        {
          do
          {
            v76[v77] = v10[v77];
            ++v77;
          }
          while ( v77 != v61 );
        }
        if ( v10 )
        {
          operator delete[](v10);
          v75 = v115;
          v60 = v6 + 1;
        }
        v113 = v75;
        v10 = v76;
        v9 = v58 + v61;
      }
      v62 = v59;
      if ( v58 > 0 )
      {
        do
        {
          v63 = *v62;
          v64 = v61 - (_DWORD)v59 + (_DWORD)v62++;
          v10[v64] = v63;
        }
        while ( &v59[v58] != v62 );
      }
      if ( v59 )
      {
        v109 = v60;
        v103 = v9;
        operator delete[](v59);
        v60 = v109;
        v9 = v103;
      }
      v7 = v60;
      goto LABEL_33;
    }
    v14 = 0;
    v15 = *(_QWORD *)a3 + v12;
    v16 = *(_DWORD **)(a2 + 88);
    while ( 1 )
    {
      v17 = 0;
      v18 = *(_BYTE *)(*(_QWORD *)v16 + 1LL);
      v19 = v16[3] - 2;
      v20 = 0;
      if ( v18 )
      {
        do
        {
          v21 = *(_BYTE *)(v15 + v17);
          if ( !v21 || v19 <= v20 )
          {
            if ( v19 != v20 )
              goto LABEL_48;
            goto LABEL_16;
          }
          if ( v21 != v18 )
            goto LABEL_48;
          v17 = ++v20;
          v18 = *(_BYTE *)(*(_QWORD *)v16 + v20 + 1LL);
        }
        while ( v18 );
        if ( v19 == v20 )
          goto LABEL_16;
        v57 = (_BYTE *)(v15 + v20);
      }
      else
      {
        if ( v16[3] == 2 )
        {
LABEL_16:
          if ( v6 - v7 <= 0 )
          {
            v104 = v9;
            v65 = (char *)operator new[](1u);
            v37 = v104;
            *v65 = 0;
            v33 = v65;
            v36 = v104 - 1;
            if ( v113 >= v104 )
            {
              v39 = v104;
              v38 = v104 - 1;
              v26 = 1;
              goto LABEL_27;
            }
            v35 = 0;
            v26 = 1;
LABEL_67:
            v114 = v37;
            v70 = operator new[](v37);
            v71 = v114;
            v72 = (_BYTE *)v70;
            if ( v36 > v114 )
              v36 = v114;
            v73 = 0;
            if ( v36 > 0 )
            {
              do
              {
                v72[v73] = v10[v73];
                ++v73;
              }
              while ( v36 != v73 );
            }
            if ( v10 )
            {
              v111 = v72;
              operator delete[](v10);
              v71 = v114;
              v72 = v111;
            }
            v113 = v71;
            v10 = v72;
            goto LABEL_26;
          }
          v107 = v9;
          v22 = (char *)operator new[](1u);
          v23 = v6 - v7;
          v24 = v107;
          *v22 = 0;
          v25 = v22;
          v26 = v6 - v7 + 1;
          if ( v26 <= 0 )
          {
            v28 = 1;
            v26 = 1;
          }
          else
          {
            v27 = (_BYTE *)operator new[](v26);
            v28 = v26;
            v23 = v6 - v7;
            *v27 = 0;
            v24 = v107;
            if ( v25 )
            {
              v116 = v27;
              operator delete[](v25);
              v23 = v6 - v7;
              v28 = v26;
              v24 = v107;
              v27 = v116;
            }
            v25 = v27;
          }
          v29 = v7 - (_DWORD)v25;
          v30 = *(_QWORD *)a3;
          v31 = v25;
          do
          {
            v32 = v29 + (_DWORD)v31++;
            *(v31 - 1) = *(_BYTE *)(v30 + v32);
          }
          while ( &v25[v23] != v31 );
          v25[v23] = 0;
          v101 = v24;
          v33 = (char *)operator new[](v28);
          memcpy(v33, v25, (unsigned int)v26);
          v34 = v101;
          if ( v25 )
          {
            operator delete[](v25);
            v34 = v101;
          }
          v35 = v26 - 1;
          v36 = v34 - 1;
          v37 = v26 - 1 + v34;
          if ( v113 < v37 )
            goto LABEL_67;
LABEL_26:
          v38 = v36 + v35;
          v39 = v38 + 1;
LABEL_27:
          v40 = v33;
          v41 = v36 - (_DWORD)v33;
          do
          {
            v42 = *v40;
            v43 = v41 + (_DWORD)v40++;
            v10[v43] = v42;
          }
          while ( &v33[v26] != v40 );
          if ( v33 )
          {
            v102 = v39;
            operator delete[](v33);
            v39 = v102;
          }
          v9 = v38 + 2;
          v44 = v39;
          v45 = 16LL * v14;
          v46 = v45 + *(_QWORD *)(a2 + 88);
          v47 = **(_BYTE **)v46;
          if ( v38 + 2 > v113 )
          {
            v105 = v39;
            v66 = operator new[](v9);
            v67 = v38 + 2;
            v68 = v105;
            if ( v105 > v38 + 2 )
              v68 = v38 + 2;
            v69 = 0;
            v44 = v68;
            if ( v68 > 0 )
            {
              do
              {
                *(_BYTE *)(v66 + v69) = v10[v69];
                ++v69;
              }
              while ( v68 != v69 );
            }
            v38 = v68 - 1;
            if ( v10 )
            {
              v106 = v66;
              v113 = v67;
              v110 = v68 + 1;
              operator delete[](v10);
              v9 = v110;
              v10 = (char *)v106;
            }
            else
            {
              v113 = v67;
              v9 = v68 + 1;
              v10 = (char *)v66;
            }
            v46 = v45 + *(_QWORD *)(a2 + 88);
          }
          v48 = *(_DWORD *)(v46 + 12);
          v10[v38] = v47;
          v10[v44] = 0;
          v7 = v6 + v48 - 1;
LABEL_33:
          v11 = *(_DWORD *)(a3 + 12);
          if ( v7 >= v11 )
            goto LABEL_38;
          v6 = v7;
          v49 = (_BYTE *)(*(_QWORD *)a3 + v7);
          while ( *v49 != 38 )
          {
            ++v6;
            ++v49;
            if ( v6 >= v11 )
              goto LABEL_38;
          }
          if ( v6 == -1 )
          {
LABEL_38:
            if ( v11 - 2 > v7 )
            {
              v100 = v9;
              sub_3A880((__int64)&v117, (__int64 *)a3, v7, v11 - 1 - v7);
              v78 = v118;
              v79 = (char *)v117;
              v80 = v100 - 1;
              v9 = v100 - 1 + v118;
              if ( v113 < v9 )
              {
                na = v80 + v118;
                v94 = (char *)operator new[](v9);
                v95 = v94;
                if ( v80 > na )
                  v80 = na;
                if ( v80 > 0 )
                  memcpy(v94, v10, (unsigned int)v80);
                if ( v10 )
                  operator delete[](v10);
                v9 = v78 + v80;
                v10 = v95;
              }
              v81 = v79;
              v82 = v80 - (_DWORD)v79;
              if ( v78 > 0 )
              {
                do
                {
                  v83 = *v81;
                  v84 = v82 + (_DWORD)v81++;
                  v10[v84] = v83;
                }
                while ( &v79[v78] != v81 );
              }
              if ( v79 )
              {
                nb = v9;
                operator delete[](v79);
                v9 = nb;
              }
            }
            *(_QWORD *)a1 = 0;
            *(_QWORD *)(a1 + 8) = _mm_shuffle_epi32(_mm_cvtsi32_si128(v9), 224).m128i_u64[0];
            v50 = (_BYTE *)operator new[](v9);
            v51 = *(_DWORD *)(a1 + 12);
            *(_QWORD *)a1 = v50;
            if ( v51 > 0 )
            {
              *v50 = *v10;
              v52 = v10 + 1;
              v53 = 1;
              if ( v51 != 1 )
              {
                do
                {
                  v54 = *v52;
                  v55 = v53;
                  ++v52;
                  ++v53;
                  *(_BYTE *)(*(_QWORD *)a1 + v55) = v54;
                }
                while ( v53 < *(_DWORD *)(a1 + 12) );
              }
            }
            if ( v10 )
              operator delete[](v10);
            return a1;
          }
          goto LABEL_6;
        }
        v57 = (_BYTE *)(*(_QWORD *)a3 + v12);
      }
      if ( !*v57 )
        goto LABEL_16;
LABEL_48:
      ++v14;
      v16 += 4;
      if ( v14 == v13 )
        goto LABEL_49;
    }
  }
LABEL_88:
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  if ( a3 != a1 )
  {
    v85 = *(int *)(a3 + 12);
    *(_QWORD *)(a1 + 8) = _mm_shuffle_epi32(_mm_cvtsi32_si128(v85), 224).m128i_u64[0];
    v86 = (_BYTE *)operator new[](v85);
    v87 = *(_DWORD *)(a1 + 12);
    *(_QWORD *)a1 = v86;
    v88 = *(char **)a3;
    if ( v87 > 0 )
    {
      v89 = *v88;
      v90 = v88 + 1;
      *v86 = v89;
      v91 = 1;
      if ( v87 != 1 )
      {
        do
        {
          v92 = *v90;
          v93 = v91;
          ++v90;
          ++v91;
          *(_BYTE *)(*(_QWORD *)a1 + v93) = v92;
        }
        while ( v91 < *(_DWORD *)(a1 + 12) );
      }
    }
  }
  return a1;
}

