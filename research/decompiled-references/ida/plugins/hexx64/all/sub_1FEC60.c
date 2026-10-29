void __fastcall sub_1FEC60(__int64 a1, int a2, int a3, double a4, __m128 a5)
{
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v8; // rdx
  __int64 v10; // r15
  int *v11; // rax
  int *v12; // rdx
  int *v13; // rdi
  int v14; // [rsp+Ch] [rbp-5Ch]
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  __int64 v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v5 = a1 + 56;
  v17 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v6 + 808) != a1 + 56 )
  {
    if ( !under_debugger )
      sub_383060(0xCA41u, a4);
LABEL_30:
    BUG();
  }
  v8 = *(_QWORD *)(v6 + 432);
  if ( (*(_BYTE *)(v8 + 104LL * a2 + 25) & 1) == 0 )
    goto LABEL_14;
  if ( *(_BYTE *)(v6 + 320)
    || (v15 = -1,
        v16 = 0,
        v10 = v8 + 104LL * a3,
        v14 = *(_DWORD *)(v10 + 88),
        !(unsigned __int8)sub_1C3110(v10, (__int64)&v15, v14, a4))
    || (HIDWORD(v16) = v14, !sub_1F08F0(v6, (__int64)&v15, *(_QWORD *)(v10 + 16))) )
  {
    if ( !under_debugger )
      sub_383060(0xC9CDu, a4);
    goto LABEL_30;
  }
  v6 = *(_QWORD *)(a1 + 8);
  v11 = *(int **)(v6 + 456);
  v12 = &v11[*(_QWORD *)(v6 + 464)];
  v13 = v11;
  if ( v11 != v12 )
  {
    while ( *v13 != a2 )
    {
      if ( v12 == ++v13 )
        goto LABEL_9;
    }
    if ( v12 != v13 )
    {
      while ( *v11 != a3 )
      {
        if ( v12 == ++v11 )
          goto LABEL_7;
      }
      if ( v12 == v11 )
      {
LABEL_7:
        *v13 = a3;
        goto LABEL_8;
      }
      memmove(v13, v13 + 1, (char *)v12 - (char *)v13 - 4);
      --*(_QWORD *)(v6 + 464);
LABEL_8:
      *(_DWORD *)(v10 + 24) |= 0x100u;
      v6 = *(_QWORD *)(a1 + 8);
      v11 = *(int **)(v6 + 456);
      v12 = &v11[*(_QWORD *)(v6 + 464)];
    }
LABEL_9:
    if ( v11 != v12 )
    {
      do
      {
        if ( *v11 > a2 )
          --*v11;
        ++v11;
      }
      while ( v11 != v12 );
      v6 = *(_QWORD *)(a1 + 8);
    }
  }
LABEL_14:
  if ( *(_DWORD *)(a1 + 104) > a2 )
  {
    sub_1FEAC0(*(_QWORD *)(v6 + 800), v6, a2, a2, a4);
    v6 = *(_QWORD *)(a1 + 8);
  }
  sub_1FEAC0(v5, v6, a2, a2, a4);
  sub_1F5270(*(_QWORD *)(a1 + 8), a2, a4, a5);
}

