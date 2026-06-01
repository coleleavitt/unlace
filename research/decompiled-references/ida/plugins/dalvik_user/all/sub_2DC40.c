unsigned __int64 __fastcall sub_2DC40(_QWORD *a1, int a2, _QWORD *a3)
{
  __int64 v6; // rcx
  _QWORD *v7; // r8
  int v8; // r9d
  _QWORD *v9; // rax
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  const char *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdi
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rdx
  const char *v23; // r15
  const char *v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // r14
  __int64 v27; // r13
  __int64 v28; // r12
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rdi
  const char *v32; // r9
  const char *v33; // rcx
  const char *v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  _QWORD *v39; // rbx
  void *src; // [rsp+0h] [rbp-D0h]
  int v41; // [rsp+1Ch] [rbp-B4h] BYREF
  char *v42; // [rsp+20h] [rbp-B0h] BYREF
  __int128 v43; // [rsp+28h] [rbp-A8h]
  __int64 v44; // [rsp+40h] [rbp-90h] BYREF
  __int128 v45; // [rsp+48h] [rbp-88h]
  __int64 v46; // [rsp+60h] [rbp-70h] BYREF
  __int128 v47; // [rsp+68h] [rbp-68h]
  __int64 v48; // [rsp+80h] [rbp-50h] BYREF
  __int128 v49; // [rsp+88h] [rbp-48h]
  unsigned __int64 v50; // [rsp+98h] [rbp-38h]

  v50 = __readfsqword(0x28u);
  qmutex_lock();
  v9 = (_QWORD *)a1[16];
  v42 = nullptr;
  v43 = 0;
  v10 = a3[1];
  if ( !v9 )
    goto LABEL_8;
  v7 = a1 + 15;
  v11 = a1 + 15;
  do
  {
    while ( 1 )
    {
      v6 = v9[2];
      v12 = v9[3];
      if ( v9[4] < v10 )
        break;
      v11 = v9;
      v9 = (_QWORD *)v9[2];
      if ( !v6 )
        goto LABEL_6;
    }
    v9 = (_QWORD *)v9[3];
  }
  while ( v12 );
LABEL_6:
  if ( v7 == v11 || v10 < v11[4] )
  {
LABEL_8:
    sub_58110(*a1, (unsigned int)"%sUNLOADED class\n", a2, v6, (_DWORD)v7, v8);
LABEL_9:
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree();
    }
    qmutex_unlock();
    return v50 - __readfsqword(0x28u);
  }
  v14 = a1[5] + 72LL * *((int *)v11 + 10);
  if ( &v42 == (char **)(v14 + 16) || (v15 = *(_QWORD *)(v14 + 24), v15 <= 1) )
  {
    v44 = 0;
    v45 = 0;
  }
  else
  {
    src = *(void **)(v14 + 16);
    v42 = (char *)qvector_reserve();
    *(_QWORD *)&v43 = v15;
    memmove(v42, src, v15 - 1);
    v42[v15 - 1] = 0;
    v16 = v42;
    v45 = 0;
    v44 = 0;
    if ( (_QWORD)v43 )
      goto LABEL_17;
  }
  v16 = nptr;
LABEL_17:
  sub_33AF0(&v44, v16);
  v17 = a3[1];
  v18 = a1[2];
  v46 = 0;
  v47 = 0;
  sub_4CD10(v18, &v46, v17);
  v21 = v46;
  v22 = v46 + 88 * v47;
  if ( v46 == v22 )
    goto LABEL_52;
  while ( *(_QWORD *)v21 != a3[2] )
  {
    v21 += 88;
    if ( v21 == v22 )
      goto LABEL_52;
  }
  if ( v22 == v21 )
  {
LABEL_52:
    v34 = nptr;
    if ( (_QWORD)v45 )
      LODWORD(v34) = v44;
    sub_58110(*a1, (unsigned int)"%s%s UNKNOWN method\n", a2, (_DWORD)v34, v19, v20);
    v35 = v46;
    if ( v46 )
    {
      v36 = v47;
      if ( (_QWORD)v47 )
      {
        v37 = 0;
        v38 = 0;
        do
        {
          v39 = (_QWORD *)(v35 + v37);
          if ( *(_QWORD *)(v35 + v37 + 56) )
          {
            v39[8] = 0;
            qfree();
          }
          if ( v39[4] )
          {
            v39[5] = 0;
            qfree();
          }
          if ( v39[1] )
          {
            v39[2] = 0;
            qfree();
          }
          ++v38;
          v35 = v46;
          v37 += 88;
        }
        while ( v36 != v38 );
      }
      *(_QWORD *)&v47 = 0;
      qfree();
    }
    if ( v44 )
    {
      *(_QWORD *)&v45 = 0;
      qfree();
    }
    goto LABEL_9;
  }
  v23 = nptr;
  if ( *(_QWORD *)(v21 + 16) )
    v23 = *(const char **)(v21 + 8);
  if ( (*(_BYTE *)(v21 + 81) & 1) != 0 )
  {
    v24 = nptr;
    if ( (_QWORD)v45 )
      LODWORD(v24) = v44;
    sub_58110(*a1, (unsigned int)"%s%s.%s() (native method)\n", a2, (_DWORD)v24, (_DWORD)v23, v20);
  }
  else
  {
    v41 = -1;
    sub_2DB20(a1, &v41, nullptr, nullptr, a3);
    v30 = a3[1];
    v31 = a1[2];
    v48 = 0;
    v49 = 0;
    sub_4C170(v31, &v48, v30);
    v32 = nptr;
    if ( (_QWORD)v49 )
      LODWORD(v32) = v48;
    v33 = nptr;
    if ( (_QWORD)v45 )
      LODWORD(v33) = v44;
    sub_58110(*a1, (unsigned int)"%s%s.%s() (%s:%d) bci=%llu\n", a2, (_DWORD)v33, (_DWORD)v23, (_DWORD)v32);
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree();
    }
  }
  v25 = v46;
  if ( v46 )
  {
    v26 = v47;
    if ( (_QWORD)v47 )
    {
      v27 = 0;
      v28 = 0;
      do
      {
        v29 = (_QWORD *)(v25 + v27);
        if ( *(_QWORD *)(v25 + v27 + 56) )
        {
          v29[8] = 0;
          qfree();
        }
        if ( v29[4] )
        {
          v29[5] = 0;
          qfree();
        }
        if ( v29[1] )
        {
          v29[2] = 0;
          qfree();
        }
        ++v28;
        v25 = v46;
        v27 += 88;
      }
      while ( v26 != v28 );
    }
    *(_QWORD *)&v47 = 0;
    qfree();
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree();
  }
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree();
  }
  qmutex_unlock();
  return v50 - __readfsqword(0x28u);
}

