__int64 __fastcall sub_3E8320(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ebp
  __int64 v4; // r12
  __int64 v5; // rbp
  unsigned int v6; // eax
  unsigned int v7; // eax
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v1 = *(_WORD *)(a1 + 48);
  v10 = __readfsqword(0x28u);
  if ( v1 != 43 && (v1 != 45 || *(_BYTE *)(a1 + 65) != 7) )
    return 0;
  v4 = *(_QWORD *)(a1 + 80);
  s1 = nullptr;
  v9 = 0;
  v5 = sub_3F0FF0(v4, &s1);
  if ( !v5 )
  {
    LOBYTE(v7) = sub_1CE440(s1);
    v2 = v7;
    if ( (_BYTE)v7 )
    {
      if ( !(unsigned __int8)func_does_return() )
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) |= 0x2000u;
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  if ( !(unsigned __int8)func_does_return() )
  {
LABEL_8:
    v2 = 0;
    goto LABEL_9;
  }
  LOBYTE(v6) = sub_1CDC70(*(_QWORD *)(a1 + 8), a1, v5);
  v2 = v6;
LABEL_9:
  if ( s1 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v2;
}

