__int64 __fastcall sub_5C180(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return a1 + 8;
  v3 = a1 + 8;
  do
  {
    while ( 1 )
    {
      v4 = sub_849A0(v2 + 32, a2);
      v5 = *(_QWORD *)(v2 + 16);
      v6 = *(_QWORD *)(v2 + 24);
      if ( v4 < 0 )
        break;
      v3 = v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v5 )
        goto LABEL_6;
    }
    v2 = *(_QWORD *)(v2 + 24);
  }
  while ( v6 );
LABEL_6:
  if ( a1 + 8 == v3 || (int)sub_849A0(a2, v3 + 32) >= 0 )
    return v3;
  else
    return a1 + 8;
}

