const char *__fastcall sub_36100(__int64 *a1, __int64 a2)
{
  bool v2; // cc
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // r13
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  const void *v14; // r14
  void *v15; // rax
  void *v16; // rdi
  __int64 v17; // [rsp+0h] [rbp-68h] BYREF
  __int128 v18; // [rsp+8h] [rbp-60h]
  void *dest; // [rsp+20h] [rbp-48h] BYREF
  __int128 v20; // [rsp+28h] [rbp-40h]
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v2 = (unsigned __int64)a1[2] <= 1;
  v21 = __readfsqword(0x28u);
  if ( !v2 )
    return (const char *)a1[1];
  v17 = 0;
  v18 = 0;
  v5 = sub_135E0(a1, a2);
  v6 = a1[5];
  v7 = v5;
  dest = nullptr;
  v20 = 0;
  qmutex_lock();
  v8 = *(_QWORD **)(v7 + 1168);
  if ( !v8 )
    goto LABEL_18;
  v9 = (_QWORD *)(v7 + 1160);
  do
  {
    while ( 1 )
    {
      v10 = v8[2];
      v11 = v8[3];
      if ( v8[4] < v6 )
        break;
      v9 = v8;
      v8 = (_QWORD *)v8[2];
      if ( !v10 )
        goto LABEL_8;
    }
    v8 = (_QWORD *)v8[3];
  }
  while ( v11 );
LABEL_8:
  if ( v9 == (_QWORD *)(v7 + 1160) || v6 < v9[4] )
  {
LABEL_18:
    qmutex_unlock();
    v16 = dest;
  }
  else
  {
    v12 = *(_QWORD *)(v7 + 1080) + 72LL * *((int *)v9 + 10);
    if ( &dest != (void **)(v12 + 16) )
    {
      v13 = *(_QWORD *)(v12 + 24);
      if ( v13 < 2 )
      {
        *(_QWORD *)&v20 = 0;
      }
      else
      {
        v14 = *(const void **)(v12 + 16);
        v15 = dest;
        if ( *((_QWORD *)&v20 + 1) < v13 )
        {
          v15 = (void *)qvector_reserve();
          dest = v15;
        }
        *(_QWORD *)&v20 = v13;
        memmove(v15, v14, v13 - 1);
        *((char *)dest + v13 - 1) = 0;
      }
    }
    qmutex_unlock();
    v16 = dest;
    if ( (_QWORD)v20 && *(_BYTE *)dest == 76 )
    {
      sub_32350((__int64)&v17, (__int64)dest);
      v16 = dest;
    }
  }
  if ( v16 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  sub_13B20(a1 + 1);
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  if ( a1[2] )
    return (const char *)a1[1];
  else
    return nptr;
}

