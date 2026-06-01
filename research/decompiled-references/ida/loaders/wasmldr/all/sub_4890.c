__int64 __fastcall sub_4890(_QWORD *a1, unsigned int *a2, unsigned __int8 *a3)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdi
  unsigned __int8 v15; // bp
  unsigned int v17; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v5 = a1[1];
  v6 = v5 + a1[3];
  v7 = a1[4] + v5;
  if ( v6 >= v7 || (v9 = sub_E4B0(v6, v7, &v17), (v10 = v9) == 0) )
    sub_3890((__int64)"couldn't read global header");
  v11 = a1[3];
  a1[5] = v11;
  v12 = v9 + v11;
  v13 = v17;
  a1[3] = v12;
  *a2 = v13;
  a2[1] = -1;
  if ( v13 < 0xFFFFFFFC )
    sub_3890((__int64)"couldn't read global header type", v7, v10);
  create_data(a1[5], 0, v10, -1);
  v14 = a1[3];
  if ( a1[4] < (unsigned __int64)(v14 + 1) )
    sub_3890((__int64)"couldn't read template type @0x%llx", a1[3]);
  v15 = *(_BYTE *)(a1[1] + v14);
  a1[5] = v14;
  a1[3] = v14 + 1;
  if ( v15 > 1u )
    sub_3890((__int64)"mutable field is not a boolean : %u", v15);
  create_data(v14, 0, 1, -1);
  *a3 = v15;
  return 1;
}

