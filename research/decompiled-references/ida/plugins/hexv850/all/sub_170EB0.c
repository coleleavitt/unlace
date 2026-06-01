__int64 __fastcall sub_170EB0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r12
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 i; // rbx
  __int64 v10; // rax

  result = sub_1188E0(a1 + 32);
  v2 = *(_QWORD *)(a1 + 72);
  v3 = *(_QWORD *)(v2 + 24);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v2 + 32);
    if ( v4 )
    {
      v5 = 0;
      do
      {
        v6 = v3 + 80 * v5;
        cleanup_argloc();
        if ( *(_QWORD *)(v6 + 32) )
        {
          *(_QWORD *)(v6 + 40) = 0;
          qfree();
        }
        ++v5;
        clear_tinfo_t();
        sub_1181E0(v6);
        v3 = *(_QWORD *)(v2 + 24);
      }
      while ( v4 != v5 );
    }
    *(_QWORD *)(v2 + 32) = 0;
    result = qfree();
    *(_QWORD *)(v2 + 24) = 0;
    *(_QWORD *)(v2 + 40) = 0;
  }
  *(_DWORD *)(v2 + 8) = 0;
  v7 = *(_QWORD *)(v2 + 48);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v2 + 56);
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = i;
        sub_1181E0(16 * v10 + v7);
        v7 = *(_QWORD *)(v2 + 48);
      }
    }
    *(_QWORD *)(v2 + 56) = 0;
    result = qfree();
    *(_QWORD *)(v2 + 48) = 0;
    *(_QWORD *)(v2 + 64) = 0;
  }
  *(_QWORD *)(v2 + 104) = 0;
  if ( *(_QWORD *)(v2 + 112) )
  {
    *(_QWORD *)(v2 + 120) = 0;
    result = qfree();
    *(_QWORD *)(v2 + 112) = 0;
    *(_QWORD *)(v2 + 128) = 0;
  }
  *(_DWORD *)(v2 + 284) = 1;
  return result;
}

