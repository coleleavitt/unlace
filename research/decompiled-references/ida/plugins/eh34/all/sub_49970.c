__int64 __fastcall sub_49970(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // eax
  __int64 v4; // r12
  __int64 v5; // rbx
  int v6; // eax
  __m128i v7; // xmm0
  __int64 v9; // [rsp+10h] [rbp-68h] BYREF
  __m128i v10; // [rsp+18h] [rbp-60h] BYREF
  char v11; // [rsp+28h] [rbp-50h]
  unsigned __int64 v12; // [rsp+38h] [rbp-40h]

  v2 = 0;
  v12 = __readfsqword(0x28u);
  v3 = sub_4CAC0(a2 + 48);
  v4 = (unsigned int)(v3 - 1);
  if ( v3 <= 0 )
  {
LABEL_11:
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  while ( 1 )
  {
    v5 = sub_4CAD0(a2 + 48, (unsigned int)v2);
    if ( !*(_DWORD *)(v5 + 4) )
      goto LABEL_3;
    v6 = *(_DWORD *)(v5 + 8);
    if ( v6 != 1 )
    {
      if ( v6 != 3 )
        goto LABEL_3;
      sub_49730((__int64)&v9, a2, v5, 1, v2);
      if ( v11 )
        break;
    }
    sub_49730((__int64)&v9, a2, v5, 0, v2);
    if ( v11 )
      break;
LABEL_3:
    if ( v2 == v4 )
      goto LABEL_11;
    ++v2;
  }
  v7 = _mm_loadu_si128(&v10);
  *(_QWORD *)a1 = v9;
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v7;
  return a1;
}

