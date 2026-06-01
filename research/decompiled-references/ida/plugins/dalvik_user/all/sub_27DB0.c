__int64 __fastcall sub_27DB0(__int64 a1, _QWORD *a2, __m128i *a3, __int64 a4, __int64 a5, int a6)
{
  int v9; // esi
  _DWORD *v11; // rax
  __int64 v12; // rdx
  _DWORD *v13; // r15
  unsigned int v14; // eax
  const __m128i *v15; // rdi
  unsigned int v16; // ebx
  const __m128i *v18; // [rsp+0h] [rbp-58h] BYREF
  __int128 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v9 = *(_DWORD *)(a1 + 1832);
  v20 = __readfsqword(0x28u);
  v11 = sub_27B80(a1, v9, (__int64)a3, a4, a5, a6);
  v19 = 0;
  v12 = *((_QWORD *)v11 + 1);
  v13 = v11;
  v18 = nullptr;
  v14 = sub_4FBE0(a1 + 864, &v18, v12, 0, 1);
  v15 = v18;
  v16 = v14;
  if ( (_BYTE)v14 )
  {
    if ( (_QWORD)v19 && v18[1].m128i_i64[0] == a4 && v18[1].m128i_i64[1] == a5 )
    {
      if ( a2 )
        *a2 = *((_QWORD *)v13 + 1);
      if ( a3 )
      {
        *a3 = _mm_loadu_si128(v15);
        a3[1] = _mm_loadu_si128(v15 + 1);
        a3[2].m128i_i64[0] = v15[2].m128i_i64[0];
      }
    }
    else
    {
      v16 = 0;
    }
  }
  if ( v15 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  return v16;
}

