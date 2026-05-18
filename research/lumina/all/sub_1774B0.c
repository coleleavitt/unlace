__int64 __fastcall sub_1774B0(__int64 a1)
{
  const char *v1; // rax
  __m128i v2; // xmm0
  __int64 result; // rax
  const char *v4; // [rsp+8h] [rbp-30h] BYREF
  __m128i v5; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  if ( !a1 )
    return sub_18FA40(1531);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        sub_1920D0(*(_QWORD *)(a1 + 8), a1 + 8);
        *(_BYTE *)a1 = 3;
        goto LABEL_6;
      case 3:
        goto LABEL_6;
      case 7:
        v1 = s1;
        if ( *(_QWORD *)(a1 + 16) )
          v1 = *(const char **)(a1 + 8);
        v4 = v1;
        sub_192280(&v4, &v5);
        sub_176520(a1);
        v2 = _mm_load_si128(&v5);
        *(_BYTE *)a1 = 3;
        *(__m128i *)(a1 + 8) = v2;
        goto LABEL_6;
      case 9:
        sub_192190(*(_QWORD *)(a1 + 8), a1 + 8);
        *(_BYTE *)a1 = 3;
LABEL_6:
        result = 0;
        break;
      case 0xA:
        if ( sub_176840((unsigned __int8 *)a1, 2) )
          continue;
        result = sub_18FA20(a1, 2);
        break;
      default:
        return sub_18FA40(1531);
    }
    return result;
  }
}
