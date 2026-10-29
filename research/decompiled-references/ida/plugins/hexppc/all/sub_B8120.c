bool __fastcall sub_B8120(__int64 *a1, int a2, _QWORD *a3)
{
  __int64 v3; // rax
  _DWORD *v6; // rcx
  int v7; // esi
  __int64 v9; // rdx
  __int64 *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rdi
  __int64 *v15; // r15
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r13
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // ecx
  int v30; // r15d
  int v31; // edx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // [rsp+Ch] [rbp-4Ch]
  _QWORD v38[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a2;
  v38[1] = __readfsqword(0x28u);
  v6 = (_DWORD *)(a1[2] + 4LL * a2);
  v7 = *((_DWORD *)a3 + 18);
  if ( *v6 != -1 )
    return *v6 == v7;
  v9 = a1[40];
  v38[0] = 0;
  v11 = *(__int64 **)(*(_QWORD *)(v9 + 528) + 8 * v3);
  v12 = 3 * v3;
  *v6 = v7;
  v13 = a1[5];
  v14 = v11;
  v15 = (__int64 *)(v13 + 8 * v12);
  v16 = sub_32C980(v11);
  v17 = v15[1];
  v18 = v16;
  if ( v16 < v17 )
    goto LABEL_4;
  if ( v17 < v16 )
  {
    v25 = *v15;
    v26 = v15[2];
    if ( (unsigned __int64)v38 < *v15 || (v14 = (__int64 *)(v25 + 8 * v26), v38 >= v14) )
    {
      if ( v26 >= v16 || (v14 = v15, v27 = qvector_reserve(), v17 = v15[1], *v15 = v27, v25 = v27, v17 < v18) )
      {
        while ( 1 )
        {
          *(_QWORD *)(v25 + 8 * v17++) = 0;
          if ( v18 == v17 )
            break;
          v25 = *v15;
        }
      }
    }
    else if ( v26 >= v16 || (v14 = v15, v35 = qvector_reserve(), v17 = v15[1], *v15 = v35, v25 = v35, v17 < v18) )
    {
      while ( 1 )
      {
        *(_QWORD *)(v25 + 8 * v17++) = 0;
        if ( v18 == v17 )
          break;
        v25 = *v15;
      }
    }
LABEL_4:
    v15[1] = v18;
  }
  if ( *((_DWORD *)v11 + 18) == *(_DWORD *)(v11[8] + 64) - 1 )
    return 1;
  v19 = v11[47];
  if ( *((_DWORD *)a3 + 94) == (_DWORD)v19 )
  {
    if ( (_DWORD)v19 != 2 )
    {
      if ( (v11[3] & 1) == 0 )
        goto LABEL_9;
      goto LABEL_32;
    }
    if ( *(_DWORD *)a3[7] == *(_DWORD *)v11[7] )
    {
      if ( (v11[3] & 1) == 0 )
      {
LABEL_10:
        v20 = (unsigned int)(v19 - 1);
        v21 = 0;
        v22 = 4 * v20 + 4;
        while ( 1 )
        {
          v23 = a3[8];
          v24 = *(unsigned int *)(a3[46] + v21);
          if ( (unsigned int)v24 >= *(_DWORD *)(v23 + 64) )
            sub_B4160(v14);
          v14 = a1;
          if ( !(unsigned __int8)sub_B8120(
                                   a1,
                                   *(unsigned int *)(v11[46] + v21),
                                   *(_QWORD *)(*(_QWORD *)(v23 + 528) + 8 * v24)) )
            break;
          v21 += 4;
          if ( v22 == v21 )
            return 1;
        }
        return 0;
      }
LABEL_32:
      v28 = v11[6];
      if ( v28 )
      {
        v29 = 0;
        v30 = 0;
        while ( 1 )
        {
          v31 = *(_DWORD *)(v28 + 4);
          if ( (v31 & 1) == 0 )
            break;
          v30 += v30 != 0x100000;
LABEL_35:
          v28 = *(_QWORD *)(v28 + 8);
          if ( !v28 )
            goto LABEL_43;
        }
        while ( 1 )
        {
          if ( (v31 & 4) == 0 )
          {
            ++v29;
            goto LABEL_35;
          }
          v28 = *(_QWORD *)(v28 + 8);
          if ( !v28 )
            break;
          v31 = *(_DWORD *)(v28 + 4);
          v30 = 0x100000;
          if ( (v31 & 1) != 0 )
            goto LABEL_35;
        }
        v30 = 0x100000;
      }
      else
      {
        v29 = 0;
        v30 = 0;
      }
LABEL_43:
      v14 = a3;
      v37 = v29;
      v32 = sub_32C980(a3);
      if ( v32 < v37 || v30 + v37 < v32 )
        return 0;
      if ( v30 == 0x100000 )
      {
        v33 = a1[47];
        v34 = a1[46];
        if ( a1[48] < (unsigned __int64)(v33 + 1) )
        {
          v14 = a1 + 46;
          v36 = qvector_reserve();
          a1[46] = v36;
          v34 = v36;
          v33 = a1[47];
        }
        *(_DWORD *)(v34 + 4 * v33) = a2;
        ++a1[47];
      }
LABEL_9:
      if ( (int)v19 > 0 )
        goto LABEL_10;
      return 1;
    }
  }
  return 0;
}

