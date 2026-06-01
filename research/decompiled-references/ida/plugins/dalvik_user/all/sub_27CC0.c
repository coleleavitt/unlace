__int64 __fastcall sub_27CC0(__int64 a1, _QWORD *a2, __m128i *a3, __int64 a4, int a5, int a6)
{
  _DWORD *v7; // rax
  __int64 v8; // rdx
  _DWORD *v9; // r13
  unsigned int v10; // eax
  const __m128i *v11; // rdi
  unsigned int v12; // ebx
  const __m128i *v14; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v7 = sub_27B80(a1, a4, (__int64)a3, a4, a5, a6);
  v15 = 0;
  v8 = *((_QWORD *)v7 + 1);
  v9 = v7;
  v14 = nullptr;
  v10 = sub_4FBE0(a1 + 864, &v14, v8, 0, 1);
  v11 = v14;
  v12 = v10;
  if ( (_BYTE)v10 )
  {
    if ( (_QWORD)v15 )
    {
      if ( a2 )
        *a2 = *((_QWORD *)v9 + 1);
      if ( a3 )
      {
        *a3 = _mm_loadu_si128(v11);
        a3[1] = _mm_loadu_si128(v11 + 1);
        a3[2].m128i_i64[0] = v11[2].m128i_i64[0];
      }
    }
    else
    {
      v12 = 0;
    }
  }
  if ( v11 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return v12;
}

