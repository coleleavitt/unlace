__int64 *__fastcall sub_DF550(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 v13; // rdi
  __int64 *v14; // rax
  __int64 *v15; // r10
  __int64 *v16; // r9
  __int64 *v17; // r11
  __int64 v18; // r8
  int v19; // eax
  __int64 v21; // rdi
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 *v24; // rax
  __int64 *v26; // [rsp+8h] [rbp-F0h]
  __int64 *v27; // [rsp+8h] [rbp-F0h]
  __int64 *v28; // [rsp+10h] [rbp-E8h]
  __int64 *v29; // [rsp+10h] [rbp-E8h]
  __int64 v30; // [rsp+18h] [rbp-E0h]
  __int64 v31; // [rsp+18h] [rbp-E0h]
  __int64 v32; // [rsp+20h] [rbp-D8h] BYREF
  int v33; // [rsp+28h] [rbp-D0h]
  _BYTE v34[136]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v35; // [rsp+B8h] [rbp-40h]

  v13 = *(_QWORD *)a1;
  v35 = __readfsqword(0x28u);
  v14 = sub_DBF10(v13, 128);
  v15 = a2;
  v16 = (__int64 *)v34;
  v17 = v14;
  v18 = a5;
  if ( v14 )
    v16 = v14;
  if ( !a2 )
  {
    v21 = *(_QWORD *)a1;
    v30 = a5;
    v26 = v16;
    v28 = v14;
    v32 = 0;
    v33 = 0;
    v22 = sub_DEC00(v21, 180, (__int64)&v32, 0);
    v23 = sub_DEBF0((__int64 *)a1, (__int64)v22);
    v18 = v30;
    v15 = v23;
    v17 = v28;
    v16 = v26;
  }
  v16[4] = (__int64)v15;
  *(_BYTE *)v16 = -118;
  v16[1] = 0;
  *((_DWORD *)v16 + 1) = a8;
  v19 = *(_DWORD *)(a1 + 132) + 1;
  *(_DWORD *)(a1 + 132) = v19;
  *((_DWORD *)v16 + 4) = v19;
  *(__int64 *)((char *)v16 + 20) = -1;
  *((_WORD *)v16 + 1) = 0;
  if ( !a3 )
  {
    v31 = v18;
    v29 = v17;
    v27 = v16;
    v24 = sub_DC1C0(*(_QWORD *)a1, 0x70u);
    v18 = v31;
    a3 = v24;
    v17 = v29;
    v16 = v27;
  }
  v16[5] = (__int64)a3;
  v16[6] = a4;
  v16[7] = v18;
  v16[8] = a6;
  v16[9] = a7;
  v16[10] = 0;
  v16[11] = 0;
  v16[12] = a9;
  v16[13] = 0;
  v16[14] = 0;
  v16[15] = 0;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 103LL) )
  {
    sub_D75C0(*(_QWORD *)a1, v16, v16 != (__int64 *)v34);
    return nullptr;
  }
  return v17;
}
