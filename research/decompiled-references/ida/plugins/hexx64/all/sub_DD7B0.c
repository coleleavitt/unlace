__int64 __fastcall sub_DD7B0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, double a7)
{
  unsigned int v7; // r13d
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v14; // r12
  int v15; // r14d
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r9d
  __int64 v23; // rdx
  __int64 v24; // r12
  unsigned int v25; // esi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rdx
  unsigned int *v30; // rdx
  int v31; // r12d
  unsigned __int64 v32; // r14
  __int64 v33; // r13
  __int64 v34; // rax
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  _DWORD *v38; // rdx
  _DWORD *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdi
  _DWORD *v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  int *v47; // rax
  unsigned __int64 v48; // r12
  unsigned __int64 v49; // rbp
  __int64 v50; // rax
  _QWORD v51[7]; // [rsp+0h] [rbp-38h] BYREF

  v8 = a2;
  v51[1] = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(unsigned int *)(v9 + 72);
  if ( (_DWORD)v10 == a2 )
    return 0;
  v11 = *(_DWORD *)(a1 + 136);
  if ( v11 != a2 && v11 != -1 )
    return 0;
  v14 = *(_QWORD *)(v9 + 352);
  v15 = v14;
  if ( (_DWORD)v14 == 1 )
  {
    v16 = *(_QWORD *)(v9 + 344);
    if ( a2 == *(_DWORD *)v16 )
      goto LABEL_20;
  }
  v16 = *(unsigned int *)(a1 + 120);
  if ( (int)v10 <= (int)a2 )
  {
    if ( !*(_BYTE *)(a1 + 142) )
      goto LABEL_35;
    goto LABEL_61;
  }
  if ( (*(_DWORD *)(a1 + 120) & 6) == 0 )
  {
LABEL_20:
    v19 = sub_DD490(a1, a2, v10, v16, a5, a6, a7);
    LODWORD(v16) = *(_DWORD *)(a1 + 120);
    if ( (v16 & 0x10) == 0 || v19 > 1 )
    {
      if ( *(_BYTE *)(a1 + 142) )
        *(_BYTE *)(a1 + 24) = 1;
      if ( v19 > 3 )
        return 0xFFFFFFFFLL;
      goto LABEL_27;
    }
  }
  else
  {
    v17 = *(_DWORD **)(v9 + 344);
    v18 = (__int64)&v17[v14];
    if ( v17 == (_DWORD *)v18 )
      goto LABEL_29;
    while ( a2 != *v17 )
    {
      if ( (_DWORD *)v18 == ++v17 )
        goto LABEL_29;
    }
    if ( (_DWORD *)v18 == v17 )
      goto LABEL_29;
    v19 = sub_DD490(a1, a2, v18, v16, a5, a6, a7);
    LOBYTE(v23) = (int)v14 > 0;
    LOBYTE(v7) = (int)v14 > 0 && v19 == 1;
    if ( (_BYTE)v7 )
    {
      v24 = 0;
      do
      {
        v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 344LL) + 4 * v24);
        if ( (_DWORD)v8 == v25 )
        {
          v23 = v7;
          v19 = 1;
        }
        else
        {
          v19 = sub_DD490(a1, v25, v23, v20, v21, v22, a7);
          LOBYTE(v23) = v19 == 1;
        }
        v20 = (unsigned int)(v24 + 1);
        LOBYTE(v20) = v15 > (int)v20;
        ++v24;
      }
      while ( ((unsigned __int8)v23 & (unsigned __int8)v20) != 0 );
    }
    if ( v19 != 1 )
      goto LABEL_29;
    LODWORD(v16) = *(_DWORD *)(a1 + 120);
    if ( (v16 & 0x10) == 0 )
    {
      if ( *(_BYTE *)(a1 + 142) )
        *(_BYTE *)(a1 + 24) = 1;
      goto LABEL_28;
    }
  }
  v26 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 64LL);
  if ( (unsigned int)v8 >= *(_DWORD *)(v26 + 64) )
    goto LABEL_91;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 528) + 8LL * (unsigned int)v8) + 376LL) != 1 )
  {
    if ( !*(_BYTE *)(a1 + 142) )
      goto LABEL_35;
LABEL_61:
    *(_BYTE *)(a1 + 24) = 1;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(a1 + 142) )
  {
    *(_BYTE *)(a1 + 24) = 1;
LABEL_27:
    switch ( v19 )
    {
      case 1u:
        goto LABEL_28;
      case 0u:
        return 0;
      case 2u:
LABEL_29:
        *(_BYTE *)(a1 + 142) = 1;
        *(_BYTE *)(a1 + 24) = 1;
        return 0;
    }
LABEL_35:
    if ( (v16 & 6) == 0 && !*(_DWORD *)(a1 + 124) )
    {
      if ( (unsigned __int8)sub_36E1B0(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 64LL)) )
      {
        v42 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 64LL);
        if ( *(_DWORD *)(v42 + 464) )
        {
          v43 = (_DWORD *)sub_13D280((_QWORD *)v42, 0);
          if ( *v43 == 3 && v43[2] == *(_DWORD *)(a1 + 132) )
            goto LABEL_76;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 141) )
      goto LABEL_29;
    v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 64LL);
    if ( (unsigned int)v8 < *(_DWORD *)(v27 + 64) )
    {
      v28 = *(_QWORD *)(*(_QWORD *)(v27 + 528) + 8 * v8);
      v29 = *(_QWORD *)(v28 + 56);
      if ( !v29 )
        goto LABEL_29;
      if ( !(unsigned __int8)sub_DC3A0(a1, v28, v29, 0, 1u, a7) )
        goto LABEL_29;
      v30 = *(unsigned int **)(a1 + 104);
      if ( !v30 )
        goto LABEL_29;
      v31 = 0;
      if ( v28 != *(_QWORD *)(a1 + 32) )
        v31 = *(_DWORD *)(a1 + 124) + 1;
      v32 = *(_QWORD *)(v28 + 40);
      v33 = *(_QWORD *)(*(_QWORD *)(v28 + 56) + 24LL);
      if ( *((_BYTE *)v30 + 64) == 1 )
      {
        if ( sub_11E8A0(*v30) )
        {
          v44 = v31;
          v45 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL);
          if ( v31 < v45 )
          {
            while ( *(_DWORD *)(*(_QWORD *)(a1 + 104) + 72LL) != *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * v44) )
            {
              v44 = ++v31;
              if ( v31 >= v45 )
                goto LABEL_89;
            }
            v46 = *(int *)(a1 + 124);
            if ( v31 < (int)v46 )
            {
              v31 = v46 + 1;
              *(_DWORD *)(a1 + 136) = *(_DWORD *)(v28 + 72);
            }
            v47 = (int *)(*(_QWORD *)(a1 + 80) + 4 * v46);
            if ( *v47 > v31 || *v47 == -1 )
              *v47 = v31;
            goto LABEL_87;
          }
        }
