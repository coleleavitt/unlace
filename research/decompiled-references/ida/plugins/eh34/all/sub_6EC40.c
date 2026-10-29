__int64 __fastcall sub_6EC40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 *v13; // r9
  char v14; // al
  unsigned int v15; // r11d
  unsigned int v16; // r10d
  __int64 v17; // rdx
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 *v20; // rax
  unsigned __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // r13
  char v24; // al
  __int64 v25; // rsi
  int v26; // edx
  unsigned __int64 **v27; // rdi
  unsigned __int64 *v28; // rsi
  unsigned __int64 *v29; // rdx
  unsigned int *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r8
  unsigned int v33; // r11d
  __int64 v34; // rdx
  unsigned __int64 *v35; // rax
  int v36; // r8d
  unsigned __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rsi
  unsigned __int64 v43; // r8
  bool v44; // cf
  unsigned __int64 *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 *v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rsi
  unsigned __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rcx
  unsigned __int64 *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rsi
  unsigned __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rcx
  unsigned __int64 *v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rsi
  unsigned __int64 v63; // r10
  unsigned __int64 *v64; // rdx
  unsigned __int64 v65; // rsi
  unsigned __int64 *v66; // rdx
  __int64 v67; // [rsp+0h] [rbp-228h]
  int v68; // [rsp+0h] [rbp-228h]
  __int64 v69; // [rsp+10h] [rbp-218h]
  __int64 v70; // [rsp+10h] [rbp-218h]
  __int64 v71; // [rsp+10h] [rbp-218h]
  unsigned int v72; // [rsp+10h] [rbp-218h]
  __int64 v73; // [rsp+10h] [rbp-218h]
  __int64 v74; // [rsp+10h] [rbp-218h]
  unsigned int v75; // [rsp+10h] [rbp-218h]
  unsigned __int64 *v76; // [rsp+18h] [rbp-210h]
  __int64 v77; // [rsp+18h] [rbp-210h]
  unsigned int v78; // [rsp+18h] [rbp-210h]
  unsigned __int64 *v79; // [rsp+18h] [rbp-210h]
  __int64 v80; // [rsp+18h] [rbp-210h]
  int v81; // [rsp+18h] [rbp-210h]
  unsigned __int64 *v82; // [rsp+20h] [rbp-208h]
  __int64 v83; // [rsp+20h] [rbp-208h]
  __int64 v84; // [rsp+20h] [rbp-208h]
  unsigned __int64 *v85; // [rsp+20h] [rbp-208h]
  __int64 v86; // [rsp+20h] [rbp-208h]
  __int64 v87; // [rsp+20h] [rbp-208h]
  int v88; // [rsp+28h] [rbp-200h]
  unsigned __int64 *v89; // [rsp+28h] [rbp-200h]
  __int64 v90; // [rsp+28h] [rbp-200h]
  unsigned __int64 *v91; // [rsp+28h] [rbp-200h]
  __int64 v92; // [rsp+28h] [rbp-200h]
  __int64 v93; // [rsp+30h] [rbp-1F8h]
  unsigned __int64 *v94; // [rsp+30h] [rbp-1F8h]
  unsigned __int64 *v95; // [rsp+30h] [rbp-1F8h]
  int v96; // [rsp+38h] [rbp-1F0h]
  char v97; // [rsp+3Fh] [rbp-1E9h]
  unsigned __int64 v98; // [rsp+48h] [rbp-1E0h] BYREF
  unsigned __int64 *v99; // [rsp+50h] [rbp-1D8h] BYREF
  __int128 v100; // [rsp+58h] [rbp-1D0h]
  unsigned __int64 *v101; // [rsp+68h] [rbp-1C0h] BYREF
  __int128 v102; // [rsp+70h] [rbp-1B8h]
  __int128 v103; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v104; // [rsp+90h] [rbp-198h]
  __int64 v105; // [rsp+98h] [rbp-190h]
  __int64 v106; // [rsp+A0h] [rbp-188h]
  char v107; // [rsp+A8h] [rbp-180h] BYREF
  char v108; // [rsp+A9h] [rbp-17Fh]
  unsigned __int16 v109; // [rsp+AEh] [rbp-17Ah]
  char v110; // [rsp+D1h] [rbp-157h]
  unsigned __int16 v111; // [rsp+D6h] [rbp-152h]
  __int64 v112; // [rsp+D8h] [rbp-150h]
  __int64 v113; // [rsp+E0h] [rbp-148h]
  unsigned __int64 v114; // [rsp+1E8h] [rbp-40h] BYREF

  v67 = a2;
  v114 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a3 + 16);
  *(_DWORD *)(a1 + 16) = 2;
  *(_OWORD *)a1 = -1;
  if ( !v6 )
  {
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 8) = a2;
    return a1;
  }
  v8 = *(_QWORD *)(a3 + 8);
  v10 = 0;
  v96 = v6 - 1;
  v11 = 0;
  while ( *(_BYTE *)(v8 + 12 * v11 + 1) == 38 )
  {
    v11 = ++v10;
    if ( v10 >= v6 )
    {
      v10 = 0;
      break;
    }
  }
  v99 = nullptr;
  v12 = v8 + 12 * v6;
  v100 = 0;
  v101 = nullptr;
  v102 = 0;
  if ( v8 != v12 )
  {
    v13 = &v98;
    do
    {
      while ( 1 )
      {
        v14 = *(_BYTE *)(v8 + 1);
        if ( v14 != 4 )
          break;
        v15 = *(_DWORD *)(v8 + 4);
        v16 = *(unsigned __int8 *)(v8 + 2);
        v17 = v100;
        v18 = v99;
        v98 = __PAIR64__(v16, v15);
        v19 = v100 + 1;
        if ( v13 < v99 || v13 >= &v99[*((_QWORD *)&v100 + 1)] )
        {
          if ( *((_QWORD *)&v100 + 1) < v19 )
          {
            v76 = v13;
            v70 = *((_QWORD *)&v100 + 1);
            v38 = qvector_reserve(&v99, 0, v100 + 1, 8);
            v39 = *((_QWORD *)&v100 + 1);
            v40 = v99;
            v41 = v100 - 1;
            *((_QWORD *)&v100 + 1) = v70;
            if ( (__int64)v100 - 1 >= 0 )
            {
              v42 = v38;
              do
              {
                v43 = *v40;
                v42 += 8;
                ++v40;
                *(_QWORD *)(v42 - 8) = v43;
                v44 = v41-- == 0;
              }
              while ( !v44 );
              v40 = v99;
            }
            v82 = v76;
            v77 = v39;
            v71 = v38;
            qfree(v40);
            v18 = (unsigned __int64 *)v71;
            v17 = v100;
            v13 = v82;
            v99 = (unsigned __int64 *)v71;
            *((_QWORD *)&v100 + 1) = v77;
          }
          v18[v17] = v98;
        }
        else
        {
          if ( *((_QWORD *)&v100 + 1) < v19 )
          {
            v89 = v13;
            v83 = *((_QWORD *)&v100 + 1);
            v78 = v16;
            v72 = v15;
            v46 = qvector_reserve(&v99, 0, v100 + 1, 8);
            v47 = *((_QWORD *)&v100 + 1);
            v48 = v99;
            v49 = v100 - 1;
            *((_QWORD *)&v100 + 1) = v83;
            if ( (__int64)v100 - 1 >= 0 )
            {
              v50 = v46;
              do
              {
                v51 = *v48;
                v50 += 8;
                ++v48;
                *(_QWORD *)(v50 - 8) = v51;
                v44 = v49-- == 0;
              }
              while ( !v44 );
              v48 = v99;
            }
            v94 = v89;
            v90 = v47;
            v84 = v46;
            qfree(v48);
            v18 = (unsigned __int64 *)v84;
            v17 = v100;
            v13 = v94;
            v16 = v78;
            v15 = v72;
            v99 = (unsigned __int64 *)v84;
            *((_QWORD *)&v100 + 1) = v90;
          }
          v20 = &v18[v17];
          *(_DWORD *)v20 = v15;
          *((_DWORD *)v20 + 1) = v16;
        }
        v8 += 12;
        *(_QWORD *)&v100 = v100 + 1;
        if ( v12 == v8 )
          goto LABEL_18;
      }
      if ( v14 == 8 )
      {
        v33 = *(_DWORD *)(v8 + 4);
        v34 = v102;
        v35 = v101;
        v36 = *(unsigned __int8 *)(v8 + 2) + 64;
        v98 = __PAIR64__(v36, v33);
        v37 = v102 + 1;
        if ( v13 >= v101 && v13 < &v101[*((_QWORD *)&v102 + 1)] )
        {
          if ( *((_QWORD *)&v102 + 1) < v37 )
          {
            v91 = v13;
            v86 = *((_QWORD *)&v102 + 1);
            v81 = v36;
            v75 = v33;
            v58 = qvector_reserve(&v101, 0, v102 + 1, 8);
            v59 = *((_QWORD *)&v102 + 1);
            v60 = v101;
            v61 = v102 - 1;
            *((_QWORD *)&v102 + 1) = v86;
            if ( (__int64)v102 - 1 >= 0 )
            {
              v62 = v58;
              do
              {
                v63 = *v60;
                v62 += 8;
                ++v60;
                *(_QWORD *)(v62 - 8) = v63;
                v44 = v61-- == 0;
              }
              while ( !v44 );
              v60 = v101;
            }
            v87 = v58;
            v95 = v91;
            v92 = v59;
            qfree(v60);
            v35 = (unsigned __int64 *)v87;
            v34 = v102;
            v13 = v95;
            v36 = v81;
            v33 = v75;
            v101 = (unsigned __int64 *)v87;
            *((_QWORD *)&v102 + 1) = v92;
          }
          v45 = &v35[v34];
          *(_DWORD *)v45 = v33;
          *((_DWORD *)v45 + 1) = v36;
        }
        else
        {
          if ( *((_QWORD *)&v102 + 1) < v37 )
          {
            v79 = v13;
            v73 = *((_QWORD *)&v102 + 1);
            v52 = qvector_reserve(&v101, 0, v102 + 1, 8);
            v53 = *((_QWORD *)&v102 + 1);
            v54 = v101;
            v55 = v102 - 1;
            *((_QWORD *)&v102 + 1) = v73;
            if ( (__int64)v102 - 1 >= 0 )
            {
              v56 = v52;
              do
              {
                v57 = *v54;
                v56 += 8;
                ++v54;
                *(_QWORD *)(v56 - 8) = v57;
                v44 = v55-- == 0;
              }
              while ( !v44 );
              v54 = v101;
            }
            v74 = v52;
            v85 = v79;
            v80 = v53;
            qfree(v54);
            v35 = (unsigned __int64 *)v74;
            v34 = v102;
            v13 = v85;
            v101 = (unsigned __int64 *)v74;
            *((_QWORD *)&v102 + 1) = v80;
          }
          v35[v34] = v98;
        }
        *(_QWORD *)&v102 = v102 + 1;
      }
      v8 += 12;
    }
    while ( v12 != v8 );
  }
