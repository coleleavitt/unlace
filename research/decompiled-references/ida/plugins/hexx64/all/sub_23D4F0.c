__int64 __fastcall sub_23D4F0(__int64 a1, __int64 **a2, __m128 a3, __m128 a4)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v8; // rbp
  __int64 v9; // r15
  unsigned __int64 v10; // r13
  int v11; // r14d
  __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // rdx
  __int64 v15; // rdi
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rdi
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // edx
  __int64 v37; // rcx
  int v38; // eax
  char tinfo_property; // al
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 *v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  int v45; // esi
  __int64 v46; // r14
  _QWORD *v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // rsi
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 *v52; // rax
  __int64 *v53; // rcx
  __int64 v54; // rdi
  int v55; // eax
  __int64 v56; // rdx
  __int64 *v57; // rcx
  __int64 v58; // rsi
  unsigned __int64 v59; // r9
  int v60; // esi
  __int64 v61; // r8
  bool v62; // di
  __int64 v63; // rdx
  __int64 *v64; // rcx
  __int64 *v65; // rdx
  __int64 v66; // rcx
  unsigned __int64 v67; // rsi
  __int64 v68; // rdx
  __int64 *v69; // rcx
  __int64 v70; // rcx
  _QWORD *v71; // rax
  __int64 v72; // rcx
  _QWORD *v73; // rax
  __int64 v74; // rcx
  _QWORD *v75; // rax

  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 112);
  v8 = (__int64)(*a2 + 3);
  if ( v6 == *(_QWORD *)(a1 + 120) )
  {
    v18 = *((_DWORD *)v5 + 20);
    if ( (v18 & 1) != 0 )
      goto LABEL_35;
LABEL_43:
    if ( (v18 & 2) != 0 )
    {
      if ( *(_QWORD *)(v8 + 40) == -1 )
      {
        v36 = *(_DWORD *)(a1 + 296);
        if ( v36 == 2 )
        {
LABEL_51:
          if ( (v18 & 0x200) == 0 )
          {
            v31 = *a2;
            v68 = **a2;
            if ( (v68 & 2) != 0 )
              goto LABEL_38;
            v69 = (__int64 *)v31[2];
            if ( (*(_BYTE *)v69 & 2) == 0 )
            {
              do
              {
                v31 = v69;
                v69 = (__int64 *)v69[1];
              }
              while ( (*(_BYTE *)v69 & 2) == 0 );
              goto LABEL_38;
            }
            v47 = (_QWORD *)(v68 & 0xFFFFFFFFFFFFFFFCLL);
            v74 = *v47;
            if ( (*v47 & 2) != 0 || (__int64 *)v47[2] != v31 )
              goto LABEL_81;
            while ( 1 )
            {
              v75 = v47;
              v49 = v74 & 0xFFFFFFFFFFFFFFFCLL;
              v74 = *(_QWORD *)(v74 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v74 & 2) != 0 )
                goto LABEL_76;
              v47 = (_QWORD *)v49;
              if ( *(_QWORD **)(v49 + 16) != v75 )
                goto LABEL_81;
            }
          }
LABEL_52:
          v19 = *(_QWORD *)(a1 + 112);
          v37 = *(_QWORD *)(a1 + 120);
          if ( v19 != v37 )
          {
            v38 = *(_DWORD *)(v8 + 56);
            if ( (v38 & 1) != 0 )
              goto LABEL_17;
            if ( (v38 & 2) == 0 )
            {
              v20 = *(_QWORD *)(v8 + 32);
              if ( (v38 & 0x20) != 0 )
              {
LABEL_107:
                v21 = v19 + 24;
                if ( v20 == *(_QWORD *)(v19 + 56) )
                  goto LABEL_18;
                goto LABEL_108;
              }
              goto LABEL_58;
            }
            if ( *(_QWORD *)(v8 + 40) == -1 )
            {
              if ( (v38 & 0x1018) == 0 )
              {
                v58 = *(_QWORD *)(a1 + 128);
                goto LABEL_101;
              }
            }
            else
            {
              tinfo_property = get_tinfo_property();
              v19 = *(_QWORD *)(a1 + 112);
              v37 = *(_QWORD *)(a1 + 120);
              if ( (tinfo_property & 0xF) == 0xB )
              {
                v20 = *(_QWORD *)(v8 + 32);
                goto LABEL_58;
              }
              v38 = *(_DWORD *)(v8 + 56);
              if ( (v38 & 2) != 0 && (v38 & 0x1018) == 0 )
              {
                v58 = *(_QWORD *)(a1 + 128);
                if ( v19 == v37 )
                {
                  v60 = v58 + 1;
                  v59 = -1;
LABEL_102:
                  v61 = *(int *)(v8 + 52);
                  v20 = *(_QWORD *)(v8 + 32);
                  v62 = v59 >= v20 && v61 != 0;
                  if ( v60 )
                  {
                    if ( !v62 || v61 + v20 - 1 < v59 + v60 - 1 )
                      goto LABEL_108;
                  }
                  else if ( !v62 || v61 + v20 - 1 < v59 )
                  {
                    goto LABEL_108;
                  }
LABEL_105:
                  if ( (v38 & 0x20) != 0 )
                  {
                    if ( v37 != v19 )
                      goto LABEL_107;
                    if ( v20 == -1 )
                      goto LABEL_59;
LABEL_108:
                    v31 = *a2;
                    v63 = **a2;
                    if ( (v63 & 2) != 0 )
                      goto LABEL_38;
                    v64 = (__int64 *)v31[2];
                    if ( (*(_BYTE *)v64 & 2) == 0 )
                    {
                      do
                      {
                        v31 = v64;
                        v64 = (__int64 *)v64[1];
                      }
                      while ( (*(_BYTE *)v64 & 2) == 0 );
                      goto LABEL_38;
                    }
                    v47 = (_QWORD *)(v63 & 0xFFFFFFFFFFFFFFFCLL);
                    v50 = *v47;
                    if ( (*v47 & 2) != 0 || (__int64 *)v47[2] != v31 )
                      goto LABEL_81;
                    while ( 1 )
                    {
                      v51 = v47;
                      v49 = v50 & 0xFFFFFFFFFFFFFFFCLL;
                      v50 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v50 & 2) != 0 )
                        goto LABEL_76;
                      v47 = (_QWORD *)v49;
                      if ( *(_QWORD **)(v49 + 16) != v51 )
                        goto LABEL_81;
                    }
                  }
LABEL_58:
                  if ( v37 != v19 )
                  {
                    v21 = v19 + 24;
                    goto LABEL_18;
                  }
LABEL_59:
                  v22 = -1;
                  goto LABEL_19;
                }
LABEL_101:
                v59 = *(_QWORD *)(v19 + 56);
                v60 = v58 - *(_DWORD *)(v19 + 56);
                goto LABEL_102;
              }
            }
            v20 = *(_QWORD *)(v8 + 32);
            goto LABEL_105;
          }
LABEL_35:
          v30 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(v30 + 2) & 4) == 0
            || (v40 = *(_QWORD *)(v8 + 32), v40 >= *(_QWORD *)(v30 + 128))
            || sub_317040(
                 (unsigned __int64 **)(v30 + 848),
                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v30 + 1440) + v40)) )
          {
            *(_QWORD *)(a1 + 112) = *a2;
            goto LABEL_37;
          }
          if ( (*(_BYTE *)(v8 + 56) & 1) != 0 )
          {
            if ( !under_debugger )
              sub_383060(0xCC98u, *(double *)a3.m128_u64);
            BUG();
          }
          v31 = *a2;
          v41 = **a2;
          if ( (v41 & 2) != 0 )
            goto LABEL_38;
          v42 = (__int64 *)v31[2];
          if ( (*(_BYTE *)v42 & 2) == 0 )
          {
            do
            {
              v31 = v42;
              v42 = (__int64 *)v42[1];
            }
            while ( (*(_BYTE *)v42 & 2) == 0 );
            goto LABEL_38;
          }
          v47 = (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
          v70 = *v47;
          if ( (*v47 & 2) != 0 || (__int64 *)v47[2] != v31 )
          {
LABEL_81:
            v31 = v47;
            goto LABEL_38;
          }
          while ( 1 )
          {
            v71 = v47;
            v49 = v70 & 0xFFFFFFFFFFFFFFFCLL;
            v70 = *(_QWORD *)(v70 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v70 & 2) != 0 )
              break;
            v47 = (_QWORD *)v49;
            if ( *(_QWORD **)(v49 + 16) != v71 )
              goto LABEL_81;
          }
