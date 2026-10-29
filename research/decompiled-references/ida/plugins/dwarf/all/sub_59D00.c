unsigned __int64 __fastcall sub_59D00(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // zf
  __int64 v3; // rsi
  _QWORD *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 *v8; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 272) == 2;
  v13 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(v1 + 16);
  v4 = *(_QWORD **)(v3 + 144);
  if ( v2 && (*(_BYTE *)(a1 + 412) & 1) != 0 )
  {
    v10 = sub_58880(*(_QWORD *)(v3 + 144));
    v12[1] = v11;
    LODWORD(v11) = *(_DWORD *)(a1 + 276);
    v12[0] = v10;
    sub_59AE0(v4, v12, v11);
  }
  else
  {
    if ( (*(_QWORD *)(a1 + 232) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)(a1 + 232) == -1 )
    {
      if ( under_debugger )
        BUG();
      interr(30478);
    }
    sub_59AE0(v4, (__int64 *)(a1 + 232), *(_DWORD *)(a1 + 276));
    v5 = *(_QWORD *)(a1 + 296);
    if ( (int)v5 > 0 )
    {
      v6 = 0;
      v7 = 16 * ((unsigned int)(v5 - 1) + 1LL);
      do
      {
        v8 = (__int64 *)(v6 + *(_QWORD *)(a1 + 288));
        v6 += 16;
        sub_59AE0(v4, v8, *(_DWORD *)(a1 + 276));
      }
      while ( v6 != v7 );
    }
  }
  return v13 - __readfsqword(0x28u);
}

