__int64 __fastcall sub_BAD80(__int64 a1, char *a2, int *a3, __int64 *a4)
{
  __int64 v6; // rbp
  __int64 v7; // r13
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // r8
  size_t v18; // r9
  __int64 v19; // r10
  _BYTE *v20; // rsi
  void *v21; // rdx
  void *v22; // rax
  __int64 result; // rax
  int v24; // eax
  size_t v25; // r8
  size_t v26; // r8
  char *v27; // rdx
  void *v28; // rdi
  unsigned int v29; // esi
  int v30; // eax
  size_t v31; // r8
  void *v32; // rdi
  __int64 v33; // r9
  unsigned int v34; // edx
  __int64 **v35; // rcx
  size_t v36; // rbx
  __int64 *v37; // r9
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r10
  unsigned int v40; // edx
  __int64 **v41; // rcx
  unsigned int v42; // edx
  _DWORD **v43; // rcx
  unsigned int v44; // edx
  unsigned int **v45; // rcx
  unsigned int v46; // edx
  _QWORD **v47; // rcx
  unsigned int v48; // eax
  __int64 **v49; // rdx
  __int64 *v50; // rbx
  size_t v51; // r10
  __int64 v52; // r9
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  void *srcd; // [rsp+8h] [rbp-90h]
  int srce; // [rsp+8h] [rbp-90h]
  void *src; // [rsp+8h] [rbp-90h]
  void *srcf; // [rsp+8h] [rbp-90h]
  size_t srca; // [rsp+8h] [rbp-90h]
  _BYTE *srcg; // [rsp+8h] [rbp-90h]
  unsigned int srcb; // [rsp+8h] [rbp-90h]
  void *srcc; // [rsp+8h] [rbp-90h]
  void *srch; // [rsp+8h] [rbp-90h]
  void *v71; // [rsp+10h] [rbp-88h]
  int v72; // [rsp+10h] [rbp-88h]
  _BYTE *v73; // [rsp+10h] [rbp-88h]
  void *v74; // [rsp+10h] [rbp-88h]
  void *v75; // [rsp+10h] [rbp-88h]
  __int64 *v76; // [rsp+10h] [rbp-88h]
  size_t v77; // [rsp+18h] [rbp-80h]
  __int64 *v78; // [rsp+18h] [rbp-80h]
  __int64 v79; // [rsp+18h] [rbp-80h]
  unsigned __int64 v80; // [rsp+18h] [rbp-80h]
  __int64 v81; // [rsp+20h] [rbp-78h]
  unsigned __int64 v82; // [rsp+20h] [rbp-78h]
  size_t v83; // [rsp+20h] [rbp-78h]
  unsigned __int64 v84; // [rsp+20h] [rbp-78h]
  __int64 v85; // [rsp+28h] [rbp-70h]
  size_t v86; // [rsp+28h] [rbp-70h]
  void *v87; // [rsp+38h] [rbp-60h] BYREF
  void *v88; // [rsp+40h] [rbp-58h] BYREF
  __int128 v89; // [rsp+48h] [rbp-50h]
  unsigned __int64 v90; // [rsp+58h] [rbp-40h]

  v6 = 0;
  v90 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v8 = *a2;
  if ( !*a2 )
    return 1;
  while ( 2 )
  {
    v9 = (unsigned int)v6;
    if ( a4 )
    {
      v10 = *a4;
      while ( 1 )
      {
        v11 = v10 + 32LL * (int)v9;
        if ( v8 != 32 )
          break;
LABEL_11:
        v8 = a2[++v6];
        if ( !v8 )
          return 1;
        v9 = (unsigned int)v6;
      }
      while ( 1 )
      {
        switch ( v8 )
        {
          case 'B':
            srcc = (void *)sub_EDF00(*(_QWORD *)(v7 + 24));
            v30 = sub_D9D40(*(_QWORD *)(v7 + 24), (unsigned int)v9);
            if ( !v11 )
              goto LABEL_46;
            v72 = v30;
            sub_176520(v11);
            *(_BYTE *)v11 = 7;
            *(_QWORD *)(v11 + 8) = 0;
            *(_OWORD *)(v11 + 16) = 0;
            if ( !v72 )
              goto LABEL_29;
            v31 = v72;
            v32 = nullptr;
            v33 = v72 + 1LL;
            if ( v72 != -1 )
            {
              v59 = sub_1987B0(v11 + 8, 0, v72 + 1LL, 1);
              *(_QWORD *)(v11 + 8) = v59;
              v31 = v72;
              v32 = (void *)v59;
              v33 = v72 + 1LL;
            }
            *(_QWORD *)(v11 + 16) = v33;
            v73 = (_BYTE *)v31;
            memmove(v32, srcc, v31);
            v73[*(_QWORD *)(v11 + 8)] = 0;
            break;
          case 'I':
          case 'U':
            v12 = sub_D43C0(*(_QWORD *)(v7 + 24), v9);
            if ( !v11 )
              goto LABEL_55;
            srcd = (void *)v12;
            sub_176520(v11);
            *(_BYTE *)v11 = 9;
            v13 = (unsigned __int64)srcd;
            goto LABEL_8;
          case 'i':
          case 'y':
            v14 = sub_D4390(*(_QWORD *)(v7 + 24), v9);
            if ( !v11 )
              goto LABEL_59;
            srce = v14;
            sub_176520(v11);
            *(_BYTE *)v11 = 2;
            v13 = srce;
            goto LABEL_8;
          case 's':
            goto LABEL_33;
          case 't':
            goto LABEL_20;
          case 'u':
            srcb = sub_D4390(*(_QWORD *)(v7 + 24), v9);
            v29 = srcb;
            if ( !v11 )
              goto LABEL_64;
            sub_176520(v11);
            *(_BYTE *)v11 = 2;
            v13 = srcb;
LABEL_8:
            *(_QWORD *)(v11 + 8) = v13;
            break;
          default:
            goto LABEL_89;
        }
        v8 = a2[++v6];
        if ( !v8 )
          return 1;
        v9 = (unsigned int)v6;
        v10 = *a4;
        v11 = *a4 + 32LL * (int)v6;
        if ( v8 == 32 )
          goto LABEL_11;
      }
    }
    while ( v8 == 32 )
    {
      v8 = a2[++v6];
      if ( !v8 )
        return 1;
      v9 = (unsigned int)v6;
    }
    switch ( v8 )
    {
      case 'B':
        srcc = (void *)sub_EDF00(*(_QWORD *)(v7 + 24));
        v30 = sub_D9D40(*(_QWORD *)(v7 + 24), (unsigned int)v9);
LABEL_46:
        v34 = *a3;
        if ( (unsigned int)*a3 > 0x2F )
        {
          v35 = *((__int64 ***)a3 + 1);
          *((_QWORD *)a3 + 1) = v35 + 1;
        }
        else
        {
          v35 = (__int64 **)(*((_QWORD *)a3 + 2) + v34);
          *a3 = v34 + 8;
        }
        v36 = v30;
        if ( !v30 )
          goto LABEL_29;
        v37 = *v35;
        v38 = (*v35)[1];
        v39 = v38 + v30;
        if ( !__CFADD__(v38, v30) )
          goto LABEL_85;
        if ( v38 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v39 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_85:
          v55 = *v37;
          v56 = (*v35)[1];
          if ( v37[2] < v39 )
          {
            v84 = (*v35)[1];
            v80 = v39;
            v76 = *v35;
            v60 = sub_1987B0(*v35, v55, v39, 1);
            v37 = v76;
            v38 = v84;
            v55 = v60;
            v39 = v80;
            *v76 = v60;
            v56 = v76[1];
          }
          v82 = v38;
          v78 = v37;
          v75 = (void *)v39;
          memset((void *)(v55 + v56), 0, v39 - v56);
          v37 = v78;
          v38 = v82;
          v78[1] = (__int64)v75;
        }
        else if ( v38 != 0x7FFFFFFFFFFFFFFFLL )
        {
          v37[1] = 0x7FFFFFFFFFFFFFFFLL;
        }
        memcpy((void *)(v38 + *v37), srcc, v36);
        goto LABEL_29;
      case 'I':
      case 'U':
        v12 = sub_D43C0(*(_QWORD *)(v7 + 24), v9);
LABEL_55:
        v40 = *a3;
        if ( (unsigned int)*a3 > 0x2F )
        {
          v41 = *((__int64 ***)a3 + 1);
          *((_QWORD *)a3 + 1) = v41 + 1;
        }
        else
        {
          v41 = (__int64 **)(*((_QWORD *)a3 + 2) + v40);
          *a3 = v40 + 8;
        }
        **v41 = v12;
        goto LABEL_29;
      case 'i':
      case 'y':
        v14 = sub_D4390(*(_QWORD *)(v7 + 24), v9);
LABEL_59:
        v42 = *a3;
        if ( (unsigned int)*a3 > 0x2F )
        {
          v43 = *((_DWORD ***)a3 + 1);
          *((_QWORD *)a3 + 1) = v43 + 1;
        }
        else
        {
          v43 = (_DWORD **)(*((_QWORD *)a3 + 2) + v42);
          *a3 = v42 + 8;
        }
        **v43 = v14;
        goto LABEL_29;
      case 's':
        v11 = 0;
LABEL_33:
        v71 = (void *)sub_EDF30(*(_QWORD *)(v7 + 24));
        v24 = sub_D9D40(*(_QWORD *)(v7 + 24), (unsigned int)v9);
        v25 = v24;
        if ( v11 )
        {
          srca = v24;
          sub_176520(v11);
          v26 = srca;
          *(_BYTE *)v11 = 7;
          *(_QWORD *)(v11 + 8) = 0;
          *(_OWORD *)(v11 + 16) = 0;
          if ( srca )
          {
            v27 = (char *)(srca + 1);
            if ( srca == -1 )
            {
              v28 = nullptr;
            }
            else
            {
              v57 = sub_1987B0(v11 + 8, 0, v27, 1);
              *(_QWORD *)(v11 + 8) = v57;
              v26 = srca;
              v28 = (void *)v57;
              v27 = (char *)(srca + 1);
            }
            *(_QWORD *)(v11 + 16) = v27;
            srcg = (_BYTE *)v26;
            memmove(v28, v71, v26);
            srcg[*(_QWORD *)(v11 + 8)] = 0;
          }
        }
        else
        {
          v48 = *a3;
          if ( (unsigned int)*a3 <= 0x2F )
          {
            v49 = (__int64 **)(*((_QWORD *)a3 + 2) + v48);
            *a3 = v48 + 8;
          }
          else
          {
            v49 = *((__int64 ***)a3 + 1);
            *((_QWORD *)a3 + 1) = v49 + 1;
          }
          v50 = *v49;
          v51 = v25;
          v52 = (*v49)[1];
          if ( v52 )
            v51 = --v52 + v25;
          v53 = *v50;
          v54 = v51 + 1;
          if ( v50[2] < v51 + 1 )
          {
            v86 = v25;
            v83 = v51;
            v79 = v52;
            srch = (void *)(v51 + 1);
            v58 = sub_1987B0(v50, v53, v54, 1);
            v25 = v86;
            v51 = v83;
            v52 = v79;
            v54 = (__int64)srch;
            *v50 = v58;
            v53 = v58;
          }
          v50[1] = v54;
          *(_BYTE *)(v53 + v51) = 0;
          memmove((void *)(v52 + *v50), v71, v25);
        }
        goto LABEL_29;
      case 't':
        v11 = 0;
LABEL_20:
        v15 = *(_QWORD *)(v7 + 24);
        v88 = nullptr;
        v89 = 0;
        src = (void *)sub_EDF30(v15);
        v16 = sub_D9D40(*(_QWORD *)(v7 + 24), (unsigned int)v9);
        v17 = v89;
        v18 = v16;
        v19 = v16;
        if ( (_QWORD)v89 )
        {
          v17 = v89 - 1;
          v19 = v16 + v89 - 1;
        }
        v20 = v88;
        v21 = (void *)(v19 + 1);
        if ( *((_QWORD *)&v89 + 1) < (unsigned __int64)(v19 + 1) )
        {
          v85 = v17;
          v81 = v19;
          v77 = v16;
          v74 = (void *)(v19 + 1);
          v88 = (void *)sub_1987B0(&v88, v88, v21, 1);
          v17 = v85;
          v20 = v88;
          v19 = v81;
          v18 = v77;
          v21 = v74;
        }
        *(_QWORD *)&v89 = v21;
        v20[v19] = 0;
        memmove((char *)v88 + v17, src, v18);
        v22 = nullptr;
        v87 = nullptr;
        if ( (unsigned __int64)v89 <= 1 )
          goto LABEL_25;
        result = sub_167490(&v87, v88, 1);
        if ( (_BYTE)result )
        {
          v22 = v87;
LABEL_25:
          if ( v11 )
          {
            srcf = v22;
            sub_176520(v11);
            *(_BYTE *)v11 = 9;
            *(_QWORD *)(v11 + 8) = srcf;
          }
          else
          {
            v46 = *a3;
            if ( (unsigned int)*a3 > 0x2F )
            {
              v47 = *((_QWORD ***)a3 + 1);
              *((_QWORD *)a3 + 1) = v47 + 1;
            }
            else
            {
              v47 = (_QWORD **)(*((_QWORD *)a3 + 2) + v46);
              *a3 = v46 + 8;
            }
            **v47 = v22;
          }
          if ( v88 )
          {
            *(_QWORD *)&v89 = 0;
            j__free(v88);
          }
LABEL_29:
          v8 = a2[++v6];
          if ( !v8 )
            return 1;
          continue;
        }
        if ( v88 )
        {
          *(_QWORD *)&v89 = 0;
          j__free(v88);
          return 0;
        }
        return result;
      case 'u':
        v29 = sub_D4390(*(_QWORD *)(v7 + 24), v9);
LABEL_64:
        v44 = *a3;
        if ( (unsigned int)*a3 > 0x2F )
        {
          v45 = *((unsigned int ***)a3 + 1);
          *((_QWORD *)a3 + 1) = v45 + 1;
        }
        else
        {
          v45 = (unsigned int **)(*((_QWORD *)a3 + 2) + v44);
          *a3 = v44 + 8;
        }
        **v45 = v29;
        goto LABEL_29;
      default:
LABEL_89:
        if ( !unk_2439A0 )
          sub_198E10(1627);
        BUG();
    }
  }
}
