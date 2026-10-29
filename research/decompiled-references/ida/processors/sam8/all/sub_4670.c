__int64 __fastcall sub_4670(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  unsigned int v6; // edx
  __int64 *v7; // rcx
  unsigned int v8; // edx
  __int64 *v9; // rcx
  unsigned int v10; // edx
  __int64 *v11; // rcx
  unsigned int v12; // edx
  __int64 *v13; // rcx
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // edx
  __int64 *v18; // rcx
  unsigned int v19; // ecx
  __int64 *v20; // rcx
  __int64 *v21; // rdx
  __int64 v22; // rdi
  unsigned int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 *v26; // rdi
  _DWORD *v27; // rdx
  __int64 **v28; // rcx
  __int64 *v29; // rcx
  __int64 *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rsi

  switch ( a2 )
  {
    case 0LL:
      setinf_flag();
      return 0;
    case 4LL:
      allocate_selector();
      add_segm_ex();
      allocate_selector();
      add_segm_ex();
      return 0;
    case 10LL:
      v6 = *(_DWORD *)a3;
      if ( v6 > 0x2F )
      {
        v7 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v7 + 1;
      }
      else
      {
        v7 = (__int64 *)(*(_QWORD *)(a3 + 16) + v6);
        *(_DWORD *)a3 = v6 + 8;
      }
      return (int)sub_23F0(*v7);
    case 11LL:
      v8 = *(_DWORD *)a3;
      if ( v8 > 0x2F )
      {
        v9 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v9 + 1;
      }
      else
      {
        v9 = (__int64 *)(*(_QWORD *)(a3 + 16) + v8);
        *(_DWORD *)a3 = v8 + 8;
      }
      if ( !(unsigned int)sub_39A0(a1, *v9, a4) )
        return -1;
      return 1;
    case 12LL:
      v10 = *(_DWORD *)a3;
      if ( v10 > 0x2F )
      {
        v11 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v11 + 1;
      }
      else
      {
        v11 = (__int64 *)(*(_QWORD *)(a3 + 16) + v10);
        *(_DWORD *)a3 = v10 + 8;
      }
      sub_4410(*v11);
      return 1;
    case 13LL:
      v12 = *(_DWORD *)a3;
      if ( v12 <= 0x2F )
      {
        v13 = (__int64 *)(*(_QWORD *)(a3 + 16) + v12);
        *(_DWORD *)a3 = v12 + 8;
      }
      else
      {
        v13 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v13 + 1;
      }
      sub_44E0(a1, *v13);
      return 1;
    case 14LL:
      v14 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v29 = *(__int64 **)(a3 + 8);
        v30 = v29 + 1;
        *(_QWORD *)(a3 + 8) = v29 + 1;
        v16 = *v29;
      }
      else
      {
        v15 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v14 + 8;
        v16 = *(_QWORD *)(v15 + v14);
        if ( v14 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v14 + 16;
          goto LABEL_21;
        }
        v30 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v30 + 1;
LABEL_21:
      sub_4430(a1, v16);
      return 1;
    case 17LL:
      v17 = *(_DWORD *)a3;
      if ( v17 <= 0x2F )
      {
        v18 = (__int64 *)(*(_QWORD *)(a3 + 16) + v17);
        *(_DWORD *)a3 = v17 + 8;
      }
      else
      {
        v18 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v18 + 1;
      }
      sub_4400(*v18, a4);
      return 1;
    case 19LL:
      v19 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v20 = *(__int64 **)(a3 + 8);
        v21 = v20 + 1;
        *(_QWORD *)(a3 + 8) = v20 + 1;
        v22 = *v20;
LABEL_27:
        *(_QWORD *)(a3 + 8) = v21 + 1;
        goto LABEL_28;
      }
      v31 = *(_QWORD *)(a3 + 16);
      v32 = v19 + 8;
      *(_DWORD *)a3 = v32;
      v22 = *(_QWORD *)(v31 + v19);
      if ( (unsigned int)v32 > 0x2F )
      {
        v21 = *(__int64 **)(a3 + 8);
        goto LABEL_27;
      }
      v21 = (__int64 *)(v32 + v31);
      *(_DWORD *)a3 = v19 + 16;
LABEL_28:
      if ( (unsigned __int8)sub_40A0(v22, *v21) )
        return 1;
      else
        return -1;
    case 20LL:
      v23 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v28 = *(__int64 ***)(a3 + 8);
        v27 = v28 + 1;
        *(_QWORD *)(a3 + 8) = v28 + 1;
        v26 = *v28;
      }
      else
      {
        v24 = *(_QWORD *)(a3 + 16);
        v25 = v23 + 8;
        *(_DWORD *)a3 = v25;
        v26 = *(__int64 **)(v24 + v23);
        if ( (unsigned int)v25 <= 0x2F )
        {
          v27 = (_DWORD *)(v25 + v24);
          *(_DWORD *)a3 = v23 + 16;
          goto LABEL_33;
        }
        v27 = *(_DWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v27 + 2;
LABEL_33:
      sub_4540(v26, *v27 != 0);
      return 1;
    default:
      return 0;
  }
}

