__int64 __fastcall sub_1C98C0(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rdx

  v3 = *a3;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 16 * a3[1];
  v8 = v3 + v7;
  if ( v7 )
  {
    do
    {
      v9 = *(_QWORD *)(v3 + 8);
      if ( v5 < v9 )
      {
        v5 = *(_QWORD *)(v3 + 8);
        v6 = v3;
      }
      if ( v4 > v9 )
        v4 = *(_QWORD *)(v3 + 8);
      v3 += 16;
    }
    while ( v8 != v3 );
  }
  *a1 = v4;
  *a2 = v5;
  return v6;
}

