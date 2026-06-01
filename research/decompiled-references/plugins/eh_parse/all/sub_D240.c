__int64 __fastcall sub_D240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // ebp
  _QWORD v15[2]; // [rsp+8h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+18h] [rbp-B8h]
  __int64 v17; // [rsp+28h] [rbp-A8h]
  __int64 v18; // [rsp+30h] [rbp-A0h]
  __int64 v19; // [rsp+38h] [rbp-98h]
  __int64 v20; // [rsp+40h] [rbp-90h]
  __int64 v21; // [rsp+48h] [rbp-88h]
  __int64 v22; // [rsp+50h] [rbp-80h]
  __int64 v23; // [rsp+58h] [rbp-78h]
  __int64 v24; // [rsp+60h] [rbp-70h]
  __int64 v25; // [rsp+68h] [rbp-68h]
  __int64 v26; // [rsp+70h] [rbp-60h]
  __int64 v27; // [rsp+78h] [rbp-58h]
  __int64 v28; // [rsp+80h] [rbp-50h]
  char v29; // [rsp+88h] [rbp-48h]
  char v30; // [rsp+89h] [rbp-47h]
  __int16 v31; // [rsp+8Ah] [rbp-46h]
  char v32; // [rsp+8Ch] [rbp-44h]
  unsigned __int64 v33; // [rsp+90h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v15[0] = a1;
  v28 = 0xFF000000000000LL;
  v31 = 0;
  v9 = *(_DWORD *)(a1 + 132);
  v16 = 0;
  v30 = v9;
  v15[1] = 0;
  v17 = 0;
  v18 = -1;
  v20 = -1;
  v21 = -1;
  v26 = 0;
  v27 = 0;
  v29 = 0;
  v32 = 0;
  v23 = a2;
  v19 = a3;
  v24 = a3;
  v22 = a4;
  v25 = a5;
  v11 = sub_A450(v15);
  v10 = v11;
  BYTE1(v11) = 1;
  if ( (a7 & 4) != 0 )
    v10 = v11;
  v12 = sub_EFD0(a1, a2, a3, a4);
  if ( (_BYTE)v12 )
  {
    if ( (v10 & 0xFE00) != 0 )
      return 0;
    else
      sub_A890(v15, v10, a6);
  }
  return v12;
}
