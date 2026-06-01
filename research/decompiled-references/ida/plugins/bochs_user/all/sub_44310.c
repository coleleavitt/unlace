__int64 __fastcall sub_44310(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rbp
  size_t v5; // r12
  unsigned __int64 v6; // r14
  const char *v7; // rsi
  size_t v9; // r14
  void *v10; // rdx
  size_t v11; // r14
  void *v12; // [rsp+0h] [rbp-258h] BYREF
  __int128 v13; // [rsp+8h] [rbp-250h]
  char s[520]; // [rsp+20h] [rbp-238h] BYREF
  unsigned __int64 v15; // [rsp+228h] [rbp-30h]

  v15 = __readfsqword(0x28u);
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
    if ( (unsigned int)sub_26EC0(*(_QWORD *)(qword_753F8 + 4832), *(_QWORD *)(a1 + 36) + 8LL, (__int64)&v12, 6, 1) )
    {
LABEL_6:
      v6 = 0;
      goto LABEL_7;
    }
    v3 = (unsigned __int16)v12;
    v4 = WORD1(v12);
    v5 = WORD2(v12);
    v1 = qword_753F8;
  }
  if ( !v3 )
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 256) + 820LL);
  memset(s, 0, 0x200u);
  if ( (unsigned int)sub_4C8B0((int)v1 + 64, v3, (unsigned int)s, 511, 0, 0, 0) )
    goto LABEL_6;
  v12 = nullptr;
  v13 = 0;
  v9 = strlen(s);
  if ( !(unsigned __int8)utf8_utf16() )
    goto LABEL_18;
  v10 = &unk_61EC0;
  if ( (_QWORD)v13 )
    v10 = v12;
  v11 = v9 + 1;
  if ( v11 > v5 )
    v11 = v5;
  v6 = 2 * v11;
  if ( !sub_44120(qword_753F8, v4, (__int64)v10, v6) )
  {
LABEL_18:
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
    goto LABEL_6;
  }
  sub_43440(0);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
LABEL_7:
  v7 = "eax";
  if ( *(_BYTE *)(qword_753F8 + 121) )
    v7 = "rax";
  sub_25E30(v2, v7, v6);
  return 0;
}

