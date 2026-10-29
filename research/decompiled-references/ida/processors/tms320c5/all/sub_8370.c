__int64 __fastcall sub_8370(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  unsigned int v7; // edx
  __int64 *v8; // rcx
  unsigned int v9; // edx
  __int64 *v10; // rcx
  unsigned int v11; // edx
  _QWORD **v12; // rcx
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 **v17; // rdx
  unsigned int v18; // edx
  __int64 *v19; // rcx
  unsigned int v20; // edx
  __int64 *v21; // rcx
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rsi
  unsigned __int16 *v25; // rdi
  __int64 *v26; // rdx
  unsigned int v27; // edx
  _DWORD *v28; // rcx
  __int64 *first_seg; // rax
  __int64 v30; // r12
  __int64 *v31; // rbx
  unsigned int v32; // edx
  __int64 *v33; // rcx
  unsigned __int16 **v34; // rcx
  __int64 *v35; // rcx

  switch ( a2 )
  {
    case 2LL:
      v27 = *(_DWORD *)a3;
      if ( v27 > 0x2F )
      {
        v28 = *(_DWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v28 + 2;
      }
      else
      {
        v28 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v27);
        *(_DWORD *)a3 = v27 + 8;
      }
      *(_DWORD *)(a1 + 120) = *v28;
      return 0;
    case 4LL:
      setinf_flag();
      first_seg = (__int64 *)get_first_seg();
      if ( first_seg )
      {
        v30 = *first_seg;
        if ( v30 == get_segm_base() )
        {
          setinf();
          setinf();
        }
      }
      set_segm_class();
      set_segm_name();
      if ( !get_next_seg() )
      {
        find_free_chunk();
        add_segm_ex();
      }
      getseg();
      v31 = &qword_C780;
      set_default_sreg_value();
      getinf();
      split_sreg_range();
      setinf();
      if ( *(_DWORD *)(a1 + 120) == 1 )
        v31 = &qword_C6C0;
      do
      {
        create_data();
        set_name();
        if ( v31[2] )
          set_cmt();
        v31 += 3;
      }
      while ( v31[1] );
      *(_DWORD *)(a1 + 124) = (unsigned __int8)qgetenv();
      return 0;
    case 5LL:
      goto LABEL_3;
    case 10LL:
      v32 = *(_DWORD *)a3;
      if ( v32 > 0x2F )
      {
        v33 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v33 + 1;
      }
      else
      {
        v33 = (__int64 *)(*(_QWORD *)(a3 + 16) + v32);
        *(_DWORD *)a3 = v32 + 8;
      }
      return (int)sub_4EA0(a1, *v33);
    case 11LL:
      v7 = *(_DWORD *)a3;
      if ( v7 > 0x2F )
      {
        v8 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v8 + 1;
      }
      else
      {
        v8 = (__int64 *)(*(_QWORD *)(a3 + 16) + v7);
        *(_DWORD *)a3 = v7 + 8;
      }
      if ( !(unsigned int)sub_6700(a1, *v8, a4) )
        return -1;
      return 1;
    case 12LL:
      v9 = *(_DWORD *)a3;
      if ( v9 > 0x2F )
      {
        v10 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v10 + 1;
      }
      else
      {
        v10 = (__int64 *)(*(_QWORD *)(a3 + 16) + v9);
        *(_DWORD *)a3 = v9 + 8;
      }
      sub_7D10(*v10);
      return 1;
    case 13LL:
      v11 = *(_DWORD *)a3;
      if ( v11 > 0x2F )
      {
        v12 = *(_QWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v12 + 1;
      }
      else
      {
        v12 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v11);
        *(_DWORD *)a3 = v11 + 8;
      }
      sub_7E50(a1, *v12);
      return 1;
    case 14LL:
      v13 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v35 = *(__int64 **)(a3 + 8);
        v17 = (__int64 **)(v35 + 1);
        *(_QWORD *)(a3 + 8) = v35 + 1;
        v16 = *v35;
      }
      else
      {
        v14 = *(_QWORD *)(a3 + 16);
        v15 = v13 + 8;
        *(_DWORD *)a3 = v15;
        v16 = *(_QWORD *)(v14 + v13);
        if ( (unsigned int)v15 <= 0x2F )
        {
          v17 = (__int64 **)(v15 + v14);
          *(_DWORD *)a3 = v13 + 16;
          goto LABEL_18;
        }
        v17 = *(__int64 ***)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v17 + 1;
LABEL_18:
      sub_7D30(a1, v16, *v17);
      return 1;
    case 16LL:
      v18 = *(_DWORD *)a3;
      if ( v18 > 0x2F )
      {
        v19 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v19 + 1;
      }
      else
      {
        v19 = (__int64 *)(*(_QWORD *)(a3 + 16) + v18);
        *(_DWORD *)a3 = v18 + 8;
      }
      sub_7FE0(a1, *v19);
      return 1;
    case 17LL:
      v20 = *(_DWORD *)a3;
      if ( v20 > 0x2F )
      {
        v21 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v21 + 1;
      }
      else
      {
        v21 = (__int64 *)(*(_QWORD *)(a3 + 16) + v20);
        *(_DWORD *)a3 = v20 + 8;
      }
      sub_7D00(*v21);
      return 1;
    case 19LL:
      v22 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v34 = *(unsigned __int16 ***)(a3 + 8);
        v26 = (__int64 *)(v34 + 1);
        *(_QWORD *)(a3 + 8) = v34 + 1;
        v25 = *v34;
      }
      else
      {
        v23 = *(_QWORD *)(a3 + 16);
        v24 = v22 + 8;
        *(_DWORD *)a3 = v24;
        v25 = *(unsigned __int16 **)(v23 + v22);
        if ( (unsigned int)v24 <= 0x2F )
        {
          v26 = (__int64 *)(v24 + v23);
          *(_DWORD *)a3 = v22 + 16;
          goto LABEL_28;
        }
        v26 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v26 + 1;
LABEL_28:
      if ( (unsigned __int8)sub_7730(v25, *v26, a4) )
        return 1;
      else
        return -1;
    case 86LL:
      *(_DWORD *)(a1 + 120) = sub_81E0(*(_QWORD *)(a1 + 16));
LABEL_3:
      setinf_flag();
      return 0;
    default:
      return 0;
  }
}

