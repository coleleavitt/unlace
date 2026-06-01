__int64 __fastcall sub_A04D0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int v5; // r12d
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r9
  __int64 v10; // rbp
  _QWORD *v11; // r9
  __int64 v12; // r12
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // r14
  __int64 v16; // r9
  int v17; // r12d
  __int64 v18; // r15
  __int64 *v19; // r9
  __int64 v20; // r13
  __int64 v21; // r9
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // [rsp+8h] [rbp-60h]
  unsigned __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 v26; // [rsp+10h] [rbp-58h]
  __int64 v27; // [rsp+18h] [rbp-50h]
  _QWORD v28[9]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v28[1] = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 24) != v1 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v3 + 6) & 2) != 0 || *(_DWORD *)v3 == 1 || *(_DWORD *)v3 == 62 )
    {
LABEL_5:
      v24 = *(_QWORD *)(a1 + 8);
      v4 = sub_A0460(v24, *(_QWORD *)(v3 + 24));
      v5 = *(_DWORD *)(a1 + 56) - 1;
      if ( v5 >= 0 )
      {
        v6 = v24;
        v7 = 8LL * (unsigned int)v5;
        while ( 1 )
        {
          if ( v4 == sub_A0460(v6, *(_QWORD *)(*(_QWORD *)(v7 + *(_QWORD *)(a1 + 48)) + 24LL)) )
          {
            memmove((void *)v8, (const void *)(v8 + 8), 8LL * *(_QWORD *)(a1 + 56) - 8 - v7);
            --*(_QWORD *)(a1 + 56);
          }
          --v5;
          v7 -= 8;
          if ( v5 == -1 )
            break;
          v6 = *(_QWORD *)(a1 + 8);
        }
      }
      return 0;
    }
    if ( (unsigned __int8)sub_11C0A0(*(_QWORD *)(a1 + 32), 0) )
    {
      v3 = *(_QWORD *)(a1 + 32);
      goto LABEL_5;
    }
  }
  v10 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)v10 == 2 )
  {
    v11 = *(_QWORD **)(a1 + 48);
    v12 = *(_QWORD *)(a1 + 56);
    v13 = &v11[v12];
    if ( v11 == v13 )
      goto LABEL_18;
    v14 = *(_QWORD **)(a1 + 48);
    while ( v10 != *v14 )
    {
      if ( v13 == ++v14 )
        goto LABEL_18;
    }
    if ( v14 == v13 )
    {
LABEL_18:
      v15 = *(_QWORD *)(a1 + 8);
      v25 = sub_A0460(v15, *(_QWORD *)(v10 + 24));
      v17 = v12 - 1;
      if ( v17 < 0 )
        return 0;
      v26 = v10 + 48;
      v18 = 8LL * (unsigned int)v17;
      while ( 1 )
      {
        v19 = (__int64 *)(v18 + v16);
        v20 = *v19;
        if ( v25 != sub_A0460(v15, *(_QWORD *)(*v19 + 24)) )
          goto LABEL_20;
        if ( !v10 )
          goto LABEL_27;
        v27 = *(_QWORD *)(v15 + 1504);
        v22 = sub_1216A0(v26, v20 + 48, 0);
        v23 = 0;
        if ( v22
          || (unsigned __int8)sub_12B810(v27, (unsigned int)v28, *(_QWORD *)(a1 + 16), 0, v26, 0, v20 + 48)
          && (v23 = v28[0], v28[0] >= 0LL) )
        {
          if ( *(int *)(v10 + 68) >= v23 + *(int *)(v20 + 68) )
            break;
        }
LABEL_20:
        --v17;
        v18 -= 8;
        if ( v17 == -1 )
          return 0;
        v16 = *(_QWORD *)(a1 + 48);
        v15 = *(_QWORD *)(a1 + 8);
      }
      v21 = v18 + *(_QWORD *)(a1 + 48);
LABEL_27:
      memmove((void *)v21, (const void *)(v21 + 8), 8LL * *(_QWORD *)(a1 + 56) - 8 - v18);
      --*(_QWORD *)(a1 + 56);
      goto LABEL_20;
    }
  }
  return 0;
}

