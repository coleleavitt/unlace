__int64 __fastcall sub_296CA0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, double a5)
{
  _QWORD *v5; // r15
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  unsigned int v18; // ebp
  __int64 (__fastcall **v20)(); // [rsp+0h] [rbp-A8h] BYREF
  int v21; // [rsp+8h] [rbp-A0h]
  __int64 v22; // [rsp+10h] [rbp-98h]
  __int128 v23; // [rsp+18h] [rbp-90h]
  __int64 v24; // [rsp+28h] [rbp-80h]
  __int128 v25; // [rsp+30h] [rbp-78h]
  __m128i v26; // [rsp+40h] [rbp-68h]
  __int64 v27; // [rsp+50h] [rbp-58h]
  unsigned int v28; // [rsp+58h] [rbp-50h]
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]

  v5 = (_QWORD *)(a3 + 48);
  v9 = a4 + 48;
  v10 = *(_QWORD *)(a2 + 216);
  v29 = __readfsqword(0x28u);
  v11 = a4;
  if ( (unsigned __int8)sub_32A510(v10) )
  {
    v15 = 0;
  }
  else
  {
    v14 = j__qalloc_or_throw(64, v9, v12, v13);
    *(_QWORD *)v14 = -1;
    v15 = v14;
    *(_DWORD *)(v14 + 8) = 0;
    *(_QWORD *)(v14 + 12) = -1;
    *(_QWORD *)(v14 + 48) = 0;
    *(_DWORD *)(v14 + 56) = 0;
    sub_25AFF0(v14, v11, a5);
    v11 = v15;
    sub_246B40(v15, *(_QWORD *)(a2 + 216), v5, a5);
  }
  v23 = 0;
  v25 = 0;
  v16 = _mm_loadl_epi64((const __m128i *)(a2 + 216));
  v21 = 6;
  v17 = _mm_unpacklo_epi64(v16, (__m128i)a3);
  v20 = (__int64 (__fastcall **)())&off_4E0D50;
  v22 = 0;
  v24 = 0;
  v27 = v11;
  v28 = 0;
  v26 = v17;
  v18 = sub_255A80((__int64 *)&v20, a1, 0, *(double *)v17.m128i_i64);
  if ( v15 )
  {
    sub_255630(v15, *(double *)v17.m128i_i64);
    clear_tinfo_t();
    j__qfree(v15);
  }
  if ( !v18 )
    v18 = v28;
  v20 = off_4DBCF8;
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  return v18;
}

