__int64 __fastcall sub_DAE10(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 *a5, _QWORD *a6, char a7)
{
  __int64 v10; // rax
  _QWORD *v11; // r12
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebp
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r12
  __int64 v29; // r15
  __int64 v30; // rbp
  void *v31; // rax
  const void *v32; // rsi
  __int64 v33; // [rsp+18h] [rbp-E8h]
  __int64 n; // [rsp+20h] [rbp-E0h]
  _QWORD v35[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h]
  _UNKNOWN **v38; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  int v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+84h] [rbp-7Ch]
  __int64 v44; // [rsp+88h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-70h] BYREF
  void *v46; // [rsp+A0h] [rbp-60h]
  __int128 v47; // [rsp+A8h] [rbp-58h]
  char v48; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v49; // [rsp+C0h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v40 = a2;
  v38 = nullptr;
  LOBYTE(v41) = 5;
  v42 = a3;
  v43 = -1;
  LOBYTE(v44) = 1;
  v10 = *a5;
  v39 = 0;
  v11 = (_QWORD *)sub_100230(v10 + 24LL * (int)a4, &v38);
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree();
  }
  if ( !v11 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 72LL) != a4 )
    {
      if ( !under_debugger )
        sub_37CFE0(50081);
      BUG();
    }
    return 0;
  }
  v12 = v11[1];
  if ( v12 && (int)v12 > 0 )
  {
    v29 = 0;
    v30 = 4LL * (unsigned int)(v12 - 1) + 4;
    while ( (unsigned __int8)sub_DA520((_QWORD *)a1, a4, *(_DWORD *)(*v11 + v29), (__int64)v11) )
    {
      v29 += 4;
      if ( v29 == v30 )
        goto LABEL_5;
    }
    if ( !a7 )
      return 1;
  }
LABEL_5:
  v13 = *(_DWORD *)(*(_QWORD *)a1 + 72LL);
  if ( v13 == a4 )
    return 0;
  v14 = *(_QWORD *)(a1 + 8);
  v15 = sub_D6640(v14, a4, v13, (__int64)a6);
  v19 = v15;
  if ( v15 )
  {
    if ( v15 == -1 && (*(_BYTE *)(a1 + 356) & 4) != 0 )
      return v19;
    return 1;
  }
  v20 = *(_QWORD *)(a1 + 8);
  if ( a4 >= *(_DWORD *)(v20 + 64) )
    sub_D6050(v14, a4, v16, v17, v18);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 528) + 8LL * a4);
  v22 = sub_124590(v21, (_DWORD)a6, *(_QWORD *)(v21 + 56), 0, 0, 0, 8449);
  if ( !v22 )
    return 0;
  if ( *(_DWORD *)v22 == 61 || (unsigned int)(*(_DWORD *)v22 - 56) <= 1 && *(_BYTE *)(v22 + 64) == 8 )
    return 1;
  v39 = 0u;
  v38 = &off_4B0798;
  v40 = 0;
  v41 = 0;
  LOBYTE(v42) = 0;
  v44 = v21;
  sub_5F580(&v45, (__int64)a6);
  v26 = a6[3];
  v46 = nullptr;
  v47 = 0;
  if ( v26 )
  {
    v33 = v26;
    n = 16 * v26;
    v31 = (void *)qalloc_or_throw();
    v32 = (const void *)a6[2];
    v46 = v31;
    *((_QWORD *)&v47 + 1) = v33;
    memcpy(v31, v32, n);
    v26 = v33;
    *(_QWORD *)&v47 = v33;
  }
  v48 = 0;
  sub_119D40(v22, &v38, v23, v24, v26, v25);
  if ( v48 && (_QWORD)v47 )
  {
LABEL_22:
    v19 = 1;
  }
  else if ( !a7 )
  {
    v27 = *(_QWORD *)(v22 + 8);
    if ( v27 )
    {
      while ( 1 )
      {
        sub_11FAC0(v35, v21, v27, 0);
        if ( (unsigned __int8)sub_5FD00(v35, a6) )
          break;
        if ( (unsigned __int8)sub_312BB0(&v36, a6 + 2) )
        {
          if ( !v36 )
          {
LABEL_21:
            qfree();
            goto LABEL_22;
          }
LABEL_20:
          v37 = 0;
          qfree();
          goto LABEL_21;
        }
        if ( v36 )
        {
          v37 = 0;
          qfree();
        }
        qfree();
        v27 = *(_QWORD *)(v27 + 8);
        if ( !v27 )
          goto LABEL_23;
      }
      if ( !v36 )
        goto LABEL_21;
      goto LABEL_20;
    }
  }
LABEL_23:
  v38 = &off_4B0798;
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree();
  }
  qfree();
  return v19;
}

