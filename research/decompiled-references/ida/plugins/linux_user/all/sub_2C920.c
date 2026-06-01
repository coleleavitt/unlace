__int64 __fastcall sub_2C920(__int64 a1, __int64 *a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v7; // r13
  int v8; // r13d
  __int64 v9; // r12

  v2 = *(unsigned __int8 *)(a1 + 32);
  if ( (_BYTE)v2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(a1 + 8);
    v5 = v4 + 56 * v3;
    if ( 56 * v3 )
    {
      while ( !*(_QWORD *)(v4 + 8) || strcmp(*(const char **)v4, "GNU") || *(_DWORD *)(v4 + 48) != 3 )
      {
        v4 += 56;
        if ( v4 == v5 )
          return 0;
      }
      v7 = *(_QWORD *)(v4 + 32);
      if ( v7 )
      {
        v8 = v7 - 1;
        a2[1] = 0;
        if ( a2[2] < (unsigned __int64)(2 * v8) )
          *a2 = qvector_reserve();
        if ( v8 > 0 )
        {
          v9 = *(_QWORD *)(v4 + 32);
          if ( v9 )
            v9 = 0;
          do
          {
            sub_2C860(a2);
            ++v9;
          }
          while ( v8 > (int)v9 );
        }
      }
      else
      {
        a2[1] = 0;
      }
    }
    else
    {
      return 0;
    }
    return v2;
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_2CA60(20082);
  }
}

