__int64 __fastcall sub_471E0(__int64 a1, __m128i *a2)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  bool v5; // zf
  char v6; // r12
  int v7; // esi
  unsigned int v8; // edx
  unsigned __int8 v9; // [rsp+Fh] [rbp-39h]
  _BYTE v10[24]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v2 = *(int *)(a1 + 24);
  v11 = __readfsqword(0x28u);
  result = 0;
  if ( v2 < *(_QWORD *)(a1 + 16) )
  {
    v5 = *(_BYTE *)(a1 + 56) == 0;
    v6 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + v2);
    *(_DWORD *)(a1 + 24) = v2 + 1;
    if ( !v5 )
    {
      memset(v10, 0, sizeof(v10));
      if ( v6 != 2 && v6 != 3 && v6 != 1 )
        sub_13B20((__int64 *)v10);
      sub_1FAD0((__int64 *)(a1 + 32));
      if ( *(_QWORD *)v10 )
      {
        *(_QWORD *)&v10[8] = 0;
        qfree();
      }
    }
    v7 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
    v10[0] = v6;
    *(_QWORD *)&v10[8] = 0;
    result = sub_46950(a1, v7, (__int64 *)&v10[8]);
    if ( *(_BYTE *)(a1 + 56) )
    {
      v9 = result;
      sub_43C70((__int64 *)(a1 + 32), 44, 0);
      sub_43D60((__int64 *)(a1 + 32), "},");
      result = v9;
      LOBYTE(v8) = v9 & (a2 != nullptr);
      if ( !(_BYTE)v8 )
        return result;
    }
    else
    {
      LOBYTE(v8) = result & (a2 != nullptr);
      if ( !(_BYTE)v8 )
        return result;
    }
    *a2 = _mm_load_si128((const __m128i *)v10);
    return v8;
  }
  return result;
}

