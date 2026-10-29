__int64 __fastcall sub_4BC10(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  __m128i v12; // [rsp+8h] [rbp-50h] BYREF
  char v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  sub_4BA00(a2);
  v4 = (_QWORD *)*a3;
  if ( (_QWORD *)*a3 == a3 )
  {
LABEL_8:
    if ( *(_BYTE *)a2 )
      sub_4A850((_QWORD *)a2);
    v8 = _mm_loadu_si128((const __m128i *)(a2 + 40));
    v9 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a2 + 32) = 0;
    *(__m128i *)(a1 + 8) = v8;
    *(_OWORD *)(a2 + 40) = 0;
    *(_QWORD *)a1 = v9;
    *(_BYTE *)(a1 + 24) = 0;
  }
  else
  {
    while ( 1 )
    {
      sub_4B5A0((__int64)&v11, a2, *((_DWORD *)v4 + 4));
      if ( v13 )
        break;
      v5 = v4[3];
      if ( v5 )
        *(_DWORD *)(v5 + 32) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 4LL * *((int *)v4 + 4));
      v4 = (_QWORD *)*v4;
      if ( a3 == v4 )
        goto LABEL_8;
    }
    v6 = v11;
    v7 = _mm_loadu_si128(&v12);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v6;
    *(__m128i *)(a1 + 8) = v7;
  }
  return a1;
}

