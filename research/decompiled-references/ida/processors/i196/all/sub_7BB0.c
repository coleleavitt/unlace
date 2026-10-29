__int64 __fastcall sub_7BB0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // esi
  unsigned int v9; // eax
  int v10; // esi
  unsigned int v12; // edx
  int *v13; // rcx
  unsigned __int64 v14; // r13
  __int64 v15; // rdx
  __int64 *v16; // r10
  __int64 *v17; // rbp
  int v18; // ebp
  __int64 *v19; // rbx
  char v20; // al
  unsigned int v21; // edx
  __int64 *v22; // rcx
  unsigned int v23; // edx
  __int64 *v24; // rcx
  unsigned int v25; // edx
  __int64 *v26; // rcx
  unsigned int v27; // edx
  __int64 *v28; // rcx
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rdi
  unsigned int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rdi
  unsigned int v35; // edx
  unsigned __int16 **v36; // rcx
  unsigned int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 *v41; // rdx
  unsigned int v42; // edx
  __int64 *v43; // rcx
  __int64 v44; // rbp
  int v45; // ebx
  unsigned int v46; // edx
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 name_ea; // rax
  __int64 *v54; // rcx
  __int64 *v55; // rcx
  __int64 *v56; // rdx
  __int64 *v57; // rcx
  __int64 *v58; // rdx
  __int64 *v59; // [rsp+8h] [rbp-140h]
  __int64 *v60; // [rsp+10h] [rbp-138h]
  char *v61; // [rsp+20h] [rbp-128h]
  __int64 *v62; // [rsp+28h] [rbp-120h]

  switch ( a2 )
  {
    case 2LL:
      v12 = *(_DWORD *)a3;
      if ( v12 > 0x2F )
      {
        v13 = *(int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v13 + 2;
      }
      else
      {
        v13 = (int *)(*(_QWORD *)(a3 + 16) + v12);
        *(_DWORD *)a3 = v12 + 8;
      }
      v6 = *(_DWORD *)(a1 + 4LL * *v13 + 128);
      goto LABEL_3;
    case 4LL:
      if ( get_first_seg() )
        set_segm_class();
      v14 = 0;
      v15 = 6LL * (int)sub_7A20(*(_QWORD *)(a1 + 16));
      v16 = (&off_CE60)[v15 + 3];
      v17 = (&off_CE60)[v15];
      if ( v16 )
      {
        v62 = (&off_CE60)[v15];
        v18 = 0;
        v59 = (&off_CE60)[v15 + 2];
        v60 = (&off_CE60)[v15 + 3];
        v61 = (char *)v16 - 1;
        while ( 1 )
        {
          v19 = &v59[3 * v14];
          getinf();
          ++v18;
          if ( (unsigned __int8)is_mapped() )
          {
            v20 = *(_BYTE *)v19;
            if ( *(_BYTE *)v19 == 1 )
            {
              create_data();
              getinf();
              get_default_reftype();
              op_offset();
              get_word();
              getinf();
              auto_mark_range();
              auto_mark_range();
              set_cmt();
            }
            else if ( v20 == 2 )
            {
              if ( v14 < (unsigned __int64)v61 )
              {
                create_data();
                set_cmt();
              }
            }
            else if ( !v20 )
            {
              if ( v19[2] )
                sub_7960();
              else
                sub_78A0();
            }
            set_name();
          }
          if ( v18 >= (unsigned __int64)v60 )
            break;
          v14 = v18;
        }
        v17 = v62;
      }
      getinf();
      if ( (unsigned __int8)is_mapped() )
      {
        setinf();
        setinf();
      }
      getinf();
      getinf();
      getinf();
      add_segm_ex();
      if ( !v17[1] )
        return 0;
      break;
    case 10LL:
      v21 = *(_DWORD *)a3;
      if ( v21 > 0x2F )
      {
        v22 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v22 + 1;
      }
      else
      {
        v22 = (__int64 *)(*(_QWORD *)(a3 + 16) + v21);
        *(_DWORD *)a3 = v21 + 8;
      }
      return (int)sub_58D0(a1, *v22);
    case 11LL:
      v23 = *(_DWORD *)a3;
      if ( v23 > 0x2F )
      {
        v24 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v24 + 1;
      }
      else
      {
        v24 = (__int64 *)(*(_QWORD *)(a3 + 16) + v23);
        *(_DWORD *)a3 = v23 + 8;
      }
      if ( !(unsigned int)sub_6860(a1, *v24) )
        return -1;
      return 1;
    case 12LL:
      v25 = *(_DWORD *)a3;
      if ( v25 > 0x2F )
      {
        v26 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v26 + 1;
      }
      else
      {
        v26 = (__int64 *)(*(_QWORD *)(a3 + 16) + v25);
        *(_DWORD *)a3 = v25 + 8;
      }
      sub_6CD0(*v26);
      return 1;
    case 13LL:
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
      sub_6CF0(*v28);
      return 1;
    case 14LL:
      v29 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v57 = *(__int64 **)(a3 + 8);
        v58 = v57 + 1;
        *(_QWORD *)(a3 + 8) = v57 + 1;
        v31 = *v57;
      }
      else
      {
        v30 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v29 + 8;
        v31 = *(_QWORD *)(v30 + v29);
        if ( v29 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v29 + 16;
          goto LABEL_40;
        }
        v58 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v58 + 1;
LABEL_40:
      sub_6D00(a1, v31);
      return 1;
    case 15LL:
      v32 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v55 = *(__int64 **)(a3 + 8);
        v56 = v55 + 1;
        *(_QWORD *)(a3 + 8) = v55 + 1;
        v34 = *v55;
      }
      else
      {
        v33 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v32 + 8;
        v34 = *(_QWORD *)(v33 + v32);
        if ( v32 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v32 + 16;
          goto LABEL_44;
        }
        v56 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v56 + 1;
LABEL_44:
      sub_6E00(v34);
      return 1;
    case 17LL:
      v35 = *(_DWORD *)a3;
      if ( v35 > 0x2F )
      {
        v36 = *(unsigned __int16 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v36 + 1;
      }
      else
      {
        v36 = (unsigned __int16 **)(*(_QWORD *)(a3 + 16) + v35);
        *(_DWORD *)a3 = v35 + 8;
      }
      sub_7140(*v36, (unsigned int)(*(_DWORD *)(a1 + 124) - 4) <= 1);
      return 1;
    case 19LL:
      v37 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v54 = *(__int64 **)(a3 + 8);
        v41 = v54 + 1;
        *(_QWORD *)(a3 + 8) = v54 + 1;
        v40 = *v54;
      }
      else
      {
        v38 = *(_QWORD *)(a3 + 16);
        v39 = v37 + 8;
        *(_DWORD *)a3 = v39;
        v40 = *(_QWORD *)(v38 + v37);
        if ( (unsigned int)v39 <= 0x2F )
        {
          v41 = (__int64 *)(v39 + v38);
          *(_DWORD *)a3 = v37 + 16;
          goto LABEL_51;
        }
        v41 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v41 + 1;
LABEL_51:
      if ( (unsigned __int8)sub_7310(v40, *v41, a4) )
        return 1;
      else
        return -1;
    case 25LL:
      v42 = *(_DWORD *)a3;
      if ( v42 > 0x2F )
      {
        v43 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v43 + 1;
      }
      else
      {
        v43 = (__int64 *)(*(_QWORD *)(a3 + 16) + v42);
        *(_DWORD *)a3 = v42 + 8;
      }
      v44 = *v43;
      v45 = 1 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL);
      *(_QWORD *)(v44 + 8LL * v45 + 56) = getinf();
      return 0;
    case 47LL:
      v46 = *(_DWORD *)a3;
      if ( v46 > 0x2F )
      {
        v47 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v47 + 8;
      }
      else
      {
        v47 = *(_QWORD *)(a3 + 16) + v46;
        *(_DWORD *)a3 = v46 + 8;
      }
      v48 = *(unsigned __int8 *)(*(_QWORD *)v47 + 1LL);
      if ( (unsigned __int8)v48 <= 0xBu )
      {
        v49 = 2951;
        if ( _bittest64(&v49, v48) )
          return -1;
      }
      return 1;
    case 86LL:
      v6 = *(_DWORD *)(a1 + 4LL * (int)sub_7A20(*(_QWORD *)(a1 + 16)) + 128);
LABEL_3:
      v7 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 124) = v6;
      v8 = *(_DWORD *)(v7 + 8);
      v9 = v8 & 0xFFFFFFFE;
      v10 = v8 | 1;
      if ( v6 == 2 )
        v9 = v10;
      *(_DWORD *)(v7 + 8) = v9;
      return 0;
    default:
      return 0;
  }
  do
  {
    v50 = *(unsigned __int8 *)v17;
    v51 = v50 + 16 * getinf();
    v52 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    if ( v51 != v52 )
    {
      if ( v51 == -1 )
      {
        if ( get_name_ea() != -1 )
          goto LABEL_77;
        goto LABEL_69;
      }
      v52 &= v51;
    }
    name_ea = get_name_ea();
    if ( name_ea != v52 )
    {
      if ( name_ea != -1 )
LABEL_77:
        set_name();
      del_items();
      set_name();
    }
LABEL_69:
    if ( v17[2] )
      set_cmt();
    v17 += 3;
  }
  while ( v17[1] );
  return 0;
}

