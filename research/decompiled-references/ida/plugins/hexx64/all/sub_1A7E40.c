__int64 __fastcall sub_1A7E40(__int64 a1, __int64 a2, double a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // r12
  __int64 v6; // r14
  __int16 *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r15
  size_t v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r14
  unsigned __int64 v16; // rdx
  char *v17; // r14
  __int64 v18; // rax
  int v19; // r12d
  __int64 v20; // rax
  __int64 *v21; // rdx
  __int64 *v22; // rsi
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rax
  _QWORD *v29; // rcx
  _QWORD v30[9]; // [rsp+0h] [rbp-48h] BYREF

  v30[1] = __readfsqword(0x28u);
  v3 = *(_QWORD **)(a1 + 8);
  if ( !v3 )
    return 0;
  if ( !*(_QWORD *)(a1 + 16) )
    return 0;
  v4 = (_QWORD *)v3[1];
  if ( v3 == v4 )
    return 0;
  while ( 1 )
  {
    v6 = v4[3];
    v7 = (__int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48));
    if ( (unsigned __int8)sub_19A240((_QWORD *)a1, a2, v6 - *v7) )
      break;
    if ( (unsigned __int8)sub_19A240((_QWORD *)a1, a2, v6 - v7[3]) )
      break;
    if ( (unsigned __int8)sub_19A240((_QWORD *)a1, a2, v6 - v7[4]) )
      break;
    if ( (unsigned __int8)sub_19A240((_QWORD *)a1, a2, v6 - v7[1]) )
      break;
    v26 = v7[2];
    if ( (_WORD)v26 != 0xFFFF )
    {
      if ( (unsigned __int8)sub_19A240((_QWORD *)a1, a2, v6 - v26) )
        break;
    }
    if ( (*v4 & 2) != 0 )
    {
LABEL_23:
      if ( *(_QWORD **)(a1 + 8) == v4 )
        return 0;
    }
    else
    {
      v27 = (_QWORD *)v4[2];
      if ( (*(_BYTE *)v27 & 2) != 0 )
      {
        v24 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
        v25 = *v24;
        if ( (*v24 & 2) != 0 || v4 != (_QWORD *)v24[2] )
        {
LABEL_22:
          v4 = v24;
        }
        else
        {
          while ( 1 )
          {
            v4 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
            v25 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v25 & 2) != 0 )
              break;
            v29 = v24;
            v24 = v4;
            if ( v29 != (_QWORD *)v4[2] )
              goto LABEL_22;
          }
        }
        goto LABEL_23;
      }
      do
      {
        v4 = v27;
        v27 = (_QWORD *)v27[1];
      }
      while ( (*(_BYTE *)v27 & 2) == 0 );
      if ( *(_QWORD **)(a1 + 8) == v4 )
        return 0;
    }
  }
  v8 = *(_QWORD *)(a2 + 104);
  v9 = 8 * v8;
  v10 = (8 * v8) >> 3;
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 32);
    v12 = *(_QWORD *)(a2 + 96);
    v13 = 0;
    v14 = *(_QWORD *)(a1 + 24);
    v15 = 8 * v11;
    v16 = v10 + v11;
    if ( *(_QWORD *)(a1 + 40) < v16 )
    {
      v28 = qvector_reserve(a1 + 24, v14, v16, 8);
      *(_QWORD *)(a1 + 24) = v28;
      v14 = v28;
      v13 = 8LL * *(_QWORD *)(a1 + 32) - v15;
    }
    v17 = (char *)(v14 + v15);
    memmove(&v17[v9], v17, v13);
    v18 = 0;
    if ( v9 )
    {
      do
      {
        *(_QWORD *)&v17[v18] = *(_QWORD *)(v12 + v18);
        v18 += 8;
      }
      while ( v9 != v18 );
    }
    *(_QWORD *)(a1 + 32) += v10;
    v8 = *(_QWORD *)(a2 + 104);
  }
  v19 = 0;
  v20 = 0;
  if ( v8 )
  {
LABEL_12:
    if ( !(unsigned __int8)sub_32F330(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v20) + 64LL, v30) )
    {
      if ( !under_debugger )
        sub_383060(0xC89Du, a3);
      BUG();
    }
    v21 = *(__int64 **)(a1 + 8);
    if ( !v21 )
      goto LABEL_19;
    v22 = (__int64 *)(*v21 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v22 )
      goto LABEL_35;
    if ( (*(_BYTE *)(*v21 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_19;
    while ( 1 )
    {
      if ( v30[0] >= v22[3] )
      {
        if ( v30[0] <= v22[3] )
        {
          if ( v22 != v21 )
          {
LABEL_35:
            ++v19;
            sub_1A72E0((unsigned __int64 **)(a1 + 8), v22);
            v20 = v19;
            if ( (unsigned __int64)v19 >= *(_QWORD *)(a2 + 104) )
              return 1;
            goto LABEL_12;
          }
LABEL_19:
          v20 = ++v19;
          if ( (unsigned __int64)v19 >= *(_QWORD *)(a2 + 104) )
            return 1;
          goto LABEL_12;
        }
        v22 = (__int64 *)v22[2];
      }
      else
      {
        v22 = (__int64 *)v22[1];
      }
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_19;
    }
  }
  return 1;
}

