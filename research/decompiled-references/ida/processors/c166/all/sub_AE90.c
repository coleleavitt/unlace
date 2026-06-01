int __fastcall sub_AE90(__int64 a1, char a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 i; // rbp
  _QWORD *v7; // rbx
  int result; // eax

  v3 = *(_QWORD *)(a1 + 240);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 248);
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (_QWORD *)(v3 + v5);
        if ( *(_QWORD *)(v3 + v5 + 24) )
        {
          v7[4] = 0;
          qfree();
        }
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
        }
        v3 = *(_QWORD *)(a1 + 240);
        v5 += 56;
      }
    }
    *(_QWORD *)(a1 + 248) = 0;
    qfree();
    *(_QWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 256) = 0;
  }
  if ( !*(_QWORD *)(a1 + 144) || (result = strcmp(*(const char **)(a1 + 136), "NONE")) != 0 )
  {
    sub_9B30((__int64 *)(a1 + 128), a2 & 6);
    return sub_AC40((_QWORD *)a1, a2);
  }
  return result;
}

