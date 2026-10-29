__int64 *__fastcall sub_336E0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  const char *v5; // rdi
  unsigned __int64 v7; // r15
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  void *v12; // rdi
  const char *v13; // rdx
  const char *v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  const void *v17; // r8
  void *v18; // rax
  const void *v19; // [rsp+8h] [rbp-A0h]
  const char *v20; // [rsp+10h] [rbp-98h] BYREF
  __int128 v21; // [rsp+18h] [rbp-90h]
  const char *v22; // [rsp+30h] [rbp-78h] BYREF
  __int128 v23; // [rsp+38h] [rbp-70h]
  void *dest; // [rsp+50h] [rbp-58h] BYREF
  __int128 v25; // [rsp+58h] [rbp-50h]
  unsigned __int64 v26; // [rsp+68h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v20 = nullptr;
  v3 = sub_135E0(a1, a2);
  v21 = 0;
  v4 = 0;
  if ( (unsigned __int8)sub_4C170(v3 + 864, &v20, *(_QWORD *)(a2 + 16)) )
  {
    v4 = operator new(0x28u);
    sub_33440(v4);
    if ( (debug & 0x40000) == 0 )
      goto LABEL_3;
  }
  else if ( (debug & 0x40000) == 0 )
  {
    goto LABEL_3;
  }
  v7 = *(_QWORD *)(a2 + 16);
  v22 = nullptr;
  dest = nullptr;
  v23 = 0;
  v25 = 0;
  qmutex_lock();
  v8 = *(_QWORD **)(v3 + 1168);
  if ( !v8 )
    goto LABEL_14;
  v9 = (_QWORD *)(v3 + 1160);
  do
  {
    while ( 1 )
    {
      v10 = v8[2];
      v11 = v8[3];
      if ( v8[4] < v7 )
        break;
      v9 = v8;
      v8 = (_QWORD *)v8[2];
      if ( !v10 )
        goto LABEL_12;
    }
    v8 = (_QWORD *)v8[3];
  }
  while ( v11 );
LABEL_12:
  if ( v9 != (_QWORD *)(v3 + 1160) && v7 >= v9[4] )
  {
    v15 = *(_QWORD *)(v3 + 1080) + 72LL * *((int *)v9 + 10);
    if ( &dest != (void **)(v15 + 16) )
    {
      v16 = *(_QWORD *)(v15 + 24);
      if ( v16 > 1 )
      {
        v17 = *(const void **)(v15 + 16);
        v18 = dest;
        if ( *((_QWORD *)&v25 + 1) < v16 )
        {
          v19 = v17;
          v18 = (void *)qvector_reserve();
          dest = v18;
          v17 = v19;
        }
        *(_QWORD *)&v25 = v16;
        memmove(v18, v17, v16 - 1);
        *((char *)dest + v16 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&v25 = 0;
      }
    }
    qmutex_unlock();
    v12 = dest;
    if ( (_QWORD)v25 && *(_BYTE *)dest == 76 )
    {
      sub_32350((__int64)&v22, (__int64)dest);
      v12 = dest;
    }
  }
  else
  {
LABEL_14:
    qmutex_unlock();
    v12 = dest;
  }
  if ( v12 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  if ( (debug & 0x40000) != 0 )
  {
    v13 = "is absent";
    if ( v4 )
    {
      v13 = nptr;
      if ( (_QWORD)v21 )
        v13 = v20;
    }
    v14 = nptr;
    if ( (_QWORD)v23 )
      v14 = v22;
    sub_111A0((__int64)"DEXSIP: get_source_files(%s): file %s\n", v14, v13);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
LABEL_3:
  v5 = v20;
  *a1 = v4;
  if ( v5 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return a1;
}

