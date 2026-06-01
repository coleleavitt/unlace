__int64 __fastcall sub_195E0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  const char *v12; // rdx
  bool v14; // zf
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // rdx
  _DWORD v18[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v19; // [rsp+8h] [rbp-40h]
  _QWORD v20[7]; // [rsp+10h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(a1 + 24);
  v20[3] = __readfsqword(0x28u);
  v19 = a2;
  v18[1] = a4;
  v18[0] = 28;
  v8 = sub_26290(v6, v18, 16);
  if ( v8 <= 0xF )
  {
    if ( (unsigned int)sub_260B0(*(_QWORD *)(a1 + 24)) == 62 )
    {
      *(_WORD *)(a1 + 1288) = 257;
    }
    else
    {
      v14 = *(_BYTE *)(a1 + 1289) == 0;
      *(_BYTE *)(a1 + 1288) = 1;
      if ( v14 && !*(_BYTE *)(a1 + 81) )
      {
        v15 = (const char *)sub_260C0(*(_QWORD *)(a1 + 24));
        sub_BDA0((__int64)"Network error: %s\n", v15);
      }
    }
    return -1;
  }
  if ( v8 != 16 )
    return -1;
  v9 = *(_QWORD *)(a1 + 24);
  v20[0] = 0;
  v20[1] = -1;
  v10 = sub_26290(v9, a3, a4);
  if ( v10 >= a4 )
  {
    v11 = v18[0];
    v12 = "?";
    if ( v18[0] > 0x1Du )
      goto LABEL_5;
    goto LABEL_7;
  }
  if ( (unsigned int)sub_260B0(*(_QWORD *)(a1 + 24)) == 62 )
  {
    *(_WORD *)(a1 + 1288) = 257;
  }
  else
  {
    v14 = *(_BYTE *)(a1 + 1289) == 0;
    *(_BYTE *)(a1 + 1288) = 1;
    if ( v14 && !*(_BYTE *)(a1 + 81) )
    {
      v16 = (const char *)sub_260C0(*(_QWORD *)(a1 + 24));
      sub_BDA0((__int64)"Network error: %s\n", v16);
    }
  }
  v11 = v18[0];
  if ( v18[0] > 0x1Du )
  {
    sub_18640(a1, (__int64)"SENT %s\n", "?");
    return -1;
  }
LABEL_7:
  v12 = off_38B20[v11];
LABEL_5:
  sub_18640(a1, (__int64)"SENT %s\n", v12);
  if ( a4 != v10 || !(unsigned __int8)sub_18D10(a1, (int *)v20) )
    return -1;
  v17 = "?";
  if ( LODWORD(v20[0]) <= 0x1D )
    v17 = off_38B20[SLODWORD(v20[0])];
  sub_18640(a1, (__int64)"RECV %s\n", v17);
  if ( LODWORD(v20[0]) )
    return -1;
  return HIDWORD(v20[0]);
}

