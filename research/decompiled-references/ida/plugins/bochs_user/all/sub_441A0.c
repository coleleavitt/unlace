__int64 __fastcall sub_441A0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbx
  const char *v7; // rsi
  _BYTE v9[3]; // [rsp+Dh] [rbp-23Bh] BYREF
  char s[520]; // [rsp+10h] [rbp-238h] BYREF
  unsigned __int64 v11; // [rsp+218h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v1 = qword_753F8;
  v2 = *(_QWORD *)(qword_753F8 + 4832);
  if ( *(_BYTE *)(qword_753F8 + 121) )
  {
    v3 = *(_QWORD *)(a1 + 12);
    v4 = *(_QWORD *)(a1 + 20);
    v5 = *(_QWORD *)(a1 + 68);
  }
  else
  {
    if ( (unsigned int)sub_26EC0(*(_QWORD *)(qword_753F8 + 4832), *(_QWORD *)(a1 + 36) + 8LL, (__int64)v9, 3, 1) )
    {
LABEL_6:
      v6 = 0;
      goto LABEL_7;
    }
    v3 = v9[0];
    v4 = v9[1];
    v5 = v9[2];
    v1 = qword_753F8;
  }
  if ( !v3 )
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 256) + 820LL);
  memset(s, 0, 0x200u);
  if ( (unsigned int)sub_4C8B0((int)v1 + 64, v3, (unsigned int)s, 511, 0, 0, 0) )
    goto LABEL_6;
  v6 = strlen(s) + 1;
  if ( v6 > v5 )
    v6 = v5;
  if ( !sub_44120(qword_753F8, v4, (__int64)s, v6) )
    goto LABEL_6;
  sub_43440(0);
LABEL_7:
  v7 = "eax";
  if ( *(_BYTE *)(qword_753F8 + 121) )
    v7 = "rax";
  sub_25E30(v2, v7, v6);
  return 0;
}

