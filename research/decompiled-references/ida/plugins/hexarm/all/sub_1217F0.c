__int64 __fastcall sub_1217F0(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v4; // rsi
  __int16 v6; // dx
  __int16 v7; // ax
  __int16 v8; // dx
  int v9; // eax
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r8d
  __int16 v14; // dx
  __int16 v15; // ax
  __int16 v16; // dx
  int v17; // eax
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // ebx
  int v22; // r8d
  char v23; // al
  __int16 v25; // dx
  __int16 v26; // ax
  __int16 v27; // dx
  int v28; // eax
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // [rsp+8h] [rbp-A0h]
  int v33; // [rsp+Ch] [rbp-9Ch]
  _BYTE v34[32]; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v35; // [rsp+30h] [rbp-78h] BYREF
  __int64 v36; // [rsp+38h] [rbp-70h]
  unsigned __int64 v37; // [rsp+40h] [rbp-68h] BYREF
  __int64 v38; // [rsp+48h] [rbp-60h]
  unsigned __int64 v39; // [rsp+50h] [rbp-58h] BYREF
  __int64 v40; // [rsp+58h] [rbp-50h]
  unsigned __int64 v41; // [rsp+68h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 24);
  v41 = __readfsqword(0x28u);
  v35 = 0xFFFFFFFF00000000LL;
  v37 = 0xFFFFFFFF00000000LL;
  v36 = 0;
  v38 = 0;
  v39 = 0xFFFFFFFF00000000LL;
  v40 = 0;
  sub_330C90(v34, v4);
  v32 = a3 & 0x100;
  if ( (a3 & 0x100) == 0 )
  {
    if ( (a3 & 0x10) != 0 )
      goto LABEL_3;
    if ( (a3 & 1) == 0 )
      goto LABEL_13;
LABEL_15:
    v22 = 0;
    goto LABEL_16;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64 *, __int64))(*(_QWORD *)a2 + 16LL))(
          a2,
          &v35,
          a1 + 32) )
    goto LABEL_17;
  if ( (a3 & 0x10) == 0 )
  {
    v13 = a3 & 1;
    if ( (a3 & 1) == 0 )
    {
      v32 = 0;
      goto LABEL_11;
    }
    goto LABEL_15;
  }
LABEL_3:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64 *, __int64))(*(_QWORD *)a2 + 16LL))(
          a2,
          &v37,
          a1 + 48) )
    goto LABEL_17;
  if ( (a3 & 1) != 0 )
  {
    v22 = 16;
LABEL_16:
    v33 = v22;
    v23 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, __int64))(*(_QWORD *)a2 + 16LL))(a2, &v39, a1 + 64);
    v13 = v33;
    if ( v23 )
    {
      if ( (a3 & 0x100) == 0 )
      {
        if ( !v33 )
          goto LABEL_24;
        v32 = 1;
        goto LABEL_6;
      }
      v32 = 1;
      goto LABEL_11;
    }
LABEL_17:
    v21 = 0;
    goto LABEL_18;
  }
  if ( (a3 & 0x100) == 0 )
  {
LABEL_6:
    v6 = v37;
    LOWORD(v37) = *(_WORD *)(a1 + 48);
    v7 = *(_WORD *)(a1 + 50);
    *(_WORD *)(a1 + 48) = v6;
    v8 = WORD1(v37);
    WORD1(v37) = v7;
    v9 = *(_DWORD *)(a1 + 52);
    *(_WORD *)(a1 + 50) = v8;
    v10 = HIDWORD(v37);
    HIDWORD(v37) = v9;
    v11 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 52) = v10;
    v12 = v38;
    v38 = v11;
    *(_QWORD *)(a1 + 56) = v12;
    goto LABEL_12;
  }
  v13 = 16;
  v32 = 0;
LABEL_11:
  v14 = v35;
  LOWORD(v35) = *(_WORD *)(a1 + 32);
  v15 = *(_WORD *)(a1 + 34);
  *(_WORD *)(a1 + 32) = v14;
  v16 = WORD1(v35);
  WORD1(v35) = v15;
  v17 = *(_DWORD *)(a1 + 36);
  *(_WORD *)(a1 + 34) = v16;
  v18 = HIDWORD(v35);
  HIDWORD(v35) = v17;
  v19 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 36) = v18;
  v20 = v36;
  v36 = v19;
  *(_QWORD *)(a1 + 40) = v20;
  if ( v13 )
    goto LABEL_6;
LABEL_12:
  if ( v32 )
  {
LABEL_24:
    v25 = v39;
    LOWORD(v39) = *(_WORD *)(a1 + 64);
    v26 = *(_WORD *)(a1 + 66);
    *(_WORD *)(a1 + 64) = v25;
    v27 = WORD1(v39);
    WORD1(v39) = v26;
    v28 = *(_DWORD *)(a1 + 68);
    *(_WORD *)(a1 + 66) = v27;
    v29 = HIDWORD(v39);
    HIDWORD(v39) = v28;
    v30 = *(_QWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 68) = v29;
    v31 = v40;
    v40 = v30;
    *(_QWORD *)(a1 + 72) = v31;
  }
LABEL_13:
  v21 = 1;
LABEL_18:
  sub_11C7E0((__int64)&v39);
  sub_11C7E0((__int64)&v37);
  sub_11C7E0((__int64)&v35);
  return v21;
}

