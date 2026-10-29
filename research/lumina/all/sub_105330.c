unsigned __int64 __fastcall sub_105330(__int64 *a1, double a2, __int64 a3, __int64 *a4, int a5, int a6, int a7)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD v23[6]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v24[7]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-20h]

  v9 = *a4;
  v25 = __readfsqword(0x28u);
  v10 = sub_D9DB0(v9, 1u, a2, (__int64)a4, a5, a6, a7);
  if ( !(unsigned int)sub_104900((__int64)v23, (__int64)a1, v10) )
  {
    v16 = sub_D9DB0(a4[1], 1u, a2, v11, v12, v13, v14);
    if ( (unsigned int)sub_104900((__int64)v24, (__int64)a1, v16) )
    {
      sub_CA110(v23, (__int64)a1);
    }
    else
    {
      v17 = 0;
      v18 = sub_105050((__int64)v23, 0, v24[1]);
      if ( v18 )
      {
        v17 = (__int64)a1;
        sub_103590(v18, a1, 0, v20, v21, v22, a2);
      }
      else
      {
        sub_E1560((__int64)a1, 0, v19, v20, v21, v22);
      }
      sub_CA110(v23, v17);
      sub_CA110(v24, v17);
    }
  }
  return __readfsqword(0x28u) ^ v25;
}
