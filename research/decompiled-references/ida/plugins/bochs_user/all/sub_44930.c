__int64 __fastcall sub_44930(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // r10
  __int64 v5; // rbp
  int v6; // edx
  __int64 v7; // rdx
  const char *v8; // rsi
  unsigned __int16 v10; // [rsp+Ah] [rbp-3Eh] BYREF
  int v11; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  int v13; // [rsp+18h] [rbp-30h]
  unsigned int v14; // [rsp+1Ch] [rbp-2Ch]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v1 = qword_753F8;
  v2 = *(_QWORD *)(qword_753F8 + 4832);
  if ( *(_BYTE *)(qword_753F8 + 121) )
  {
    v3 = *(_QWORD *)(a1 + 12);
    v4 = *(_QWORD *)(a1 + 20);
    v5 = *(_QWORD *)(a1 + 76);
    v6 = *(_DWORD *)(a1 + 68);
  }
  else
  {
    if ( (unsigned int)sub_26EC0(*(_QWORD *)(qword_753F8 + 4832), *(_QWORD *)(a1 + 36) + 8LL, (__int64)&v12, 16, 1) )
      goto LABEL_4;
    v3 = (unsigned int)v12;
    v4 = HIDWORD(v12);
    LOBYTE(v6) = v13;
    v5 = v14;
    v1 = qword_753F8;
  }
  if ( (unsigned int)sub_44750(
                       v1,
                       v3,
                       v4,
                       ((v6 & 0x4C) != 0) | (unsigned __int16)(2 * (v6 & 1)),
                       (__int64)&v10,
                       nullptr) )
  {
LABEL_4:
    v7 = 0;
    goto LABEL_5;
  }
  if ( v5 )
  {
    v10 = (v10 & 1) == 0 ? 2 : 4;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)(qword_753F8 + 48) + 72LL))(
           *(_QWORD *)(qword_753F8 + 48),
           24,
           v5,
           &v12) )
    {
      v11 = v10;
      sub_26D50(v2, v12, (__int64)&v11, 4u);
    }
  }
  v7 = 1;
LABEL_5:
  v8 = "eax";
  if ( *(_BYTE *)(qword_753F8 + 121) )
    v8 = "rax";
  sub_25E30(v2, v8, v7);
  return 0;
}

