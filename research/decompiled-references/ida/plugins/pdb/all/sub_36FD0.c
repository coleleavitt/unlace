__int64 __fastcall sub_36FD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 **v3; // rbx
  __int64 *v4; // rax
  __int64 (__fastcall *v5)(__int64, int *); // rax
  int *v6; // rax
  int v7; // eax
  unsigned int v8; // ebp
  void (__fastcall *v9)(void *); // rax
  __int64 (__fastcall *v11)(__int64, _QWORD *); // rax
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64, _BYTE *); // rax
  char *v15; // rax
  char v16; // al
  __int64 (__fastcall *v17)(__int64, _BYTE *); // rax
  char *v18; // rax
  char v19; // al
  __int64 (__fastcall *v20)(__int64, _BYTE *); // rax
  unsigned __int8 *v21; // rax
  int v22; // eax
  int v23; // [rsp+4h] [rbp-34h] BYREF
  __int64 **v24; // [rsp+8h] [rbp-30h]
  _QWORD v25[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 320);
  v25[1] = __readfsqword(0x28u);
  v3 = (__int64 **)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 128LL))(v2, 0, 0);
  v24 = v3;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64 **))(*(_QWORD *)a2 + 248LL))(a2, v3) )
    goto LABEL_6;
  v4 = *v3;
  v23 = 0;
  v5 = (__int64 (__fastcall *)(__int64, int *))v4[23];
  if ( v5 == sub_2DCC0 )
  {
    v6 = (int *)sub_2CEC0(v3[2], 0x100000, 0x400u, 0x4000000);
    if ( !v6 )
      goto LABEL_15;
    v7 = *v6;
    v23 = v7;
  }
  else
  {
    if ( (unsigned int)v5((__int64)v3, &v23) )
      goto LABEL_15;
    v7 = v23;
  }
  if ( v7 != 11 )
  {
LABEL_6:
    v8 = 0;
    goto LABEL_7;
  }
  v11 = (__int64 (__fastcall *)(__int64, _QWORD *))(*v3)[14];
  if ( v11 == sub_2D0F0 )
  {
    v12 = (unsigned __int64 *)sub_2CEC0(v3[2], 0x8000000, 0x8000000u, 0x8000000);
    if ( !v12 )
      goto LABEL_15;
    v13 = *v12;
  }
  else
  {
    if ( (unsigned int)v11((__int64)v3, v25) )
      goto LABEL_15;
    v13 = v25[0];
  }
  if ( v13 > 8 )
  {
LABEL_20:
    v8 = 1;
    goto LABEL_7;
  }
LABEL_15:
  if ( v23 != 11 )
    goto LABEL_6;
  v14 = (__int64 (__fastcall *)(__int64, _BYTE *))(*v3)[5];
  if ( v14 == sub_2DAC0 )
  {
    v15 = (char *)sub_2CEC0(v3[2], 256, 1u, 512);
    if ( !v15 )
      goto LABEL_21;
    v16 = *v15;
    LOBYTE(v25[0]) = v16;
  }
  else
  {
    if ( (unsigned int)v14((__int64)v3, v25) )
      goto LABEL_21;
    v16 = v25[0];
  }
  if ( v16 )
    goto LABEL_20;
LABEL_21:
  v17 = (__int64 (__fastcall *)(__int64, _BYTE *))(*v3)[11];
  if ( v17 == sub_2DB40 )
  {
    v18 = (char *)sub_2CEC0(v3[2], 32, 1u, 512);
    if ( !v18 )
      goto LABEL_25;
    v19 = *v18;
    LOBYTE(v25[0]) = v19;
  }
  else
  {
    if ( (unsigned int)v17((__int64)v3, v25) )
      goto LABEL_25;
    v19 = v25[0];
  }
  if ( v19 )
    goto LABEL_20;
LABEL_25:
  v20 = (__int64 (__fastcall *)(__int64, _BYTE *))(*v3)[12];
  if ( v20 == sub_2DB80 )
  {
    v21 = (unsigned __int8 *)sub_2CEC0(v3[2], 64, 1u, 512);
    if ( !v21 )
      goto LABEL_6;
    v8 = *v21;
  }
  else
  {
    v22 = v20((__int64)v3, v25);
    v8 = LOBYTE(v25[0]);
    if ( v22 )
      goto LABEL_6;
  }
LABEL_7:
  if ( v3 )
  {
    v9 = (void (__fastcall *)(void *))(*v3)[37];
    if ( v9 == sub_243F0 )
      operator delete(v3, 0x18u);
    else
      v9(v3);
  }
  return v8;
}

