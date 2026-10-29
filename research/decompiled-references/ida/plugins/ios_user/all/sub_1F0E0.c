__int64 __fastcall sub_1F0E0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  __int64 v6; // rsi
  __int64 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // r14
  unsigned int v12; // r15d
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // ebx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // [rsp+0h] [rbp-C8h]
  __int64 v23; // [rsp+8h] [rbp-C0h]
  __int64 v24; // [rsp+10h] [rbp-B8h]
  __int64 v25; // [rsp+18h] [rbp-B0h]
  __int64 v26; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+28h] [rbp-A0h]
  __int64 v28; // [rsp+40h] [rbp-88h] BYREF
  __int128 v29; // [rsp+48h] [rbp-80h]
  __int64 (__fastcall **v30)(); // [rsp+60h] [rbp-68h]
  char v31; // [rsp+68h] [rbp-60h]
  __int64 v32; // [rsp+70h] [rbp-58h]
  int v33; // [rsp+78h] [rbp-50h]
  unsigned __int64 v34; // [rsp+88h] [rbp-40h]

  v5 = a2;
  v22 = a1;
  v23 = a4;
  v34 = __readfsqword(0x28u);
  v31 = 0;
  v30 = (__int64 (__fastcall **)())&off_8B7B0;
  if ( a2 > 5 )
  {
    sub_12F00((__int64)"%s", "Loading Modules");
    v31 = 1;
  }
  v6 = 5000;
  v30 = &off_8B820;
  v24 = *(_QWORD *)(a1 + 864);
  v32 = v24;
  HIDWORD(v25) = sub_591F0(v24, 5000);
  v33 = HIDWORD(v25);
  if ( v5 <= 0 )
  {
    v11 = v31;
    v12 = 1;
  }
  else
  {
    while ( 1 )
    {
      v11 = v31;
      if ( v31 )
      {
        v12 = callui(27, v6, v7, v8, v9, v10, v22, v23, v24, v25);
        if ( (_BYTE)v12 )
        {
          sub_591F0(v24, HIDWORD(v25));
          goto LABEL_7;
        }
      }
      v16 = 30;
      v26 = 0;
      if ( v5 <= 30 )
        v16 = v5;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      sub_15620(&v28);
      if ( !(unsigned __int8)sub_1E310(v22, &v26, (int)&v28, v17, v18, v19) )
        break;
      v6 = v23;
      v20 = sub_1B100(&v26, v23, 0.0);
      v21 = v28;
      v12 = v20;
      if ( !(_BYTE)v20 )
        goto LABEL_21;
      v7 = &qword_8FB50;
      v5 -= v16;
      v8 = (unsigned int)(v16 * *(_DWORD *)(qword_8FB50 + 144LL * *(int *)(v22 + 1176) + 128));
      a3 += 3 * (int)v8;
      if ( v28 )
      {
        *(_QWORD *)&v29 = 0;
        qfree();
      }
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree();
      }
      if ( v5 <= 0 )
        goto LABEL_18;
    }
    v21 = v28;
LABEL_21:
    if ( v21 )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree();
    }
    v12 = 0;
  }
LABEL_18:
  sub_591F0(v24, HIDWORD(v25));
  if ( v11 )
LABEL_7:
    callui(24, 10, 0, &callui, v13, v14, v22, v23, v24, v25);
  return v12;
}

