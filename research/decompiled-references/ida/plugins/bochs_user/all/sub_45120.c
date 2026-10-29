__int64 __fastcall sub_45120(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r9
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // edx
  bool v7; // zf
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rdx
  const char *v11; // rsi
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-30h]
  int v15; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v1 = qword_753F8;
  v2 = *(_QWORD *)(qword_753F8 + 4832);
  if ( *(_BYTE *)(qword_753F8 + 121) )
  {
    v3 = *(_QWORD *)(a1 + 12);
    v4 = *(_QWORD *)(a1 + 20);
    v5 = *(_QWORD *)(a1 + 68);
    v6 = *(_DWORD *)(a1 + 76);
  }
  else
  {
    if ( (unsigned int)sub_26EC0(*(_QWORD *)(qword_753F8 + 4832), *(_QWORD *)(a1 + 36) + 8LL, (__int64)&v13, 16, 1) )
    {
LABEL_10:
      v10 = 0;
      goto LABEL_6;
    }
    v3 = (unsigned int)v13;
    v4 = HIDWORD(v13);
    v5 = v14;
    LOBYTE(v6) = v15;
    v1 = qword_753F8;
  }
  v13 = v3;
  v7 = v5 == 0x2000;
  v8 = 64;
  if ( !v7 )
    v8 = 128;
  v9 = sub_44E20(v1, (double *)&v13, v4, v8, ((v6 & 0x4C) != 0) | (unsigned __int8)((2 * (v6 & 1)) & 3), 0, 0, nullptr);
  v10 = v13;
  if ( v9 )
    goto LABEL_10;
LABEL_6:
  v11 = "eax";
  if ( *(_BYTE *)(qword_753F8 + 121) )
    v11 = "rax";
  sub_25E30(v2, v11, v10);
  return 0;
}

