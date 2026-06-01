bool __fastcall sub_1686F0(const __m128i *a1, _DWORD *a2, __int64 a3, __m128i a4, __m128 a5)
{
  _DWORD *v5; // r8
  char *v6; // rbp
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rbx
  __int64 v10; // r12
  char v12; // al
  __int64 v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = a2;
  v6 = (char *)(a3 + 48);
  v7 = a1[30].m128i_i64[0];
  v8 = *(_BYTE *)(a3 + 32) == 4;
  v13[1] = __readfsqword(0x28u);
  v9 = a3;
  v10 = *(_QWORD *)(v7 + 112);
  if ( v8 && **(_DWORD **)(a3 + 40) == 13 )
  {
    v12 = sub_11FD80(v6, v13, 0);
    v5 = a2;
    if ( v12 )
    {
      if ( !v13[0] )
      {
        v9 = *(_QWORD *)(v9 + 40);
        v6 = (char *)(v9 + 48);
      }
    }
  }
  return (unsigned int)sub_130480(v10, a1, (__int64)v5, v5, (__int64)v5, v9 + 32, a4, a5, (__int64)v6, 2) != 0;
}

