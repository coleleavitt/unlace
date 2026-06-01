__int64 __fastcall sub_31410(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  const __m128i *v13; // r12
  unsigned int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // eax
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  void *v32; // [rsp+10h] [rbp-108h]
  __int64 v33; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v34; // [rsp+28h] [rbp-F0h]
  __int64 v35; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v36; // [rsp+48h] [rbp-D0h]
  __int64 (__fastcall **v37)(); // [rsp+60h] [rbp-B8h] BYREF
  int v38; // [rsp+68h] [rbp-B0h]
  __int64 v39; // [rsp+70h] [rbp-A8h]
  _QWORD *v40; // [rsp+78h] [rbp-A0h]
  _QWORD v41[3]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v42; // [rsp+98h] [rbp-80h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-78h]
  __int64 v44; // [rsp+B0h] [rbp-68h]
  __int64 v45; // [rsp+B8h] [rbp-60h]
  unsigned __int64 v46; // [rsp+D8h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( sub_97AE0(a4) == -1 )
  {
    if ( (debug & 0x400000) != 0 )
      goto LABEL_32;
    while ( (a4[28] & 0x7FFFFFFFFFFFFFFFLL) == 0 || a4[28] == -1 )
    {
      if ( under_debugger )
        BUG();
      interr(30478);
LABEL_32:
      v27 = sub_81C40(a4);
      sub_88B80((unsigned int)"enumeration with no byte size @ %s. Turning into 'int'.\n", v27, v28, v29, v30, v31);
    }
    v25 = sub_5C620(
            *a3,
            0,
            *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a4 + 16LL) + 144LL) + 8LL) + 38LL),
            1,
            a4 + 28);
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 3;
    *(_QWORD *)(a1 + 8) = v25;
    *(_QWORD *)(a1 + 16) = v26;
  }
  else
  {
    v11 = sub_59FF0(a3 + 3, a4, 1);
    v12 = *(_QWORD *)(a5 + 8);
    v13 = (const __m128i *)v11;
    if ( v12 )
    {
      v32 = (void *)qalloc_or_throw(16 * v12);
      memcpy(v32, *(const void **)a5, 16 * v12);
      v24 = v13[18].m128i_i64[0];
      if ( v24 )
      {
        v13[18].m128i_i64[1] = 0;
        qfree(v24);
      }
      v13[18].m128i_i64[0] = (__int64)v32;
      *(const __m128i *)((char *)&v13[18] + 8) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
    }
    v38 = 0;
    v39 = 0;
    v37 = off_C8098;
    v40 = a4;
    v14 = sub_97A10(a4);
    sub_2EC90((__int64)v41, (__int64)v40, v14);
    sub_A1190(a4, &v37, 0);
    if ( *(_QWORD *)(a6 + 8) <= 1u )
    {
      v33 = 0;
      v35 = 0;
      v34 = 0;
      v36 = 0;
      sub_9D820(&v33, a4, &qword_CB3F0, &v35);
      sub_31170(a2, v13, &v33);
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree(v35);
      }
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v33);
      }
    }
    else
    {
      sub_57430(v13, a6);
    }
    create_tinfo(&v13[24], 45, 45, &v42);
    v15 = v44;
    v13[17].m128i_i32[3] |= 4u;
    *(_OWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)a1 = 1;
    *(_QWORD *)(a1 + 8) = v13;
    v37 = off_C8098;
    if ( v15 )
    {
      v45 = 0;
      qfree(v15);
    }
    v16 = v42;
    if ( v42 )
    {
      v17 = v43;
      if ( v43 )
      {
        v18 = 0;
        v19 = 0;
        do
        {
          v20 = (__int64 *)(v16 + v18);
          v21 = *(_QWORD *)(v16 + v18 + 24);
          if ( v21 )
          {
            v20[4] = 0;
            qfree(v21);
          }
          v22 = *v20;
          if ( *v20 )
          {
            v20[1] = 0;
            qfree(v22);
          }
          ++v19;
          v16 = v42;
          v18 += 56;
        }
        while ( v17 != v19 );
      }
      v43 = 0;
      qfree(v16);
    }
    if ( v41[0] )
    {
      v41[1] = 0;
      qfree(v41[0]);
    }
  }
  return a1;
}

