__int64 __fastcall sub_1D1B0(__int64 a1, int *a2)
{
  int v2; // eax
  int v3; // r9d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  char v11; // [rsp+0h] [rbp-28h]
  int v12; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v2 = *a2;
  v3 = a2[1];
  v13 = __readfsqword(0x28u);
  if ( !sub_14790(v3, a2[2], &v12, (v2 & 0xFEFFFFFF) == -822415874) )
    sub_1A260(
      (__int64)"Sorry, the target processor is not supported by IDA (0x%08X)",
      (unsigned int)v7,
      v4,
      v5,
      v6,
      v7,
      v11);
  set_processor_type();
  sub_11F40(*(_BYTE *)(a1 + 13692), a2[1] == 33554444);
  v8 = (unsigned int)a2[3];
  if ( (unsigned int)v8 > 0xC )
    return v13 - __readfsqword(0x28u);
  v9 = 7112;
  if ( !_bittest64(&v9, v8) )
    return v13 - __readfsqword(0x28u);
  getinf();
  return setinf();
}

