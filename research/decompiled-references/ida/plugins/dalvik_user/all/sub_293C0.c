__int64 __fastcall sub_293C0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbx
  void *v10; // rdi
  __int64 v11; // rdi
  unsigned int v12; // ebp
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // [rsp+8h] [rbp-70h]
  int v23; // [rsp+14h] [rbp-64h] BYREF
  int *v24; // [rsp+18h] [rbp-60h] BYREF
  __int64 v25; // [rsp+20h] [rbp-58h] BYREF
  __int128 v26; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 1848);
  v27 = __readfsqword(0x28u);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 1856);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v1 + 40 * i;
        if ( *(_QWORD *)(v5 + 16) )
        {
          *(_QWORD *)(v5 + 24) = 0;
          qfree();
          v1 = *(_QWORD *)(a1 + 1848);
        }
      }
    }
    *(_QWORD *)(a1 + 1856) = 0;
    qfree();
    *(_QWORD *)(a1 + 1848) = 0;
    *(_QWORD *)(a1 + 1864) = 0;
  }
  v6 = a1 + 1696;
  sub_1C7D0(a1 + 1040);
  v7 = *(_QWORD *)(a1 + 1712);
  if ( v7 != a1 + 1696 )
  {
    do
    {
      v8 = *(_QWORD *)(v7 + 40);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v7 = std::_Rb_tree_increment();
    }
    while ( v7 != v6 );
  }
  v9 = *(_QWORD *)(a1 + 1704);
  while ( v9 )
  {
    sub_17880(*(_QWORD **)(v9 + 24));
    v10 = (void *)v9;
    v9 = *(_QWORD *)(v9 + 16);
    operator delete(v10, 0x30u);
  }
  v11 = *(_QWORD *)(a1 + 1736);
  *(_QWORD *)(a1 + 1712) = v6;
  *(_QWORD *)(a1 + 1704) = 0;
  *(_QWORD *)(a1 + 1720) = v6;
  *(_QWORD *)(a1 + 1728) = 0;
  if ( v11 )
  {
    *(_QWORD *)(a1 + 1744) = 0;
    qfree();
    *(_QWORD *)(a1 + 1736) = 0;
    *(_QWORD *)(a1 + 1752) = 0;
  }
  v26 = 0;
  v25 = 0;
  if ( !(unsigned __int8)sub_50D40(a1 + 864, &v23, 8, 0, &v25) )
    goto LABEL_17;
  v14 = operator new(0x18u);
  v15 = *(_QWORD *)(a1 + 1704);
  *(_BYTE *)(v14 + 8) = 0;
  v16 = v14;
  *(_QWORD *)v14 = off_7D418;
  *(_QWORD *)(v14 + 16) = a1;
  if ( !v15 )
  {
    v17 = a1 + 1696;
LABEL_28:
    v22 = v14;
    v24 = &v23;
    v20 = sub_16FF0((_QWORD *)(a1 + 1688), v17, &v24);
    v16 = v22;
    v17 = v20;
    goto LABEL_29;
  }
  v17 = a1 + 1696;
  do
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)(v15 + 16);
      v19 = *(_QWORD *)(v15 + 24);
      if ( v23 > *(_DWORD *)(v15 + 32) )
        break;
      v17 = v15;
      v15 = *(_QWORD *)(v15 + 16);
      if ( !v18 )
        goto LABEL_26;
    }
    v15 = *(_QWORD *)(v15 + 24);
  }
  while ( v19 );
LABEL_26:
  if ( v17 == v6 || v23 < *(_DWORD *)(v17 + 32) )
    goto LABEL_28;
LABEL_29:
  *(_QWORD *)(v17 + 40) = v16;
  if ( !(unsigned __int8)sub_50D40(a1 + 864, &v23, 9, 0, &v25)
    || !(unsigned __int8)sub_50D40(a1 + 864, 0, 6, 0, &v25)
    || !(unsigned __int8)sub_50D40(a1 + 864, 0, 7, 0, &v25)
    || !(unsigned __int8)sub_29350((_QWORD *)(a1 + 1040)) )
  {
LABEL_17:
    v12 = 0;
    goto LABEL_18;
  }
  if ( *(_DWORD *)(a1 + 1820) == 2 )
  {
    sub_4A530(a1 + 864);
    v21 = a1 + 864;
    v12 = sub_24020((_QWORD *)a1);
    sub_4A5E0(v21);
  }
  else
  {
    v12 = sub_24020((_QWORD *)a1);
  }
LABEL_18:
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return v12;
}

