__int64 __fastcall sub_528B0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 *v9; // [rsp+10h] [rbp-68h]
  __int64 v10; // [rsp+18h] [rbp-60h]
  __int64 (__fastcall **v11)(); // [rsp+20h] [rbp-58h] BYREF
  int v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h]
  _QWORD *v14; // [rsp+38h] [rbp-40h]
  unsigned __int64 v15; // [rsp+48h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v9 = a3;
  v5 = sub_5A5A0(a3 + 3, a4, 4);
  v6 = *v9;
  v10 = v5;
  v8[1] = v6;
  v8[0] = off_C8120;
  if ( (unsigned __int8)sub_52400(v8, a4, 1) )
  {
    v14 = v8;
    v12 = 0;
    v13 = 0;
    v11 = off_C7948;
    sub_A1190(a4, &v11, 0);
  }
  *(_DWORD *)(a1 + 20) = 0;
  *(_OWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = v5;
  return a1;
}

