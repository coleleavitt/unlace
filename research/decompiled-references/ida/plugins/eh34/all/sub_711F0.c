unsigned __int64 __fastcall sub_711F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  bool v8; // zf
  __int64 *v9; // rdi
  const char *v10; // rcx
  const char *v11; // rdx
  __m128i *v12; // rdi
  __m128i *v14; // [rsp+8h] [rbp-B8h] BYREF
  __int128 v15; // [rsp+10h] [rbp-B0h]
  __int64 v16; // [rsp+28h] [rbp-98h] BYREF
  __int128 v17; // [rsp+30h] [rbp-90h]
  _BYTE *v18; // [rsp+48h] [rbp-78h] BYREF
  __int128 v19; // [rsp+50h] [rbp-70h]
  char *v20; // [rsp+68h] [rbp-58h] BYREF
  __int128 v21; // [rsp+70h] [rbp-50h]
  unsigned __int64 v22; // [rsp+80h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v21 = 0;
  v20 = nullptr;
  v20 = (char *)qvector_reserve(&v20, 0, 11, 1);
  *(_QWORD *)&v21 = 11;
  strcpy(v20, "Edit/Other");
  v18 = nullptr;
  v19 = 0;
  v18 = (_BYTE *)qvector_reserve(&v18, 0, 1, 1);
  *(_QWORD *)&v19 = 1;
  *v18 = 0;
  v16 = 0;
  v17 = 0;
  v7 = qvector_reserve(&v16, 0, 31, 1);
  v16 = v7;
  *(_QWORD *)&v17 = 31;
  *(__m128i *)v7 = _mm_load_si128((const __m128i *)&xmmword_78760);
  v14 = nullptr;
  *(__m128i *)(v7 + 14) = _mm_load_si128((const __m128i *)&xmmword_78770);
  v15 = 0;
  *(_BYTE *)(v16 + 30) = 0;
  v14 = (__m128i *)qvector_reserve(&v14, 0, 17, 1);
  *(_QWORD *)&v15 = 17;
  *v14 = _mm_load_si128((const __m128i *)&xmmword_78780);
  v14[1].m128i_i8[0] = 0;
  sub_70890(a1, a2, (__int64)&v14, (__int64)&v16, (__int64)&v18);
  v8 = (_QWORD)v17 == 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 160) = &off_8BB08;
  v9 = (__int64 *)(a1 + 168);
  *(_QWORD *)(a1 + 192) = a1 + 16;
  v10 = s1;
  *(_BYTE *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  if ( !v8 )
    v10 = (const char *)v16;
  v11 = s1;
  if ( (_QWORD)v21 )
    v11 = v20;
  sub_FB10(v9, (__int64)"%s/%s", v11, v10);
  v12 = v14;
  *(_QWORD *)a1 = off_8CAE0;
  *(_QWORD *)(a1 + 160) = &unk_8CB30;
  if ( v12 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v12);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  *(_QWORD *)(a1 + 208) = a3;
  *(_QWORD *)(a1 + 216) = a4;
  *(_QWORD *)a1 = off_8C878;
  *(_QWORD *)(a1 + 160) = off_8C8C8;
  return v22 - __readfsqword(0x28u);
}

