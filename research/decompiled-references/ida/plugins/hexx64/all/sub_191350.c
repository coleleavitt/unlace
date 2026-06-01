__int64 __fastcall sub_191350(__int64 a1, __int64 *a2, __int64 *a3, double a4)
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  unsigned int *v9; // rdx
  unsigned int *v10; // rsi
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r15
  _QWORD *v15; // r15
  __int64 v16; // rdi
  unsigned int v17; // ecx
  unsigned int v18; // edx
  char v19; // r14
  __int64 v20; // rdi
  unsigned int v21; // ecx
  unsigned int v22; // edx
  char v23; // r14
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 *v27; // rdi
  __int64 v28; // rdx
  int **v29; // r13
  int *v30; // r14
  unsigned int v31; // ebx
  unsigned int *v33; // [rsp+0h] [rbp-108h]
  _QWORD *v34; // [rsp+8h] [rbp-100h]
  __int64 v35; // [rsp+10h] [rbp-F8h]
  __int64 v38; // [rsp+30h] [rbp-D8h]
  __int64 n; // [rsp+38h] [rbp-D0h]
  __int64 v40[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v41[2]; // [rsp+50h] [rbp-B8h] BYREF
  void *src; // [rsp+60h] [rbp-A8h]
  __int64 v43; // [rsp+68h] [rbp-A0h]
  __int64 (__fastcall **v44)(); // [rsp+80h] [rbp-88h] BYREF
  __int128 v45; // [rsp+88h] [rbp-80h]
  __int128 v46; // [rsp+98h] [rbp-70h]
  unsigned __int64 v47; // [rsp+A8h] [rbp-60h]
  __int64 *v48; // [rsp+B0h] [rbp-58h]
  __int64 *v49; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v50; // [rsp+C8h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  if ( !a2[4] )
  {
    if ( !under_debugger )
      sub_383060(0xC9B3u, a4);
    BUG();
  }
  v5 = *(_QWORD *)(*(_QWORD *)a2[3] + 64LL);
  sub_32F640(
    (__int64)v41,
    (__int64)a3,
    *(_QWORD *)(a1 + 24),
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 1504LL) + 84LL));
  v6 = a2[4];
  v7 = a2[3];
  v40[0] = 0;
  v40[1] = 0;
  if ( 24 * v6 )
  {
    v33 = nullptr;
    v8 = (_QWORD *)(v7 + 24);
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = v33;
        v10 = (unsigned int *)*(v8 - 1);
        v34 = v8;
        v33 = v10;
        if ( v9 != v10 )
          break;
        v8 += 3;
        if ( v34 == (_QWORD *)(v7 + 24 * v6) )
          goto LABEL_22;
      }
      if ( sub_32ED40(*v10, 0) )
        break;
      v11 = *(v8 - 1);
      if ( *(v8 - 2) != v11 )
      {
        v45 = 0u;
        v44 = &off_4DE130;
        v48 = a2 + 3;
        v46 = 0u;
        LOBYTE(v47) = 0;
        v49 = a3;
        if ( (unsigned int)sub_11E900((_BYTE *)*(v8 - 1), (__int64)&v44) )
          break;
        v11 = *(v8 - 1);
      }
      v12 = *(v8 - 3);
      v35 = *(_QWORD *)(v12 + 48);
      sub_64000((__int64 *)&v44, (__int64)v41, a4);
      a4 = 0.0;
      *((_QWORD *)&v45 + 1) = 0;
      v46 = 0;
      if ( v43 )
      {
        v38 = v43;
        n = 16 * v43;
        *((_QWORD *)&v45 + 1) = qalloc_or_throw(16 * v43, (__int64)v41, 16 * v43, v13);
        *((_QWORD *)&v46 + 1) = v38;
        memcpy(*((void **)&v45 + 1), src, n);
        *(_QWORD *)&v46 = v38;
      }
      v14 = sub_A9D90(v12, (unsigned __int64 **)&v44, v35, v11, 0x2001u);
      if ( *((_QWORD *)&v45 + 1) )
      {
        *(_QWORD *)&v46 = 0;
        qfree(*((__int64 *)&v45 + 1));
      }
      qfree((__int64)v44);
      if ( v14 )
        break;
      sub_64190(v40, *(_DWORD *)(*(v8 - 3) + 72LL), 0.0);
      v6 = a2[4];
      v7 = a2[3];
      if ( v8 != (_QWORD *)(v7 + 24 * v6) )
      {
        v15 = v8;
        do
        {
          if ( *(v8 - 1) != v15[2] )
          {
            v16 = *(_QWORD *)(v5 + 784);
            v17 = *(_DWORD *)(*v15 + 72LL);
            v18 = *(_DWORD *)(*(v8 - 3) + 72LL);
            v44 = nullptr;
            *(_QWORD *)&v45 = 0;
            v19 = sub_6FC30(v16, (__int64 *)&v44, v18, v17, 0.0);
            qfree((__int64)v44);
            if ( v19 )
              goto LABEL_30;
            v20 = *(_QWORD *)(v5 + 784);
            v21 = *(_DWORD *)(*(v8 - 3) + 72LL);
            v22 = *(_DWORD *)(*v15 + 72LL);
            v44 = nullptr;
            *(_QWORD *)&v45 = 0;
            v23 = sub_6FC30(v20, (__int64 *)&v44, v22, v21, 0.0);
            qfree((__int64)v44);
            if ( v23 )
              goto LABEL_30;
            v7 = a2[3];
            v6 = a2[4];
          }
          v15 += 3;
        }
        while ( v15 != (_QWORD *)(v7 + 24 * v6) );
        v8 += 3;
        if ( v34 != v15 )
          continue;
      }
      goto LABEL_22;
    }
LABEL_30:
    v31 = 1;
  }
  else
  {
LABEL_22:
    v24 = *a2;
    if ( 24 * a2[1] )
    {
      while ( 1 )
      {
        v25 = 3LL * *(int *)(*(_QWORD *)v24 + 72LL);
        v26 = **(_QWORD **)(a1 + 8);
        LOBYTE(v48) = 1;
        v44 = nullptr;
        v27 = (unsigned __int64 *)(v26 + 8 * v25);
        v45 = 0;
        v28 = *a3;
        BYTE8(v46) = *((_BYTE *)a3 + 8);
        *(_QWORD *)&v46 = v28;
        v47 = 0xFFFFFFFF00000001LL;
        v29 = (int **)sub_104DF0(v27, (__int64)&v44);
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          qfree((__int64)v44);
        }
        v30 = *v29;
        if ( 4LL * (_QWORD)v29[1] )
          break;
LABEL_36:
        v24 += 24;
        if ( v24 == *a2 + 24 * a2[1] )
          goto LABEL_37;
      }
      while ( sub_64930(v40, *v30) )
      {
        if ( ++v30 == &(*v29)[(_QWORD)v29[1]] )
          goto LABEL_36;
      }
      v31 = -1;
    }
    else
    {
LABEL_37:
      v31 = 0;
    }
  }
  qfree(v40[0]);
  if ( src )
  {
    v43 = 0;
    qfree((__int64)src);
  }
  qfree(v41[0]);
  return v31;
}