LABEL_89:
        v34 = *(_QWORD *)(a1 + 112);
        if ( v34 == -1 )
          goto LABEL_48;
      }
      else
      {
        v34 = *(_QWORD *)(a1 + 112);
        if ( v34 == -1 )
        {
LABEL_49:
          if ( sub_124B60(v28, *(_DWORD *)(a1 + 132), (__int64)v30, 0, 0, 1u) )
            goto LABEL_29;
          if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
            goto LABEL_29;
          v37 = *(_QWORD *)(a1 + 104);
          if ( *(_DWORD *)v37 != 4 || *(_BYTE *)(v37 + 32) != 1 || *(_DWORD *)(a1 + 132) != *(_DWORD *)(v37 + 40) )
            goto LABEL_29;
          if ( *(_BYTE *)(v37 + 64) == 1 )
          {
            v38 = *(_DWORD **)(a1 + 56);
            v39 = &v38[*(_QWORD *)(a1 + 64)];
            while ( v39 != v38 )
            {
              if ( *(_DWORD *)(v37 + 72) == *v38 )
                goto LABEL_92;
              ++v38;
            }
          }
          else
          {
LABEL_92:
            if ( !(unsigned __int8)sub_32F330(v37 + 64, v51) )
              goto LABEL_29;
            v48 = v51[0];
            v49 = sub_D7360(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
            v50 = sub_D7430(*(_QWORD *)(a1 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL));
            if ( v50 > 0 && v48 >= v49 && v49 + v50 - 1 >= v48 )
              goto LABEL_29;
          }
LABEL_76:
          *(_BYTE *)(a1 + 141) = 1;
          return 0;
        }
      }
      v35 = v33 + 1;
      v36 = v32;
      if ( v35 >= v32 )
        v36 = v35;
      if ( !(unsigned __int8)sub_DB6C0(a1, v28, v34, v36) )
      {
LABEL_48:
        v30 = *(unsigned int **)(a1 + 104);
        if ( !v30 )
          goto LABEL_29;
        goto LABEL_49;
      }
LABEL_87:
      if ( *(_BYTE *)(a1 + 141) )
        return 0;
      goto LABEL_29;
    }
LABEL_91:
    sub_DAC10(a7);
  }
  if ( v19 != 1 )
    return 0;
LABEL_28:
  if ( *(_BYTE *)(a1 + 141) )
    goto LABEL_29;
  v40 = *(_QWORD *)(a1 + 80);
  v41 = *(int *)(a1 + 124);
  *(_BYTE *)(a1 + 140) = 0;
  *(_DWORD *)(v40 + 4 * v41) = -1;
  return 1;
}

