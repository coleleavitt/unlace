__int64 __fastcall sub_41FC0(__int64 a1, __int64 a2, __int64 (*a3)(), bool *a4, _BYTE *a5)
{
  int v6; // eax
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int *v15; // rax
  __m128i v16; // xmm1
  __m128 v17; // xmm0
  __int64 (*v18)(); // rdx
  __m128i v19; // xmm0
  __int64 (*v20)(); // rcx
  int v21; // ecx
  char v22; // al
  _BYTE *v23; // rsi
  __int64 (__fastcall **v24)(); // rdi
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r12
  __int64 v32; // rbx
  _QWORD *v33; // rax
  __m128i v35; // [rsp+0h] [rbp-150h] BYREF
  int *v36; // [rsp+10h] [rbp-140h]
  _BYTE *v37; // [rsp+18h] [rbp-138h]
  __int64 *v38; // [rsp+20h] [rbp-130h] BYREF
  __int64 (*v39)(); // [rsp+28h] [rbp-128h]
  int v40; // [rsp+34h] [rbp-11Ch] BYREF
  __int64 v41; // [rsp+38h] [rbp-118h] BYREF
  __int64 v42; // [rsp+40h] [rbp-110h] BYREF
  __int128 v43; // [rsp+48h] [rbp-108h]
  __int64 v44; // [rsp+60h] [rbp-F0h] BYREF
  __int128 v45; // [rsp+68h] [rbp-E8h]
  __int64 (__fastcall **v46)(); // [rsp+80h] [rbp-D0h] BYREF
  _BYTE v47[24]; // [rsp+88h] [rbp-C8h] BYREF
  __int64 (*v48)(); // [rsp+A0h] [rbp-B0h]
  int *v49; // [rsp+A8h] [rbp-A8h]
  __int64 (__fastcall **v50)(); // [rsp+B0h] [rbp-A0h] BYREF
  __int64 (__fastcall **v51)(); // [rsp+B8h] [rbp-98h]
  __m128i v52; // [rsp+C0h] [rbp-90h]
  __int64 v53; // [rsp+D0h] [rbp-80h]
  __int64 v54; // [rsp+D8h] [rbp-78h]
  __m128 v55; // [rsp+E0h] [rbp-70h]
  __int64 (*v56)(); // [rsp+F0h] [rbp-60h]
  int *v57; // [rsp+F8h] [rbp-58h]
  int *v58; // [rsp+100h] [rbp-50h]
  char v59; // [rsp+108h] [rbp-48h]
  unsigned __int64 v60; // [rsp+118h] [rbp-38h]

  v39 = a3;
  v37 = a5;
  v60 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a2 + 312);
  v43 = 0;
  v42 = 0;
  v7 = v6 + 1;
  v44 = 0;
  v45 = 0;
  if ( v6 + 1 < 256 )
    v7 = 256;
  v8 = qvector_reserve();
  v9 = v45;
  v44 = v8;
  if ( (unsigned __int64)v45 < v7 )
  {
    v10 = 24 * v45;
    v11 = 24 * v45 + v8;
    *(_QWORD *)v11 = 0;
    *(_OWORD *)(v11 + 8) = 0;
    v12 = v9 + 1;
    if ( v9 + 1 < (unsigned __int64)v7 )
    {
      v13 = v10 + 24;
      do
      {
        ++v12;
        v14 = v13 + v44;
        v13 += 24;
        *(_QWORD *)v14 = 0;
        *(_OWORD *)(v14 + 8) = 0;
      }
      while ( v7 != v12 );
    }
  }
  *(_QWORD *)&v45 = v7;
  v15 = *(int **)(a2 + 312);
  v40 = 0;
  v36 = v15;
  sub_1CE50((__int64 *)&v46, a2);
  v38 = &v42;
  v16 = _mm_loadu_si128((const __m128i *)v47);
  v50 = &off_64460;
  v51 = v46;
  v17 = _mm_loadh_ps((const double *)&v38);
  v57 = v36;
  v53 = a1;
  v54 = a2;
  v56 = v39;
  v58 = &v40;
  v36 = &v40;
  v59 = 0;
  v52 = v16;
  v55 = v17;
  v35 = (__m128i)v17;
  sub_38280((__int64)v39, (__int64)&v50, (__int64)v46, v39);
  v18 = *(__int64 (**)())(a2 + 312);
  v19 = _mm_load_si128(&v35);
  v46 = off_64488;
  v48 = v18;
  *(_DWORD *)v47 = 1;
  v49 = &v40;
  *(__m128i *)&v47[8] = v19;
  sub_31B00((__int64)v39, &v46, v18, v20);
  v41 = -1;
  netnode_check();
  v21 = 4;
  if ( *((_BYTE *)v39 + 161) )
    v21 = 8;
  sub_418A0(a1, a2, v40, v21, &v44, v38, (__int64)&v41, "UNDEF");
  v22 = v59;
  v23 = v37;
  v24 = v51;
  *a4 = (_QWORD)v43 != 0;
  *v23 = v22;
  v25 = v41;
  v50 = off_62A78;
  if ( v24 )
  {
    v52.m128i_i64[0] = 0;
    qfree();
  }
  v26 = v44;
  if ( v44 )
  {
    v27 = v45;
    if ( (_QWORD)v45 )
    {
      v28 = 0;
      do
      {
        v29 = (_QWORD *)(v26 + 24 * v28);
        if ( *v29 )
        {
          v29[1] = 0;
          qfree();
          v26 = v44;
        }
        ++v28;
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v45 = 0;
    qfree();
  }
  v30 = v42;
  if ( v42 )
  {
    v31 = v43;
    if ( (_QWORD)v43 )
    {
      v32 = 0;
      do
      {
        v33 = (_QWORD *)(v30 + 24 * v32);
        if ( *v33 )
        {
          v33[1] = 0;
          qfree();
          v30 = v42;
        }
        ++v32;
      }
      while ( v31 != v32 );
    }
    *(_QWORD *)&v43 = 0;
    qfree();
  }
  return v25;
}

