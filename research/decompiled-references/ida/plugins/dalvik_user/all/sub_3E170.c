__int64 __fastcall sub_3E170(int *a1, unsigned __int64 *a2)
{
  _DWORD *v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  int *v6; // rdx
  int v8; // eax
  int *v10; // rdx
  unsigned __int64 v11; // rax
  int *v12; // rdx
  unsigned __int64 v13; // rax
  int *v14; // rdx
  unsigned __int64 v15; // rax
  int *v16; // rdx
  unsigned __int64 v17; // rax
  int v18; // eax
  int v19; // r14d
  int v20; // r13d
  __int64 v21; // rax
  int v22; // r15d
  __int64 v23; // rsi
  int *v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  int v27; // r14d
  int v28; // r13d
  __int64 v29; // rax
  int v30; // r15d
  __int64 v31; // rsi
  int *v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  int v35; // eax
  int v36; // eax
  size_t v37; // r12
  const void *v38; // rsi
  unsigned __int64 v39; // rdx
  void *v40; // rdi
  unsigned __int64 v41; // rax
  int v42; // edx

  v2 = (_DWORD *)*a2;
  v3 = a2[1];
  v4 = *a2 + 4;
  *a2 = v4;
  if ( v3 < v4 || *v2 != 1835009 )
    return 0;
  v6 = v2 + 2;
  *a2 = (unsigned __int64)(v2 + 2);
  if ( v3 < (unsigned __int64)(v2 + 2) )
    return 0;
  v8 = v2[1];
  if ( a1 )
  {
    *a1 = v8;
    v6 = (int *)*a2;
    v3 = a2[1];
  }
  *a2 = (unsigned __int64)(v6 + 1);
  if ( v3 < (unsigned __int64)(v6 + 1) )
    return 0;
  a1[1] = *v6;
  v10 = (int *)*a2;
  v11 = *a2 + 4;
  *a2 = v11;
  if ( a2[1] < v11 )
    return 0;
  a1[2] = *v10;
  v12 = (int *)*a2;
  v13 = *a2 + 4;
  *a2 = v13;
  if ( a2[1] < v13 )
    return 0;
  a1[3] = *v12;
  v14 = (int *)*a2;
  v15 = *a2 + 4;
  *a2 = v15;
  if ( a2[1] < v15 )
    return 0;
  a1[4] = *v14;
  v16 = (int *)*a2;
  v17 = *a2 + 4;
  *a2 = v17;
  if ( a2[1] < v17 )
    return 0;
  v18 = *v16;
  v19 = a1[1];
  v20 = 0;
  *((_QWORD *)a1 + 4) = 0;
  a1[5] = v18;
  if ( v19 > 0 )
  {
    do
    {
      v24 = (int *)*a2;
      v25 = *a2 + 4;
      *a2 = v25;
      if ( a2[1] < v25 )
        return 0;
      v21 = *((_QWORD *)a1 + 4);
      v22 = *v24;
      v23 = *((_QWORD *)a1 + 3);
      if ( *((_QWORD *)a1 + 5) < (unsigned __int64)(v21 + 1) )
      {
        v26 = qvector_reserve();
        *((_QWORD *)a1 + 3) = v26;
        v23 = v26;
        v21 = *((_QWORD *)a1 + 4);
      }
      ++v20;
      *(_DWORD *)(v23 + 4 * v21) = v22;
      ++*((_QWORD *)a1 + 4);
    }
    while ( v20 != v19 );
  }
  v27 = a1[2];
  *((_QWORD *)a1 + 7) = 0;
  v28 = 0;
  if ( v27 > 0 )
  {
    do
    {
      v32 = (int *)*a2;
      v33 = *a2 + 4;
      *a2 = v33;
      if ( a2[1] < v33 )
        return 0;
      v29 = *((_QWORD *)a1 + 7);
      v30 = *v32;
      v31 = *((_QWORD *)a1 + 6);
      if ( *((_QWORD *)a1 + 8) < (unsigned __int64)(v29 + 1) )
      {
        v34 = qvector_reserve();
        *((_QWORD *)a1 + 6) = v34;
        v31 = v34;
        v29 = *((_QWORD *)a1 + 7);
      }
      ++v28;
      *(_DWORD *)(v31 + 4 * v29) = v30;
      ++*((_QWORD *)a1 + 7);
    }
    while ( v28 != v27 );
  }
  *((_BYTE *)a1 + 120) = *((_BYTE *)a1 + 13) & 1;
  v35 = a1[5];
  if ( !v35 )
    v35 = *a1;
  v36 = v35 - a1[4];
  if ( (v36 & 3) != 0 )
    return 0;
  v37 = v36;
  sub_3E0D0((__int64 *)a1 + 9, v36);
  v38 = (const void *)*a2;
  v39 = a2[1];
  v40 = *((void **)a1 + 9);
  v41 = *a2 + v37;
  *a2 = v41;
  if ( v39 < v41 )
    return 0;
  if ( v40 )
  {
    memcpy(v40, v38, v37);
  }
  else if ( v39 < v41 )
  {
    return 0;
  }
  v42 = a1[5];
  if ( v42 )
  {
    if ( ((*(_BYTE *)a1 - (_BYTE)v42) & 3) == 0 )
    {
      sub_3DD70(a2, (__int64 *)a1 + 12, (*a1 - v42) / 4);
      return 1;
    }
    return 0;
  }
  return 1;
}