LABEL_76:
          v31 = (__int64 *)v49;
          goto LABEL_38;
        }
      }
      else
      {
        if ( (get_tinfo_property() & 0xF) == 0xB )
        {
          v34 = *(_QWORD *)(v8 + 32);
          v35 = *(int *)(v8 + 52);
          if ( (_DWORD)v35 != -1 )
            v34 += v35;
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) >= v34 )
            goto LABEL_52;
        }
        v36 = *(_DWORD *)(a1 + 296);
        if ( v36 == 2 )
        {
          v18 = *(_DWORD *)(v8 + 56);
          if ( (v18 & 2) == 0 )
            goto LABEL_52;
          goto LABEL_51;
        }
      }
    }
    else
    {
      v36 = *(_DWORD *)(a1 + 296);
      if ( v36 == 2 )
        goto LABEL_52;
    }
    if ( v36 == 1 )
    {
      v55 = *(_DWORD *)(v8 + 56);
      if ( (v55 & 2) != 0 && (v55 & 0x1018) == 0 )
      {
        v31 = *a2;
        v56 = **a2;
        if ( (v56 & 2) != 0 )
          goto LABEL_38;
        v57 = (__int64 *)v31[2];
        if ( (*(_BYTE *)v57 & 2) == 0 )
        {
          do
          {
            v31 = v57;
            v57 = (__int64 *)v57[1];
          }
          while ( (*(_BYTE *)v57 & 2) == 0 );
          goto LABEL_38;
        }
        v47 = (_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFCLL);
        v72 = *v47;
        if ( (*v47 & 2) != 0 || (__int64 *)v47[2] != v31 )
          goto LABEL_81;
        while ( 1 )
        {
          v73 = v47;
          v49 = v72 & 0xFFFFFFFFFFFFFFFCLL;
          v72 = *(_QWORD *)(v72 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v72 & 2) != 0 )
            goto LABEL_76;
          v47 = (_QWORD *)v49;
          if ( *(_QWORD **)(v49 + 16) != v73 )
            goto LABEL_81;
        }
      }
    }
    goto LABEL_52;
  }
  v9 = *(_QWORD *)(a1 + 8);
  v10 = v5[7];
  v11 = *((_DWORD *)v5 + 19);
  if ( (signed __int64)v10 < *(_QWORD *)(v9 + 144) )
    goto LABEL_3;
  v29 = *(_DWORD *)(v9 + 72);
  if ( v29 <= 0x10 )
  {
    v43 = getinf();
    if ( v43 == 176 || v43 == 256 )
      goto LABEL_32;
  }
  else if ( v29 == 256 || v29 == 176 )
  {
LABEL_3:
    v12 = *(_QWORD *)(a1 + 128);
LABEL_4:
    v13 = v12 - *(_DWORD *)(v6 + 56);
    v14 = *(_QWORD *)(v6 + 56);
    v15 = v14 - 1;
    goto LABEL_5;
  }
  if ( !(unsigned __int8)getinf_flag() )
  {
    v44 = *(_QWORD *)(v8 + 32);
    v45 = *(_DWORD *)(v8 + 52);
    v46 = -*(_DWORD *)(*(_QWORD *)(v9 + 1504) + 80LL);
    v10 &= v46;
    if ( v45 != -1 )
      LODWORD(v44) = v44 + v45;
    v11 = (v44 + *(_DWORD *)(*(_QWORD *)(v9 + 1504) + 80LL) - 1 - v10) & v46;
  }
