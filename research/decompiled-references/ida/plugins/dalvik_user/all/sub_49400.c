__int64 __fastcall sub_49400(unsigned __int64 a1)
{
  char *v1; // rax
  double *v2; // rbx
  __int64 v3; // rax
  __m128 v4; // xmm1
  unsigned int v5; // ebp
  _BYTE v7[24]; // [rsp+8h] [rbp-68h] BYREF
  int v8; // [rsp+20h] [rbp-50h]
  __int64 v9; // [rsp+28h] [rbp-48h]
  __int128 v10; // [rsp+30h] [rbp-40h]
  char v11; // [rsp+40h] [rbp-30h]
  unsigned __int64 v12; // [rsp+50h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  memset(v7, 0, sizeof(v7));
  v1 = sub_48F20(a1, 1u, 1u, 0, (__int64)v7);
  if ( v1 )
  {
    v2 = (double *)v1;
    v3 = *((_QWORD *)v1 + 1);
    v4 = _mm_loadh_ps(v2);
    v10 = 0;
    *(_QWORD *)&v7[16] = v3;
    v8 = 0;
    *(__m128 *)v7 = v4;
    v9 = 0;
    v11 = byte_7FBE9;
    if ( (unsigned __int8)sub_464A0((__int64)v7, (__int64 *)(a1 + 64))
      && (unsigned __int8)sub_46430((__int64)v7, (unsigned __int32 *)(a1 + 88), 1)
      && (unsigned __int8)sub_46430((__int64)v7, (unsigned __int32 *)(a1 + 92), 1)
      && (unsigned __int8)sub_464A0((__int64)v7, (__int64 *)(a1 + 96)) )
    {
      v5 = sub_464A0((__int64)v7, (__int64 *)(a1 + 120));
    }
    else
    {
      v5 = 0;
    }
    sub_43EB0((__int64)v7);
    if ( *(_QWORD *)v2 )
      qfree();
    operator delete(v2, 0x20u);
  }
  else
  {
    return 0;
  }
  return v5;
}

