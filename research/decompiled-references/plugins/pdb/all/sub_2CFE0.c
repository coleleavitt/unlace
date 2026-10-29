void __fastcall sub_2CFE0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbp

  v2 = a1 + 40;
  do
  {
    if ( *(_QWORD *)v2 )
    {
      qfree(*(_QWORD *)v2);
      *(_QWORD *)v2 = 0;
      *(_DWORD *)(v2 + 8) = 0;
    }
    v2 += 16;
  }
  while ( v2 != a1 + 744 );
  v3 = *(unsigned __int8 *)(a1 + 35);
  if ( (_BYTE)v3 )
  {
    v6 = (__int64 *)sub_2CEC0((__int64 *)a1, 0x10000000, 0x10000000u, 0x10000000);
    v7 = &v6[v3];
    do
    {
      v8 = *v6++;
      qfree(v8);
    }
    while ( v7 != v6 );
    v4 = *(unsigned __int8 *)(a1 + 38);
    if ( !(_BYTE)v4 )
      goto LABEL_7;
  }
  else
  {
    v4 = *(unsigned __int8 *)(a1 + 38);
    if ( !(_BYTE)v4 )
      goto LABEL_7;
  }
  v9 = sub_2CEC0((__int64 *)a1, 0x80000000LL, 0x80000000, 0x80000000LL);
  v10 = v9 + 24 * v4;
  do
  {
    if ( *(_WORD *)v9 == 30 )
      qfree(*(_QWORD *)(v9 + 8));
    v9 += 24;
  }
  while ( v10 != v9 );
LABEL_7:
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 744) = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v5);
  }
}
