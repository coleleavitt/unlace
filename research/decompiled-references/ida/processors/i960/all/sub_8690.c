__int64 __fastcall sub_8690(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int *v13; // rbx
  _DWORD *v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rsi
  const char *v24; // rdi
  __int64 v25; // rcx
  int v26; // r9d
  __int64 v27; // rsi
  _DWORD *v28; // r10
  __int64 v29; // rcx
  __int64 *v30; // r12
  _DWORD *v31; // rax
  __int64 v32; // rax
  unsigned int v33; // eax
  _QWORD *v34; // rdx
  unsigned int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 *v39; // rax
  unsigned int v40; // eax
  _BYTE **v41; // rdx
  unsigned int v42; // eax
  __int64 *v43; // rdx
  unsigned int v44; // edx
  unsigned int v45; // eax
  _QWORD *v46; // rdx
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rsi
  unsigned int v50; // eax
  __int64 *v51; // rdx
  unsigned int v52; // eax
  __int64 *v53; // rdx
  unsigned int v54; // edx
  __int64 v55; // rax
  __int64 v56; // rcx
  _DWORD *v57; // rax
  unsigned int v58; // eax
  __int64 *v59; // rdx
  unsigned int v60; // eax
  __int64 *v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // r14
  _QWORD *v64; // rbp
  __int64 v65; // rdi
  __int64 v66; // r12
  __int64 i; // r15
  _QWORD *v68; // r13
  __int64 *v69; // rdx
  __int64 v70; // rax
  __int64 *v71; // rdx
  __int64 *v72; // rax
  const char **v73; // rax
  int *v74; // rdx
  _DWORD **v75; // rax
  _QWORD **v76; // rdx
  unsigned int **v77; // rdx
  __int64 v78; // [rsp+0h] [rbp-68h]
  __int64 v79; // [rsp+0h] [rbp-68h]
  int v80; // [rsp+8h] [rbp-60h]
  __int64 v81; // [rsp+8h] [rbp-60h]
  __int64 v82; // [rsp+10h] [rbp-58h] BYREF
  __int128 v83; // [rsp+18h] [rbp-50h]
  unsigned __int64 v84; // [rsp+28h] [rbp-40h]
  __int64 v85; // [rsp+30h] [rbp-38h]

  v84 = __readfsqword(0x28u);
  if ( (__int64)a2 <= 96 )
  {
    if ( (__int64)a2 >= 0 )
    {
      switch ( (unsigned __int64)a2 )
      {
        case 0uLL:
        case 0x5FuLL:
          netnode_check();
          return 0;
        case 1uLL:
          v62 = *(_QWORD *)(a1 + 160);
          if ( v62 )
          {
            v81 = *(_QWORD *)(a1 + 168);
            if ( v81 )
            {
              v79 = 0;
              v63 = 0;
              do
              {
                v64 = (_QWORD *)(v62 + v63);
                v65 = *(_QWORD *)(v62 + v63 + 56);
                if ( v65 )
                {
                  v66 = v64[8];
                  if ( v66 )
                  {
                    for ( i = 0; i != v66; ++i )
                    {
                      v68 = (_QWORD *)(v65 + 48 * i);
                      if ( v68[3] )
                      {
                        v68[4] = 0;
                        qfree();
                      }
                      if ( *v68 )
                      {
                        v68[1] = 0;
                        qfree();
                      }
                      v65 = v64[7];
                    }
                  }
                  v64[8] = 0;
                  qfree();
                }
                if ( v64[4] )
                {
                  v64[5] = 0;
                  qfree();
                }
                if ( v64[1] )
                {
                  v64[2] = 0;
                  qfree();
                }
                ++v79;
                v62 = *(_QWORD *)(a1 + 160);
                v63 += 88;
              }
              while ( v81 != v79 );
            }
            *(_QWORD *)(a1 + 168) = 0;
            qfree();
            *(_QWORD *)(a1 + 160) = 0;
            *(_QWORD *)(a1 + 176) = 0;
          }
          clr_module_data();
          return 0;
        case 2uLL:
          v54 = *(_DWORD *)a3;
          if ( v54 > 0x2F )
          {
            v57 = (_DWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
            *(_QWORD *)(a3 + 8) = v57;
          }
          else
          {
            v55 = *(_QWORD *)(a3 + 16);
            v56 = v54 + 8;
            *(_DWORD *)a3 = v56;
            if ( (unsigned int)v56 <= 0x2F )
            {
              v57 = (_DWORD *)(v56 + v55);
              *(_DWORD *)a3 = v54 + 16;
              goto LABEL_74;
            }
            v57 = *(_DWORD **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v57 + 2;
LABEL_74:
          if ( !*v57 )
            setinf_flag();
          return 0;
        case 4uLL:
          if ( (unsigned __int8)choose_ioport_device() )
            sub_8210(a1);
          v82 = *(unsigned __int16 *)(a1 + 232);
          netnode_supset();
          return 0;
        case 5uLL:
          a2 = &v82;
          v83 = 0;
          v82 = 0;
          if ( netnode_qsupstr() >= 0 )
          {
            netnode_supset();
            a2 = nullptr;
            netnode_supdel();
          }
          if ( v82 )
          {
            *(_QWORD *)&v83 = 0;
            qfree();
          }
          goto LABEL_10;
        case 8uLL:
          v21 = *(_DWORD *)a3;
          if ( v21 > 0x2F )
          {
            v73 = *(const char ***)(a3 + 8);
            v74 = (int *)(v73 + 1);
            *(_QWORD *)(a3 + 8) = v73 + 1;
            v24 = *v73;
          }
          else
          {
            v22 = *(_QWORD *)(a3 + 16);
            v23 = v21 + 8;
            *(_DWORD *)a3 = v23;
            v24 = *(const char **)(v22 + v21);
            if ( (unsigned int)v23 <= 0x2F )
            {
              v25 = v21 + 16;
              *(_DWORD *)a3 = v25;
              v26 = *(_DWORD *)(v22 + v23);
              if ( (unsigned int)v25 <= 0x2F )
              {
                v27 = v21 + 24;
                *(_DWORD *)a3 = v27;
                v28 = *(_DWORD **)(v22 + v25);
                if ( (unsigned int)v27 <= 0x2F )
                {
                  v29 = v21 + 32;
                  *(_DWORD *)a3 = v29;
                  v30 = *(__int64 **)(v22 + v27);
                  if ( (unsigned int)v29 <= 0x2F )
                  {
                    v31 = (_DWORD *)(v29 + v22);
                    *(_DWORD *)a3 = v21 + 40;
                    goto LABEL_33;
                  }
                  v31 = *(_DWORD **)(a3 + 8);
LABEL_124:
                  *(_QWORD *)(a3 + 8) = v31 + 2;
LABEL_33:
                  v32 = sub_83B0(a1, v24, v26, v28, *v31 != 0);
                  if ( v32 )
                  {
                    if ( v30 )
                      *v30 = v32;
                    return -1;
                  }
                  return 1;
                }
                v76 = *(_QWORD ***)(a3 + 8);
LABEL_123:
                v31 = v76 + 1;
                *(_QWORD *)(a3 + 8) = v76 + 1;
                v30 = *v76;
                goto LABEL_124;
              }
              v75 = *(_DWORD ***)(a3 + 8);
LABEL_122:
              v76 = (_QWORD **)(v75 + 1);
              *(_QWORD *)(a3 + 8) = v75 + 1;
              v28 = *v75;
              goto LABEL_123;
            }
            v74 = *(int **)(a3 + 8);
          }
          v75 = (_DWORD **)(v74 + 2);
          *(_QWORD *)(a3 + 8) = v74 + 2;
          v26 = *v74;
          goto LABEL_122;
        case 0xAuLL:
          v52 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v53 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v53 + 1;
          }
          else
          {
            v53 = (__int64 *)(*(_QWORD *)(a3 + 16) + v52);
            *(_DWORD *)a3 = v52 + 8;
          }
          return (int)sub_6040(a1, *v53);
        case 0xBuLL:
          v50 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v51 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v51 + 1;
          }
          else
          {
            v51 = (__int64 *)(*(_QWORD *)(a3 + 16) + v50);
            *(_DWORD *)a3 = v50 + 8;
          }
          if ( !(unsigned int)sub_6310(a1, *v51) )
            return -1;
          return 1;
        case 0xCuLL:
          v60 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v61 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v61 + 1;
          }
          else
          {
            v61 = (__int64 *)(*(_QWORD *)(a3 + 16) + v60);
            *(_DWORD *)a3 = v60 + 8;
          }
          sub_70A0(*v61);
          return 1;
        case 0xDuLL:
          v58 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v59 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v59 + 1;
          }
          else
          {
            v59 = (__int64 *)(*(_QWORD *)(a3 + 16) + v58);
            *(_DWORD *)a3 = v58 + 8;
          }
          sub_70D0(a1, *v59);
          return 1;
        case 0xEuLL:
          v47 = *(_DWORD *)a3;
          if ( v47 > 0x2F )
          {
            v71 = *(__int64 **)(a3 + 8);
            v72 = v71 + 1;
            *(_QWORD *)(a3 + 8) = v71 + 1;
            v49 = *v71;
          }
          else
          {
            v48 = *(_QWORD *)(a3 + 16);
            *(_DWORD *)a3 = v47 + 8;
            v49 = *(_QWORD *)(v48 + v47);
            if ( v47 + 8 <= 0x2F )
            {
              *(_DWORD *)a3 = v47 + 16;
              goto LABEL_63;
            }
            v72 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v72 + 1;
LABEL_63:
          sub_6E00(a1, v49);
          return 1;
        case 0xFuLL:
          v44 = *(_DWORD *)a3;
          if ( v44 > 0x2F )
          {
            v70 = *(_QWORD *)(a3 + 8) + 8LL;
            *(_QWORD *)(a3 + 8) = v70;
          }
          else
          {
            *(_DWORD *)a3 = v44 + 8;
            if ( v44 + 8 <= 0x2F )
            {
              *(_DWORD *)a3 = v44 + 16;
              goto LABEL_54;
            }
            v70 = *(_QWORD *)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v70 + 8;
LABEL_54:
          nullsub_1();
          return 1;
        case 0x11uLL:
          v42 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v43 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v43 + 1;
          }
          else
          {
            v43 = (__int64 *)(*(_QWORD *)(a3 + 16) + v42);
            *(_DWORD *)a3 = v42 + 8;
          }
          sub_6DF0(*v43);
          return 1;
        case 0x12uLL:
          v40 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v41 = *(_BYTE ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v41 + 1;
          }
          else
          {
            v41 = (_BYTE **)(*(_QWORD *)(a3 + 16) + v40);
            *(_DWORD *)a3 = v40 + 8;
          }
          sub_6770(*v41);
          return 1;
        case 0x13uLL:
          v35 = *(_DWORD *)a3;
          if ( v35 > 0x2F )
          {
            v69 = *(__int64 **)(a3 + 8);
            v39 = v69 + 1;
            *(_QWORD *)(a3 + 8) = v69 + 1;
            v37 = *v69;
          }
          else
          {
            v36 = *(_QWORD *)(a3 + 16);
            a4 = v35 + 8;
            *(_DWORD *)a3 = a4;
            v37 = *(_QWORD *)(v36 + v35);
            if ( (unsigned int)a4 <= 0x2F )
            {
              v38 = v35 + 16;
              v39 = (__int64 *)(a4 + v36);
              *(_DWORD *)a3 = v38;
              goto LABEL_43;
            }
            v39 = *(__int64 **)(a3 + 8);
          }
          v38 = (__int64)(v39 + 1);
          *(_QWORD *)(a3 + 8) = v39 + 1;
LABEL_43:
          if ( !(unsigned __int8)sub_6C00(v37, *v39, a7, v38, a4, a5, a6) )
            return -1;
          return 1;
        case 0x2BuLL:
          v33 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v34 = *(_QWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v34 + 1;
          }
          else
          {
            v34 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v33);
            *(_DWORD *)a3 = v33 + 8;
          }
          return (int)sub_6560(*v34);
        case 0x56uLL:
LABEL_10:
          sub_84B0(a1, (__int64)a2, a3, a4, a5, a6, v78, v80, v82, v83, SDWORD2(v83), v84, v85);
          return 0;
        case 0x5EuLL:
          v45 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v46 = *(_QWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v46 + 1;
          }
          else
          {
            v46 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v45);
            *(_DWORD *)a3 = v45 + 8;
          }
          sub_9C40(*v46, (_DWORD)a2, (_DWORD)v46, a4, a5, a6);
          return 0;
        case 0x60uLL:
          if ( !(_BYTE)byte_F388 && __cxa_guard_acquire(&byte_F388) )
          {
            qword_F340 = *(_QWORD *)(a1 + 120);
            qword_F358 = qword_F340;
            __cxa_guard_release(&byte_F388);
          }
          return (int)cvt64_node_supval_for_event();
        default:
          return 0;
      }
    }
    return 0;
  }
  if ( a2 != (__int64 *)((char *)&stru_7C8.st_size + 1) && a2 != (__int64 *)((char *)&stru_7C8.st_size + 7) )
  {
    if ( a2 != (__int64 *)((char *)&stru_7C8.st_value + 4) )
      return 0;
    v10 = *(_DWORD *)a3;
    if ( v10 > 0x2F )
    {
      v77 = *(unsigned int ***)(a3 + 8);
      v14 = v77 + 1;
      *(_QWORD *)(a3 + 8) = v77 + 1;
      v13 = *v77;
    }
    else
    {
      v11 = *(_QWORD *)(a3 + 16);
      v12 = v10 + 8;
      *(_DWORD *)a3 = v12;
      v13 = *(unsigned int **)(v11 + v10);
      if ( (unsigned int)v12 <= 0x2F )
      {
        v14 = (_DWORD *)(v12 + v11);
        *(_DWORD *)a3 = v10 + 16;
LABEL_17:
        v15 = (unsigned int)(*v14 - 112);
        if ( (unsigned int)v15 <= 0x20 )
        {
          v16 = 0x100010001LL;
          if ( _bittest64(&v16, v15) )
          {
            v17 = *((_QWORD *)v13 + 1);
            *v13 = 0;
            if ( v17 )
            {
              *((_QWORD *)v13 + 2) = 0;
              qfree();
              *((_QWORD *)v13 + 1) = 0;
              *((_QWORD *)v13 + 3) = 0;
            }
            if ( *((_QWORD *)v13 + 4) )
            {
              *((_QWORD *)v13 + 5) = 0;
              qfree();
              *((_QWORD *)v13 + 4) = 0;
              *((_QWORD *)v13 + 6) = 0;
            }
            v18 = *((_QWORD *)v13 + 2);
            v19 = *v13;
            v13[1] = v18;
            if ( (unsigned int)v19 <= 6 )
            {
              v20 = 84;
              if ( _bittest64(&v20, v19) )
                v13[1] = v13[10] + v18;
            }
            return 1;
          }
        }
        return 0;
      }
      v14 = *(_DWORD **)(a3 + 8);
    }
    *(_QWORD *)(a3 + 8) = v14 + 2;
    goto LABEL_17;
  }
  return -1;
}

