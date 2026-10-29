__int64 __fastcall sub_B5C0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  unsigned int v6; // edx
  _DWORD *v7; // rcx
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 *v15; // rdx
  unsigned __int64 *first_seg; // rax
  unsigned __int64 *v17; // rbp
  unsigned __int64 v18; // r12
  __int64 v19; // rdx
  unsigned __int64 v20; // r13
  unsigned __int64 i; // rbp
  char **v22; // rbp
  __int64 *v23; // rbx
  __int64 v24; // rbp
  __int64 name_ea; // rax
  __int64 v26; // rsi
  unsigned int v27; // edx
  __int64 *v28; // rcx
  unsigned int v29; // edx
  const void **v30; // rcx
  unsigned int v31; // edx
  __int64 *v32; // rcx
  unsigned int v33; // edx
  _QWORD **v34; // rcx
  unsigned int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rsi
  _QWORD *v38; // rdi
  __int64 *v39; // rdx
  unsigned int v40; // edx
  __int64 *v41; // rcx
  unsigned int v42; // edx
  _BYTE **v43; // rcx
  unsigned int v44; // ecx
  _QWORD **v45; // rcx
  __int64 *v46; // rdx
  _QWORD *v47; // rdi
  unsigned int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rdi
  _DWORD *v52; // rdx
  unsigned int v53; // edx
  unsigned int v54; // ecx
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rdi
  const void **v58; // rdx
  unsigned int v59; // edx
  unsigned int v60; // edx
  _QWORD *v61; // rcx
  unsigned int v62; // ecx
  _DWORD **v63; // rcx
  __int64 *v64; // rdx
  _DWORD *v65; // rbx
  __int64 *v66; // rdx
  __int64 *v67; // rcx
  _QWORD **v68; // rcx
  __int64 *v69; // rcx
  __int64 *v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rsi
  __int64 v75; // rbp

  switch ( a2 )
  {
    case 0LL:
      setinf_flag();
      return 0;
    case 2LL:
      v6 = *(_DWORD *)a3;
      if ( v6 > 0x2F )
      {
        v7 = *(_DWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v7 + 2;
      }
      else
      {
        v7 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v6);
        *(_DWORD *)a3 = v6 + 8;
      }
      *(_DWORD *)(a1 + 120) = *v7;
      return 0;
    case 4LL:
      first_seg = (unsigned __int64 *)get_first_seg();
      v17 = first_seg;
      if ( first_seg )
      {
        v18 = *first_seg;
        if ( v18 == get_segm_base() )
        {
          setinf();
          setinf();
          v19 = v17[1];
          v20 = *v17;
          if ( v19 - *v17 > 0x10000 )
          {
            if ( (_WORD)v19 )
            {
              v75 = v17[1] & 0xFFFF0000;
              add_segm();
              v19 = v75;
            }
            for ( i = v19 - 0x10000; v20 < i; i -= 0x10000LL )
            {
              qsnprintf();
              add_segm();
            }
            getseg();
            set_segm_name();
            set_segm_class();
          }
          v22 = off_10900;
          do
          {
            if ( *((char *)v22 + 20) <= *(_DWORD *)(a1 + 120) )
            {
              getinf();
              if ( (unsigned __int8)is_mapped() )
              {
                if ( !(unsigned __int8)get_byte() )
                {
                  add_entry();
                  create_data();
                  create_data();
                  get_word();
                  op_offset();
                  get_word();
                  add_cref();
                  set_cmt();
                }
              }
            }
            v22 += 3;
          }
          while ( &off_10C88[1] != (__int64 **)v22 );
        }
      }
      add_segm();
      add_segm();
      v23 = &qword_115A0;
      getseg();
      set_default_dataseg();
      do
      {
        v24 = *((unsigned __int16 *)v23 + 1) + 33555456LL;
        name_ea = get_name_ea();
        if ( v24 != name_ea )
        {
          if ( name_ea != -1 )
            set_name();
          create_data();
          set_name();
        }
        if ( v23[2] )
          set_cmt();
        v26 = v23[4];
        v23 += 3;
      }
      while ( v26 );
      if ( (unsigned int)getinf() == 2 )
      {
        getinf();
        setinf();
      }
      return 0;
    case 10LL:
      v27 = *(_DWORD *)a3;
      if ( v27 > 0x2F )
      {
        v28 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v28 + 1;
      }
      else
      {
        v28 = (__int64 *)(*(_QWORD *)(a3 + 16) + v27);
        *(_DWORD *)a3 = v27 + 8;
      }
      return (int)sub_5680(a1, *v28);
    case 11LL:
      v29 = *(_DWORD *)a3;
      if ( v29 > 0x2F )
      {
        v30 = *(const void ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v30 + 1;
      }
      else
      {
        v30 = (const void **)(*(_QWORD *)(a3 + 16) + v29);
        *(_DWORD *)a3 = v29 + 8;
      }
      if ( !(unsigned int)sub_8690(a1, *v30, a4) )
        return -1;
      return 1;
    case 12LL:
      v31 = *(_DWORD *)a3;
      if ( v31 > 0x2F )
      {
        v32 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v32 + 1;
      }
      else
      {
        v32 = (__int64 *)(*(_QWORD *)(a3 + 16) + v31);
        *(_DWORD *)a3 = v31 + 8;
      }
      sub_AA50(a1, *v32);
      return 1;
    case 13LL:
      v33 = *(_DWORD *)a3;
      if ( v33 > 0x2F )
      {
        v34 = *(_QWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v34 + 1;
      }
      else
      {
        v34 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v33);
        *(_DWORD *)a3 = v33 + 8;
      }
      sub_AD00(a1, *v34);
      return 1;
    case 14LL:
      v35 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v68 = *(_QWORD ***)(a3 + 8);
        v39 = (__int64 *)(v68 + 1);
        *(_QWORD *)(a3 + 8) = v68 + 1;
        v38 = *v68;
      }
      else
      {
        v36 = *(_QWORD *)(a3 + 16);
        v37 = v35 + 8;
        *(_DWORD *)a3 = v37;
        v38 = *(_QWORD **)(v36 + v35);
        if ( (unsigned int)v37 <= 0x2F )
        {
          v39 = (__int64 *)(v37 + v36);
          *(_DWORD *)a3 = v35 + 16;
          goto LABEL_53;
        }
        v39 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v39 + 1;
LABEL_53:
      sub_AA70(a1, v38, *v39);
      return 1;
    case 17LL:
      v40 = *(_DWORD *)a3;
      if ( v40 > 0x2F )
      {
        v41 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v41 + 1;
      }
      else
      {
        v41 = (__int64 *)(*(_QWORD *)(a3 + 16) + v40);
        *(_DWORD *)a3 = v40 + 8;
      }
      sub_AA40(*v41);
      return 1;
    case 18LL:
      v42 = *(_DWORD *)a3;
      if ( v42 > 0x2F )
      {
        v43 = *(_BYTE ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v43 + 1;
      }
      else
      {
        v43 = (_BYTE **)(*(_QWORD *)(a3 + 16) + v42);
        *(_DWORD *)a3 = v42 + 8;
      }
      sub_A850(*v43);
      return 1;
    case 19LL:
      v44 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v45 = *(_QWORD ***)(a3 + 8);
        v46 = (__int64 *)(v45 + 1);
        *(_QWORD *)(a3 + 8) = v45 + 1;
        v47 = *v45;
LABEL_62:
        *(_QWORD *)(a3 + 8) = v46 + 1;
        goto LABEL_63;
      }
      v73 = *(_QWORD *)(a3 + 16);
      v74 = v44 + 8;
      *(_DWORD *)a3 = v74;
      v47 = *(_QWORD **)(v73 + v44);
      if ( (unsigned int)v74 > 0x2F )
      {
        v46 = *(__int64 **)(a3 + 8);
        goto LABEL_62;
      }
      v46 = (__int64 *)(v74 + v73);
      *(_DWORD *)a3 = v44 + 16;
LABEL_63:
      if ( (unsigned __int8)sub_A7D0(v47, *v46) )
        return 1;
      return -1;
    case 20LL:
      v48 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v70 = *(__int64 **)(a3 + 8);
        v52 = v70 + 1;
        *(_QWORD *)(a3 + 8) = v70 + 1;
        v51 = *v70;
      }
      else
      {
        v49 = *(_QWORD *)(a3 + 16);
        v50 = v48 + 8;
        *(_DWORD *)a3 = v50;
        v51 = *(_QWORD *)(v49 + v48);
        if ( (unsigned int)v50 <= 0x2F )
        {
          v52 = (_DWORD *)(v50 + v49);
          *(_DWORD *)a3 = v48 + 16;
          goto LABEL_68;
        }
        v52 = *(_DWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v52 + 2;
LABEL_68:
      sub_B570(a1, v51, *v52 != 0);
      return 1;
    case 25LL:
      v53 = *(_DWORD *)a3;
      if ( v53 > 0x2F )
        *(_QWORD *)(a3 + 8) += 8LL;
      else
        *(_DWORD *)a3 = v53 + 8;
      if ( getseg() )
        set_default_sreg_value();
      return 0;
    case 40LL:
      v54 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v69 = *(__int64 **)(a3 + 8);
        v58 = (const void **)(v69 + 1);
        *(_QWORD *)(a3 + 8) = v69 + 1;
        v57 = *v69;
      }
      else
      {
        v55 = *(_QWORD *)(a3 + 16);
        v56 = v54 + 8;
        *(_DWORD *)a3 = v56;
        v57 = *(_QWORD *)(v55 + v54);
        if ( (unsigned int)v56 <= 0x2F )
        {
          v58 = (const void **)(v56 + v55);
          *(_DWORD *)a3 = v54 + 16;
          return (unsigned __int8)sub_98D0(v57, *v58, a4);
        }
        v58 = *(const void ***)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v58 + 1;
      return (unsigned __int8)sub_98D0(v57, *v58, a4);
    case 43LL:
      v59 = *(_DWORD *)a3;
      if ( v59 <= 0x2F )
        *(_DWORD *)a3 = v59 + 8;
      else
        *(_QWORD *)(a3 + 8) += 8LL;
      return sub_9EE0();
    case 59LL:
      v60 = *(_DWORD *)a3;
      if ( v60 > 0x2F )
      {
        v61 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v61 + 1;
      }
      else
      {
        v61 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v60);
        *(_DWORD *)a3 = v60 + 8;
      }
      sub_9500(a1, *v61);
      return 1;
    case 60LL:
      v62 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v63 = *(_DWORD ***)(a3 + 8);
        v64 = (__int64 *)(v63 + 1);
        *(_QWORD *)(a3 + 8) = v63 + 1;
        v65 = *v63;
LABEL_85:
        *(_QWORD *)(a3 + 8) = v64 + 1;
        goto LABEL_86;
      }
      v71 = *(_QWORD *)(a3 + 16);
      v72 = v62 + 8;
      *(_DWORD *)a3 = v72;
      v65 = *(_DWORD **)(v71 + v62);
      if ( (unsigned int)v72 > 0x2F )
      {
        v64 = *(__int64 **)(a3 + 8);
        goto LABEL_85;
      }
      v64 = (__int64 *)(v72 + v71);
      *(_DWORD *)a3 = v62 + 16;
LABEL_86:
      *v65 = sub_9DC0(*v64);
      return 1;
    case 99LL:
      v9 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v66 = *(__int64 **)(a3 + 8);
        v67 = v66 + 1;
        *(_QWORD *)(a3 + 8) = v66 + 1;
        v12 = *v66;
LABEL_89:
        v15 = v67 + 1;
        *(_QWORD *)(a3 + 8) = v67 + 1;
        v14 = *v67;
        goto LABEL_90;
      }
      v10 = *(_QWORD *)(a3 + 16);
      v11 = v9 + 8;
      *(_DWORD *)a3 = v11;
      v12 = *(_QWORD *)(v10 + v9);
      if ( (unsigned int)v11 > 0x2F )
      {
        v67 = *(__int64 **)(a3 + 8);
        goto LABEL_89;
      }
      v13 = v9 + 16;
      *(_DWORD *)a3 = v13;
      v14 = *(_QWORD *)(v10 + v11);
      if ( (unsigned int)v13 <= 0x2F )
      {
        v15 = (__int64 *)(v13 + v10);
        *(_DWORD *)a3 = v9 + 24;
        goto LABEL_10;
      }
      v15 = *(__int64 **)(a3 + 8);
LABEL_90:
      *(_QWORD *)(a3 + 8) = v15 + 1;
LABEL_10:
      sub_9DE0(v12, v14, *v15);
      return 1;
    default:
      return 0;
  }
}

