_BOOL8 __fastcall sub_2C8F0(__int64 a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v5; // r8d
  __int64 v6; // rsi
  char v8; // al
  int v9; // eax
  unsigned __int64 v10; // [rsp+0h] [rbp-48h]
  unsigned __int64 v11; // [rsp+0h] [rbp-48h]
  unsigned int v13; // [rsp+Ch] [rbp-3Ch]
  unsigned __int64 v14; // [rsp+10h] [rbp-38h] BYREF
  __int16 v15; // [rsp+1Ch] [rbp-2Ch]
  char v16; // [rsp+1Eh] [rbp-2Ah]
  unsigned __int64 v17; // [rsp+28h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  if ( a2 == 4 )
  {
    v8 = 108;
    if ( *(_BYTE *)(a1 + 1184) && *(_WORD *)(*(_QWORD *)(a1 + 1200) + 8200LL) )
    {
      v15 = *(_DWORD *)(a1 + 780);
      v8 = 118;
    }
    v16 = v8;
    v14 = a3;
    return !(unsigned int)sub_26A90(a1 + 1208, (__int64)&v14);
  }
  if ( a2 == 8 )
  {
    v9 = *(_DWORD *)(a1 + 780);
    v16 = 112;
    v14 = a3;
    v15 = v9;
    return !(unsigned int)sub_26A90(a1 + 1208, (__int64)&v14);
  }
  v5 = a4;
  v6 = a3;
  if ( !*(_BYTE *)(a1 + 1184) || *(_BYTE *)(a1 + 1186) )
    return (unsigned int)sub_258E0(a1 + 1208, v6, a3, a2, v5) != 0;
  if ( !*(_BYTE *)(a1 + 2768) )
    goto LABEL_15;
  v10 = a3;
  if ( !(unsigned int)sub_27110(a1 + 1208) )
  {
    v5 = a4;
    a3 = v10;
    *(_BYTE *)(a1 + 2768) = 0;
LABEL_15:
    v11 = a3;
    v13 = v5;
    if ( !(unsigned int)sub_271C0(a1 + 1208, 1, a3, &v14) )
    {
      v6 = v14;
      a3 = v11;
      v5 = v13;
      if ( v14 != -1 )
        return (unsigned int)sub_258E0(a1 + 1208, v6, a3, a2, v5) != 0;
    }
  }
  return 0;
}

