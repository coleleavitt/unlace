__int64 __fastcall sub_43870(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // r13d
  __int64 v9; // rdx
  const char *v10; // rsi
  int v12; // eax
  const char *v13; // rsi
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rax
  const char *v17; // [rsp+0h] [rbp-258h] BYREF
  __int128 v18; // [rsp+8h] [rbp-250h]
  _WORD v19[260]; // [rsp+20h] [rbp-238h] BYREF
  unsigned __int64 v20; // [rsp+228h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(qword_753F8 + 4832);
  if ( *(_BYTE *)(qword_753F8 + 121) )
  {
    v6 = *(_QWORD *)(a1 + 12);
  }
  else
  {
    v12 = sub_26EC0(*(_QWORD *)(qword_753F8 + 4832), *(_QWORD *)(a1 + 36) + 8LL, (__int64)&v17, 4, 1);
    v6 = (unsigned int)v17;
    if ( v12 )
    {
      v7 = qword_753F8;
      v8 = 0;
      v9 = 0;
      goto LABEL_5;
    }
  }
  if ( v6 )
  {
    v19[0] = 0;
    sub_26EC0(v5, v6, (__int64)v19, 519, 1);
    if ( !v19[0] )
      goto LABEL_12;
    v19[259] = 0;
    v17 = nullptr;
    v18 = 0;
    utf16_utf8();
    v13 = s1;
    if ( (_QWORD)v18 )
      v13 = v17;
    v14 = sub_4B8A0(qword_753F8 + 64, v13, 0);
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree();
    }
    if ( v14 )
    {
      v9 = *(_QWORD *)(v14 + 820);
      v7 = qword_753F8;
      v8 = 0;
      goto LABEL_5;
    }
    v15 = sub_324C0((__int64)"~C~ontinue", (__int64)"~S~uspend", (__int64)"S~t~op");
    if ( v15 == 1 )
    {
LABEL_12:
      v8 = 0;
    }
    else
    {
      v8 = 1;
      if ( v15 == -1 )
      {
        *a3 = 1;
        v16 = operator new(0x48u);
        *(_QWORD *)(v16 + 8) = -1;
        *(_QWORD *)v16 = 0xFFFFFFFFLL;
        *(_QWORD *)(v16 + 16) = 0;
        *a2 = v16;
        *(_OWORD *)(v16 + 24) = 0;
        *(_OWORD *)(v16 + 40) = 0;
        *(_OWORD *)(v16 + 56) = 0;
        sub_434D0(v16, 0);
        return v8;
      }
    }
    v7 = qword_753F8;
    v9 = 0;
  }
  else
  {
    v7 = qword_753F8;
    v8 = 0;
    v9 = *(_QWORD *)(*(_QWORD *)(qword_753F8 + 256) + 820LL);
  }
LABEL_5:
  v10 = "eax";
  if ( *(_BYTE *)(v7 + 121) )
    v10 = "rax";
  sub_25E30(v5, v10, v9);
  return v8;
}

