void __fastcall sub_3E0160(__int64 a1, double a2, double a3, __m128i a4, __m128 a5)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // ecx
  __int64 v8; // r9
  __int64 (**v9)(); // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+8h] [rbp-20h]
  __int64 v11; // [rsp+10h] [rbp-18h]
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 80);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 64);
    if ( v6 != -1 )
    {
      v7 = *(_DWORD *)(a1 + 56);
      v11 = *(_QWORD *)(v5 + 64);
      LODWORD(v10) = -1;
      v9 = off_4E6478;
      if ( !(unsigned __int8)sub_3DFE80(a1, &v9, 3u, v7, a2, a3, a4, a5) )
        callui(115, v6, 0xFFFFFFFFLL, 1, &callui, v8, v9, v10, v11, v12);
    }
  }
}

