unsigned __int64 __fastcall sub_3F4A0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, __int16 a6)
{
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __int128 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v13 = 0;
  v14 = 0;
  sub_3E9E0(a1, a3, a6, a1, (__int64)&v13, a2);
  *(_QWORD *)(a1 + 144) = a2;
  *(_QWORD *)a1 = &off_C79C8;
  v9 = *a4;
  *(_QWORD *)(a1 + 152) = *a4;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10 = *(_QWORD *)(a1 + 104);
  v11 = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 160) = a5;
  *(_DWORD *)(a1 + 164) = 0;
  if ( (unsigned __int8)sub_2C6A0(v11, v10, 0x13u, &v13) )
    *(_DWORD *)(a1 + 164) = v13;
  return v15 - __readfsqword(0x28u);
}

