bool __fastcall sub_163B30(const __m128i *a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v3; // r8
  char *v4; // rbp
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rbx
  __int64 v8; // r12
  char v10; // al
  _QWORD v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = a2;
  v4 = (char *)(a3 + 48);
  v5 = a1[30].m128i_i64[0];
  v6 = *(_BYTE *)(a3 + 32) == 4;
  v11[1] = __readfsqword(0x28u);
  v7 = a3;
  v8 = *(_QWORD *)(v5 + 112);
  if ( v6 && **(_DWORD **)(a3 + 40) == 13 )
  {
    v10 = sub_11B1C0(v4, v11, 0);
    v3 = a2;
    if ( v10 )
    {
      if ( !v11[0] )
      {
        v7 = *(_QWORD *)(v7 + 40);
        v4 = (char *)(v7 + 48);
      }
    }
  }
  return (unsigned int)sub_12B8C0(v8, a1, (__int64)v3, v3, (__int64)v3, v7 + 32, (__int64)v4, 2) != 0;
}

