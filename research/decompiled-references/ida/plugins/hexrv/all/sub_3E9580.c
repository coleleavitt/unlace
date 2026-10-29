unsigned __int64 __fastcall sub_3E9580(__int64 a1, int a2, int a3, double a4)
{
  unsigned __int16 v4; // ax
  char v5; // r8
  int v6; // ecx
  unsigned __int8 v7; // al
  int v8; // eax
  int v9; // ecx
  unsigned __int8 v11; // al
  _DWORD v12[4]; // [rsp+0h] [rbp-48h] BYREF
  _DWORD v13[6]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v4 = *(_WORD *)(a1 + 48);
  if ( v4 <= 0x6Eu )
  {
    if ( v4 > 0x6Cu )
    {
      v5 = *(_BYTE *)(a1 + 53);
      v6 = 8;
      if ( v5 != 1 )
        v6 = 4 * ((v5 & 0xFB) == 0);
      if ( v4 != 110 )
      {
        v8 = 67;
        goto LABEL_9;
      }
      v7 = *(_BYTE *)(a1 + 54);
      if ( v7 == 2 )
      {
        v8 = 63;
        goto LABEL_9;
      }
      if ( v7 <= 2u )
      {
        v8 = 63 - ((v7 == 0) - 1);
        goto LABEL_9;
      }
      if ( v7 == 3 )
      {
        v8 = 64;
        goto LABEL_9;
      }
      if ( !under_debugger )
        sub_37DDE0(0xCE33u, a4);
LABEL_24:
      BUG();
    }
LABEL_19:
    if ( !under_debugger )
      sub_37DDE0(0xCE39u, a4);
    goto LABEL_24;
  }
  if ( v4 != 111 )
    goto LABEL_19;
  v11 = *(_BYTE *)(a1 + 53);
  if ( v11 > 1u )
  {
    if ( (unsigned __int8)(v11 - 2) > 1u )
      sub_3E4E30(a4);
    v6 = 8;
    v8 = (v11 != 2) + 65;
  }
  else
  {
    v6 = 4;
    v8 = 66 - (v11 == 0);
  }
LABEL_9:
  v12[0] = 1;
  v12[1] = v6;
  v9 = *(unsigned __int16 *)(a1 + 842);
  v12[2] = a2;
  v13[0] = 1;
  v13[2] = a3;
  v13[1] = v9;
  sub_3E9430(a1, v8, (unsigned __int8 *)v12, nullptr, (unsigned __int8 *)v13);
  sub_1188E0((__int64)v13);
  sub_1188E0((__int64)v12);
  return v14 - __readfsqword(0x28u);
}

