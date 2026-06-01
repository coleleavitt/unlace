__int64 __fastcall sub_D3E70(__int64 a1, _QWORD *a2, __int64 *a3, double a4)
{
  __int64 v5; // rdx
  _DWORD *v6; // rbx
  unsigned int tinfo_size; // eax
  int *v8; // rbx
  unsigned __int64 v9; // rbp
  int v10; // r14d
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 result; // rax
  _DWORD *v17; // r14
  unsigned int v18; // eax
  int *v19; // rax
  int *v20; // rdx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  int v25; // eax
  bool v26; // zf
  int v27; // r14d
  int v28; // ecx
  unsigned int v29; // r14d
  __int64 v30; // rax
  int v31; // edx
  int v32; // r10d
  char v33; // al
  char v34; // al
  unsigned int v35; // eax
  unsigned int v36; // eax
  int v37; // eax
  unsigned __int8 v38; // [rsp+8h] [rbp-90h]
  unsigned __int8 v39; // [rsp+13h] [rbp-85h]
  int v40; // [rsp+14h] [rbp-84h]
  __int64 v41; // [rsp+18h] [rbp-80h]
  __int64 v42; // [rsp+18h] [rbp-80h]
  int v43; // [rsp+20h] [rbp-78h]
  int v44; // [rsp+24h] [rbp-74h]
  int v45; // [rsp+24h] [rbp-74h]
  int v46; // [rsp+24h] [rbp-74h]
  int v47; // [rsp+24h] [rbp-74h]
  int v48; // [rsp+24h] [rbp-74h]
  int v49; // [rsp+28h] [rbp-70h]
  int v50; // [rsp+28h] [rbp-70h]
  int v51; // [rsp+28h] [rbp-70h]
  int v52; // [rsp+28h] [rbp-70h]
  int v53; // [rsp+2Ch] [rbp-6Ch]
  int v54; // [rsp+3Ch] [rbp-5Ch]
  int *v55; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v56; // [rsp+48h] [rbp-50h]
  __int64 v57; // [rsp+50h] [rbp-48h]
  unsigned __int64 v58; // [rsp+58h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v5 = *(int *)(a1 + 64);
  v57 = 0;
  v6 = (_DWORD *)(*a2 + 104LL * *(int *)(*a3 + 4 * v5));
  tinfo_size = get_tinfo_size();
  v55 = nullptr;
  v56 = 0;
  v39 = sub_D2BA0(a1, (__int64)&v55, v6, tinfo_size, 0);
  v8 = v55;
  if ( !v39 )
    goto LABEL_26;
  v9 = v56;
  if ( !v56 )
  {
    if ( !under_debugger )
      sub_383060(0xC7F6u, a4);
    BUG();
  }
  v10 = *v55;
  v43 = *(_DWORD *)(a1 + 56);
  if ( *(_DWORD *)a1 == 4 )
  {
    v22 = sub_D3CD0(a1, a2, a3, v10, 1);
    v12 = v22;
    if ( v22 != -1 )
    {
      v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
      if ( *(_DWORD *)(a1 + 64) == v22 )
        goto LABEL_6;
      goto LABEL_17;
    }
  }
  v11 = sub_D3CD0(a1, a2, a3, v10, 0);
  v12 = v11;
  v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
  if ( v11 == -1 )
  {
    v23 = *(_DWORD *)(a1 + 72);
    if ( v23 <= 0x10 )
      v23 = getinf();
    if ( v23 == 176 )
      goto LABEL_26;
    if ( v23 == 256 )
      goto LABEL_26;
    if ( !(unsigned __int8)getinf_flag() )
      goto LABEL_26;
    v25 = *(_DWORD *)(a1 + 56);
    if ( (v25 & 1) == 0 )
      goto LABEL_26;
    v26 = *(_DWORD *)a1 == 4;
    *(_DWORD *)(a1 + 56) = v25 + 1;
    v27 = *v8;
    if ( !v26 || (v28 = sub_D3CD0(a1, a2, a3, v27, 1), v28 == -1) )
    {
      v28 = sub_D3CD0(a1, a2, a3, v27, 0);
      if ( v28 == -1 )
        goto LABEL_26;
    }
    v44 = v28;
    v29 = *(_DWORD *)(a1 + 72);
    v30 = *(int *)(*a3 + 4LL * v28);
    v54 = 0;
    v42 = *a2 + 104 * v30;
    get_tinfo_size();
    v31 = 0;
    v12 = v44;
    v32 = 2 * v40;
    if ( (v40 & 0x40000000) == 0 )
    {
      if ( v40 > v54 )
      {
        if ( v29 > 0x10 )
        {
LABEL_41:
          if ( v29 == 176 || v29 == 256 )
            goto LABEL_44;
          goto LABEL_43;
        }
LABEL_72:
        v52 = v12;
        v48 = v31;
        v36 = getinf();
        v12 = v52;
        v31 = v48;
        v29 = v36;
        goto LABEL_41;
      }
      if ( v29 > 0x10 )
        goto LABEL_53;
      goto LABEL_70;
    }
    if ( v29 <= 0x10 )
    {
      v37 = getinf();
      LODWORD(v12) = v44;
      v32 = 2 * v40;
      if ( v37 == 176 || v37 == 256 )
      {
        if ( v40 > v32 )
          goto LABEL_71;
        goto LABEL_69;
      }
      v31 = v54;
    }
    else if ( v29 == 256 || v29 == 176 )
    {
      if ( v40 <= v32 )
        goto LABEL_26;
      v31 = 2 * v40;
      if ( (*(_BYTE *)(v42 + 27) & 4) == 0 )
        goto LABEL_26;
LABEL_65:
      if ( v31 > v40 )
        v31 = v40;
LABEL_45:
      if ( v40 < v31 )
      {
        ++v43;
        goto LABEL_5;
      }
LABEL_26:
      result = 0;
      goto LABEL_11;
    }
    v53 = v32;
    v50 = v12;
    v46 = v31;
    v34 = getinf_flag();
    v31 = v46;
    v12 = v50;
    if ( v34 )
      goto LABEL_44;
    v32 = v53;
    if ( v40 > v53 )
    {
      if ( v29 > 0x10 )
      {
        v31 = v53;
        goto LABEL_43;
      }
LABEL_71:
      v31 = v32;
      goto LABEL_72;
    }
    if ( v29 > 0x10 )
    {
      v31 = v53;
      goto LABEL_43;
    }
LABEL_69:
    v31 = v32;
LABEL_70:
    v51 = v12;
    v47 = v31;
    v35 = getinf();
    LODWORD(v12) = v51;
    v31 = v47;
    v29 = v35;
LABEL_53:
    if ( v29 == 176 || v29 == 256 )
      goto LABEL_26;
LABEL_43:
    v49 = v12;
    v45 = v31;
    v33 = getinf_flag();
    v31 = v45;
    v12 = v49;
    if ( !v33 )
      goto LABEL_26;
LABEL_44:
    if ( (*(_BYTE *)(v42 + 27) & 4) == 0 )
      goto LABEL_45;
    goto LABEL_65;
  }
LABEL_5:
  if ( *(_DWORD *)(a1 + 64) == (_DWORD)v12 )
    goto LABEL_6;
LABEL_17:
  v41 = 4 * v12;
  v17 = (_DWORD *)(*a2 + 104LL * *(int *)(*a3 + 4 * v12));
  v18 = get_tinfo_size();
  v55 = v8;
  v56 = v9;
  result = sub_D2BA0(a1, (__int64)&v55, v17, v18, 0);
  v8 = v55;
  if ( !(_BYTE)result )
    goto LABEL_11;
  v9 = v56;
  v19 = (int *)(*a3 + v41);
  v20 = (int *)(*a3 + 4LL * *(int *)(a1 + 64));
  v21 = *v20;
  *v20 = *v19;
  *v19 = v21;
  *(_DWORD *)(a1 + 68) = 1;
LABEL_6:
  v13 = 1;
  v14 = 1;
  if ( v9 <= 1 )
  {
LABEL_7:
    if ( *(_DWORD *)a1 == 4 )
      *(_DWORD *)(a1 + 56) = v43
                           + ((v40 + *(_DWORD *)(*a2 + 104LL * *(int *)(*a3 + 4LL * *(int *)(a1 + 64)) + 88) - 1) & -v40)
                           / v40;
    v15 = *(_QWORD *)(a1 + 80);
    if ( *(_DWORD *)(*(_QWORD *)(v15 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
      goto LABEL_10;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v15 + 112) + 200LL))(
           *(_QWORD *)(v15 + 112),
           **(unsigned int **)(a1 + 112)) )
    {
      v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
              **(unsigned int **)(a1 + 112));
      if ( *(_QWORD *)(a1 + 120) <= 1u
        || *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) >= (unsigned int)v24 )
      {
LABEL_32:
        if ( v24 <= 7 )
        {
          *(_DWORD *)(a1 + 60) = (*(_DWORD *)(a1 + 60) + 1) & 0xFFFFFFFE;
          result = v39;
          goto LABEL_11;
        }
LABEL_10:
        result = v39;
        goto LABEL_11;
      }
    }
    else if ( *(_QWORD *)(a1 + 120) <= 1u
           || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112)) > 7 )
    {
      goto LABEL_10;
    }
    v24 = round_down_power2();
    goto LABEL_32;
  }
  while ( 1 )
  {
    result = sub_D2A60((int *)a1, v8[v14], 1, 0);
    if ( !(_BYTE)result )
      break;
    v14 = ++v13;
    if ( v13 >= v9 )
      goto LABEL_7;
  }
LABEL_11:
  if ( v8 )
  {
    v38 = result;
    qfree((__int64)v8);
    return v38;
  }
  return result;
}