LABEL_18:
  v104 = -1;
  v21 = (unsigned __int64 *)&v107;
  v105 = 0;
  v106 = 0;
  v103 = -1;
  do
  {
    *(_WORD *)v21 = 0;
    v21 += 5;
    *((_WORD *)v21 - 19) = 0;
    *((_WORD *)v21 - 18) = 0;
    *((_DWORD *)v21 - 2) = 0;
    *((_WORD *)v21 - 17) = 0;
    *((_OWORD *)v21 - 2) = 0;
    *(v21 - 2) = 0;
  }
  while ( &v114 != v21 );
  v22 = (**(__int64 (__fastcall ***)(__int64, __int64, __int64, double))(a4 + 16))(a4 + 16, v67, v67 - 16, 0.0);
  *(_QWORD *)(a1 + 8) = v22;
  v23 = v22;
  if ( v96 == -1 )
  {
    if ( !(_QWORD)v100 )
    {
      if ( !(_QWORD)v102 )
      {
LABEL_96:
        *(_DWORD *)(a1 + 16) = 0;
        *(_QWORD *)a1 = v67;
        goto LABEL_54;
      }
LABEL_122:
      *(_DWORD *)(a1 + 16) = 23;
      goto LABEL_54;
    }
LABEL_114:
    *(_DWORD *)(a1 + 16) = 22;
    goto LABEL_54;
  }
  v97 = 0;
  v93 = -1;
  v88 = -1;
  v68 = -1;
  while ( 2 )
  {
    v69 = (**(__int64 (__fastcall ***)(__int64, __int64, __int64))(a4 + 16))(a4 + 16, v23, v23 - 16);
    v24 = (**(__int64 (__fastcall ***)(__int64, __int64, __int128 *))(a4 + 24))(a4 + 24, v23, &v103);
    if ( !v24 )
      goto LABEL_54;
    v25 = *(_QWORD *)(a3 + 8) + 12LL * v96;
    v26 = v96 - 1;
    if ( v68 != -1 )
      v26 = v96 + 1;
    v96 = v26;
    switch ( *(_BYTE *)(v25 + 1) )
    {
      case 0:
        if ( (_WORD)v105 == 134 && v108 == 1 )
        {
          if ( *(unsigned __int8 *)(v25 + 2) == v109 )
            goto LABEL_44;
          *(_DWORD *)(a1 + 16) = 4;
        }
        else
        {
          *(_DWORD *)(a1 + 16) = 3;
        }
        goto LABEL_54;
      case 1:
      case 2:
        switch ( (_WORD)v105 )
        {
          case 0x5C:
            if ( v108 != 1 || v109 != 4 )
            {
              *(_DWORD *)(a1 + 16) = 9;
              goto LABEL_54;
            }
            if ( v110 != 4 )
            {
              *(_DWORD *)(a1 + 16) = 10;
              goto LABEL_54;
            }
            v88 = v111;
            v93 = *(unsigned int *)(v25 + 4) - v113;
            break;
          case 0x7A:
            if ( v108 != 1 || v109 != 4 )
            {
              *(_DWORD *)(a1 + 16) = 7;
              goto LABEL_54;
            }
            if ( v110 != 1 )
            {
              *(_DWORD *)(a1 + 16) = 8;
              goto LABEL_54;
            }
            v97 = v24;
            v88 = v111;
            break;
          case 6:
            if ( v108 != 1 || v109 != 4 )
            {
              *(_DWORD *)(a1 + 16) = 5;
              goto LABEL_54;
            }
            if ( v110 != 5 || *(_DWORD *)(v25 + 4) != v112 )
            {
              *(_DWORD *)(a1 + 16) = 6;
              goto LABEL_54;
            }
            break;
          default:
            *(_DWORD *)(a1 + 16) = 11;
            goto LABEL_54;
        }
        v96 = v10;
        v68 = v26 + 1;
        goto LABEL_44;
      case 3:
        goto LABEL_44;
      case 4:
      case 8:
        if ( (_WORD)v105 != 910 && (_WORD)v105 != 444 && (_WORD)v105 != 122 || v108 != 1 || v110 != 4 )
        {
          *(_DWORD *)(a1 + 16) = 12;
          goto LABEL_54;
        }
        v27 = &v99;
        if ( (_WORD)v105 == 910 || (_WORD)v105 == 444 )
          v27 = &v101;
        v28 = v27[1];
        if ( !v28 )
        {
LABEL_123:
          *(_DWORD *)(a1 + 16) = 13;
          goto LABEL_54;
        }
        v29 = nullptr;
        v30 = (unsigned int *)*v27;
        while ( v109 != v30[1] )
        {
          v29 = (unsigned __int64 *)((char *)v29 + 1);
          v30 += 2;
          if ( v28 == v29 )
            goto LABEL_123;
        }
        if ( v111 == 4 )
        {
          if ( v113 != *v30 )
          {
            *(_DWORD *)(a1 + 16) = 15;
            goto LABEL_54;
          }
        }
        else if ( v88 == -1 )
        {
          v88 = v111;
          v93 = *v30 - v113;
        }
        else
        {
          if ( v111 != v88 )
          {
            *(_DWORD *)(a1 + 16) = 14;
            goto LABEL_54;
          }
          v31 = *v30;
          if ( v113 != v31 )
          {
            v32 = v31 - v113;
            if ( v93 != -1 && v32 != v93 )
            {
              *(_DWORD *)(a1 + 16) = 16;
              goto LABEL_54;
            }
            v93 = v32;
          }
        }
        if ( (unsigned __int64 *)((char *)v28 - 1) == v29 )
          goto LABEL_43;
        v64 = &(*v27)[(_QWORD)v28 - 1];
        v65 = *(_QWORD *)v30;
        *(_QWORD *)v30 = *v64;
        *v64 = v65;
        v66 = v27[1];
        if ( v66 )
        {
          v29 = (unsigned __int64 *)((char *)v66 - 1);
LABEL_43:
          v27[1] = v29;
        }
LABEL_44:
        *(_QWORD *)(a1 + 8) = v69;
        if ( v68 != v96 )
        {
          v23 = v69;
          continue;
        }
        if ( (_QWORD)v100 )
          goto LABEL_114;
        if ( (_QWORD)v102 )
          goto LABEL_122;
        if ( !v97 )
        {
          v67 = v23;
          goto LABEL_96;
        }
        if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int128 *))(a4 + 24))(a4 + 24, v69, &v103) )
        {
          if ( (_WORD)v105 == 92 )
          {
            if ( v108 == 1 && v88 == v109 )
            {
              if ( v111 == 4 )
              {
                if ( v113 == v93 )
                {
                  *(_QWORD *)a1 = v69;
                  *(_DWORD *)(a1 + 16) = 0;
                }
                else
                {
                  *(_DWORD *)(a1 + 16) = 20;
                }
              }
              else
              {
                *(_DWORD *)(a1 + 16) = 19;
              }
            }
            else
            {
              *(_DWORD *)(a1 + 16) = 18;
            }
          }
          else
          {
            *(_DWORD *)(a1 + 16) = 17;
          }
        }
LABEL_54:
        if ( v101 )
        {
          *(_QWORD *)&v102 = 0;
          qfree(v101);
        }
        if ( v99 )
        {
          *(_QWORD *)&v100 = 0;
          qfree(v99);
        }
        return a1;
      default:
        *(_DWORD *)(a1 + 16) = 24;
        goto LABEL_54;
    }
  }
}

