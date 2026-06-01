unsigned __int64 __fastcall sub_21260(__int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // r8
  __int64 v4; // rax
  _QWORD *v5; // r9
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v11; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-10h]

  v2 = *a2;
  v12 = __readfsqword(0x28u);
  v3 = *a1;
  v11 = v2;
  v4 = *(_QWORD *)(*(_QWORD *)v3 + 64LL);
  if ( !v4 )
    goto LABEL_10;
  v5 = (_QWORD *)(v4 + 16);
  v6 = *(_QWORD **)(v4 + 24);
  if ( !v6 )
    goto LABEL_10;
  v7 = v5;
  do
  {
    while ( 1 )
    {
      v8 = v6[2];
      v9 = v6[3];
      if ( v6[4] >= v2 )
        break;
      v6 = (_QWORD *)v6[3];
      if ( !v9 )
        goto LABEL_7;
    }
    v7 = v6;
    v6 = (_QWORD *)v6[2];
  }
  while ( v8 );
LABEL_7:
  if ( v5 == v7 || v2 < v7[4] )
LABEL_10:
    sub_20DC0(*(volatile signed __int32 ***)(v3 + 8), &v11, *(const double **)(v3 + 16));
  return v12 - __readfsqword(0x28u);
}

