__int64 __fastcall sub_1D3130(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r12
  _QWORD *v6; // rbx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 368) )
  {
    sub_7E780((unsigned __int64 **)(a1 + 368));
    if ( *(_QWORD *)(a1 + 368) )
      qfree();
  }
  if ( *(_QWORD *)(a1 + 344) )
  {
    *(_QWORD *)(a1 + 352) = 0;
    qfree();
  }
  v2 = *(_QWORD *)(a1 + 320);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 328);
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v2 + v4);
        clear_tinfo_t();
        if ( *(_QWORD *)(v2 + v4 + 56) )
        {
          v6[8] = 0;
          qfree();
        }
        if ( v6[4] )
        {
          v6[5] = 0;
          qfree();
        }
        ++v5;
        v4 += 104;
        cleanup_argloc();
        v2 = *(_QWORD *)(a1 + 320);
      }
      while ( v3 != v5 );
    }
    *(_QWORD *)(a1 + 328) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 296) )
  {
    *(_QWORD *)(a1 + 304) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 264) )
  {
    *(_QWORD *)(a1 + 272) = 0;
    qfree();
  }
  result = qfree();
  if ( *(_QWORD *)(a1 + 224) )
  {
    *(_QWORD *)(a1 + 232) = 0;
    result = qfree();
  }
  if ( *(_QWORD *)(a1 + 200) )
  {
    *(_QWORD *)(a1 + 208) = 0;
    result = qfree();
  }
  if ( *(_QWORD *)(a1 + 176) )
  {
    *(_QWORD *)(a1 + 184) = 0;
    result = qfree();
  }
  if ( *(_QWORD *)(a1 + 144) )
  {
    *(_QWORD *)(a1 + 152) = 0;
    result = qfree();
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 16) = 0;
    return qfree();
  }
  return result;
}

