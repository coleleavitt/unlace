__int64 __fastcall sub_85CC0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( !a2 )
    return 0;
  v2 = *(_QWORD *)(a1[630] + 8LL);
  v3 = a1 + 628;
  v4 = a1 + 649;
  if ( a2 != v2 )
  {
    do
    {
      if ( *v3 )
        *(_QWORD *)(*v3 + 8LL) = a2;
      v5 = v3[1];
      if ( v5 )
        *(_QWORD *)(v5 + 8) = a2;
      v6 = v3[2];
      if ( v6 )
        *(_QWORD *)(v6 + 8) = a2;
      v3 += 3;
      a2 += 16;
    }
    while ( v3 != v4 );
  }
  return v2;
}
