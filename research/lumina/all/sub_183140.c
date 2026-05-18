unsigned __int64 __fastcall sub_183140(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int16 v4; // ax
  char v6; // al
  __int64 v7; // [rsp+10h] [rbp-28h] BYREF
  __int64 v8; // [rsp+18h] [rbp-20h]
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  if ( a3 )
    sub_182E30(a1);
  v7 = 1;
  v3 = *(_QWORD *)(a1 + 560);
  v8 = 0;
  v4 = *(_WORD *)(v3 + 24);
  switch ( v4 )
  {
    case '-':
      sub_183140(a1, &v7, 1);
      *(_QWORD *)(a2 + 8) = -v8;
      v6 = v7;
      goto LABEL_10;
    case '+':
      sub_183140(a1, &v7, 1);
      *(_QWORD *)(a2 + 8) = v8;
      v6 = v7;
      goto LABEL_10;
    case '!':
      sub_183140(a1, &v7, 1);
      *(_QWORD *)(a2 + 8) = v8 == 0;
      v6 = v7;
      goto LABEL_10;
    case '~':
      sub_183140(a1, &v7, 1);
      *(_QWORD *)(a2 + 8) = ~v8;
      v6 = v7;
LABEL_10:
      *(_BYTE *)a2 = v6;
      return v9 - __readfsqword(0x28u);
  }
  sub_182FA0(a1, a2);
  return v9 - __readfsqword(0x28u);
}
