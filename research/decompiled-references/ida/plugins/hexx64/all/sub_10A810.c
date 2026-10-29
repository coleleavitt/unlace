__int64 __fastcall sub_10A810(__int64 a1, int a2, unsigned __int64 a3, double a4)
{
  __m128i *v5; // rdx
  unsigned int v6; // ebp
  __int64 v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[3] = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 52) = 0;
  v5 = *(__m128i **)(a1 + 8);
  v8[0] = 0;
  v8[1] = 0;
  v6 = sub_10A0C0(a1, a2, v5, a3, 1, v8, a4);
  if ( !(unsigned __int8)sub_64880(v8) )
    *(_BYTE *)(a1 + 58) = 1;
  qfree(v8[0]);
  return v6;
}

