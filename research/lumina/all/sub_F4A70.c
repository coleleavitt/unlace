unsigned __int64 __fastcall sub_F4A70(__int64 a1, int a2, __int64 *a3, int a4, int a5, int a6, double a7)
{
  __int64 v8; // r13
  _BYTE *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  int v14; // ebp
  __int64 *v15; // rax
  __int64 v16; // r9
  _DWORD v18[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v19; // [rsp+8h] [rbp-60h]
  _QWORD v20[2]; // [rsp+10h] [rbp-58h] BYREF
  int v21; // [rsp+20h] [rbp-48h]
  int v22; // [rsp+24h] [rbp-44h]
  int v23; // [rsp+28h] [rbp-40h]
  __int16 v24; // [rsp+2Ch] [rbp-3Ch]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  if ( a2 > 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    v9 = (_BYTE *)sub_D9DB0(*a3, 1u, a7, (__int64)a3, a4, a5, a6);
    if ( v9 )
    {
      v13 = *(_DWORD *)(v8 + 136);
      v18[0] = a2 - 1;
      v19 = a3 + 1;
      v18[1] = 0;
      v22 = v13;
      v24 = 512;
      v20[1] = 0;
      v20[0] = v8;
      v21 = 0;
      v23 = 0;
      sub_DBBA0((__int64)v20, v9, v18, v10, v11, v12);
      v14 = v23;
      v15 = sub_DC130((__int64)v20);
      sub_F48B0(a1, v15, v14, 1u, sub_D42A0, v16);
    }
  }
  return __readfsqword(0x28u) ^ v25;
}
