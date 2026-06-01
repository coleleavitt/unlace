__int64 __fastcall sub_1EDFA0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  int v10; // eax
  int v11; // edi
  unsigned int *v12; // rax
  unsigned int v13; // edx
  __int64 *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  _DWORD *v21; // rcx
  int v22; // ebx
  _DWORD *v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rdx
  _DWORD *v27; // rsi
  int v28; // r12d
  _DWORD *v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx

  if ( *(_BYTE *)a2 == 14 )
  {
    v17 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)v17 == 9 )
    {
      v25 = a1[6];
      v26 = a1[7];
      v27 = (_DWORD *)(v25 + 4 * v26);
      v28 = *(_DWORD *)(*(_QWORD *)(v17 + 8) + 16LL);
      if ( (_DWORD *)v25 == v27 )
        goto LABEL_33;
      v29 = (_DWORD *)v25;
      while ( v28 != *v29 )
      {
        if ( v27 == ++v29 )
          goto LABEL_33;
      }
      if ( v27 == v29 )
      {
LABEL_33:
        v30 = v26 + 1;
        if ( a1[8] < v30 )
        {
          v31 = qvector_reserve((__int64)(a1 + 6), v25, v30, 4);
          v32 = a1[7];
          a1[6] = v31;
          v27 = (_DWORD *)(v31 + 4 * v32);
        }
        *v27 = v28;
        ++a1[7];
        v17 = *(_QWORD *)(a2 + 8);
      }
    }
    if ( *(_BYTE *)(v17 + 16) == 9 )
    {
      v18 = a1[6];
      v19 = a1[7];
      v20 = *(_QWORD *)(v17 + 24);
      v21 = (_DWORD *)(v18 + 4 * v19);
      v22 = *(_DWORD *)(v20 + 16);
      if ( (_DWORD *)v18 == v21 )
        goto LABEL_25;
      v23 = (_DWORD *)a1[6];
      while ( v22 != *v23 )
      {
        if ( v21 == ++v23 )
          goto LABEL_25;
      }
      if ( v21 == v23 )
      {
LABEL_25:
        v24 = v19 + 1;
        if ( a1[8] < v24 )
        {
          v33 = qvector_reserve((__int64)(a1 + 6), v18, v24, 4);
          v34 = a1[7];
          a1[6] = v33;
          v21 = (_DWORD *)(v33 + 4 * v34);
        }
        *v21 = v22;
        ++a1[7];
      }
    }
    return 0;
  }
  if ( *(_BYTE *)a2 == 9 )
  {
    v6 = *(__int64 **)(a2 + 8);
    if ( !v6[1] && (*(_BYTE *)(a1[4] + 4LL) & 0x10) != 0 )
    {
      v7 = *v6;
      v8 = *((int *)v6 + 4);
      if ( *(_QWORD *)(v7 + 440) < v8 )
        goto LABEL_43;
      v9 = *(_QWORD *)(v7 + 432) + 104 * v8;
      v10 = *(_DWORD *)(v9 + 24);
      if ( (v10 & 0x800) == 0 && ((v10 & 0x40) == 0 || (get_tinfo_property() & 0xF) == 9) )
      {
        v11 = *(_DWORD *)(v9 + 88);
        if ( *(_DWORD *)(a2 + 4) == v11 && sub_11CAD0(v11) )
        {
          v12 = (unsigned int *)a1[4];
          v13 = *v12;
          if ( *v12 > 0x40 )
          {
            if ( v13 - 65 <= 1 && (unsigned int *)a2 == v12 + 8 )
              return 0;
          }
          else
          {
            if ( v13 <= 0x3E && v13 != 1 )
            {
              if ( v13 != 2 || (unsigned int *)a2 != v12 + 12 )
                goto LABEL_16;
              return 0;
            }
            if ( (unsigned int *)a2 == v12 + 16 )
              return 0;
          }
LABEL_16:
          v14 = *(__int64 **)(a2 + 8);
          v15 = *v14;
          v16 = *((int *)v14 + 4);
          if ( *(_QWORD *)(v15 + 440) >= v16 )
          {
            *(_DWORD *)(*(_QWORD *)(v15 + 432) + 104 * v16 + 24) |= 0x800u;
            return 0;
          }
LABEL_43:
          sub_1ECB80(a3);
        }
      }
    }
  }
  return 0;
}

