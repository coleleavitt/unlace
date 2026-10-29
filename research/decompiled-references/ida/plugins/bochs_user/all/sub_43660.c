__int64 __fastcall sub_43660(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // r13d
  __int64 v9; // rdx
  const char *v10; // rsi
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // [rsp+Ch] [rbp-13Ch] BYREF
  _BYTE v16[264]; // [rsp+10h] [rbp-138h] BYREF
  unsigned __int64 v17; // [rsp+118h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(qword_753F8 + 4832);
  if ( *(_BYTE *)(qword_753F8 + 121) )
  {
    v6 = *(_QWORD *)(a1 + 12);
  }
  else
  {
    if ( (unsigned int)sub_26EC0(*(_QWORD *)(qword_753F8 + 4832), *(_QWORD *)(a1 + 36) + 8LL, (__int64)&v15, 4, 1) )
    {
      v7 = qword_753F8;
      v8 = 0;
      v9 = 0;
      goto LABEL_5;
    }
    v6 = v15;
  }
  if ( v6 )
  {
    v16[0] = 0;
    sub_26EC0(v5, v6, (__int64)v16, 259, 1);
    if ( !v16[0] )
      goto LABEL_12;
    v16[259] = 0;
    v12 = sub_4B8A0(qword_753F8 + 64, v16, 0);
    if ( v12 )
    {
      v9 = *(_QWORD *)(v12 + 820);
      v8 = 0;
      v7 = qword_753F8;
      goto LABEL_5;
    }
    v13 = sub_324C0((__int64)"~C~ontinue", (__int64)"~S~uspend", (__int64)"S~t~op");
    if ( v13 == 1 )
    {
LABEL_12:
      v8 = 0;
    }
    else
    {
      v8 = 1;
      if ( v13 == -1 )
      {
        *a3 = 1;
        v14 = operator new(0x48u);
        *(_QWORD *)(v14 + 8) = -1;
        *(_QWORD *)v14 = 0xFFFFFFFFLL;
        *(_QWORD *)(v14 + 16) = 0;
        *a2 = v14;
        *(_OWORD *)(v14 + 24) = 0;
        *(_OWORD *)(v14 + 40) = 0;
        *(_OWORD *)(v14 + 56) = 0;
        sub_434D0(v14, 0);
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

