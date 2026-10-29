__int64 __fastcall sub_23833(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r15
  _QWORD *i; // rbp
  __int64 v7; // rsi
  __int64 v9; // [rsp+0h] [rbp-38h]

  v3 = 0;
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 32);
  while ( *(_DWORD *)(v4 + 40) > (int)v3 )
  {
    for ( i = *(_QWORD **)(*(_QWORD *)(v5 + 32 * v3 + 24) + 16LL); i; i = (_QWORD *)*i )
    {
      v7 = i[2];
      if ( *(_BYTE *)(v7 + 63) != 1 )
        sub_12D710(a1, v7, a2);
    }
    ++v3;
  }
  return v9;
}
