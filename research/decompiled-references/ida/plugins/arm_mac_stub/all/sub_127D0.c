__int64 (__fastcall **__fastcall sub_127D0(__int64 a1))()
{
  __int64 (__fastcall **result)(); // rax
  bool v2; // zf
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 j; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 k; // rbp
  __int64 v14; // rax

  result = &off_45630;
  v2 = *(_BYTE *)(a1 + 56) == 0;
  *(_QWORD *)a1 = &off_45630;
  if ( !v2 )
    result = (__int64 (__fastcall **)())close_linput();
  if ( *(_QWORD *)(a1 + 488) )
  {
    *(_QWORD *)(a1 + 496) = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( *(_QWORD *)(a1 + 416) )
  {
    *(_QWORD *)(a1 + 424) = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( *(_QWORD *)(a1 + 392) )
  {
    *(_QWORD *)(a1 + 400) = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( *(_QWORD *)(a1 + 368) )
  {
    *(_QWORD *)(a1 + 376) = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  v3 = *(_QWORD *)(a1 + 344);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 352);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 24 * i);
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
          v3 = *(_QWORD *)(a1 + 344);
        }
      }
    }
    *(_QWORD *)(a1 + 352) = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  v7 = *(_QWORD *)(a1 + 320);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 328);
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = (_QWORD *)(v7 + 32 * j);
        if ( *v10 )
        {
          v10[1] = 0;
          qfree();
          v7 = *(_QWORD *)(a1 + 320);
        }
      }
    }
    *(_QWORD *)(a1 + 328) = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  v11 = *(_QWORD *)(a1 + 296);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 304);
    if ( v12 )
    {
      for ( k = 0; k != v12; ++k )
      {
        v14 = v11 + 80 * k;
        if ( *(_QWORD *)(v14 + 40) )
        {
          *(_QWORD *)(v14 + 48) = 0;
          qfree();
          v11 = *(_QWORD *)(a1 + 296);
        }
      }
    }
    *(_QWORD *)(a1 + 304) = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( *(_QWORD *)(a1 + 272) )
  {
    *(_QWORD *)(a1 + 280) = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( *(_QWORD *)(a1 + 248) )
  {
    *(_QWORD *)(a1 + 256) = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( *(_QWORD *)(a1 + 224) )
  {
    *(_QWORD *)(a1 + 232) = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( *(_QWORD *)(a1 + 200) )
  {
    *(_QWORD *)(a1 + 208) = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( *(_QWORD *)(a1 + 136) )
  {
    *(_QWORD *)(a1 + 144) = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( *(_QWORD *)(a1 + 72) )
  {
    *(_QWORD *)(a1 + 80) = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

