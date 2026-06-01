__int64 __fastcall sub_291C0(_QWORD *a1)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rax
  char v7; // dl
  __int64 v8; // rax
  __int64 i; // rbx
  _QWORD *v10; // rdx
  __int64 v12; // [rsp+0h] [rbp-68h] BYREF
  __int64 v13; // [rsp+8h] [rbp-60h]
  __int64 v14; // [rsp+10h] [rbp-58h] BYREF
  __int128 v15; // [rsp+18h] [rbp-50h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  qmutex_lock();
  v14 = 0;
  v15 = 0;
  sub_1C9E0((__int64)a1, &v14);
  v2 = v15;
  v3 = v14;
  v4 = v14;
  if ( 24LL * (_QWORD)v15 )
  {
    do
    {
      v12 = 0;
      v13 = 0;
      qmutex_lock();
      v5 = sub_23D40((__int64)(a1 + 8), v3);
      if ( v5 == a1 + 9 )
      {
        qmutex_unlock();
      }
      else
      {
        v6 = a1[5] + 72LL * *((int *)v5 + 14);
        v7 = *(_BYTE *)v6;
        v8 = *(_QWORD *)(v6 + 8);
        LOBYTE(v12) = v7;
        v13 = v8;
        qmutex_unlock();
        sub_28E00(a1, (char *)&v12);
      }
      v2 = v15;
      v4 = v14;
      v3 += 24;
    }
    while ( v3 != v14 + 24LL * (_QWORD)v15 );
  }
  if ( v4 )
  {
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v10 = (_QWORD *)(v4 + 24 * i);
        if ( *v10 )
        {
          v10[1] = 0;
          qfree();
          v4 = v14;
        }
      }
    }
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  qmutex_unlock();
  return 1;
}

