__int64 __fastcall sub_1AD40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void (__fastcall *hexdsp)(__int64, __int64 (__fastcall ***)(), __int64, _QWORD); // rax
  __int64 (__fastcall ***v4)(); // rsi
  unsigned int v5; // ebx
  unsigned int v7; // r12d
  unsigned __int8 (__fastcall *v8)(__int64, _QWORD *, _QWORD); // rax
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // rax
  __int64 (__fastcall **v12)(); // [rsp+0h] [rbp-A8h] BYREF
  int v13; // [rsp+8h] [rbp-A0h]
  __int64 v14; // [rsp+10h] [rbp-98h]
  __int128 v15; // [rsp+18h] [rbp-90h]
  __int64 v16; // [rsp+28h] [rbp-80h]
  __int128 v17; // [rsp+30h] [rbp-78h]
  __int64 v18; // [rsp+40h] [rbp-68h]
  __int128 v19; // [rsp+48h] [rbp-60h]
  __int64 v20; // [rsp+58h] [rbp-50h]
  unsigned int v21; // [rsp+60h] [rbp-48h]
  _QWORD v22[8]; // [rsp+68h] [rbp-40h] BYREF

  v22[2] = __readfsqword(0x28u);
  v19 = 0;
  v18 = 0;
  v13 = 2;
  v14 = 0;
  v16 = 0;
  v12 = off_8BE90;
  v2 = *(_QWORD *)(a1 + 8);
  v15 = 0;
  v20 = 0;
  LODWORD(v2) = *(_DWORD *)(v2 + 64);
  v17 = 0;
  v22[0] = 0;
  v22[1] = 0;
  v21 = v2 - 1;
  hexdsp = (void (__fastcall *)(__int64, __int64 (__fastcall ***)(), __int64, _QWORD))get_hexdsp(a1, a2);
  v4 = &v12;
  hexdsp(455, &v12, a1 + 16, 0);
  if ( v20 )
  {
    if ( *(_DWORD *)(v20 + 8) == 70 && *(_DWORD *)(a1 + 24) == 71 )
    {
      v7 = v21;
      v8 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(455, &v12);
      v4 = (__int64 (__fastcall ***)())v22;
      if ( v8(213, v22, v7) )
      {
        v9 = *(_QWORD *)(a1 + 40);
        if ( !*(_QWORD *)(v9 + 16) || v20 != *(_QWORD *)(v9 + 8) + 16LL )
        {
          *(_DWORD *)(v20 + 8) = 80;
          v10 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(213, v22);
          v4 = (__int64 (__fastcall ***)())&dword_40;
          v11 = v10(129, 64);
          *(_QWORD *)v11 = -1;
          *(_QWORD *)(v11 + 8) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v11 + 16) = 0xFFFFFFFFLL;
          *(_QWORD *)(v11 + 40) = 0;
          *(_QWORD *)(v11 + 48) = 0;
          *(_DWORD *)(v11 + 56) = 0;
          *(_OWORD *)(v11 + 24) = 0;
          *(_QWORD *)(v20 + 24) = v11;
        }
      }
    }
  }
  v5 = sub_1AC70((__int64)&v12, (__int64)v4);
  v12 = off_8BE90;
  qfree(v22[0]);
  v12 = (__int64 (__fastcall **)())&off_8BE50;
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  v12 = off_8BD90;
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  return v5;
}
