__int64 __fastcall sub_F3920(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rax
  __int64 v4; // rsi
  unsigned int v5; // eax
  char *v6; // r12
  int v7; // eax
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v1 = 0;
  v10 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v2 + 32) == 6 )
  {
    v4 = *(_QWORD *)(v2 + 40);
    v9 = 0;
    s1 = nullptr;
    v5 = sub_1CE890(&s1, v4, 0, 0);
    v6 = s1;
    v1 = v5;
    if ( (_BYTE)v5 )
    {
      if ( (unsigned __int64)v9 <= 0x11 || strncmp(s1, "runtime_morestack", 0x11u) )
      {
        v1 = 0;
        if ( !v6 )
          return v1;
        goto LABEL_8;
      }
      sub_67060(a1, *(_QWORD *)(a1 + 48));
      v7 = *(_DWORD *)(a1 + 24);
      v6 = s1;
      BYTE1(v7) &= ~2u;
      LOBYTE(v7) = v7 | 0x80;
      *(_DWORD *)(a1 + 24) = v7;
    }
    if ( !v6 )
      return v1;
LABEL_8:
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v1;
}

