__int64 __fastcall sub_4400(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-20h]

  v5 = a1[1];
  v6 = a1[3];
  v17 = __readfsqword(0x28u);
  v8 = v5 + v6;
  v9 = a1[4] + v5;
  if ( v8 < v9 && (v14 = sub_E440(v8, v9, &v16)) != 0 )
  {
    v15 = a1[3];
    v10 = v15 + v14;
    a1[5] = v15;
    a1[3] = v10;
  }
  else
  {
    sub_3940((__int64)"couldn't read data size");
    v10 = a1[3];
  }
  v11 = v16;
  if ( a1[4] < (unsigned __int64)v16 + v10 )
  {
    sub_3940((__int64)"data size is too big (%u)", v16);
    v10 = a1[3];
    v11 = v16;
  }
  *a2 = a1[1] + v10;
  v12 = a1[3];
  a1[5] = v12;
  a1[3] = v11 + v12;
  *a3 = v11;
  return 1;
}
