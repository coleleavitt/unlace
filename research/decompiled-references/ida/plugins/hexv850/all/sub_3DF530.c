__int64 __fastcall sub_3DF530(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rax
  __m128i v6; // kr00_16
  __m128i v7; // xmm0
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __m128i v9; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( a3 == -1 || (v4 = netnode_suplast(), v4 == -1) || v4 < a3 )
  {
    sub_3DF0B0((__int64)&v8);
    v6 = v9;
    *(_QWORD *)a1 = v8;
    *(__m128i *)(a1 + 8) = v6;
    *(_BYTE *)(a1 + 24) = 1;
  }
  else if ( a3 )
  {
    if ( netnode_qsupstr() && (unsigned __int8)netnode_supdel() )
    {
      netnode_supshift();
      netnode_supset();
      *(_BYTE *)(a1 + 24) = 0;
    }
    else
    {
      sub_3DF0B0((__int64)&v8);
      *(_QWORD *)a1 = v8;
      v7 = _mm_loadu_si128(&v9);
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v7;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}

