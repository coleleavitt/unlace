__int64 __fastcall sub_41B10(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdx
  const char *v5; // rsi
  __int64 v7; // rax
  unsigned int v8; // [rsp+Ch] [rbp-12Ch] BYREF
  _BYTE v9[264]; // [rsp+10h] [rbp-128h] BYREF
  unsigned __int64 v10; // [rsp+118h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(qword_753F8 + 4832);
  if ( *(_BYTE *)(qword_753F8 + 121) )
  {
    v2 = *(_QWORD *)(a1 + 12);
  }
  else
  {
    if ( (unsigned int)sub_26EC0(*(_QWORD *)(qword_753F8 + 4832), *(_QWORD *)(a1 + 36) + 8LL, (__int64)&v8, 4, 1) )
    {
LABEL_9:
      v3 = qword_753F8;
      v4 = 0;
      goto LABEL_5;
    }
    v2 = v8;
  }
  if ( !v2 )
  {
    v3 = qword_753F8;
    v4 = *(_QWORD *)(*(_QWORD *)(qword_753F8 + 256) + 820LL);
    goto LABEL_5;
  }
  v9[0] = 0;
  sub_26EC0(v1, v2, (__int64)v9, 259, 1);
  if ( !v9[0] )
    goto LABEL_9;
  v9[259] = 0;
  v7 = sub_4B8A0(qword_753F8 + 64, v9, 0);
  if ( !v7 )
    goto LABEL_9;
  v4 = *(_QWORD *)(v7 + 820);
  v3 = qword_753F8;
LABEL_5:
  v5 = "eax";
  if ( *(_BYTE *)(v3 + 121) )
    v5 = "rax";
  sub_25E30(v1, v5, v4);
  return 0;
}

