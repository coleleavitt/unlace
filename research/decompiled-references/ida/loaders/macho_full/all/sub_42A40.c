void __fastcall sub_42A40(__int64 a1)
{
  __int64 v1; // rbx
  _BYTE *v2; // r12
  __int64 i; // rax
  _BYTE *v4; // r12
  __int64 j; // rax
  _BYTE *v6; // r12
  __int64 k; // rax
  _BYTE *v8; // r12
  __int64 m; // rax
  _BYTE *v10; // r12
  __int64 n; // rax
  _BYTE *v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v1 = a1 + 88;
  v13 = 0x600000006LL;
  v2 = (_BYTE *)operator new[](6u);
  for ( i = 0; i != 6; ++i )
    v2[i] = aAmp[i];
  v12 = v2;
  sub_42880(v1, (__int64)&v12);
  if ( v2 )
    operator delete[](v2);
  v13 = 0x500000005LL;
  v4 = (_BYTE *)operator new[](5u);
  for ( j = 0; j != 5; ++j )
    v4[j] = aLt[j];
  v12 = v4;
  sub_42880(v1, (__int64)&v12);
  if ( v4 )
    operator delete[](v4);
  v13 = 0x500000005LL;
  v6 = (_BYTE *)operator new[](5u);
  for ( k = 0; k != 5; ++k )
    v6[k] = aGt[k];
  v12 = v6;
  sub_42880(v1, (__int64)&v12);
  if ( v6 )
    operator delete[](v6);
  v13 = 0x700000007LL;
  v8 = (_BYTE *)operator new[](7u);
  for ( m = 0; m != 7; ++m )
    v8[m] = aQuot[m];
  v12 = v8;
  sub_42880(v1, (__int64)&v12);
  if ( v8 )
    operator delete[](v8);
  v13 = 0x700000007LL;
  v10 = (_BYTE *)operator new[](7u);
  for ( n = 0; n != 7; ++n )
    v10[n] = aApos[n];
  v12 = v10;
  sub_42880(v1, (__int64)&v12);
  if ( v10 )
    operator delete[](v10);
}

