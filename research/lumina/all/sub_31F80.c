__int64 __fastcall sub_31F80(_QWORD *a1, unsigned int *a2)
{
  __int64 v2; // rdx
  unsigned int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int *v9[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = a1[2];
  v9[1] = (unsigned int *)__readfsqword(0x28u);
  if ( !v2 )
  {
    v5 = (__int64)(a1 + 1);
LABEL_10:
    v9[0] = a2;
    v5 = sub_2CED0(a1, v5, v9);
    return v5 + 36;
  }
  v4 = *a2;
  v5 = (__int64)(a1 + 1);
  do
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v2 + 16);
      v7 = *(_QWORD *)(v2 + 24);
      if ( *(_DWORD *)(v2 + 32) < v4 )
        break;
      v5 = v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v6 )
        goto LABEL_6;
    }
    v2 = *(_QWORD *)(v2 + 24);
  }
  while ( v7 );
LABEL_6:
  if ( a1 + 1 == (_QWORD *)v5 || v4 < *(_DWORD *)(v5 + 32) )
    goto LABEL_10;
  return v5 + 36;
}
