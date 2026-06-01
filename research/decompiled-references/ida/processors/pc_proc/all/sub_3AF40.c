unsigned __int64 __fastcall sub_3AF40(__int64 a1, __int64 *a2, char a3, __int64 a4, __int64 a5)
{
  char v6; // al
  __int64 v7; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  _QWORD *func; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  unsigned __int64 *v30; // r12
  __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // r12
  __int64 v35; // r13
  unsigned __int64 v36; // r14
  __int64 v37; // r15
  __int64 v38; // rsi
  __m128i si128; // xmm0
  __int64 v40; // r13
  __int64 v41; // r14
  __int64 v42; // r13
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 *v49; // rdi
  __int64 v50; // r15
  __int64 v51; // rbx
  __int64 *v52; // rdx
  __int64 *v53; // rdi
  __int64 v54; // r15
  __int64 v55; // rbx
  __int64 *v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // r12
  __int64 v66; // rbx
  unsigned __int64 v67; // r15
  __int64 v68; // r13
  __int64 v69; // rsi
  _DWORD *v70; // rbx
  __int64 v71; // rbx
  unsigned __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rsi
  __int64 v84; // rdi
  __int64 v85; // rdx
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // rdx
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rsi
  __int64 v94; // r13
  __int64 v95; // r12
  __int64 v96; // r15
  unsigned __int64 v97; // r14
  __int64 v98; // rsi
  __int64 v99; // r12
  unsigned __int64 i; // r12
  __int64 *v101; // r12
  __int64 v102; // rdx
  __int64 v103; // rsi
  __int64 v104; // rdi
  __int64 v105; // rdx
  __int64 v106; // rsi
  __int64 v107; // rdi
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v120; // [rsp+10h] [rbp-110h] BYREF
  __int128 v121; // [rsp+18h] [rbp-108h]
  __int64 v122; // [rsp+30h] [rbp-F0h] BYREF
  __int64 v123; // [rsp+38h] [rbp-E8h]
  __int128 v124; // [rsp+40h] [rbp-E0h]
  __int64 v125; // [rsp+50h] [rbp-D0h]
  __int64 v126; // [rsp+58h] [rbp-C8h]
  __int64 v127; // [rsp+60h] [rbp-C0h] BYREF
  __int128 v128; // [rsp+68h] [rbp-B8h]
  __int64 *v129; // [rsp+78h] [rbp-A8h]
  __int128 v130; // [rsp+80h] [rbp-A0h]
  __int64 v131; // [rsp+90h] [rbp-90h]
  __int64 v132; // [rsp+98h] [rbp-88h]
  __int128 v133; // [rsp+A0h] [rbp-80h]
  __int64 v134; // [rsp+B0h] [rbp-70h]
  int v135; // [rsp+B8h] [rbp-68h]
  __int64 v136; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v137; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v138; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v139[2]; // [rsp+D8h] [rbp-48h] BYREF
  unsigned __int64 v140; // [rsp+E8h] [rbp-38h]

  v140 = __readfsqword(0x28u);
  switch ( a3 )
  {
    case 'F':
      v123 = 0;
      v122 = a5;
      v125 = 0;
      LODWORD(v126) = -1;
      v127 = node2ea();
      *(_QWORD *)&v128 = -1;
      DWORD2(v128) = 0;
      v124 = 0;
      v6 = sub_70FD0(&v122);
      v7 = v123;
      if ( v6 )
      {
        v57 = a2[1];
        v58 = *a2;
        if ( a2[2] < (unsigned __int64)(v57 + 1) )
        {
          v77 = qvector_reserve();
          *a2 = v77;
          v57 = a2[1];
          v58 = v77;
        }
        v59 = v58 + 24 * v57;
        *(_QWORD *)v59 = 0;
        *(_OWORD *)(v59 + 8) = 0;
        ++a2[1];
        sub_31660((__int64 *)v59);
        v60 = a2[1];
        v61 = *a2;
        if ( a2[2] < (unsigned __int64)(v60 + 1) )
        {
          v76 = qvector_reserve();
          *a2 = v76;
          v60 = a2[1];
          v61 = v76;
        }
        v62 = v61 + 24 * v60;
        *(_QWORD *)v62 = 0;
        *(_OWORD *)(v62 + 8) = 0;
        ++a2[1];
        sub_31660((__int64 *)v62);
        v63 = a2[1];
        v64 = *a2;
        if ( a2[2] < (unsigned __int64)(v63 + 1) )
        {
          v73 = qvector_reserve();
          *a2 = v73;
          v63 = a2[1];
          v64 = v73;
        }
        v65 = v64 + 24 * v63;
        *(_OWORD *)(v65 + 8) = 0;
        *(_QWORD *)v65 = 0;
        ++a2[1];
        v66 = *(_QWORD *)(v65 + 8);
        if ( v66 )
        {
          v72 = v66 + 7;
          v68 = v66 + 6;
          --v66;
          v67 = v72;
        }
        else
        {
          v67 = 8;
          v68 = 7;
        }
        v69 = *(_QWORD *)v65;
        if ( *(_QWORD *)(v65 + 16) < v67 )
        {
          v109 = qvector_reserve();
          *(_QWORD *)v65 = v109;
          v69 = v109;
        }
        *(_QWORD *)(v65 + 8) = v67;
        *(_BYTE *)(v69 + v68) = 0;
        v70 = (_DWORD *)(*(_QWORD *)v65 + v66);
        *v70 = 1735287154;
        *(_DWORD *)((char *)v70 + 3) = 980641127;
        v71 = v123;
        v7 = v123 + 16 * v124;
        if ( v123 != v7 )
        {
          do
          {
            sub_3AC30((__int64 *)v65);
            v71 += 16;
          }
          while ( v7 != v71 );
          v7 = v123;
        }
      }
      if ( !v7 )
        return v140 - __readfsqword(0x28u);
      goto LABEL_4;
    case 'V':
    case 'W':
      return sub_3A8E0(a2, a5, a4, a3);
    case 'b':
      v9 = node2ea();
      if ( (unsigned __int8)sub_6C420(a5, &v122, v9) )
      {
        v10 = a2[1];
        v11 = *a2;
        if ( a2[2] < (unsigned __int64)(v10 + 1) )
        {
          v79 = qvector_reserve();
          v10 = a2[1];
          *a2 = v79;
          v11 = v79;
        }
        v12 = v11 + 24 * v10;
        *(_QWORD *)v12 = 0;
        *(_OWORD *)(v12 + 8) = 0;
        ++a2[1];
        sub_31660((__int64 *)v12);
        v13 = a2[1];
        v14 = *a2;
        if ( a2[2] < (unsigned __int64)(v13 + 1) )
        {
          v78 = qvector_reserve();
          v13 = a2[1];
          *a2 = v78;
          v14 = v78;
        }
        v15 = v14 + 24 * v13;
        *(_QWORD *)v15 = 0;
        *(_OWORD *)(v15 + 8) = 0;
        ++a2[1];
        sub_31660((__int64 *)v15);
      }
      return v140 - __readfsqword(0x28u);
    case 'f':
      node2ea();
      func = (_QWORD *)get_func();
      if ( func && (unsigned __int8)sub_25160(a5, func, &v136, &v137, &v138, v139) )
      {
        v17 = a2[1];
        v18 = *a2;
        if ( a2[2] < (unsigned __int64)(v17 + 1) )
        {
          v81 = qvector_reserve();
          v17 = a2[1];
          *a2 = v81;
          v18 = v81;
        }
        v19 = v18 + 24 * v17;
        *(_QWORD *)v19 = 0;
        *(_OWORD *)(v19 + 8) = 0;
        ++a2[1];
        sub_31660((__int64 *)v19);
        v20 = a2[1];
        v21 = *a2;
        if ( a2[2] < (unsigned __int64)(v20 + 1) )
        {
          v80 = qvector_reserve();
          v20 = a2[1];
          *a2 = v80;
          v21 = v80;
        }
        v22 = v21 + 24 * v20;
        *(_QWORD *)v22 = 0;
        *(_OWORD *)(v22 + 8) = 0;
        ++a2[1];
        sub_31660((__int64 *)v22);
        v23 = a2[1];
        v24 = *a2;
        if ( a2[2] < (unsigned __int64)(v23 + 1) )
        {
          v75 = qvector_reserve();
          v23 = a2[1];
          *a2 = v75;
          v24 = v75;
        }
        v25 = v24 + 24 * v23;
        *(_QWORD *)v25 = 0;
        *(_OWORD *)(v25 + 8) = 0;
        ++a2[1];
        sub_31660((__int64 *)v25);
        if ( v139[0] && v139[1] )
        {
          v26 = a2[1];
          v27 = *a2;
          if ( a2[2] < (unsigned __int64)(v26 + 1) )
          {
            v118 = qvector_reserve();
            v26 = a2[1];
            *a2 = v118;
            v27 = v118;
          }
          v28 = v27 + 24 * v26;
          *(_QWORD *)v28 = 0;
          *(_OWORD *)(v28 + 8) = 0;
          ++a2[1];
          sub_31660((__int64 *)v28);
        }
      }
      return v140 - __readfsqword(0x28u);
    case 's':
      v29 = node2ea();
      v133 = 0;
      v122 = 192;
      v123 = 0;
      v125 = -1;
      v126 = 0;
      v127 = 0;
      v129 = nullptr;
      v131 = 0;
      v132 = -1;
      v134 = 0;
      v135 = 144;
      v124 = 0;
      v128 = 0;
      v130 = 0;
      if ( (unsigned __int8)sub_30C00(&v122, a5, v29) )
      {
        v30 = (unsigned __int64 *)&unk_18C140;
        v120 = 0;
        v31 = (int)v122;
        v121 = 0;
        while ( 1 )
        {
          if ( (*v30 & v31) != 0 )
          {
            sub_3AC30(&v120);
            v30 += 2;
            if ( &off_18C1C0 == (_UNKNOWN **)v30 )
            {
LABEL_31:
              if ( (unsigned __int64)v121 > 1 )
              {
                v82 = a2[1];
                v83 = *a2;
                if ( a2[2] < (unsigned __int64)(v82 + 1) )
                {
                  v111 = qvector_reserve();
                  *a2 = v111;
                  v82 = a2[1];
                  v83 = v111;
                }
                v84 = v83 + 24 * v82;
                *(_QWORD *)v84 = 0;
                *(_OWORD *)(v84 + 8) = 0;
                ++a2[1];
                sub_31660((__int64 *)v84);
              }
              if ( (_QWORD)v128 )
              {
                v105 = a2[1];
                v106 = *a2;
                if ( a2[2] < (unsigned __int64)(v105 + 1) )
                {
                  v113 = qvector_reserve();
                  *a2 = v113;
                  v105 = a2[1];
                  v106 = v113;
                }
                v107 = v106 + 24 * v105;
                *(_QWORD *)v107 = 0;
                *(_OWORD *)(v107 + 8) = 0;
                ++a2[1];
                sub_3ACF0((__int64 *)v107, "prolog:", &v127);
              }
              if ( (_QWORD)v130 )
              {
                v92 = a2[1];
                v93 = *a2;
                if ( a2[2] < (unsigned __int64)(v92 + 1) )
                {
                  v112 = qvector_reserve();
                  *a2 = v112;
                  v92 = a2[1];
                  v93 = v112;
                }
                v94 = v93 + 24 * v92;
                *(_OWORD *)(v94 + 8) = 0;
                *(_QWORD *)v94 = 0;
                ++a2[1];
                v95 = *(_QWORD *)(v94 + 8);
                if ( v95 )
                {
                  v96 = v95 + 4;
                  v97 = v95 + 5;
                  --v95;
                }
                else
                {
                  v97 = 6;
                  v96 = 5;
                }
                v98 = *(_QWORD *)v94;
                if ( *(_QWORD *)(v94 + 16) < v97 )
                {
                  v114 = qvector_reserve();
                  *(_QWORD *)v94 = v114;
                  v98 = v114;
                }
                *(_QWORD *)(v94 + 8) = v97;
                *(_BYTE *)(v98 + v96) = 0;
                v99 = *(_QWORD *)v94 + v95;
                *(_DWORD *)v99 = 1936748400;
                *(_BYTE *)(v99 + 4) = 58;
                for ( i = 1; i < (unsigned __int64)v130; ++i )
                  sub_3ACF0((__int64 *)v94, (const char *)&unk_92AB7, &v129[3 * i]);
                v101 = v129;
                if ( v129[1] )
                {
                  v102 = a2[1];
                  v103 = *a2;
                  if ( a2[2] < (unsigned __int64)(v102 + 1) )
                  {
                    v117 = qvector_reserve();
                    *a2 = v117;
                    v102 = a2[1];
                    v103 = v117;
                  }
                  v104 = v103 + 24 * v102;
                  *(_QWORD *)v104 = 0;
                  *(_OWORD *)(v104 + 8) = 0;
                  ++a2[1];
                  sub_3ACF0((__int64 *)v104, "orphan pops: ", v101);
                }
              }
              if ( (_QWORD)v124 )
              {
                v32 = a2[1];
                v33 = *a2;
                if ( a2[2] < (unsigned __int64)(v32 + 1) )
                {
                  v74 = qvector_reserve();
                  *a2 = v74;
                  v32 = a2[1];
                  v33 = v74;
                }
                v34 = v33 + 24 * v32;
                *(_OWORD *)(v34 + 8) = 0;
                *(_QWORD *)v34 = 0;
                ++a2[1];
                v35 = *(_QWORD *)(v34 + 8);
                if ( v35 )
                {
                  v37 = v35 + 27;
                  v36 = v35 + 28;
                  --v35;
                }
                else
                {
                  v36 = 29;
                  v37 = 28;
                }
                v38 = *(_QWORD *)v34;
                if ( *(_QWORD *)(v34 + 16) < v36 )
                {
                  v110 = qvector_reserve();
                  *(_QWORD *)v34 = v110;
                  v38 = v110;
                }
                si128 = _mm_load_si128((const __m128i *)&xmmword_960C0);
                *(_QWORD *)(v34 + 8) = v36;
                *(_BYTE *)(v38 + v37) = 0;
                v40 = *(_QWORD *)v34 + v35;
                *(__m128i *)v40 = si128;
                *(__m128i *)(v40 + 12) = _mm_load_si128((const __m128i *)&xmmword_960D0);
                v41 = v123;
                v42 = v123 + 32 * v124;
                if ( v123 != v42 )
                {
                  do
                  {
                    sub_3AC30((__int64 *)v34);
                    v41 += 32;
                  }
                  while ( v42 != v41 );
                }
                v43 = a2[1];
                v44 = *a2;
                if ( a2[2] < (unsigned __int64)(v43 + 1) )
                {
                  v108 = qvector_reserve();
                  *a2 = v108;
                  v43 = a2[1];
                  v44 = v108;
                }
                v45 = v44 + 24 * v43;
                *(_QWORD *)v45 = 0;
                *(_OWORD *)(v45 + 8) = 0;
                ++a2[1];
                sub_31660((__int64 *)v45);
              }
              v46 = a2[1];
              v47 = *a2;
              if ( a2[2] < (unsigned __int64)(v46 + 1) )
              {
                v91 = qvector_reserve();
                *a2 = v91;
                v46 = a2[1];
                v47 = v91;
              }
              v48 = v47 + 24 * v46;
              *(_QWORD *)v48 = 0;
              *(_OWORD *)(v48 + 8) = 0;
              ++a2[1];
              sub_31660((__int64 *)v48);
              if ( (_DWORD)v131 )
              {
                v88 = a2[1];
                v89 = *a2;
                if ( a2[2] < (unsigned __int64)(v88 + 1) )
                {
                  v115 = qvector_reserve();
                  *a2 = v115;
                  v88 = a2[1];
                  v89 = v115;
                }
                v90 = v89 + 24 * v88;
                *(_QWORD *)v90 = 0;
                *(_OWORD *)(v90 + 8) = 0;
                ++a2[1];
                sub_31660((__int64 *)v90);
              }
              if ( (v122 & 0x10) != 0 )
              {
                v85 = a2[1];
                v86 = *a2;
                if ( a2[2] < (unsigned __int64)(v85 + 1) )
                {
                  v116 = qvector_reserve();
                  *a2 = v116;
                  v85 = a2[1];
                  v86 = v116;
                }
                v87 = v86 + 24 * v85;
                *(_QWORD *)v87 = 0;
                *(_OWORD *)(v87 + 8) = 0;
                ++a2[1];
                sub_31660((__int64 *)v87);
              }
              if ( v120 )
              {
                *(_QWORD *)&v121 = 0;
                qfree();
              }
              v49 = v129;
              if ( v129 )
              {
                v50 = v130;
                if ( (_QWORD)v130 )
                {
                  v51 = 0;
                  do
                  {
                    v52 = &v49[3 * v51];
                    if ( *v52 )
                    {
                      v52[1] = 0;
                      qfree();
                      v49 = v129;
                    }
                    ++v51;
                  }
                  while ( v50 != v51 );
                }
                *(_QWORD *)&v130 = 0;
                qfree();
              }
              if ( v127 )
              {
                *(_QWORD *)&v128 = 0;
                qfree();
              }
              if ( v123 )
              {
                *(_QWORD *)&v124 = 0;
                qfree();
              }
              return v140 - __readfsqword(0x28u);
            }
          }
          else
          {
            v30 += 2;
            if ( &off_18C1C0 == (_UNKNOWN **)v30 )
              goto LABEL_31;
          }
        }
      }
      v53 = v129;
      if ( v129 )
      {
        v54 = v130;
        if ( (_QWORD)v130 )
        {
          v55 = 0;
          do
          {
            v56 = &v53[3 * v55];
            if ( *v56 )
            {
              v56[1] = 0;
              qfree();
              v53 = v129;
            }
            ++v55;
          }
          while ( v54 != v55 );
        }
        *(_QWORD *)&v130 = 0;
        qfree();
      }
      if ( v127 )
      {
        *(_QWORD *)&v128 = 0;
        qfree();
      }
      if ( v123 )
      {
LABEL_4:
        *(_QWORD *)&v124 = 0;
        qfree();
      }
      return v140 - __readfsqword(0x28u);
    default:
      return v140 - __readfsqword(0x28u);
  }
}

