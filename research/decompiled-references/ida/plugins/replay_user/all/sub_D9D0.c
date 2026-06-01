unsigned __int64 __fastcall sub_D9D0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // r14d
  __int64 v8; // rdi
  _BYTE *v12; // r15
  __int64 v13; // rsi
  char v14; // al
  __int64 *v15; // r13
  unsigned __int64 *v16; // rax
  signed __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v23; // rcx
  __int64 *v24; // [rsp+0h] [rbp-58h] BYREF
  __int128 v25; // [rsp+8h] [rbp-50h]
  unsigned __int64 i; // [rsp+18h] [rbp-40h]

  v6 = 0;
  v8 = 0;
  for ( i = __readfsqword(0x28u); v6 < a4; *v12 = get_db_byte() )
  {
    v12 = (_BYTE *)(a3 + v8);
    v8 = ++v6;
  }
  v24 = nullptr;
  v13 = *(unsigned int *)(a1 + 1032);
  v25 = 0;
  v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
          1140,
          v13,
          &v24,
          &callui,
          a5,
          a6);
  v15 = v24;
  if ( v14 && 32LL * (_QWORD)v25 )
  {
    v16 = (unsigned __int64 *)v24;
    while ( 1 )
    {
      v17 = v16[2];
      if ( v17 )
      {
        v18 = *v16;
        if ( *v16 >= a2 && a2 + a4 >= v18 )
          break;
      }
      v16 += 4;
      if ( v16 == (unsigned __int64 *)&v24[4 * (_QWORD)v25] )
        goto LABEL_10;
    }
    v23 = (unsigned int)(v18 - a2);
    if ( (int)v23 <= 0 )
    {
      if ( !under_debugger )
        interr();
    }
    else
    {
      if ( a4 - v23 <= v17 )
        v17 = a4 - v23;
      if ( v17 > 0 )
      {
        memcpy((void *)(a3 + v23), (const void *)v16[1], v17);
        goto LABEL_10;
      }
      if ( !under_debugger )
        interr();
    }
    BUG();
  }
LABEL_10:
  if ( v15 )
  {
    v19 = v25;
    if ( (_QWORD)v25 )
    {
      v20 = 0;
      do
      {
        v21 = &v15[4 * v20];
        if ( v21[1] )
        {
          v21[2] = 0;
          qfree();
          v15 = v24;
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  return a4;
}

