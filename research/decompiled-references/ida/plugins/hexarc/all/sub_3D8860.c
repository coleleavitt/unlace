__int64 __fastcall sub_3D8860(__int64 a1, double a2, double a3, double a4, __m128 a5)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 result; // rax
  int v8; // ecx
  __int64 v9; // r9
  __int64 (**v10)(); // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+8h] [rbp-20h]
  __int64 v12; // [rsp+10h] [rbp-18h]
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 80);
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(v5 + 64);
  result = 0;
  if ( v6 != -1 )
  {
    v8 = *(_DWORD *)(a1 + 56);
    v12 = v6;
    LODWORD(v11) = -1;
    v10 = off_4B2C78;
    result = sub_3D8580(a1, &v10, 3u, v8, a2, a3, a4, a5);
    if ( !(_BYTE)result )
      return callui(115, v6, 0xFFFFFFFFLL, 1, &callui, v9, v10, v11, v12, v13);
  }
  return result;
}

