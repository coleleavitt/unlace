void __fastcall sub_3E11B0(__int64 a1, unsigned int a2, double a3, double a4, __m128i a5, __m128 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // r9
  __int64 (**v10)(); // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+8h] [rbp-20h]
  __int64 v12; // [rsp+10h] [rbp-18h]
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 64);
    if ( v7 != -1 )
    {
      v8 = *(_DWORD *)(a1 + 56);
      LODWORD(v11) = -1;
      v10 = off_4E6478;
      v12 = v7;
      if ( !(unsigned __int8)sub_3DFE80(a1, &v10, a2, v8, a3, a4, a5, a6) )
        callui(115, v7, 0xFFFFFFFFLL, 1, &callui, v9, v10, v11, v12, v13);
    }
  }
}

