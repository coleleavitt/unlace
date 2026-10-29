__int64 __fastcall sub_2A4CB0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int v6; // eax
  __int64 *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  _QWORD v14[2]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v15[2]; // [rsp+10h] [rbp-78h] BYREF
  _DWORD v16[4]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v17[4]; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+40h] [rbp-48h]
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v6 = *(_DWORD *)(a2 + 8);
  v19 = __readfsqword(0x28u);
  if ( v6 <= 2 )
  {
    if ( v6 )
      return 0;
    goto LABEL_10;
  }
  a4 = v6 - 36;
  if ( v6 - 36 > 0x20 )
  {
    if ( v6 - 22 <= 9 )
      goto LABEL_7;
    goto LABEL_10;
  }
  if ( ((1LL << a4) & 0x15F9E1000LL) == 0 )
  {
    if ( ((1LL << a4) & 0x610001) != 0 )
    {
LABEL_7:
      *(_DWORD *)(a1 + 8) |= 1u;
      return 0;
    }
    if ( v6 == 51 )
    {
      v7 = *(__int64 **)(a1 + 64);
      v8 = *(_QWORD *)(a2 + 24);
      v14[1] = 0;
      v14[0] = 0x1000000000LL;
      v9 = *v7;
      v15[1] = v8;
      v15[0] = 6;
      sub_29B460((__int64)v15, v9, 0x1000000000LL, 15, a5, a6);
      v16[0] = 0;
      sub_29AB70((__int64)v16, (unsigned int *)v15);
      v17[0] = 0;
      sub_29AB70((__int64)v17, (unsigned int *)v14);
      v18 = 2;
      sub_2A3710((__int64)v7, (__int64)v16, 0, v10, v11, v12);
      v18 = -1;
      sub_29A030((__int64)v17);
      sub_29A030((__int64)v16);
      sub_29A030((__int64)v15);
      sub_29A030((__int64)v14);
      goto LABEL_7;
    }
LABEL_10:
    sub_2A3840(*(__int64 **)(a1 + 64), a2, 8, a4, a5, a6);
  }
  return 0;
}

