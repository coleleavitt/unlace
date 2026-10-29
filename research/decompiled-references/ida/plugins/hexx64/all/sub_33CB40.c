__int64 __fastcall sub_33CB40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128i a7)
{
  unsigned int v9; // edx
  unsigned __int64 *v10; // rcx
  _QWORD *v11; // rsi
  unsigned __int64 v12; // r10
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r12
  unsigned int v21; // edx
  unsigned __int64 *v22; // rcx
  int aflags; // eax
  unsigned int v24; // edx
  __int64 *v25; // rcx
  unsigned int v26; // ecx
  __int64 v27; // rdx
  unsigned __int64 *v28; // r8
  unsigned int v29; // ecx
  __int64 v30; // r11
  __int64 v31; // rdx
  __int64 v32; // rsi
  int v33; // r8d
  __int64 v34; // rdi
  __int64 v35; // r9
  __int64 v36; // rsi
  unsigned int *v37; // r12
  __int64 v38; // rdi
  int v39; // esi
  __int64 *v40; // rdx
  unsigned __int64 **v41; // rcx
  unsigned __int64 **v42; // rdx
  _DWORD *v43; // rdx
  __int64 *v44; // rcx
  unsigned int **v45; // rdx
  _DWORD *v46; // rcx

  if ( a2 == 94 )
  {
    v24 = *(_DWORD *)a3;
    if ( v24 > 0x2F )
    {
      v25 = *(__int64 **)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v25 + 1;
    }
    else
    {
      v25 = (__int64 *)(*(_QWORD *)(a3 + 16) + v24);
      *(_DWORD *)a3 = v24 + 8;
    }
    sub_3CD800(*(_QWORD *)(a1 + 16), *v25);
    return 0;
  }
  if ( a2 <= 94 )
  {
    if ( a2 == 28 )
    {
      v21 = *(_DWORD *)a3;
      if ( v21 > 0x2F )
      {
        v22 = *(unsigned __int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v22 + 1;
      }
      else
      {
        v22 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v21);
        *(_DWORD *)a3 = v21 + 8;
      }
      sub_375220(*(_QWORD *)(a1 + 16), *v22, 0xFFFFFFFFFFFFFFFFLL);
      aflags = get_aflags();
      if ( (aflags & 0x42000000) == 0x40000000 || (aflags & 0xC2000000) == 0x80000000 )
        set_tinfo();
    }
    else if ( a2 == 86 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) |= 0x10u;
      sub_33C480(*(_QWORD *)(a1 + 16) + 480LL, 31, 0, a7, a4, a5, a6);
      sub_33C480(*(_QWORD *)(a1 + 16) + 480LL, 72, 0, a7, v17, v18, v19);
      v20 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)(v20 + 1416) & 0x10) == 0 )
        sub_329DA0(*(__m128i **)(a1 + 16), 0);
      sub_D09C0(v20);
      sub_D0960(v20);
      sub_374A40(*(_QWORD *)(a1 + 16));
    }
    return 0;
  }
  if ( a2 == 95 )
  {
    v26 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v41 = *(unsigned __int64 ***)(a3 + 8);
      v42 = v41 + 1;
      *(_QWORD *)(a3 + 8) = v41 + 1;
      v28 = *v41;
    }
    else
    {
      v27 = *(_QWORD *)(a3 + 16);
      *(_DWORD *)a3 = v26 + 8;
      v28 = *(unsigned __int64 **)(v27 + v26);
      if ( v26 + 8 <= 0x2F )
      {
        *(_DWORD *)a3 = v26 + 16;
LABEL_29:
        sub_2B87B0(*(_QWORD *)(a1 + 16), v28);
        return 0;
      }
      v42 = *(unsigned __int64 ***)(a3 + 8);
    }
    *(_QWORD *)(a3 + 8) = v42 + 1;
    goto LABEL_29;
  }
  if ( a2 != 96 )
    return 0;
  v9 = *(_DWORD *)a3;
  if ( v9 > 0x2F )
  {
    v10 = *(unsigned __int64 **)(a3 + 8);
    *(_QWORD *)(a3 + 8) = v10 + 1;
  }
  else
  {
    v10 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v9);
    *(_DWORD *)a3 = v9 + 8;
  }
  v11 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 1432LL);
  if ( !v11 )
    return 0;
  v12 = *v10;
  v13 = 24;
  v14 = *v11 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v14 )
  {
    while ( (*(_BYTE *)v14 & 2) == 0 )
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(v14 + 24);
        v13 = v14 + 24;
        if ( v12 >= v15 )
          break;
        v14 = *(_QWORD *)(v14 + 8);
        if ( (*(_BYTE *)v14 & 2) != 0 )
          return 0;
      }
      if ( v15 >= v12 )
      {
        if ( v11 == (_QWORD *)v14 )
          return 0;
        goto LABEL_31;
      }
      v14 = *(_QWORD *)(v14 + 16);
    }
    return 0;
  }
LABEL_31:
  v29 = *(_DWORD *)a3;
  v30 = *(_QWORD *)(v13 + 8);
  if ( *(_DWORD *)a3 > 0x2Fu )
  {
    v43 = *(_DWORD **)(a3 + 8);
    v44 = (__int64 *)(v43 + 2);
    *(_QWORD *)(a3 + 8) = v43 + 2;
    v33 = *v43;
LABEL_46:
    v45 = (unsigned int **)(v44 + 1);
    *(_QWORD *)(a3 + 8) = v44 + 1;
    v35 = *v44;
LABEL_47:
    v46 = v45 + 1;
    *(_QWORD *)(a3 + 8) = v45 + 1;
    v37 = *v45;
LABEL_48:
    v40 = (__int64 *)(v46 + 2);
    *(_QWORD *)(a3 + 8) = v46 + 2;
    v39 = *v46;
LABEL_49:
    *(_QWORD *)(a3 + 8) = v40 + 1;
    return (int)sub_3CDF60(*(_QWORD *)(a1 + 16), *v40, v30, v12, (unsigned __int8)v33, v35, v37, v39);
  }
  v31 = *(_QWORD *)(a3 + 16);
  v32 = v29 + 8;
  *(_DWORD *)a3 = v32;
  v33 = *(_DWORD *)(v31 + v29);
  if ( (unsigned int)v32 > 0x2F )
  {
    v44 = *(__int64 **)(a3 + 8);
    goto LABEL_46;
  }
  v34 = v29 + 16;
  *(_DWORD *)a3 = v34;
  v35 = *(_QWORD *)(v31 + v32);
  if ( (unsigned int)v34 > 0x2F )
  {
    v45 = *(unsigned int ***)(a3 + 8);
    goto LABEL_47;
  }
  v36 = v29 + 24;
  *(_DWORD *)a3 = v36;
  v37 = *(unsigned int **)(v31 + v34);
  if ( (unsigned int)v36 > 0x2F )
  {
    v46 = *(_DWORD **)(a3 + 8);
    goto LABEL_48;
  }
  v38 = v29 + 32;
  *(_DWORD *)a3 = v38;
  v39 = *(_DWORD *)(v31 + v36);
  if ( (unsigned int)v38 > 0x2F )
  {
    v40 = *(__int64 **)(a3 + 8);
    goto LABEL_49;
  }
  v40 = (__int64 *)(v38 + v31);
  *(_DWORD *)a3 = v29 + 40;
  return (int)sub_3CDF60(*(_QWORD *)(a1 + 16), *v40, v30, v12, (unsigned __int8)v33, v35, v37, v39);
}