LABEL_32:
  v12 = *(_QWORD *)(a1 + 128);
  v6 = *(_QWORD *)(a1 + 112);
  if ( v6 != *(_QWORD *)(a1 + 120) )
    goto LABEL_4;
  v13 = v12 + 1;
  v15 = -2;
  v14 = -1;
LABEL_5:
  if ( v13 <= 0 )
    v13 = 1;
  if ( v15 + v13 < v10 )
    return sub_23D1B0(a1, a2, a3, a4);
  v17 = 1;
  if ( v11 > 0 )
    v17 = v11;
  if ( v10 + v17 - 1 < v14 || (*(_BYTE *)(a1 + 203) & 0x20) != 0 && *(_QWORD *)(v8 + 32) >= v12 )
    return sub_23D1B0(a1, a2, a3, a4);
  if ( (unsigned __int8)sub_2293E0(a1, (__int64)a2, *(double *)a3.m128_u64) )
  {
    v52 = *(__int64 **)(a1 + 112);
    if ( (*v52 & 2) == 0 )
    {
      v53 = (__int64 *)v52[2];
      if ( (*(_BYTE *)v53 & 2) != 0 )
      {
        v65 = (__int64 *)(*v52 & 0xFFFFFFFFFFFFFFFCLL);
        v66 = *v65;
        if ( (*v65 & 2) == 0 )
        {
          while ( (__int64 *)v65[2] == v52 )
          {
            v52 = v65;
            v67 = v66 & 0xFFFFFFFFFFFFFFFCLL;
            v66 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v66 & 2) != 0 )
            {
              v52 = (__int64 *)v67;
              goto LABEL_85;
            }
            v65 = (__int64 *)v67;
          }
        }
        v52 = v65;
      }
      else
      {
        do
        {
          v52 = v53;
          v53 = (__int64 *)v53[1];
        }
        while ( (*(_BYTE *)v53 & 2) == 0 );
      }
    }
