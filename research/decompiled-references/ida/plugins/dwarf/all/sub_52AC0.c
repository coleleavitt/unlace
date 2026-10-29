__int64 __fastcall sub_52AC0(__int64 a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // r15
  __int64 v8; // r13
  unsigned int v9; // r13d
  char *v10; // rbx
  char *v11; // rbp
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r14
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 *v20; // [rsp+8h] [rbp-150h]
  char v21[32]; // [rsp+10h] [rbp-148h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+30h] [rbp-128h] BYREF
  int v23; // [rsp+38h] [rbp-120h]
  __int64 v24; // [rsp+40h] [rbp-118h]
  __m128i *v25; // [rsp+48h] [rbp-110h]
  __m128i v26; // [rsp+50h] [rbp-108h] BYREF
  __int64 v27; // [rsp+60h] [rbp-F8h]
  __int64 v28; // [rsp+68h] [rbp-F0h]
  __int128 v29; // [rsp+70h] [rbp-E8h]
  __int64 (__fastcall **v30)(); // [rsp+80h] [rbp-D8h] BYREF
  int v31; // [rsp+90h] [rbp-C8h] BYREF
  void *v32; // [rsp+98h] [rbp-C0h]
  int *v33; // [rsp+A0h] [rbp-B8h]
  int *v34; // [rsp+A8h] [rbp-B0h]
  __int64 v35; // [rsp+B0h] [rbp-A8h]
  __int64 v36; // [rsp+B8h] [rbp-A0h]
  __int128 v37; // [rsp+C0h] [rbp-98h]
  __int64 v38; // [rsp+D0h] [rbp-88h]
  int v39; // [rsp+E0h] [rbp-78h] BYREF
  void *v40; // [rsp+E8h] [rbp-70h]
  int *v41; // [rsp+F0h] [rbp-68h]
  int *v42; // [rsp+F8h] [rbp-60h]
  __int64 v43; // [rsp+100h] [rbp-58h]
  __int64 v44; // [rsp+108h] [rbp-50h]
  unsigned __int64 v45; // [rsp+118h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 144);
  v45 = __readfsqword(0x28u);
  v30 = &off_C7230;
  v31 = 0;
  v33 = &v31;
  v34 = &v31;
  v41 = &v39;
  v42 = &v39;
  v32 = nullptr;
  v35 = 0;
  v36 = 0;
  v38 = v3;
  v39 = 0;
  v40 = nullptr;
  v43 = 0;
  v44 = 0;
  v37 = 0;
  v23 = 0;
  v22 = off_C8170;
  v24 = 0;
  v27 = a3;
  v28 = 0;
  v25 = &v26;
  v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v30, (__m128i)(unsigned __int64)&v22);
  v29 = 0;
  v4 = sub_97BF0(a2);
  if ( (unsigned __int16)v4 <= 2u )
  {
    if ( !(_WORD)v4 )
      goto LABEL_5;
  }
  else
  {
    v5 = (unsigned int)(v4 - 4);
    if ( (unsigned __int16)v5 > 0x3Eu )
      goto LABEL_5;
    v6 = 0x428A0005000ED801LL;
    if ( !_bittest64(&v6, v5) )
      goto LABEL_5;
  }
  sub_4E7A0((__int64)v21, v25->m128i_i64[0], v25->m128i_i64, a2, 0);
  v7 = (__int64 *)v25;
  v8 = v25[2].m128i_i64[0];
  if ( (int)v8 > 0 )
  {
    v20 = &v25[1].m128i_i64[1];
    sub_60EF0(&v25[1].m128i_u64[1], *(_QWORD *)v25[1].m128i_i64[1], v25->m128i_i64[0]);
    v13 = (int)v8 - 1;
    v14 = (unsigned int)(v8 - 1);
    v15 = 8 * v13;
    v16 = 8 * (v13 - v14);
    while ( 1 )
    {
      sub_56050(v20, *(_QWORD *)(v7[3] + v15));
      if ( v16 == v15 )
        break;
      v15 -= 8;
    }
    if ( unk_CC8D0 )
      sub_66090((_DWORD)v25 + 24, v25->m128i_i64[0], (unsigned int)"after_toplevel_save", v17, v18, v19);
    sub_58F00(v20);
  }
LABEL_5:
  if ( (a2[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) == 0 || a2[14].m128i_i64[0] == -1 )
  {
    if ( under_debugger )
      BUG();
    interr(30478);
  }
  v9 = sub_58480(*(_QWORD *)(a1 + 144), &a2[14]);
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  sub_29360((void **)v40);
  v30 = &off_C7230;
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  v10 = (char *)v32;
  if ( v32 )
  {
    do
    {
      v11 = v10;
      sub_29BD0(*((_QWORD **)v10 + 3));
      v10 = *((char **)v10 + 2);
      clear_tinfo_t(v11 + 48);
      operator delete(v11, 0x38u);
    }
    while ( v10 );
  }
  return v9;
}

