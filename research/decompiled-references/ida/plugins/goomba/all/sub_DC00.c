__int64 __fastcall sub_DC00(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  void *v7; // rsi
  unsigned __int64 v9; // r14
  __int64 *v10; // rsi
  unsigned __int64 v11; // r15
  __int64 *v12; // r13
  unsigned __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // r13
  __int64 *v17; // r15
  __int64 v18; // r12
  __int64 v19; // r14
  void *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 v24; // rsi
  __int64 v25; // r12
  unsigned __int64 v26; // r12
  __int64 *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 *v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // [rsp+Ch] [rbp-7Ch] BYREF
  __int64 v36; // [rsp+10h] [rbp-78h] BYREF
  __int128 v37; // [rsp+18h] [rbp-70h]
  _QWORD v38[11]; // [rsp+30h] [rbp-58h] BYREF

  v38[3] = __readfsqword(0x28u);
  a1[10] = a2;
  v5 = qfsize(a2);
  v6 = a1[10];
  a1[11] = v5;
  if ( qfread(v6, v38, 16) != 16 || v38[1] ^ 0x327620656C636172LL | v38[0] ^ 0x6F2041424D6F6F67LL )
  {
    if ( a3 )
    {
      v7 = (void *)*a3;
      if ( (unsigned __int64)a3[2] <= 0xB )
      {
        v21 = qvector_reserve(a3, v7, 12, 1);
        *a3 = v21;
        v7 = (void *)v21;
      }
      a3[1] = 12;
      qmemcpy(v7, "wrong magic", 11);
      *(_BYTE *)(*a3 + 11) = 0;
    }
    return 0;
  }
  if ( qfread(a1[10], &v35, 4) != 4 || (v9 = v35, v35 > (__int64)a1[11]) )
  {
LABEL_26:
    if ( a3 )
    {
      v20 = (void *)*a3;
      if ( (unsigned __int64)a3[2] <= 0xE )
      {
        v29 = qvector_reserve(a3, v20, 15, 1);
        *a3 = v29;
        v20 = (void *)v29;
      }
      a3[1] = 15;
      qmemcpy(v20, "corrupted file", 14);
      *(_BYTE *)(*a3 + 14) = 0;
    }
    return 0;
  }
  v10 = (__int64 *)a1[7];
  v11 = a1[8];
  v12 = v10;
  if ( v35 != v11 )
  {
    v36 = 0;
    v37 = 0;
    if ( v35 < v11 )
    {
      v26 = v35;
      do
      {
        v27 = &v10[3 * v26];
        v28 = *v27;
        if ( *v27 )
        {
          v27[1] = 0;
          qfree(v28);
          v10 = (__int64 *)a1[7];
        }
        ++v26;
      }
      while ( v26 < v11 );
    }
    else
    {
      v13 = a1[9];
      v14 = a1 + 7;
      if ( &v36 < v10 || &v36 >= &v10[3 * v13] )
      {
        if ( v13 < v35 )
        {
          v32 = qvector_reserve(v14, v10, v35, 24);
          v11 = a1[8];
          a1[7] = v32;
          v12 = (__int64 *)v32;
        }
        if ( v11 < v9 )
        {
          v30 = 3 * v11;
          do
          {
            v31 = &v12[v30];
            ++v11;
            v30 += 3;
            *v31 = 0;
            *(_OWORD *)(v31 + 1) = 0;
            v12 = (__int64 *)a1[7];
          }
          while ( v9 != v11 );
        }
        a1[8] = v9;
        goto LABEL_20;
      }
      if ( v13 < v35 )
      {
        v34 = qvector_reserve(v14, v10, v35, 24);
        v11 = a1[8];
        a1[7] = v34;
        v12 = (__int64 *)v34;
      }
      if ( v11 >= v9 )
      {
        v10 = (__int64 *)a1[7];
      }
      else
      {
        v15 = 3 * v11;
        do
        {
          v16 = &v12[v15];
          ++v11;
          v15 += 3;
          *v16 = 0;
          *(_OWORD *)(v16 + 1) = 0;
          v12 = (__int64 *)a1[7];
          v10 = v12;
        }
        while ( v9 != v11 );
      }
    }
    a1[8] = v9;
    v12 = v10;
LABEL_20:
    v11 = v9;
  }
  v17 = &v12[3 * v11];
  if ( v17 != v12 )
  {
    while ( 1 )
    {
      sub_DB70(v12, 5u);
      v18 = *v12;
      v19 = *v12 + 8 * v12[1];
      if ( v19 != *v12 )
        break;
LABEL_30:
      v12 += 3;
      if ( v17 == v12 )
        goto LABEL_31;
    }
    while ( qfread(a1[10], v18, 8) == 8 )
    {
      v18 += 8;
      if ( v19 == v18 )
        goto LABEL_30;
    }
    goto LABEL_26;
  }
LABEL_31:
  v22 = a1[10];
  if ( qfread(v22, &v36, 4) != 4 )
  {
    if ( under_debugger )
      goto LABEL_53;
    interr(30719);
LABEL_51:
    if ( !under_debugger )
      interr(30767);
LABEL_53:
    BUG();
  }
  v23 = (unsigned int)v36;
  v24 = a1[12];
  v25 = (unsigned int)v36;
  if ( a1[14] < (unsigned __int64)(unsigned int)v36 )
  {
    v33 = qvector_reserve(a1 + 12, v24, (unsigned int)v36, 16);
    v25 = (unsigned int)v36;
    a1[12] = v33;
    v24 = v33;
  }
  a1[13] = v23;
  if ( 16 * v25 != qfread(v22, v24, 16 * v25) )
    goto LABEL_51;
  if ( qfread(a1[10], a1 + 15, 8) != 8 )
    goto LABEL_26;
  a1[15] += 4LL;
  return 1;
}

