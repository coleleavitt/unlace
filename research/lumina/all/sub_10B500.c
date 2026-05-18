unsigned __int64 __fastcall sub_10B500(__int64 a1, int a2, __int64 *a3, int a4, int a5, int a6, double a7)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rbp
  const char *v16; // rdx
  const char *v17; // r13
  __int64 v18; // r9
  __int64 v20; // rdi
  _QWORD *v21; // rsi
  _QWORD *v22; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-30h]

  v9 = *a3;
  v23 = __readfsqword(0x28u);
  v10 = sub_D9DB0(v9, 1u, a7, (__int64)a3, a4, a5, a6);
  v14 = *(_QWORD *)a1;
  v22 = nullptr;
  v15 = *(_QWORD *)(v14 + 24);
  if ( (*(_BYTE *)(v15 + 50) & 2) != 0 )
  {
    v16 = nullptr;
    v17 = (const char *)v10;
    if ( a2 == 2 )
      v16 = (const char *)sub_D9DB0(a3[1], 1u, a7, 0, v11, v12, v13);
    if ( v17 && (unsigned int)sub_10AF50(v15, v17, v16, &v22) )
    {
      v20 = *(_QWORD *)a1;
      v21 = v22;
      *(_DWORD *)(a1 + 36) = 1;
      sub_F11D0(v20, v21, -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v18);
      sub_C91C0((__int64)v22, (__int64)v21);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 36) = 1;
    sub_F11D0(v14, "not authorized", -1, 1, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v13);
  }
  return __readfsqword(0x28u) ^ v23;
}
