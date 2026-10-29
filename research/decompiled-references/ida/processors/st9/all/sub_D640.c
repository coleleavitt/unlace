unsigned __int64 __fastcall sub_D640(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  __int64 v5; // rcx
  char *v6; // r8
  __int16 v7; // r12
  int v8; // r12d
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)a1;
  v12 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64, __int64 *))(v2 + 328))(a1, a2);
  v4 = *a2;
  v10 = 0;
  v11 = 0;
  if ( (unsigned __int8)sub_C660(&v10, v4) )
  {
    v5 = v10;
    v6 = byte_114D5;
    v7 = *(_DWORD *)(a1 + 144);
    *(_DWORD *)(a1 + 144) &= 0xFFFFE76F;
    v8 = v7 & 0x1890;
    if ( (a2[2] & 2) == 0 )
      v6 = "near";
    sub_ADB0(a1, 0xFFFF, (__int64)&word_114DE, v5, v6);
    *(_DWORD *)(a1 + 144) |= v8;
    sub_ADB0(a1, 0xFFFF, (__int64)&byte_114EF, v10);
    *(_DWORD *)(a1 + 144) |= 0x2000u;
  }
  sub_ADB0(a1, 0, (__int64)&dword_114FC, v10);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return v12 - __readfsqword(0x28u);
}

