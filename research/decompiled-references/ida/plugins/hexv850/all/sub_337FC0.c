__int64 __fastcall sub_337FC0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  unsigned int v6; // r14d
  _QWORD *v7; // rbp
  _QWORD *v8; // r15

  v4 = *(_QWORD **)(a1 + 120);
  if ( v4 )
  {
    v6 = 0;
    v7 = nullptr;
    do
    {
      while ( v4[1] != a2 )
      {
LABEL_3:
        v7 = v4;
        v4 = (_QWORD *)*v4;
        if ( !v4 )
          return v6;
      }
      if ( a3 )
      {
        while ( v4[2] != a3 )
        {
          if ( !*v4 )
            return v6;
          if ( a2 != *(_QWORD *)(*v4 + 8LL) )
          {
            v4 = (_QWORD *)*v4;
            goto LABEL_3;
          }
          v7 = v4;
          v4 = (_QWORD *)*v4;
        }
      }
      v8 = (_QWORD *)*v4;
      if ( v7 )
        *v7 = v8;
      else
        *(_QWORD *)(a1 + 120) = v8;
      ++v6;
      operator delete(v4, 0x18u);
      v4 = v8;
    }
    while ( v8 );
  }
  else
  {
    return 0;
  }
  return v6;
}

