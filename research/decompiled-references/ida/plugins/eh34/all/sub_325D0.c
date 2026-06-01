__int64 __fastcall sub_325D0(__int64 a1, _QWORD *a2, const char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  _DWORD *v7; // rbx
  _DWORD *v8; // r12
  __m128i v9; // xmm0
  _WORD *v11; // rax
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  __m128i v13; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v6 = a2[1];
  v14 = __readfsqword(0x28u);
  if ( v6 )
  {
    v7 = (_DWORD *)*a2;
    v12 = 0;
    v13 = 0;
    v8 = &v7[2 * v6];
    if ( v8 != v7 )
    {
      a3 = "{";
      do
      {
        sub_10400(&v12, (__int64)"%s%d:%d", a3, *v7, v7[1]);
        v7 += 2;
        a3 = ", ";
      }
      while ( v8 != v7 );
    }
    sub_10400(&v12, (__int64)"}", a3, a4, a5, a6);
    v9 = _mm_loadu_si128(&v13);
    *(_QWORD *)a1 = v12;
    *(__m128i *)(a1 + 8) = v9;
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v11 = (_WORD *)qvector_reserve(a1, 0, 3, 1);
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = 3;
    *v11 = 32123;
    *(_BYTE *)(*(_QWORD *)a1 + 2LL) = 0;
  }
  return a1;
}

