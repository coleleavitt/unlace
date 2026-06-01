__int64 __fastcall sub_87350(__int64 a1, const char *a2, __int64 a3, double a4, double a5)
{
  unsigned int v8; // eax
  unsigned __int64 **v9; // rdx
  unsigned __int64 *v10; // rbx
  unsigned int v11; // eax
  int *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  unsigned int v18; // edx
  __int64 v19; // rdi
  __int64 *v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rsi
  _QWORD *v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rbp
  __int64 v30; // rcx
  char *v31; // r13
  int *v32; // rax
  int v33; // ebx
  __int64 v34; // rax
  __int64 *v35; // rcx
  unsigned int v36; // eax
  int *v37; // rdx
  int v38; // ebx
  int v39; // eax
  unsigned int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rsi
  _DWORD *v48; // rax
  __int64 *v49; // rdx
  __int64 *v50; // rax
  __int64 *v51; // rdx
  __int64 *v52; // rax
  char **v53; // rdx
  __int64 *v54; // rdx
  __int64 i; // rbx
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  char *haystack; // [rsp+0h] [rbp-48h]
  __int64 v59; // [rsp+8h] [rbp-40h]
  __int64 v60; // [rsp+10h] [rbp-38h]
  __int64 v61; // [rsp+18h] [rbp-30h]

  v61 = __readfsqword(0x28u);
  switch ( (unsigned __int64)a2 )
  {
    case 0uLL:
      sub_5CE40(*(_QWORD *)(a1 + 16));
      goto LABEL_3;
    case 1uLL:
LABEL_3:
      netnode_supset();
      netnode_supset();
      return 0;
    case 2uLL:
      v11 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v12 = *(int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v12 + 2;
      }
      else
      {
        v12 = (int *)(*(_QWORD *)(a3 + 16) + v11);
        *(_DWORD *)a3 = v11 + 8;
      }
      if ( *v12 <= 699 && (unsigned __int16)getinf() > 0x2BBu )
      {
        sub_87260(*(_QWORD *)(a1 + 16));
        sub_61E20(*(_QWORD *)(a1 + 16));
      }
      return 0;
    case 3uLL:
      if ( (unsigned int)getinf() == 22 )
      {
        for ( i = get_first_seg(); i; i = get_next_seg() )
        {
          if ( !*(_BYTE *)(i + 184) )
          {
            a2 = (const char *)i;
            if ( get_segm_class() <= 0 )
            {
              a2 = "UNK";
              set_segm_class();
            }
          }
        }
      }
      sub_38F00(*(_QWORD *)(a1 + 16));
      v17 = *(_QWORD *)(a1 + 16);
      if ( !*(_BYTE *)(v17 + 208) )
      {
        *(_BYTE *)(v17 + 208) = 1;
        sub_86BC0(*(_QWORD *)(a1 + 16), (__int64)a2, v13, v14, v15, v16);
        v17 = *(_QWORD *)(a1 + 16);
      }
      sub_4D200(v17, (__int64)a2, v13, v14, v15, v16, (__int64)haystack, v59, v60, v61);
      return 0;
    case 5uLL:
      if ( (unsigned int)getinf() == 11 && (getinf() & 0xF) == 1 && (getinf() & 0x800000) != 0 )
      {
        v18 = *(_DWORD *)a3;
        v19 = *(_QWORD *)(a1 + 16);
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v20 = *(__int64 **)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v20 + 1;
        }
        else
        {
          v20 = (__int64 *)(*(_QWORD *)(a3 + 16) + v18);
          *(_DWORD *)a3 = v18 + 8;
        }
        if ( sub_87080(v19, *v20, 15) != -1 )
        {
          getinf_flag();
          if ( !(unsigned int)apply_idasgn_to() )
          {
            getinf_flag();
            plan_to_apply_idasgn();
          }
        }
      }
      return 0;
    case 7uLL:
      sub_52B00(*(_QWORD *)(a1 + 16));
      return 0;
    case 0xBuLL:
      v36 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v37 = *(int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v37 + 2;
      }
      else
      {
        v37 = (int *)(*(_QWORD *)(a3 + 16) + v36);
        *(_DWORD *)a3 = v36 + 8;
      }
      v38 = *v37;
      if ( (getinf() & 6) != 2 )
        goto LABEL_43;
      v56 = getinf() & 0xF;
      if ( (_BYTE)v56 == 7 )
      {
        if ( !v38 )
          return 0;
        setinf_flag();
        setinf_flag();
        goto LABEL_44;
      }
      v57 = -261;
      if ( !_bittest64(&v57, v56) )
        sub_52B00(*(_QWORD *)(a1 + 16));
LABEL_43:
      if ( v38 )
      {
LABEL_44:
        if ( (getinf() & 0xF) == 6 )
          getinf_flag();
        setinf_flag();
        if ( (getinf() & 0xF) == 6 )
          getinf_flag();
        setinf_flag();
        if ( (getinf() & 0xF) == 1 )
        {
          if ( (getinf() & 0xF) == 1 )
            get_abi_name();
        }
        else if ( (getinf() & 0xF) == 6 )
        {
          get_abi_name();
          getinf_flag();
          v39 = getinf();
          if ( (v39 == 176 || v39 == 256) && !(unsigned __int8)getinf_flag() )
            setinf_flag();
        }
        return 0;
      }
      return 0;
    case 0x1EuLL:
      v40 = *(_DWORD *)a3;
      if ( v40 > 0x2F )
      {
        v49 = *(__int64 **)(a3 + 8);
        v50 = v49 + 1;
        *(_QWORD *)(a3 + 8) = v49 + 1;
        v43 = *v49;
      }
      else
      {
        v41 = *(_QWORD *)(a3 + 16);
        v42 = v40 + 8;
        *(_DWORD *)a3 = v42;
        v43 = *(_QWORD *)(v41 + v40);
        if ( (unsigned int)v42 <= 0x2F )
        {
          v44 = v40 + 16;
          *(_DWORD *)a3 = v44;
          v45 = *(_QWORD *)(v41 + v42);
          if ( (unsigned int)v44 <= 0x2F )
          {
            v46 = v40 + 24;
            *(_DWORD *)a3 = v46;
            v47 = *(_QWORD *)(v41 + v44);
            if ( (unsigned int)v46 <= 0x2F )
            {
              v48 = (_DWORD *)(v46 + v41);
              *(_DWORD *)a3 = v40 + 32;
              goto LABEL_58;
            }
            v48 = *(_DWORD **)(a3 + 8);
LABEL_63:
            *(_QWORD *)(a3 + 8) = v48 + 2;
LABEL_58:
            sub_76580(*(_QWORD *)(a1 + 16), v43, v45, v47, *v48 != 0);
            return 0;
          }
          v51 = *(__int64 **)(a3 + 8);
LABEL_62:
          v48 = v51 + 1;
          *(_QWORD *)(a3 + 8) = v51 + 1;
          v47 = *v51;
          goto LABEL_63;
        }
        v50 = *(__int64 **)(a3 + 8);
      }
      v51 = v50 + 1;
      *(_QWORD *)(a3 + 8) = v50 + 1;
      v45 = *v50;
      goto LABEL_62;
    case 0x1FuLL:
      sub_6E2E0(*(_QWORD *)(a1 + 16));
      return 0;
    case 0x22uLL:
    case 0x23uLL:
    case 0x24uLL:
    case 0x25uLL:
      v8 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v9 = *(unsigned __int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v9 + 1;
      }
      else
      {
        v9 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v8);
        *(_DWORD *)a3 = v8 + 8;
      }
      v10 = *v9;
      sub_24040(*(_QWORD *)(a1 + 16), *v9);
      sub_871E0(*(_QWORD *)(a1 + 16), v10);
      if ( a2 != (_BYTE *)&qword_20 + 3 )
      {
        sub_717A0(*(_QWORD *)(a1 + 16), (__int64 *)v10);
        netnode_delblob();
      }
      return 0;
    case 0x33uLL:
      v21 = *(_DWORD *)a3;
      if ( v21 > 0x2F )
      {
        v54 = *(__int64 **)(a3 + 8);
        v25 = v54 + 1;
        *(_QWORD *)(a3 + 8) = v54 + 1;
        v24 = *v54;
      }
      else
      {
        v22 = *(_QWORD *)(a3 + 16);
        v23 = v21 + 8;
        *(_DWORD *)a3 = v23;
        v24 = *(_QWORD *)(v22 + v21);
        if ( (unsigned int)v23 <= 0x2F )
        {
          v25 = (_QWORD *)(v23 + v22);
          *(_DWORD *)a3 = v21 + 16;
          goto LABEL_29;
        }
        v25 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v25 + 1;
LABEL_29:
      sub_766E0(*(_QWORD *)(a1 + 16), v24, *v25);
      return 0;
    case 0x34uLL:
      v26 = *(_DWORD *)a3;
      if ( v26 > 0x2F )
      {
        v52 = *(__int64 **)(a3 + 8);
        v53 = (char **)(v52 + 1);
        *(_QWORD *)(a3 + 8) = v52 + 1;
        v29 = *v52;
LABEL_68:
        v32 = (int *)(v53 + 1);
        *(_QWORD *)(a3 + 8) = v53 + 1;
        v31 = *v53;
        goto LABEL_69;
      }
      v27 = *(_QWORD *)(a3 + 16);
      v28 = v26 + 8;
      *(_DWORD *)a3 = v28;
      v29 = *(_QWORD *)(v27 + v26);
      if ( (unsigned int)v28 > 0x2F )
      {
        v53 = *(char ***)(a3 + 8);
        goto LABEL_68;
      }
      v30 = v26 + 16;
      *(_DWORD *)a3 = v30;
      v31 = *(char **)(v27 + v28);
      if ( (unsigned int)v30 <= 0x2F )
      {
        v32 = (int *)(v30 + v27);
        *(_DWORD *)a3 = v26 + 24;
        goto LABEL_34;
      }
      v32 = *(int **)(a3 + 8);
LABEL_69:
      *(_QWORD *)(a3 + 8) = v32 + 2;
LABEL_34:
      v33 = *v32;
      v34 = *(_QWORD *)(a1 + 16);
      v35 = 0;
      if ( !*(_BYTE *)(v34 + 144) )
        v35 = (__int64 *)(v34 + 176);
      sub_6A880(v29, v31, v33 != 0, v35);
      if ( !v33 && v31 )
        sub_77DC0(*(_QWORD *)(a1 + 16), v29, v31, a4, a5);
      return 0;
    default:
      return 0;
  }
}
