__int64 __fastcall sub_41E40(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdx
  const char *v5; // rsi
  const char *v7; // rsi
  __int64 v8; // rbp
  const char *v9; // [rsp+0h] [rbp-248h] BYREF
  __int128 v10; // [rsp+8h] [rbp-240h]
  _WORD v11[260]; // [rsp+20h] [rbp-228h] BYREF
  unsigned __int64 v12; // [rsp+228h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(qword_753F8 + 4832);
  if ( *(_BYTE *)(qword_753F8 + 121) )
  {
    v2 = *(_QWORD *)(a1 + 12);
  }
  else
  {
    if ( (unsigned int)sub_26EC0(*(_QWORD *)(qword_753F8 + 4832), *(_QWORD *)(a1 + 36) + 8LL, (__int64)&v9, 4, 1) )
      goto LABEL_9;
    v2 = (unsigned int)v9;
  }
  if ( !v2 )
  {
    v3 = qword_753F8;
    v4 = *(_QWORD *)(*(_QWORD *)(qword_753F8 + 256) + 820LL);
    goto LABEL_5;
  }
  v11[0] = 0;
  sub_26EC0(v1, v2, (__int64)v11, 519, 1);
  if ( !v11[0] )
    goto LABEL_9;
  v11[259] = 0;
  v9 = nullptr;
  v10 = 0;
  if ( !(unsigned __int8)utf16_utf8() )
  {
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
    goto LABEL_9;
  }
  v7 = s1;
  if ( (_QWORD)v10 )
    v7 = v9;
  v8 = sub_4B8A0(qword_753F8 + 64, v7, 0);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  if ( !v8 )
  {
LABEL_9:
    v3 = qword_753F8;
    v4 = 0;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(v8 + 820);
  v3 = qword_753F8;
LABEL_5:
  v5 = "eax";
  if ( *(_BYTE *)(v3 + 121) )
    v5 = "rax";
  sub_25E30(v1, v5, v4);
  return 0;
}

