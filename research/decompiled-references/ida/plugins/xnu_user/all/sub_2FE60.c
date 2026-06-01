_QWORD *__fastcall sub_2FE60(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // r9
  __int64 v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // r10
  __int64 v7; // rax

  v2 = *(_QWORD **)(a1 + 104);
  v3 = &v2[9 * *(_QWORD *)(a1 + 112)];
  if ( v3 != v2 )
  {
    v4 = a2[1];
    do
    {
      v5 = v2[1];
      v6 = v2;
      if ( v5 == v4 )
      {
        if ( !v4 )
          return v6;
        v7 = 0;
        while ( *(_BYTE *)(*v2 + v7) == *(_BYTE *)(*a2 + v7) )
        {
          if ( v5 == ++v7 )
            return v6;
        }
      }
      v2 += 9;
    }
    while ( v3 != v2 );
  }
  return nullptr;
}

