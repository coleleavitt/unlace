__int64 __fastcall sub_37EE0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v8; // rdi
  __int64 v9; // r13
  _QWORD *v10; // rbx
  __int64 v11; // rax
  const char *v12; // rcx
  const char *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rsi
  _QWORD *v16; // r15
  __int64 *v17; // rax
  const char *v18; // r12
  __int64 *v19; // rax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  const char *v23; // rsi
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 v28; // r13
  __int64 v29; // r12
  __int64 *v30; // rbp
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 *v33; // rax
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  const char *v38; // rsi
  __int64 v39; // rdx
  const void *v40; // r15
  void *v41; // rax
  unsigned __int64 v42; // [rsp+0h] [rbp-98h]
  size_t n; // [rsp+8h] [rbp-90h]
  __int64 v44; // [rsp+18h] [rbp-80h] BYREF
  __int64 v45; // [rsp+20h] [rbp-78h] BYREF
  __int128 v46; // [rsp+28h] [rbp-70h]
  __int64 v47; // [rsp+38h] [rbp-60h]
  __int128 v48; // [rsp+40h] [rbp-58h]
  int v49; // [rsp+50h] [rbp-48h]
  char v50; // [rsp+54h] [rbp-44h]
  unsigned __int64 v51; // [rsp+58h] [rbp-40h]

  v1 = *(unsigned __int8 *)(a1 + 142);
  v51 = __readfsqword(0x28u);
  v2 = 0;
  if ( (unsigned __int8)v1 > 2u )
    return v1;
  v3 = *(_QWORD *)(a1 + 152);
  if ( !v3 )
  {
LABEL_8:
    v8 = *(_QWORD *)(a1 + 88);
    v45 = 0;
    v47 = 0;
    v49 = 0;
    v50 = 0x80;
    v46 = 0;
    v48 = 0;
    if ( v8 == a1 )
    {
      v44 = 0xA83392F22AF7AED3LL;
      sub_349E0(a1, &v44);
    }
    else
    {
      v1 = *(unsigned __int8 *)(v8 + 142);
      if ( (_BYTE)v1 == 5 )
        return v1;
      if ( (unsigned __int8)v1 <= 2u )
        return 0;
      sub_350A0(v8, a1 + 8);
      sub_349E0(a1, (__int64 *)(*(_QWORD *)(a1 + 88) + 72LL));
    }
    v9 = 0;
    if ( !*(_QWORD *)(a1 + 152) )
    {
LABEL_31:
      if ( *(_DWORD *)(a1 + 136) )
      {
        _BitScanReverse64(&v25, *(unsigned int *)(a1 + 136));
        v50 += v25 + 1;
      }
      if ( (unsigned __int8)create_tinfo(a1 + 8, 45, 45, &v45) )
      {
        v1 = 3;
      }
      else
      {
        if ( (debug & 0x400000) != 0 )
        {
          v33 = sub_34340(a1);
          v38 = src;
          if ( v33[1] )
            v38 = (const char *)*v33;
          sub_88B80(
            (unsigned int)"Error enumeration DIE %s creating type information\n",
            (_DWORD)v38,
            v34,
            v35,
            v36,
            v37);
        }
        v1 = 5;
      }
      if ( v47 )
      {
        *(_QWORD *)&v48 = 0;
        qfree(v47);
      }
      v26 = v45;
      if ( v45 )
      {
        v27 = v46;
        if ( (_QWORD)v46 )
        {
          v28 = 0;
          v29 = 0;
          do
          {
            v30 = (__int64 *)(v26 + v28);
            v31 = *(_QWORD *)(v26 + v28 + 24);
            if ( v31 )
            {
              v30[4] = 0;
              qfree(v31);
            }
            v32 = *v30;
            if ( *v30 )
            {
              v30[1] = 0;
              qfree(v32);
            }
            ++v29;
            v26 = v45;
            v28 += 56;
          }
          while ( v27 != v29 );
        }
        *(_QWORD *)&v46 = 0;
        qfree(v26);
      }
      return v1;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = v46;
        v15 = v45;
        v16 = *(_QWORD **)(*(_QWORD *)(a1 + 144) + 8 * v9);
        if ( *((_QWORD *)&v46 + 1) < (unsigned __int64)(v46 + 1) )
        {
          v45 = qvector_reserve(&v45, v45, v46 + 1, 56);
          v14 = v46;
          v15 = v45;
        }
        v10 = (_QWORD *)(v15 + 56 * v14);
        *v10 = 0;
        *(_OWORD *)(v10 + 1) = 0;
        v10[3] = 0;
        *((_OWORD *)v10 + 2) = 0;
        v11 = v16[18];
        *(_QWORD *)&v46 = v46 + 1;
        v10[6] = v11;
        if ( *(_QWORD *)(a1 + 64) )
        {
          v12 = src;
          if ( v16[6] )
            v12 = (const char *)v16[5];
          v13 = src;
          if ( *(_QWORD *)(a1 + 48) )
            v13 = *(const char **)(a1 + 40);
          sub_20160(v10, (__int64)"%s::%s", v13, v12);
          goto LABEL_20;
        }
        if ( v10 != v16 + 5 )
          break;
LABEL_20:
        if ( (unsigned __int64)++v9 >= *(_QWORD *)(a1 + 152) )
          goto LABEL_31;
      }
      v24 = v16[6];
      if ( v24 > 1 )
      {
        v39 = v16[6];
        n = v24 - 1;
        v40 = (const void *)v16[5];
        v42 = v24;
        v41 = (void *)qvector_reserve(v10, *v10, v39, 1);
        *v10 = v41;
        v10[1] = v42;
        memmove(v41, v40, n);
        *(_BYTE *)(*v10 + v42 - 1) = 0;
        goto LABEL_20;
      }
      v10[1] = 0;
      if ( (unsigned __int64)++v9 >= *(_QWORD *)(a1 + 152) )
        goto LABEL_31;
    }
  }
  v5 = *(_QWORD *)(a1 + 144);
  while ( 1 )
  {
    v6 = *(_QWORD *)(v5 + 8 * v2);
    v1 = *(unsigned __int8 *)(v6 + 142);
    if ( (_BYTE)v1 == 5 )
      break;
    if ( v3 == ++v2 )
      goto LABEL_8;
  }
  if ( (debug & 0x400000) != 0 )
  {
    v17 = sub_34340(v6);
    v18 = src;
    if ( v17[1] )
      v18 = (const char *)*v17;
    v19 = sub_34340(a1);
    v23 = src;
    if ( v19[1] )
      v23 = (const char *)*v19;
    sub_88B80(
      (unsigned int)"Error enumeration DIE %s dependency DIE %s processing error\n",
      (_DWORD)v23,
      (_DWORD)v18,
      v20,
      v21,
      v22);
  }
  return v1;
}
