__int64 __fastcall sub_4A370(unsigned __int32 *a1)
{
  char *v1; // rax
  char *v2; // rbx
  __m128 v3; // xmm1
  unsigned int v4; // ebp
  _BYTE v6[24]; // [rsp+8h] [rbp-78h] BYREF
  int v7; // [rsp+20h] [rbp-60h]
  __int64 v8; // [rsp+28h] [rbp-58h]
  __int128 v9; // [rsp+30h] [rbp-50h]
  char v10; // [rsp+40h] [rbp-40h]
  unsigned __int64 v11; // [rsp+50h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  memset(v6, 0, sizeof(v6));
  v1 = sub_48F20((unsigned __int64)a1, 1u, 7u, 0, (__int64)v6);
  if ( !v1 )
    return 0;
  v2 = v1;
  v3 = _mm_loadh_ps((const double *)v1);
  *(_QWORD *)&v6[16] = *((_QWORD *)v1 + 1);
  v7 = 0;
  *(__m128 *)v6 = v3;
  v8 = 0;
  v10 = byte_7FBE9;
  v9 = 0;
  if ( (unsigned __int8)sub_46430((__int64)v6, a1, 1) )
  {
    if ( (unsigned __int8)sub_46430((__int64)v6, a1 + 1, 1) )
    {
      if ( (unsigned __int8)sub_46430((__int64)v6, a1 + 2, 1) )
      {
        if ( (unsigned __int8)sub_46430((__int64)v6, a1 + 3, 1) )
        {
          v4 = sub_46430((__int64)v6, a1 + 4, 1);
          if ( (_BYTE)v4 )
          {
            if ( (unsigned __int64)(int)*a1 <= 8
              && (unsigned __int64)(int)a1[1] <= 8
              && (unsigned __int64)(int)a1[2] <= 8
              && (unsigned __int64)(int)a1[3] <= 8
              && (unsigned __int64)(int)a1[4] <= 8 )
            {
              goto LABEL_4;
            }
            sub_11270((__int64)"JDWP error: unsupported ID sizes");
          }
        }
      }
    }
  }
  v4 = 0;
LABEL_4:
  sub_43EB0((__int64)v6);
  if ( *(_QWORD *)v2 )
    qfree();
  operator delete(v2, 0x20u);
  return v4;
}

