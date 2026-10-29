bool __fastcall sub_BBB60(__int64 *a1, int a2, __int64 *a3, double a4)
{
  __int64 v4; // rax
  _DWORD *v7; // rcx
  int v8; // esi
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 *v12; // r15
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r13
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // ecx
  int v27; // r15d
  int v28; // edx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // [rsp+Ch] [rbp-4Ch]
  _QWORD v35[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a2;
  v35[1] = __readfsqword(0x28u);
  v7 = (_DWORD *)(a1[2] + 4LL * a2);
  v8 = *((_DWORD *)a3 + 18);
  if ( *v7 != -1 )
    return *v7 == v8;
  v10 = a1[40];
  v35[0] = 0;
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v4);
  *v7 = v8;
  v12 = (__int64 *)(a1[5] + 24 * v4);
  v13 = sub_330DE0(v11);
  v14 = v12[1];
  v15 = v13;
  if ( v13 < v14 )
    goto LABEL_4;
  if ( v14 < v13 )
  {
    v22 = *v12;
    v23 = v12[2];
    if ( (unsigned __int64)v35 < *v12 || (unsigned __int64)v35 >= v22 + 8 * v23 )
    {
      if ( v23 >= v13
        || (v24 = qvector_reserve((__int64)v12, v22, v13, 8), v14 = v12[1], *v12 = v24, v22 = v24, v14 < v15) )
      {
        while ( 1 )
        {
          *(_QWORD *)(v22 + 8 * v14++) = 0;
          if ( v15 == v14 )
            break;
          v22 = *v12;
        }
      }
    }
    else if ( v23 >= v13
           || (v32 = qvector_reserve((__int64)v12, v22, v13, 8), v14 = v12[1], *v12 = v32, v22 = v32, v14 < v15) )
    {
      while ( 1 )
      {
        *(_QWORD *)(v22 + 8 * v14++) = 0;
        if ( v15 == v14 )
          break;
        v22 = *v12;
      }
    }
LABEL_4:
    v12[1] = v15;
  }
  if ( *(_DWORD *)(v11 + 72) == *(_DWORD *)(*(_QWORD *)(v11 + 64) + 64LL) - 1 )
    return 1;
  v16 = *(_QWORD *)(v11 + 376);
  if ( *((_DWORD *)a3 + 94) == (_DWORD)v16 )
  {
    if ( (_DWORD)v16 != 2 )
    {
      if ( (*(_BYTE *)(v11 + 24) & 1) == 0 )
        goto LABEL_9;
      goto LABEL_32;
    }
    if ( *(_DWORD *)a3[7] == **(_DWORD **)(v11 + 56) )
    {
      if ( (*(_BYTE *)(v11 + 24) & 1) == 0 )
      {
LABEL_10:
        v17 = (unsigned int)(v16 - 1);
        v18 = 0;
        v19 = 4 * v17 + 4;
        while ( 1 )
        {
          v20 = a3[8];
          v21 = *(unsigned int *)(a3[46] + v18);
          if ( (unsigned int)v21 >= *(_DWORD *)(v20 + 64) )
            sub_B7BA0(a4);
          if ( !sub_BBB60(
                  a1,
                  *(_DWORD *)(*(_QWORD *)(v11 + 368) + v18),
                  *(__int64 **)(*(_QWORD *)(v20 + 528) + 8 * v21)) )
            break;
          v18 += 4;
          if ( v19 == v18 )
            return 1;
        }
        return 0;
      }
LABEL_32:
      v25 = *(_QWORD *)(v11 + 48);
      if ( v25 )
      {
        v26 = 0;
        v27 = 0;
        while ( 1 )
        {
          v28 = *(_DWORD *)(v25 + 4);
          if ( (v28 & 1) == 0 )
            break;
          v27 += v27 != 0x100000;
LABEL_35:
          v25 = *(_QWORD *)(v25 + 8);
          if ( !v25 )
            goto LABEL_43;
        }
        while ( 1 )
        {
          if ( (v28 & 4) == 0 )
          {
            ++v26;
            goto LABEL_35;
          }
          v25 = *(_QWORD *)(v25 + 8);
          if ( !v25 )
            break;
          v28 = *(_DWORD *)(v25 + 4);
          v27 = 0x100000;
          if ( (v28 & 1) != 0 )
            goto LABEL_35;
        }
        v27 = 0x100000;
      }
      else
      {
        v26 = 0;
        v27 = 0;
      }
LABEL_43:
      v34 = v26;
      v29 = sub_330DE0((__int64)a3);
      if ( v29 < v34 || v27 + v34 < v29 )
        return 0;
      if ( v27 == 0x100000 )
      {
        v30 = a1[47];
        v31 = a1[46];
        if ( a1[48] < (unsigned __int64)(v30 + 1) )
        {
          v33 = qvector_reserve((__int64)(a1 + 46), v31, v30 + 1, 4);
          a1[46] = v33;
          v31 = v33;
          v30 = a1[47];
        }
        *(_DWORD *)(v31 + 4 * v30) = a2;
        ++a1[47];
      }
LABEL_9:
      if ( (int)v16 > 0 )
        goto LABEL_10;
      return 1;
    }
  }
  return 0;
}

