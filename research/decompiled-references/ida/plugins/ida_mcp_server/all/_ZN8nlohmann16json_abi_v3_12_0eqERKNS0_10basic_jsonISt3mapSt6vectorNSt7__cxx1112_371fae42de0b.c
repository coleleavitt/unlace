__int64 __fastcall nlohmann::json_abi_v3_12_0::operator==(char *a1, char *a2, __int64 a3, __int64 a4)
{
  char v4; // dl
  char v5; // al
  bool v7; // cl
  bool v9; // di
  bool v10; // r8
  bool v11; // dl
  __int64 v12; // rax
  double v13; // xmm0_8
  bool v14; // al
  __int64 v15; // rax
  double v16; // xmm0_8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // r9
  size_t v22; // rdx
  __int64 v23; // r9
  __int64 v24; // r8
  size_t v25; // rdx
  int v26; // eax
  _QWORD *v27; // rdx
  char **v28; // rax
  char *v29; // r10
  char *v30; // r8
  char *v31; // r9
  bool v32; // cl
  char v33; // al
  char v34; // dl
  __int64 v35; // rax
  __int64 v36; // rdi
  size_t v37; // rdx
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  size_t v42; // rdx
  int v43; // eax
  __int64 *v44; // rcx
  __int64 *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // r11
  __int64 v52; // r14
  __int64 v53; // rbx
  int v54; // eax
  __int64 v55; // rax
  size_t v56; // rdx
  __int64 v57; // r11
  size_t v58; // rdx
  int v59; // eax
  bool v60; // di
  bool v61; // r11
  __int64 v62; // rdx
  bool v63; // al
  __int64 v64; // rax
  double v65; // xmm0_8
  bool v66; // dl
  __int64 v67; // rax
  double v68; // xmm0_8
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // [rsp+0h] [rbp-40h]
  __int64 v72; // [rsp+0h] [rbp-40h]
  char *v73; // [rsp+0h] [rbp-40h]
  __int64 v74; // [rsp+0h] [rbp-40h]
  __int64 v75; // [rsp+0h] [rbp-40h]
  char *v76; // [rsp+0h] [rbp-40h]
  __int64 v77; // [rsp+8h] [rbp-38h]
  unsigned __int8 v78; // [rsp+8h] [rbp-38h]
  char *v79; // [rsp+8h] [rbp-38h]
  char *v80; // [rsp+8h] [rbp-38h]
  char *v81; // [rsp+8h] [rbp-38h]
  char *v82; // [rsp+8h] [rbp-38h]
  char *v83; // [rsp+10h] [rbp-30h]
  char *v84; // [rsp+10h] [rbp-30h]
  char *v85; // [rsp+10h] [rbp-30h]
  char *v86; // [rsp+10h] [rbp-30h]
  char *v87; // [rsp+10h] [rbp-30h]
  char *v88; // [rsp+18h] [rbp-28h]
  char *v89; // [rsp+18h] [rbp-28h]
  char *v90; // [rsp+18h] [rbp-28h]
  __int64 v91; // [rsp+18h] [rbp-28h]
  char *v92; // [rsp+20h] [rbp-20h]
  __int64 v93; // [rsp+20h] [rbp-20h]

  v4 = *a1;
  v5 = *a2;
  if ( *a2 == *a1 )
  {
    switch ( *a2 )
    {
      case 0:
        goto LABEL_34;
      case 1:
        v17 = *((_QWORD *)a2 + 1);
        v18 = *((_QWORD *)a1 + 1);
        LODWORD(a4) = 0;
        if ( *(_QWORD *)(v18 + 40) != *(_QWORD *)(v17 + 40) )
          return (unsigned int)a4;
        v19 = *(_QWORD *)(v18 + 24);
        v20 = v18 + 8;
        if ( v18 + 8 == v19 )
          goto LABEL_34;
        v21 = *(_QWORD *)(v17 + 24);
        while ( 1 )
        {
          v22 = *(_QWORD *)(v19 + 40);
          if ( v22 != *(_QWORD *)(v21 + 40)
            || v22 && memcmp(*(const void **)(v19 + 32), *(const void **)(v21 + 32), v22) )
          {
            break;
          }
          v39 = nlohmann::json_abi_v3_12_0::operator==();
          LODWORD(a4) = v39;
          if ( (_BYTE)v39 )
          {
            v78 = v39;
            v72 = std::_Rb_tree_increment();
            v40 = std::_Rb_tree_increment();
            v19 = v72;
            LODWORD(a4) = v78;
            v21 = v40;
            if ( v20 != v72 )
              continue;
          }
          return (unsigned int)a4;
        }
        goto LABEL_39;
      case 2:
        v27 = *((_QWORD **)a1 + 1);
        v28 = *((char ***)a2 + 1);
        LODWORD(a4) = 0;
        v29 = (char *)v27[1];
        v30 = (char *)*v27;
        v31 = *v28;
        if ( &v29[-*v27] != (char *)(v28[1] - *v28) )
          return (unsigned int)a4;
        if ( v30 == v29 )
          goto LABEL_34;
        break;
      case 3:
        v35 = *((_QWORD *)a1 + 1);
        v36 = *((_QWORD *)a2 + 1);
        LODWORD(a4) = 0;
        v37 = *(_QWORD *)(v35 + 8);
        if ( v37 == *(_QWORD *)(v36 + 8) )
        {
          LODWORD(a4) = 1;
          if ( v37 )
            LOBYTE(a4) = memcmp(*(const void **)v35, *(const void **)v36, v37) == 0;
        }
        return (unsigned int)a4;
      case 4:
        LOBYTE(a4) = a1[8] == a2[8];
        return (unsigned int)a4;
      case 5:
      case 6:
        LOBYTE(a4) = *((_QWORD *)a1 + 1) == *((_QWORD *)a2 + 1);
        return (unsigned int)a4;
      case 7:
        LOBYTE(a4) = 1;
        if ( *((double *)a1 + 1) != *((double *)a2 + 1) )
          LODWORD(a4) = 0;
        return (unsigned int)a4;
      case 8:
        v23 = *((_QWORD *)a1 + 1);
        v24 = *((_QWORD *)a2 + 1);
        LODWORD(a4) = 0;
        v25 = *(_QWORD *)(v23 + 8) - *(_QWORD *)v23;
        if ( v25 == *(_QWORD *)(v24 + 8) - *(_QWORD *)v24 )
        {
          if ( !v25
            || (v77 = *((_QWORD *)a2 + 1),
                v71 = *((_QWORD *)a1 + 1),
                v26 = memcmp(*(const void **)v23, *(const void **)v24, v25),
                v23 = v71,
                v24 = v77,
                LODWORD(a4) = 0,
                !v26) )
          {
            LODWORD(a4) = 0;
            if ( *(_QWORD *)(v23 + 24) == *(_QWORD *)(v24 + 24) )
              LOBYTE(a4) = *(_BYTE *)(v23 + 32) == *(_BYTE *)(v24 + 32);
          }
        }
        return (unsigned int)a4;
      default:
        LODWORD(a4) = 0;
        return (unsigned int)a4;
    }
    while ( 1 )
    {
      v33 = *v30;
      v34 = *v31;
      if ( *v30 == *v31 )
        break;
      v32 = v33 == 5;
      if ( v33 == 5 && v34 == 7 )
      {
        LOBYTE(a4) = 1;
        if ( (double)(int)*((_QWORD *)v30 + 1) != *((double *)v31 + 1) )
          LODWORD(a4) = 0;
      }
      else
      {
        v60 = v33 == 7;
        v61 = v34 == 5;
        if ( v33 == 7 && v34 == 5 )
        {
          LOBYTE(a4) = 1;
          if ( (double)(int)*((_QWORD *)v31 + 1) != *((double *)v30 + 1) )
            LODWORD(a4) = 0;
        }
        else
        {
          v63 = v33 == 6;
          if ( v34 == 7 && v63 )
          {
            v64 = *((_QWORD *)v30 + 1);
            if ( v64 < 0 )
            {
              v69 = *((_QWORD *)v30 + 1) & 1LL | (*((_QWORD *)v30 + 1) >> 1);
              v65 = (double)(int)v69 + (double)(int)v69;
            }
            else
            {
              v65 = (double)(int)v64;
            }
            LOBYTE(a4) = 1;
            if ( v65 != *((double *)v31 + 1) )
              LODWORD(a4) = 0;
          }
          else
          {
            v66 = v34 == 6;
            if ( v60 && v66 )
            {
              v67 = *((_QWORD *)v31 + 1);
              if ( v67 < 0 )
              {
                v70 = *((_QWORD *)v31 + 1) & 1LL | (*((_QWORD *)v31 + 1) >> 1);
                v68 = (double)(int)v70 + (double)(int)v70;
              }
              else
              {
                v68 = (double)(int)v67;
              }
              LOBYTE(a4) = 1;
              if ( v68 != *((double *)v30 + 1) )
                LODWORD(a4) = 0;
            }
            else
            {
              if ( !v61 || !v63 )
              {
                LOBYTE(a4) = v66 && v32;
                if ( !(_BYTE)a4 )
                  return (unsigned int)a4;
              }
LABEL_72:
              LOBYTE(a4) = *((_QWORD *)v30 + 1) == *((_QWORD *)v31 + 1);
            }
          }
        }
      }
LABEL_55:
      if ( !(_BYTE)a4 )
        return (unsigned int)a4;
LABEL_56:
      v30 += 16;
      v31 += 16;
      if ( v29 == v30 )
      {
LABEL_34:
        LODWORD(a4) = 1;
        return (unsigned int)a4;
      }
    }
    switch ( *v30 )
    {
      case 0:
        goto LABEL_56;
      case 1:
        v49 = *((_QWORD *)v31 + 1);
        v50 = *((_QWORD *)v30 + 1);
        if ( *(_QWORD *)(v50 + 40) != *(_QWORD *)(v49 + 40) )
          goto LABEL_39;
        v51 = *(_QWORD *)(v50 + 24);
        v52 = v50 + 8;
        if ( v50 + 8 == v51 )
          goto LABEL_56;
        v53 = *(_QWORD *)(v49 + 24);
        while ( 2 )
        {
          v56 = *(_QWORD *)(v51 + 40);
          if ( v56 == *(_QWORD *)(v53 + 40) )
          {
            if ( !v56
              || (v89 = v31,
                  v85 = v30,
                  v80 = v29,
                  v54 = memcmp(*(const void **)(v51 + 32), *(const void **)(v53 + 32), v56),
                  v29 = v80,
                  v30 = v85,
                  v31 = v89,
                  !v54) )
            {
              v90 = v31;
              v86 = v30;
              v81 = v29;
              LODWORD(a4) = nlohmann::json_abi_v3_12_0::operator==();
              if ( !(_BYTE)a4 )
                return (unsigned int)a4;
              v75 = std::_Rb_tree_increment();
              v55 = std::_Rb_tree_increment();
              v51 = v75;
              v29 = v81;
              v30 = v86;
              v31 = v90;
              v53 = v55;
              if ( v52 == v75 )
                goto LABEL_56;
              continue;
            }
LABEL_39:
            LODWORD(a4) = 0;
          }
          else
          {
            LODWORD(a4) = 0;
          }
          return (unsigned int)a4;
        }
      case 2:
        v44 = *((__int64 **)v30 + 1);
        v45 = *((__int64 **)v31 + 1);
        v46 = v44[1];
        v47 = *v44;
        v48 = *v45;
        a4 = v46 - *v44;
        if ( a4 != v45[1] - *v45 )
          goto LABEL_39;
        if ( v47 == v46 )
          goto LABEL_56;
        break;
      case 3:
        v41 = *((_QWORD *)v30 + 1);
        a4 = *((_QWORD *)v31 + 1);
        v42 = *(_QWORD *)(v41 + 8);
        if ( v42 != *(_QWORD *)(a4 + 8) )
          goto LABEL_39;
        if ( !v42 )
          goto LABEL_56;
        v83 = v31;
        v79 = v30;
        v73 = v29;
        v43 = memcmp(*(const void **)v41, *(const void **)a4, v42);
        v29 = v73;
        v30 = v79;
        v31 = v83;
        if ( !v43 )
          goto LABEL_56;
        LODWORD(a4) = 0;
        return (unsigned int)a4;
      case 4:
        LOBYTE(a4) = v30[8] == v31[8];
        goto LABEL_55;
      case 5:
      case 6:
        goto LABEL_72;
      case 7:
        LOBYTE(a4) = 1;
        if ( *((double *)v30 + 1) != *((double *)v31 + 1) )
          LODWORD(a4) = 0;
        goto LABEL_55;
      case 8:
        v57 = *((_QWORD *)v30 + 1);
        a4 = *((_QWORD *)v31 + 1);
        v58 = *(_QWORD *)(v57 + 8) - *(_QWORD *)v57;
        if ( v58 != *(_QWORD *)(a4 + 8) - *(_QWORD *)a4 )
          goto LABEL_39;
        if ( v58 )
        {
          v93 = *((_QWORD *)v31 + 1);
          v91 = *((_QWORD *)v30 + 1);
          v87 = v31;
          v82 = v30;
          v76 = v29;
          v59 = memcmp(*(const void **)v57, *(const void **)a4, v58);
          v29 = v76;
          v30 = v82;
          v31 = v87;
          v57 = v91;
          a4 = v93;
          if ( v59 )
            goto LABEL_39;
        }
        if ( *(_QWORD *)(v57 + 24) != *(_QWORD *)(a4 + 24) )
          goto LABEL_39;
        if ( *(_BYTE *)(v57 + 32) == *(_BYTE *)(a4 + 32) )
          goto LABEL_56;
        LODWORD(a4) = 0;
        return (unsigned int)a4;
      default:
        goto LABEL_39;
    }
    while ( 1 )
    {
      v92 = v31;
      v88 = v30;
      v84 = v29;
      v74 = v47;
      LODWORD(a4) = nlohmann::json_abi_v3_12_0::operator==();
      if ( !(_BYTE)a4 )
        return (unsigned int)a4;
      v29 = v84;
      v30 = v88;
      v47 = v74 + 16;
      v48 += 16;
      v31 = v92;
      if ( v46 == v74 + 16 )
        goto LABEL_56;
    }
  }
  else
  {
    v7 = v4 == 5;
    if ( v4 == 5 && v5 == 7 )
    {
      LOBYTE(a4) = 1;
      if ( (double)(int)*((_QWORD *)a1 + 1) != *((double *)a2 + 1) )
        LODWORD(a4) = 0;
    }
    else
    {
      v9 = v4 == 7;
      v10 = v5 == 5;
      if ( v4 == 7 && v5 == 5 )
      {
        LOBYTE(a4) = 1;
        if ( (double)(int)*((_QWORD *)a2 + 1) != *((double *)a1 + 1) )
          LODWORD(a4) = 0;
      }
      else
      {
        v11 = v4 == 6;
        if ( v5 == 7 && v11 )
        {
          v12 = *((_QWORD *)a1 + 1);
          if ( v12 < 0 )
          {
            v62 = *((_QWORD *)a1 + 1) & 1LL | (*((_QWORD *)a1 + 1) >> 1);
            v13 = (double)(int)v62 + (double)(int)v62;
          }
          else
          {
            v13 = (double)(int)v12;
          }
          LOBYTE(a4) = 1;
          if ( v13 != *((double *)a2 + 1) )
            LODWORD(a4) = 0;
        }
        else
        {
          v14 = v5 == 6;
          if ( v9 && v14 )
          {
            v15 = *((_QWORD *)a2 + 1);
            if ( v15 < 0 )
            {
              v38 = *((_QWORD *)a2 + 1) & 1LL | (*((_QWORD *)a2 + 1) >> 1);
              v16 = (double)(int)v38 + (double)(int)v38;
            }
            else
            {
              v16 = (double)(int)v15;
            }
            LOBYTE(a4) = 1;
            if ( v16 != *((double *)a1 + 1) )
              LODWORD(a4) = 0;
          }
          else if ( v10 && v11 || (LOBYTE(a4) = v14 && v7, (_BYTE)a4) )
          {
            LOBYTE(a4) = *((_QWORD *)a1 + 1) == *((_QWORD *)a2 + 1);
          }
        }
      }
    }
    return (unsigned int)a4;
  }
}