LABEL_85:
    *(_QWORD *)(a1 + 112) = v52;
    *a2 = v52;
    v54 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 128) = -1;
    *(_DWORD *)(a1 + 136) = 0;
    *(_DWORD *)(a1 + 296) = 0;
    if ( v54 )
    {
      *(_QWORD *)(a1 + 152) = 0;
      qfree(v54);
    }
    *(_QWORD *)(a1 + 144) = 0;
    *(_OWORD *)(a1 + 152) = 0;
    copy_tinfo_t();
    *(_QWORD *)(a1 + 176) = -1;
    *(_QWORD *)(a1 + 184) = -1;
    *(_QWORD *)(a1 + 192) = 0xFFFFFFFFLL;
    *(_DWORD *)(a1 + 200) = 0;
    clear_tinfo_t();
    if ( !*(_DWORD *)(a1 + 296) )
      *(_DWORD *)(a1 + 300) = 1;
    return 1;
  }
  v18 = *(_DWORD *)(v8 + 56);
  if ( (v18 & 1) == 0 )
    goto LABEL_43;
  v19 = *(_QWORD *)(a1 + 112);
  if ( v19 == *(_QWORD *)(a1 + 120) )
    goto LABEL_35;
LABEL_17:
  v20 = *(_QWORD *)(v8 + 32);
  v21 = v19 + 24;
LABEL_18:
  v22 = *(_QWORD *)(v21 + 32);
LABEL_19:
  v23 = *(_QWORD *)(a1 + 8);
  v24 = *(_QWORD *)(v23 + 936);
  if ( v24 )
  {
    v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 40LL))(v24);
    v26 = *(_QWORD *)(v23 + 144);
    v27 = v25;
    if ( v26 <= v25 )
      v27 = *(_QWORD *)(v23 + 144);
    if ( v25 != -1 )
      v26 = v27;
  }
  else
  {
    v26 = *(_QWORD *)(v23 + 144);
  }
  if ( v22 < v26 != v26 > (__int64)v20 )
    return sub_23D1B0(a1, a2, a3, a4);
  if ( (*(_BYTE *)(v8 + 59) & 0x10) != 0 )
  {
    v28 = *(_QWORD *)(v8 + 32);
    if ( v28 != *(_QWORD *)(a1 + 176) )
    {
      *(_QWORD *)(a1 + 128) = v28;
      return sub_23D1B0(a1, a2, a3, a4);
    }
  }
LABEL_37:
  sub_229B80(a1, (__int64)*a2);
  v31 = *a2;
  v32 = **a2;
  if ( (v32 & 2) == 0 )
  {
    v33 = (__int64 *)v31[2];
    if ( (*(_BYTE *)v33 & 2) == 0 )
    {
      do
      {
        v31 = v33;
        v33 = (__int64 *)v33[1];
      }
      while ( (*(_BYTE *)v33 & 2) == 0 );
      goto LABEL_38;
    }
    v47 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
    v48 = *v47;
    if ( (*v47 & 2) == 0 )
    {
      while ( (__int64 *)v47[2] == v31 )
      {
        v31 = v47;
        v49 = v48 & 0xFFFFFFFFFFFFFFFCLL;
        v48 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v48 & 2) != 0 )
          goto LABEL_76;
        v47 = (_QWORD *)v49;
      }
    }
    goto LABEL_81;
  }
LABEL_38:
  *a2 = v31;
  return 1;
}

