__int64 __fastcall sub_6D760(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v8; // rax
  __int64 v9; // [rsp+8h] [rbp-150h] BYREF
  __int64 v10; // [rsp+10h] [rbp-148h] BYREF
  __m128i v11; // [rsp+18h] [rbp-140h] BYREF
  _BYTE v12[144]; // [rsp+30h] [rbp-128h] BYREF
  unsigned int v13; // [rsp+C0h] [rbp-98h]
  unsigned int v14; // [rsp+C4h] [rbp-94h]
  unsigned __int64 v15; // [rsp+138h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  netnode_check(&v9, "$ PE header", 0, 0);
  netnode_valobj(v9, v12, 264);
  if ( v13 && (v4 = v14) != 0 )
  {
    v8 = a3 + v13;
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v8 + v4;
  }
  else
  {
    sub_19A90((__int64)&v10, (__int64)"PE header has no exception directory information");
    v5 = v10;
    v6 = _mm_loadu_si128(&v11);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v5;
    *(__m128i *)(a1 + 8) = v6;
  }
  return a1;
}
