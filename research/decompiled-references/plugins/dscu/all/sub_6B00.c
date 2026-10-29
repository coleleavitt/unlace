__int64 (__fastcall **__fastcall sub_6B00(__int64 a1))()
{
  __int64 (__fastcall **result)(); // rax
  bool v2; // zf
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 i; // rbp
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 j; // rbp
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 k; // rbp
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi

  result = &off_1E278;
  v2 = *(_BYTE *)(a1 + 56) == 0;
  *(_QWORD *)a1 = &off_1E278;
  if ( !v2 )
    result = (__int64 (__fastcall **)())close_linput(*(_QWORD *)(a1 + 48));
  v4 = *(_QWORD *)(a1 + 488);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 496) = 0;
    result = (__int64 (__fastcall **)())qfree(v4);
  }
  v5 = *(_QWORD *)(a1 + 416);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 424) = 0;
    result = (__int64 (__fastcall **)())qfree(v5);
  }
  v6 = *(_QWORD *)(a1 + 392);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 400) = 0;
    result = (__int64 (__fastcall **)())qfree(v6);
  }
  v7 = *(_QWORD *)(a1 + 368);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 376) = 0;
    result = (__int64 (__fastcall **)())qfree(v7);
  }
  v8 = *(_QWORD *)(a1 + 344);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 352);
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = (__int64 *)(v8 + 24 * i);
        v12 = *v11;
        if ( *v11 )
        {
          v11[1] = 0;
          qfree(v12);
          v8 = *(_QWORD *)(a1 + 344);
        }
      }
    }
    *(_QWORD *)(a1 + 352) = 0;
    result = (__int64 (__fastcall **)())qfree(v8);
  }
  v13 = *(_QWORD *)(a1 + 320);
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 328);
    if ( v14 )
    {
      for ( j = 0; j != v14; ++j )
      {
        v16 = (__int64 *)(v13 + 32 * j);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17);
          v13 = *(_QWORD *)(a1 + 320);
        }
      }
    }
    *(_QWORD *)(a1 + 328) = 0;
    result = (__int64 (__fastcall **)())qfree(v13);
  }
  v18 = *(_QWORD *)(a1 + 296);
  if ( v18 )
  {
    v19 = *(_QWORD *)(a1 + 304);
    if ( v19 )
    {
      for ( k = 0; k != v19; ++k )
      {
        v21 = v18 + 80 * k;
        v22 = *(_QWORD *)(v21 + 40);
        if ( v22 )
        {
          *(_QWORD *)(v21 + 48) = 0;
          qfree(v22);
          v18 = *(_QWORD *)(a1 + 296);
        }
      }
    }
    *(_QWORD *)(a1 + 304) = 0;
    result = (__int64 (__fastcall **)())qfree(v18);
  }
  v23 = *(_QWORD *)(a1 + 272);
  if ( v23 )
  {
    *(_QWORD *)(a1 + 280) = 0;
    result = (__int64 (__fastcall **)())qfree(v23);
  }
  v24 = *(_QWORD *)(a1 + 248);
  if ( v24 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    result = (__int64 (__fastcall **)())qfree(v24);
  }
  v25 = *(_QWORD *)(a1 + 224);
  if ( v25 )
  {
    *(_QWORD *)(a1 + 232) = 0;
    result = (__int64 (__fastcall **)())qfree(v25);
  }
  v26 = *(_QWORD *)(a1 + 200);
  if ( v26 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    result = (__int64 (__fastcall **)())qfree(v26);
  }
  v27 = *(_QWORD *)(a1 + 136);
  if ( v27 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    result = (__int64 (__fastcall **)())qfree(v27);
  }
  v28 = *(_QWORD *)(a1 + 72);
  if ( v28 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    return (__int64 (__fastcall **)())qfree(v28);
  }
  return result;
}
