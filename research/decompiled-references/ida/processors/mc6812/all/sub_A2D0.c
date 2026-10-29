__int64 __fastcall sub_A2D0(__int64 a1, _WORD *a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  bool v5; // al
  int v6; // r15d
  __int64 v7; // rbx
  __int64 *v8; // r13
  _WORD *v9; // rax
  __int64 v10; // rbp
  __int64 *v11; // rbp
  _WORD *v13; // [rsp+8h] [rbp-50h]
  _WORD *v14; // [rsp+8h] [rbp-50h]
  __int64 v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = (unsigned __int16)a2[12];
  v15[1] = __readfsqword(0x28u);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v4 <= v3 && v3 < *(_DWORD *)(v2 + 108) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    v5 = (v6 & 1) == 0;
  }
  else
  {
    v5 = 1;
    v6 = 0;
  }
  *(_BYTE *)(a1 + 344) = v5;
  if ( (unsigned __int8)getinf_flag() )
  {
    if ( (unsigned int)get_auto_state() == 40 )
    {
      if ( get_func() )
      {
        sub_9C50(v15, (__int64)a2);
        if ( v15[0] )
          add_auto_stkpnt();
      }
    }
  }
  v7 = (__int64)(a2 + 20);
  v8 = qword_11D80;
  v9 = a2 + 80;
  v10 = (__int64)(a2 + 20);
  do
  {
    if ( (*(_DWORD *)v8 & v6) != 0 )
    {
      v13 = v9;
      sub_9D50(a1, a2, v10, 1);
      v9 = v13;
    }
    v10 += 40;
    v8 = (__int64 *)((char *)v8 + 4);
  }
  while ( (_WORD *)v10 != v9 );
  v11 = qword_11DA0;
  do
  {
    if ( (*(_DWORD *)v11 & v6) != 0 )
    {
      v14 = v9;
      sub_9D50(a1, a2, v7, 0);
      v9 = v14;
    }
    v7 += 40;
    v11 = (__int64 *)((char *)v11 + 4);
  }
  while ( (_WORD *)v7 != v9 );
  if ( (unsigned __int8)segtype() == 1 )
  {
    *(_BYTE *)(a1 + 344) = 0;
  }
  else if ( *(_BYTE *)(a1 + 344) )
  {
    add_cref();
  }
  return 1;
}

