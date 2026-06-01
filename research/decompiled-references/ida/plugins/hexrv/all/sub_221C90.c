unsigned __int64 __fastcall sub_221C90(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 i; // r12
  __int64 v5; // rcx
  int v6; // edx
  int v7; // ecx
  int v8; // esi
  __int64 v9; // r8
  int v10; // r9d
  _QWORD v11[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  __int128 v13; // [rsp+18h] [rbp-30h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  sub_2216B0(a1);
  v1 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v1 + 480) != -1 )
    goto LABEL_2;
  if ( sub_219E00(a1) )
  {
    v8 = sub_218940(a1, (_BYTE *)(a1 + 136));
    if ( v8 == -1 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) |= 0x200u;
      v8 = sub_221130(a1, -1, (_BYTE *)(a1 + 136), (_DWORD *)(a1 + 120), 0, 0, *(_DWORD *)(a1 + 144), 0);
    }
    if ( (unsigned __int8)sub_219390(*(_QWORD *)(a1 + 16), v8, *(_DWORD *)(a1 + 148), v7, v9, v10) )
    {
      v1 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v1 + 480) == -1 )
      {
        if ( !under_debugger )
          sub_37DDE0(52861);
        BUG();
      }
LABEL_2:
      v2 = *(_QWORD *)(a1 + 24);
      for ( i = v2 + 56LL * *(_QWORD *)(a1 + 32); i != v2; v1 = *(_QWORD *)(a1 + 16) )
      {
        if ( !*(_QWORD *)(v1 + 800) || !(unsigned __int8)sub_218EF0(a1, v2) )
          sub_221380(a1, v2);
        v2 += 56;
      }
      if ( (*(_BYTE *)(v1 + 5) & 2) == 0 )
        return v14 - __readfsqword(0x28u);
      v5 = *(_QWORD *)(v1 + 1440);
      v6 = *(_DWORD *)(a1 + 144);
      v11[0] = 0;
      v11[1] = 0;
      v12 = 0;
      v13 = 0;
      sub_1BEB30(a1 + 120, (__int64)v11, v6, v5, 0);
      if ( (unsigned __int8)sub_604A0(v11, (_QWORD *)(a1 + 48)) && (unsigned __int8)sub_312E40(a1 + 64, &v12) )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) &= ~0x200u;
        if ( !v12 )
          goto LABEL_12;
      }
      else if ( !v12 )
      {
LABEL_12:
        qfree();
        return v14 - __readfsqword(0x28u);
      }
      *(_QWORD *)&v13 = 0;
      qfree();
      goto LABEL_12;
    }
  }
  return v14 - __readfsqword(0x28u);
}

