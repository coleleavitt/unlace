__int64 __fastcall sub_4E6C0(__int64 a1, __int64 a2, __int64 *a3, const void *a4)
{
  __int64 *v6; // rax
  unsigned int matched; // ebx
  __m128i v8; // xmm0
  __int64 v9; // rax
  _BYTE v11[360]; // [rsp+10h] [rbp-3A8h] BYREF
  __int64 v12; // [rsp+178h] [rbp-240h] BYREF
  __m128i v13; // [rsp+190h] [rbp-228h] BYREF
  __int64 v14; // [rsp+1A0h] [rbp-218h]
  int v15; // [rsp+210h] [rbp-1A8h]
  char v16; // [rsp+319h] [rbp-9Fh]
  void *v17; // [rsp+328h] [rbp-90h]
  __int64 v18; // [rsp+330h] [rbp-88h]
  __int128 v19; // [rsp+338h] [rbp-80h]
  __int64 v20; // [rsp+348h] [rbp-70h]
  __int128 v21; // [rsp+350h] [rbp-68h]
  const __m128i *v22; // [rsp+360h] [rbp-58h] BYREF
  __int128 v23; // [rsp+368h] [rbp-50h]
  __int64 v24; // [rsp+378h] [rbp-40h]
  __int64 v25; // [rsp+380h] [rbp-38h]
  unsigned __int64 v26; // [rsp+388h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v6 = (__int64 *)&v11[40];
  *(_QWORD *)&v11[24] = 0;
  *(_QWORD *)&v11[32] = 0;
  memset(v11, 255, 24);
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( v6 != &v12 );
  v12 = 0;
  v15 = -1;
  v16 = 0;
  v17 = &unk_95CC0;
  v18 = 0;
  v20 = 0;
  v22 = 0;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  sub_47780(&v22, (const __m128i *)((char *)&dword_0 + 2));
  v24 = a1;
  qmemcpy(v11, a4, sizeof(v11));
  v15 = 0;
  v25 = -1;
  matched = match_jpt();
  if ( (_BYTE)matched )
  {
    v8 = _mm_load_si128(&v13);
    *(_QWORD *)(a2 + 24) = v14;
    v9 = v25;
    *(__m128i *)(a2 + 8) = v8;
    *a3 = v9;
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  return matched;
}
