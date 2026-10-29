unsigned __int64 __fastcall sub_1EE830(__int64 a1, __int64 a2, __m128i a3, __m128 a4)
{
  __int64 i; // rbx
  __m128i *v6; // rdx
  __int64 v7; // rcx
  __m128i *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  __int64 *v24; // rdi
  __int64 *v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  __int64 *v32; // [rsp+8h] [rbp-A0h]
  __int64 *v33; // [rsp+8h] [rbp-A0h]
  __int64 v34; // [rsp+8h] [rbp-A0h]
  __int64 v35; // [rsp+10h] [rbp-98h] BYREF
  __int64 v36; // [rsp+18h] [rbp-90h]
  __int64 *v37; // [rsp+20h] [rbp-88h] BYREF
  __m128i v38; // [rsp+28h] [rbp-80h] BYREF
  __int64 v39; // [rsp+40h] [rbp-68h] BYREF
  __int64 v40; // [rsp+48h] [rbp-60h]
  __int64 *v41; // [rsp+50h] [rbp-58h] BYREF
  __m128 v42; // [rsp+58h] [rbp-50h]
  unsigned __int64 v43; // [rsp+68h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  for ( i = *(_QWORD *)(a1 + 48); i; i = *(_QWORD *)(i + 8) )
  {
    sub_11E900((_BYTE *)i, a2);
    sub_127A20((__int64)&v35, a1, i, 4096, v28, v29, *(double *)a3.m128i_i64, a4);
    a4 = 0;
    v39 = 0;
    v40 = 0;
    v41 = nullptr;
    v42 = 0;
    if ( *(_DWORD *)i == 61 )
    {
      v30 = v35;
      a3 = _mm_loadu_si128(&v38);
      v38 = 0;
      v35 = 0;
      v39 = v30;
      v42 = (__m128)a3;
      v40 = v36;
      v36 = 0;
      v41 = v37;
      v37 = nullptr;
    }
    else
    {
      sub_11F2D0((_BYTE *)i, (__int64)&v39, *(_QWORD *)(a1 + 64));
    }
    sub_1ECF20((__int64)&v35, *(_QWORD **)(a1 + 64), v6, v7);
    sub_1ECF20((__int64)&v39, *(_QWORD **)(a1 + 64), v8, v9);
    sub_64640(&v39, &v35, v10, v11, v12, v13);
    sub_317C60((__int64 *)&v41, (__int64)&v37);
    v32 = *(__int64 **)(a2 + 48);
    sub_64280(v32, &v35, *(double *)a3.m128i_i64);
    sub_316CB0(v32 + 2, &v37, v14, v15);
    v33 = *(__int64 **)(a2 + 48);
    sub_64640(v33, &v39, v16, v17, v18, v19);
    sub_317C60(v33 + 2, (__int64)&v41);
    v24 = *(__int64 **)(a2 + 56);
    if ( v24 )
    {
      v34 = *(_QWORD *)(a2 + 56);
      sub_64640(v24, &v35, v20, v21, v22, v23);
      sub_317C60((__int64 *)(v34 + 16), (__int64)&v37);
      v25 = *(__int64 **)(a2 + 56);
      sub_64280(v25, &v39, *(double *)a3.m128i_i64);
      sub_316CB0(v25 + 2, &v41, v26, v27);
    }
    if ( v41 )
    {
      v42.m128_u64[0] = 0;
      qfree((__int64)v41);
    }
    qfree(v39);
    if ( v37 )
    {
      v38.m128i_i64[0] = 0;
      qfree((__int64)v37);
    }
    qfree(v35);
  }
  return v43 - __readfsqword(0x28u);
}

