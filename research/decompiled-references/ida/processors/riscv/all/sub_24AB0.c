__int64 __fastcall sub_24AB0(__int64 *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  __m128i v4; // xmm0
  int v5; // eax
  unsigned __int64 v6; // rax
  __int64 result; // rax
  __m128i v8; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+10h] [rbp-18h]

  v1 = a1[1];
  v2 = *a1;
  v9 = a1[2];
  v3 = *(a1 - 2);
  v8 = _mm_loadu_si128((const __m128i *)a1);
  if ( v1 < v3 )
    goto LABEL_4;
  if ( v3 >= v1 )
  {
    while ( v2 < *(a1 - 3) )
    {
      do
      {
LABEL_4:
        v4 = _mm_loadu_si128((const __m128i *)(a1 - 3));
        v5 = *((_DWORD *)a1 - 2);
        a1 -= 3;
        *(__m128i *)(a1 + 3) = v4;
        *((_DWORD *)a1 + 10) = v5;
        v6 = *(a1 - 2);
      }
      while ( v1 < v6 );
      if ( v6 < v1 )
        break;
    }
  }
  result = (unsigned int)v9;
  *(__m128i *)a1 = _mm_load_si128(&v8);
  *((_DWORD *)a1 + 4) = result;
  return result;
}

