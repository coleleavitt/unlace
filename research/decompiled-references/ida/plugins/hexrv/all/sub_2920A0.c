__int64 __fastcall sub_2920A0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD *v4; // r15
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  __m128i v11; // xmm0
  unsigned int v12; // ebp
  __int64 (__fastcall **v14)(); // [rsp+0h] [rbp-A8h] BYREF
  int v15; // [rsp+8h] [rbp-A0h]
  __int64 v16; // [rsp+10h] [rbp-98h]
  __int128 v17; // [rsp+18h] [rbp-90h]
  __int64 v18; // [rsp+28h] [rbp-80h]
  __int128 v19; // [rsp+30h] [rbp-78h]
  __m128i v20; // [rsp+40h] [rbp-68h]
  __int64 v21; // [rsp+50h] [rbp-58h]
  unsigned int v22; // [rsp+58h] [rbp-50h]
  unsigned __int64 v23; // [rsp+68h] [rbp-40h]

  v4 = (_QWORD *)(a3 + 48);
  v7 = *(_QWORD *)(a2 + 216);
  v23 = __readfsqword(0x28u);
  v8 = a4;
  if ( (unsigned __int8)sub_325380(v7, a4 + 48, a3 + 48) )
  {
    v10 = 0;
  }
  else
  {
    v9 = j__qalloc_or_throw();
    *(_QWORD *)v9 = -1;
    v10 = v9;
    *(_DWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 12) = -1;
    *(_QWORD *)(v9 + 48) = 0;
    *(_DWORD *)(v9 + 56) = 0;
    sub_2563F0(v9, v8);
    v8 = v10;
    sub_241F40(v10, *(_QWORD *)(a2 + 216), v4);
  }
  v17 = 0;
  v19 = 0;
  v11 = _mm_loadl_epi64((const __m128i *)(a2 + 216));
  v15 = 6;
  v14 = (__int64 (__fastcall **)())&off_4B3790;
  v16 = 0;
  v18 = 0;
  v21 = v8;
  v22 = 0;
  v20 = _mm_unpacklo_epi64(v11, (__m128i)a3);
  v12 = sub_250E80((__int64 *)&v14, a1, 0);
  if ( v10 )
  {
    sub_250A30(v10);
    clear_tinfo_t();
    j__qfree();
  }
  if ( !v12 )
    v12 = v22;
  v14 = off_4AE778;
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return v12;
}

