__int64 __fastcall sub_3EA990(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // r12
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // eax
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  LOBYTE(v1) = sub_3EA700(*(_WORD *)(a1 + 48));
  v2 = v1;
  if ( !(_BYTE)v1 )
    return v2;
  v4 = *(_QWORD *)(a1 + 80);
  s1 = nullptr;
  v9 = 0;
  v5 = sub_3F8C90(v4, &s1);
  if ( !v5 )
  {
    LOBYTE(v7) = sub_1CEF00(s1);
    v2 = v7;
    if ( (_BYTE)v7 )
    {
      if ( !(unsigned __int8)func_does_return() )
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) |= 0x2000u;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ( !(unsigned __int8)func_does_return() )
  {
LABEL_5:
    v2 = 0;
    goto LABEL_6;
  }
  LOBYTE(v6) = sub_1CE730(*(_QWORD *)(a1 + 8), a1, v5);
  v2 = v6;
LABEL_6:
  if ( s1 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v2;
}

