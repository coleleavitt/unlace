__int64 __fastcall sub_3E500(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // r10
  unsigned __int64 v5; // r8
  _QWORD *v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 result; // rax

  v3 = *(_QWORD **)(a1 + 4208);
  v4 = (_QWORD *)(a1 + 4200);
  v5 = a2 & 0xFFFFFFFFFFFFF000LL;
  if ( !v3 )
    return 6;
  v6 = (_QWORD *)(a1 + 4200);
  do
  {
    while ( 1 )
    {
      v7 = v3[2];
      v8 = v3[3];
      if ( v3[4] < v5 )
        break;
      v6 = v3;
      v3 = (_QWORD *)v3[2];
      if ( !v7 )
        goto LABEL_6;
    }
    v3 = (_QWORD *)v3[3];
  }
  while ( v8 );
LABEL_6:
  result = 6;
  if ( v4 != v6 && v5 >= v6[4] )
  {
    if ( a3 )
      *a3 = v6[5] + a2 - v5;
    return 0;
  }
  return result;
}

