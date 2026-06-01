__int64 __fastcall sub_1ABE0(__int64 a1, __m128i *a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  v3 = sub_4FBE0(a1 + 864, &v7, a3, 0, 1);
  v4 = v7;
  v5 = v3;
  if ( (_BYTE)v3 )
  {
    if ( (_QWORD)v8 )
    {
      if ( a2 )
      {
        *a2 = _mm_loadu_si128((const __m128i *)(v7 + 8));
        a2[1] = _mm_loadu_si128((const __m128i *)(v4 + 24));
      }
    }
    else
    {
      v5 = 0;
    }
  }
  if ( v4 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v5;
}

