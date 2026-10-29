__int64 __fastcall sub_1F0E0(_QWORD *a1, unsigned __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = *(_QWORD *)(*a1 + 64LL);
  if ( !v2 )
    goto LABEL_9;
  v3 = v2 + 16;
  result = *(_QWORD *)(v2 + 24);
  if ( !result )
    goto LABEL_9;
  v5 = *a2;
  v6 = v3;
  do
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(result + 16);
      v8 = *(_QWORD *)(result + 24);
      if ( *(_QWORD *)(result + 32) >= v5 )
        break;
      result = *(_QWORD *)(result + 24);
      if ( !v8 )
        goto LABEL_7;
    }
    v6 = result;
    result = *(_QWORD *)(result + 16);
  }
  while ( v7 );
LABEL_7:
  if ( v3 == v6 || v5 < *(_QWORD *)(v6 + 32) )
  {
LABEL_9:
    result = a1[1];
    *(_BYTE *)result = 1;
  }
  return result;
}
