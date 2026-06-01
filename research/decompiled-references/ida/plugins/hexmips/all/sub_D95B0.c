__int64 __fastcall sub_D95B0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v6; // r13d
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v13; // r12
  int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // rsi
  _DWORD *v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rdx
  unsigned int *v28; // rdx
  int v29; // r12d
  unsigned __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // rax
  unsigned __int64 v33; // r13
  __int64 v34; // rcx
  __int64 v35; // rax
  _DWORD *v36; // rdx
  _DWORD *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  _DWORD *v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  int *v44; // rax
  unsigned __int64 v45; // r12
  unsigned __int64 v46; // rbp
  __int64 v47; // rax
  _QWORD v48[7]; // [rsp+0h] [rbp-38h] BYREF

  v7 = a2;
  v48[1] = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(unsigned int *)(v8 + 72);
  if ( (_DWORD)v9 == a2 )
    return 0;
  v10 = *(_DWORD *)(a1 + 136);
  v11 = a1;
  if ( v10 != a2 && v10 != -1 )
    return 0;
  v13 = *(_QWORD *)(v8 + 352);
  v14 = v13;
  if ( (_DWORD)v13 == 1 )
  {
    v15 = *(_QWORD *)(v8 + 344);
    if ( a2 == *(_DWORD *)v15 )
      goto LABEL_20;
  }
  v15 = *(unsigned int *)(a1 + 120);
  v16 = *(_DWORD *)(a1 + 120) & 6;
  if ( (int)v9 <= (int)v7 )
  {
    if ( !*(_BYTE *)(a1 + 142) )
      goto LABEL_35;
    goto LABEL_61;
  }
  if ( !(_DWORD)v16 )
  {
LABEL_20:
    v16 = (unsigned int)v7;
    v19 = sub_D9290(a1, (unsigned int)v7, v9, v15, a5, a6);
    v15 = *(unsigned int *)(a1 + 120);
    if ( (v15 & 0x10) == 0 || v19 > 1 )
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
    v17 = *(_DWORD **)(v8 + 344);
    v18 = (__int64)&v17[v13];
    if ( v17 == (_DWORD *)v18 )
      goto LABEL_29;
    while ( (_DWORD)v7 != *v17 )
    {
      if ( (_DWORD *)v18 == ++v17 )
        goto LABEL_29;
    }
    if ( (_DWORD *)v18 == v17 )
      goto LABEL_29;
    v19 = sub_D9290(a1, (unsigned int)v7, v18, v15, a5, a6);
    LOBYTE(v22) = (int)v13 > 0;
    LOBYTE(v6) = (int)v13 > 0 && v19 == 1;
    if ( (_BYTE)v6 )
    {
      v23 = 0;
      do
      {
        v24 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 32) + 344LL) + 4 * v23);
        if ( (_DWORD)v7 == (_DWORD)v24 )
        {
          v22 = v6;
          v19 = 1;
        }
        else
        {
          a1 = v11;
          v19 = sub_D9290(v11, v24, v22, v20, a5, v21);
          LOBYTE(v22) = v19 == 1;
        }
        v20 = (unsigned int)(v23 + 1);
        LOBYTE(v20) = v14 > (int)v20;
        ++v23;
      }
      while ( ((unsigned __int8)v22 & (unsigned __int8)v20) != 0 );
    }
    if ( v19 != 1 )
      goto LABEL_29;
    v15 = *(unsigned int *)(v11 + 120);
    if ( (v15 & 0x10) == 0 )
    {
      if ( *(_BYTE *)(v11 + 142) )
        *(_BYTE *)(v11 + 24) = 1;
      goto LABEL_28;
    }
  }
  v9 = *(_QWORD *)(v11 + 32);
  v16 = *(_QWORD *)(v9 + 64);
  if ( (unsigned int)v7 >= *(_DWORD *)(v16 + 64) )
    goto LABEL_91;
  v16 = *(_QWORD *)(v16 + 528);
  v9 = *(_QWORD *)(v16 + 8LL * (unsigned int)v7);
  if ( *(_DWORD *)(v9 + 376) != 1 )
  {
    if ( !*(_BYTE *)(v11 + 142) )
      goto LABEL_35;
LABEL_61:
    *(_BYTE *)(v11 + 24) = 1;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v11 + 142) )
  {
    *(_BYTE *)(v11 + 24) = 1;
LABEL_27:
    switch ( v19 )
    {
      case 1u:
        goto LABEL_28;
      case 0u:
        return 0;
      case 2u:
LABEL_29:
        *(_BYTE *)(v11 + 142) = 1;
        *(_BYTE *)(v11 + 24) = 1;
        return 0;
    }
LABEL_35:
    v15 &= 6u;
    if ( !(_DWORD)v15 )
    {
      v9 = *(unsigned int *)(v11 + 124);
      if ( !(_DWORD)v9 )
      {
        a1 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 64LL);
        if ( (unsigned __int8)sub_3692B0(a1) )
        {
          a1 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 64LL);
          if ( *(_DWORD *)(a1 + 464) )
          {
            v16 = 0;
            v40 = (_DWORD *)sub_139080(a1, 0);
            if ( *v40 == 3 )
            {
              a1 = *(unsigned int *)(v11 + 132);
              if ( v40[2] == (_DWORD)a1 )
                goto LABEL_76;
            }
          }
        }
      }
    }
    if ( *(_BYTE *)(v11 + 141) )
      goto LABEL_29;
    v25 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 64LL);
    if ( (unsigned int)v7 < *(_DWORD *)(v25 + 64) )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(v25 + 528) + 8 * v7);
      v27 = *(_QWORD *)(v26 + 56);
      if ( !v27 )
        goto LABEL_29;
      if ( !(unsigned __int8)sub_D81A0(v11, v26, v27, 0, 1u) )
        goto LABEL_29;
      v28 = *(unsigned int **)(v11 + 104);
      if ( !v28 )
        goto LABEL_29;
      v29 = 0;
      if ( v26 != *(_QWORD *)(v11 + 32) )
        v29 = *(_DWORD *)(v11 + 124) + 1;
      v30 = *(_QWORD *)(v26 + 40);
      v31 = *(_QWORD *)(*(_QWORD *)(v26 + 56) + 24LL);
      if ( *((_BYTE *)v28 + 64) == 1 )
      {
        if ( (unsigned __int8)sub_11A6A0(*v28) )
        {
          v41 = v29;
          v42 = *(_QWORD *)(*(_QWORD *)(v11 + 48) + 8LL);
          if ( v29 < v42 )
          {
            while ( *(_DWORD *)(*(_QWORD *)(v11 + 104) + 72LL) != *(_DWORD *)(*(_QWORD *)(v11 + 56) + 4 * v41) )
            {
              v41 = ++v29;
              if ( v29 >= v42 )
                goto LABEL_89;
            }
            v43 = *(int *)(v11 + 124);
            if ( v29 < (int)v43 )
            {
              v29 = v43 + 1;
              *(_DWORD *)(v11 + 136) = *(_DWORD *)(v26 + 72);
            }
            v44 = (int *)(*(_QWORD *)(v11 + 80) + 4 * v43);
            if ( *v44 > v29 || *v44 == -1 )
              *v44 = v29;
            goto LABEL_87;
          }
        }
LABEL_89:
        v32 = *(_QWORD *)(v11 + 112);
        if ( v32 == -1 )
          goto LABEL_48;
      }
      else
      {
        v32 = *(_QWORD *)(v11 + 112);
        if ( v32 == -1 )
        {
LABEL_49:
          if ( sub_120960(v26, *(unsigned int *)(v11 + 132), v28, 0, 0, 1) )
            goto LABEL_29;
          if ( (*(_BYTE *)(v11 + 120) & 0x10) != 0 )
            goto LABEL_29;
          v35 = *(_QWORD *)(v11 + 104);
          if ( *(_DWORD *)v35 != 4 || *(_BYTE *)(v35 + 32) != 1 || *(_DWORD *)(v11 + 132) != *(_DWORD *)(v35 + 40) )
            goto LABEL_29;
          if ( *(_BYTE *)(v35 + 64) == 1 )
          {
            v36 = *(_DWORD **)(v11 + 56);
            v37 = &v36[*(_QWORD *)(v11 + 64)];
            while ( v37 != v36 )
            {
              if ( *(_DWORD *)(v35 + 72) == *v36 )
                goto LABEL_92;
              ++v36;
            }
          }
          else
          {
LABEL_92:
            if ( !(unsigned __int8)sub_32A2E0(v35 + 64, v48) )
              goto LABEL_29;
            v45 = v48[0];
            v46 = sub_D3160(*(_QWORD *)(v11 + 32), *(_QWORD *)(v11 + 40));
            v47 = sub_D3230(*(_QWORD *)(v11 + 32));
            if ( v47 > 0 && v45 >= v46 && v46 + v47 - 1 >= v45 )
              goto LABEL_29;
          }
LABEL_76:
          *(_BYTE *)(v11 + 141) = 1;
          return 0;
        }
      }
      v33 = v31 + 1;
      v34 = v30;
      if ( v33 >= v30 )
        v34 = v33;
      if ( !(unsigned __int8)sub_D74C0(v11, v26, v32, v34) )
      {
LABEL_48:
        v28 = *(unsigned int **)(v11 + 104);
        if ( !v28 )
          goto LABEL_29;
        goto LABEL_49;
      }
LABEL_87:
      if ( *(_BYTE *)(v11 + 141) )
        return 0;
      goto LABEL_29;
    }
LABEL_91:
    sub_D6A10(a1, v16, v9, v15, a5);
  }
  if ( v19 != 1 )
    return 0;
LABEL_28:
  if ( *(_BYTE *)(v11 + 141) )
    goto LABEL_29;
  v38 = *(_QWORD *)(v11 + 80);
  v39 = *(int *)(v11 + 124);
  *(_BYTE *)(v11 + 140) = 0;
  *(_DWORD *)(v38 + 4 * v39) = -1;
  return 1;
}

