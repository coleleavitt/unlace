__int64 __fastcall sub_DF9D0(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 *a5, _QWORD *a6, char a7)
{
  __int64 v9; // rax
  _QWORD *v10; // r12
  __int64 v11; // rax
  int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r12
  unsigned __int64 *v21; // rdi
  __int64 v23; // r15
  __int64 v24; // rbp
  char v25; // al
  void *v26; // rax
  const void *v27; // rsi
  __int64 v28; // [rsp+18h] [rbp-E8h]
  __int64 n; // [rsp+20h] [rbp-E0h]
  __int64 v30[2]; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 *v31; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C0h]
  _UNKNOWN **v33; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h]
  int v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+84h] [rbp-7Ch]
  __int64 v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int128 v42; // [rsp+A8h] [rbp-58h]
  char v43; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v44; // [rsp+C0h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v35 = a2;
  v33 = nullptr;
  LOBYTE(v36) = 5;
  v37 = a3;
  v38 = -1;
  LOBYTE(v39) = 1;
  v9 = *a5;
  v34 = 0;
  v10 = sub_104DF0((unsigned __int64 *)(v9 + 24LL * (int)a4), (__int64)&v33);
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree((__int64)v33);
  }
  if ( !v10 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 72LL) != a4 )
    {
      if ( !under_debugger )
        sub_383060(0xC3A1u, 0.0);
      BUG();
    }
    return 0;
  }
  v11 = v10[1];
  if ( v11 && (int)v11 > 0 )
  {
    v23 = 0;
    v24 = 4LL * (unsigned int)(v11 - 1) + 4;
    while ( (unsigned __int8)sub_DF0E0((_QWORD *)a1, a4, *(_DWORD *)(*v10 + v23), (__int64)v10, 0.0) )
    {
      v23 += 4;
      if ( v23 == v24 )
        goto LABEL_5;
    }
    if ( !a7 )
      return 1;
  }
LABEL_5:
  v12 = *(_DWORD *)(*(_QWORD *)a1 + 72LL);
  if ( v12 == a4 )
    return 0;
  v13 = sub_DB200(*(_QWORD *)(a1 + 8), a4, v12, (__int64)a6, 0.0);
  v14 = v13;
  if ( v13 )
  {
    if ( v13 == -1 && (*(_BYTE *)(a1 + 356) & 4) != 0 )
      return v14;
    return 1;
  }
  v15 = *(_QWORD *)(a1 + 8);
  if ( a4 >= *(_DWORD *)(v15 + 64) )
    sub_DAC10(0.0);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 528) + 8LL * a4);
  v17 = sub_129150(v16, a6, *(_QWORD *)(v16 + 56), 0, 0, 0, 0x2101u);
  if ( !v17 )
    return 0;
  if ( *(_DWORD *)v17 == 61 || (unsigned int)(*(_DWORD *)v17 - 56) <= 1 && *(_BYTE *)(v17 + 64) == 8 )
    return 1;
  v34 = 0u;
  v33 = &off_4DCDB8;
  v35 = 0;
  v36 = 0;
  LOBYTE(v37) = 0;
  v39 = v16;
  sub_64000(&v40, (__int64)a6, 0.0);
  v19 = a6[3];
  v41 = 0;
  v42 = 0;
  if ( v19 )
  {
    v28 = v19;
    n = 16 * v19;
    v26 = (void *)qalloc_or_throw(16 * v19, (__int64)a6, 16 * v19, v18);
    v27 = (const void *)a6[2];
    v41 = (__int64)v26;
    *((_QWORD *)&v42 + 1) = v28;
    memcpy(v26, v27, n);
    *(_QWORD *)&v42 = v28;
  }
  v43 = 0;
  sub_11E900((_BYTE *)v17, (__int64)&v33);
  if ( v43 && (_QWORD)v42 )
  {
LABEL_22:
    v14 = 1;
  }
  else if ( !a7 )
  {
    v20 = *(_QWORD *)(v17 + 8);
    if ( v20 )
    {
      while ( 1 )
      {
        sub_124680((__int64)v30, v16, v20, 0);
        if ( (unsigned __int8)sub_64780(v30, a6) )
          break;
        v25 = sub_318470(&v31, (__int64)(a6 + 2));
        v21 = v31;
        if ( v25 )
        {
          if ( !v31 )
          {
LABEL_21:
            qfree(v30[0]);
            goto LABEL_22;
          }
LABEL_20:
          v32 = 0;
          qfree((__int64)v21);
          goto LABEL_21;
        }
        if ( v31 )
        {
          v32 = 0;
          qfree((__int64)v31);
        }
        qfree(v30[0]);
        v20 = *(_QWORD *)(v20 + 8);
        if ( !v20 )
          goto LABEL_23;
      }
      v21 = v31;
      if ( !v31 )
        goto LABEL_21;
      goto LABEL_20;
    }
  }
LABEL_23:
  v33 = &off_4DCDB8;
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  qfree(v40);
  return v14;
}

