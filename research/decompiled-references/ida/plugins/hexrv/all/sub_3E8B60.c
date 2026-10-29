__int64 __fastcall sub_3E8B60(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int64 v2; // r12
  __int64 v3; // rbp
  unsigned int v4; // eax
  unsigned int v5; // ebp
  unsigned int v7; // eax
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v1 = *(_WORD *)(a1 + 48);
  v10 = __readfsqword(0x28u);
  if ( v1 != 163 )
  {
    if ( v1 > 0xA3u )
    {
      if ( (unsigned __int16)(v1 - 164) <= 1u )
        goto LABEL_5;
      return 0;
    }
    if ( v1 != 3 )
    {
      if ( v1 == 140 )
      {
LABEL_5:
        v2 = *(_QWORD *)(a1 + 80);
        goto LABEL_6;
      }
      return 0;
    }
  }
  v2 = *(_QWORD *)(a1 + 120);
LABEL_6:
  s1 = nullptr;
  v9 = 0;
  v3 = sub_3EF7F0(v2, &s1);
  if ( v3 )
  {
    if ( (unsigned __int8)func_does_return() )
    {
      LOBYTE(v4) = sub_1CE470(*(_QWORD *)(a1 + 8), a1, v3);
      v5 = v4;
      goto LABEL_9;
    }
  }
  else
  {
    LOBYTE(v7) = sub_1CEC40(s1);
    v5 = v7;
    if ( (_BYTE)v7 )
    {
      if ( !(unsigned __int8)func_does_return() )
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) |= 0x2000u;
      goto LABEL_9;
    }
  }
  v5 = 0;
LABEL_9:
  if ( s1 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v5;
}

