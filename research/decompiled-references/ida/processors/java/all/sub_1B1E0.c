__int64 __fastcall sub_1B1E0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v6; // ebx
  int v9; // r12d
  int v12; // eax
  char v13; // dl
  int v14; // r11d
  unsigned __int16 v15; // dx
  int v16; // eax
  int v17; // ecx
  int v18; // r8d
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // [rsp+Ch] [rbp-5Ch]
  int v23; // [rsp+10h] [rbp-58h]
  int v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+18h] [rbp-50h]
  _QWORD v26[9]; // [rsp+20h] [rbp-48h] BYREF

  v26[1] = __readfsqword(0x28u);
  if ( a4 < 0 )
    goto LABEL_28;
  if ( !(_WORD)a3
    || (v6 = a3 << 16, v9 = a4, (v12 = netnode_altval(*(_QWORD *)(a2 + 33336), (unsigned int)(a3 << 16), 65)) == 0) )
  {
LABEL_24:
    sub_E6A0();
  }
  v13 = *(_BYTE *)(a2 + 33384);
  if ( (v13 & 1) == 0 && (v12 & 0x20000000) != 0 )
    *(_BYTE *)(a2 + 33384) = v13 + 1;
  if ( (v12 & 0x10000000) != 0 )
    *(_BYTE *)(a2 + 33385) = 1;
  if ( (a5 & 0x80u) != 0 )
  {
    LOBYTE(a5) = a5 ^ 0x80;
    if ( a5 > 11 )
    {
      v15 = v12;
      if ( (v12 & 0x200000) != 0 && *(int *)(a2 + 148) < 0 )
      {
        if ( !(_WORD)v12 )
          return sub_21250(a2, 0, 0, 0, 0, v9, 2, a1, a6);
        v22 = (unsigned __int16)v12;
        a5 = 2;
      }
      else
      {
        if ( !(_WORD)v12 )
          return sub_21250(a2, 0, 0, 0, 0, v9, a5, a1, a6);
        v22 = (unsigned __int16)v12;
      }
      goto LABEL_21;
    }
LABEL_28:
    sub_E6C0(0);
  }
  v14 = 0;
  v15 = v12;
  v22 = (unsigned __int16)v12;
  if ( !(_WORD)v12 )
    goto LABEL_11;
LABEL_21:
  if ( *(_WORD *)(a2 + 33111) < v15 )
    goto LABEL_24;
  v20 = *(_QWORD *)(a2 + 33336);
  v21 = *(_QWORD *)(a2 + 33352);
  v25 = 2LL * (unsigned __int16)v12;
  v26[0] = v25 + 1;
  if ( !netnode_getblob(v20, v21, v26, v6, 106) )
    goto LABEL_24;
  v14 = v21;
  if ( v25 != LODWORD(v26[0]) )
    goto LABEL_24;
LABEL_11:
  if ( (unsigned int)(a5 - 4) > 4 )
  {
    v18 = 0;
    v17 = 0;
  }
  else
  {
    v24 = v14;
    v23 = netnode_altval(*(_QWORD *)(a2 + 33336), v6 + 1, 65);
    v16 = netnode_altval(*(_QWORD *)(a2 + 33336), v6 + 2, 65);
    v17 = v23;
    v14 = v24;
    v18 = v16;
  }
  return sub_21250(a2, v14, v22, v17, v18, v9, a5, a1, a6);
}

