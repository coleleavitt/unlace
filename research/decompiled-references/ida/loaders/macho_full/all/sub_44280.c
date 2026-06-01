unsigned __int64 __fastcall sub_44280(const __m128i *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // rsi
  size_t v13; // rax
  __int64 v14; // r11
  unsigned __int64 v15; // rdx
  __int64 v16; // r11
  __int64 v17; // rax
  _QWORD *v18; // rcx
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // r14
  _QWORD *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rbx
  __int64 v27; // rax
  _QWORD *v28; // r14
  __int64 v29; // rdi
  __int64 v31; // rbx
  __m128i v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // [rsp+18h] [rbp-238h]
  __int64 v35; // [rsp+18h] [rbp-238h]
  __int64 v36; // [rsp+20h] [rbp-230h]
  __int64 v37; // [rsp+20h] [rbp-230h]
  char *v38; // [rsp+28h] [rbp-228h]
  __int64 v39; // [rsp+28h] [rbp-228h]
  __m128i v40; // [rsp+30h] [rbp-220h] BYREF
  unsigned int *v41; // [rsp+40h] [rbp-210h]
  _QWORD *v42; // [rsp+48h] [rbp-208h]
  unsigned int v43; // [rsp+58h] [rbp-1F8h] BYREF
  unsigned int v44; // [rsp+5Ch] [rbp-1F4h] BYREF
  __int64 v45; // [rsp+60h] [rbp-1F0h] BYREF
  __int128 v46; // [rsp+68h] [rbp-1E8h]
  __int64 v47; // [rsp+80h] [rbp-1D0h] BYREF
  __m128i v48; // [rsp+88h] [rbp-1C8h] BYREF
  __m128i v49; // [rsp+A0h] [rbp-1B0h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-1A0h]
  __int64 v51; // [rsp+B8h] [rbp-198h]
  __int64 v52; // [rsp+C0h] [rbp-190h]
  __int128 v53; // [rsp+C8h] [rbp-188h]
  __int128 v54; // [rsp+D8h] [rbp-178h]
  __int128 v55; // [rsp+E8h] [rbp-168h]
  __int128 v56; // [rsp+F8h] [rbp-158h]
  __int128 v57; // [rsp+108h] [rbp-148h]
  __int128 v58; // [rsp+118h] [rbp-138h]
  __int128 v59; // [rsp+128h] [rbp-128h]
  __int64 v60; // [rsp+138h] [rbp-118h]
  __int128 v61; // [rsp+140h] [rbp-110h]
  __int64 v62; // [rsp+150h] [rbp-100h]
  __int128 v63; // [rsp+158h] [rbp-F8h]
  __int64 v64; // [rsp+168h] [rbp-E8h]
  int v65; // [rsp+170h] [rbp-E0h]
  __int64 v66; // [rsp+178h] [rbp-D8h]
  __int64 v67; // [rsp+180h] [rbp-D0h]
  int v68; // [rsp+188h] [rbp-C8h]
  __int128 v69; // [rsp+190h] [rbp-C0h]
  __int64 v70; // [rsp+1A0h] [rbp-B0h]
  __int128 v71; // [rsp+1A8h] [rbp-A8h]
  __int64 v72; // [rsp+1B8h] [rbp-98h]
  __int128 v73; // [rsp+1C0h] [rbp-90h]
  __int64 v74; // [rsp+1D0h] [rbp-80h]
  __int128 v75; // [rsp+1D8h] [rbp-78h]
  __int128 v76; // [rsp+1E8h] [rbp-68h]
  __int128 v77; // [rsp+1F8h] [rbp-58h]
  __int64 v78; // [rsp+208h] [rbp-48h]
  unsigned __int64 v79; // [rsp+218h] [rbp-38h]

  v3 = a2[94];
  v42 = a2;
  v79 = __readfsqword(0x28u);
  v46 = 0;
  v45 = 0;
  if ( v3 && a2[103] )
  {
    v45 = qvector_reserve();
    v5 = v45 + 40 * v46;
    *(_QWORD *)v5 = 0;
    *(_QWORD *)(v5 + 24) = 0;
    *(_OWORD *)(v5 + 8) = 0;
    *(_BYTE *)(v5 + 32) = 0;
    v6 = a2[103];
    *(_QWORD *)&v46 = v46 + 1;
    *(_QWORD *)(v5 + 24) = v6;
    if ( *(_QWORD *)(a3 + 40) )
    {
      v7 = *(_QWORD *)(a3 + 24);
      v8 = a3 + 8;
      v41 = &v44;
      for ( v40.m128i_i64[0] = (__int64)&v43; v8 != v7; v7 = std::_Rb_tree_increment() )
      {
        if ( (unsigned __int8)sub_1C1C0(v42, *(_DWORD *)(v7 + 32), v40.m128i_i64[0], v41) )
        {
          sub_33300(&v47, v3, v42[101], v43, v44, *((_BYTE *)v42 + 773), *((_BYTE *)v42 + 772));
          v9 = v47;
          v10 = 16 * v48.m128i_i64[0];
          v11 = (16 * v48.m128i_i64[0]) >> 4;
          if ( v11 )
          {
            v12 = *(_QWORD *)v5;
            v13 = 0;
            v14 = *(_QWORD *)(v5 + 8);
            v15 = v11 + v14;
            v16 = 16 * v14;
            if ( *(_QWORD *)(v5 + 16) < v15 )
            {
              v35 = (16 * v48.m128i_i64[0]) >> 4;
              v37 = 16 * v48.m128i_i64[0];
              v39 = v16;
              v33 = qvector_reserve();
              *(_QWORD *)v5 = v33;
              v12 = v33;
              v16 = v39;
              v11 = v35;
              v10 = v37;
              v13 = 16LL * *(_QWORD *)(v5 + 8) - v39;
            }
            v34 = v11;
            v36 = v10;
            v38 = (char *)(v16 + v12);
            memmove(&v38[v10], v38, v13);
            v17 = 0;
            v18 = v42;
            if ( v36 )
            {
              do
              {
                *(__m128i *)&v38[v17] = _mm_loadu_si128((const __m128i *)(v9 + v17));
                v17 += 16;
              }
              while ( v36 != v17 );
              v42 = v18;
            }
            *(_QWORD *)(v5 + 8) += v34;
            v9 = v47;
          }
          if ( v9 )
          {
            v48.m128i_i64[0] = 0;
            qfree();
          }
        }
      }
    }
    else
    {
      sub_33300(&v47, v3, v42[101], 0, v42[102], *((_BYTE *)v42 + 773), *((_BYTE *)v42 + 772));
      v31 = v47;
      v32 = _mm_loadu_si128(&v48);
      v48 = 0;
      v47 = 0;
      if ( *(_QWORD *)v5 )
      {
        *(_QWORD *)(v5 + 8) = 0;
        v40 = v32;
        qfree();
        v32 = _mm_load_si128(&v40);
      }
      *(_QWORD *)v5 = v31;
      *(__m128i *)(v5 + 8) = v32;
      if ( v47 )
      {
        v48.m128i_i64[0] = 0;
        qfree();
      }
    }
    sub_19440((__int64)"Applying local symbols...");
    v50 = 0;
    v51 = 0;
    v19 = _mm_loadu_si128(a1);
    v52 = 0;
    v60 = 0;
    v49 = v19;
    v58 = 0;
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v62 = 0;
    v64 = 0;
    v65 = -1;
    v67 = -1;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v78 = 0;
    v69 = -1;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v76 = 0;
    v77 = 0;
    v66 = v42[87];
    sub_42E80((__int64)a1, (__int64)&v49, &v45, 1, 1);
    v20 = v74;
    if ( v74 )
    {
      if ( (_QWORD)v75 )
      {
        v21 = 0;
        v22 = v75;
        do
        {
          v23 = (_QWORD *)(v20 + 24 * v21);
          if ( *v23 )
          {
            v23[1] = 0;
            qfree();
            v20 = v74;
          }
          ++v21;
        }
        while ( v22 != v21 );
      }
      *(_QWORD *)&v75 = 0;
      qfree();
    }
    if ( v72 )
    {
      *(_QWORD *)&v73 = 0;
      qfree();
    }
    if ( v70 )
    {
      *(_QWORD *)&v71 = 0;
      qfree();
    }
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree();
    }
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree();
    }
    if ( *((_QWORD *)&v58 + 1) )
    {
      *(_QWORD *)&v59 = 0;
      qfree();
    }
    v24 = v45;
    if ( v45 )
    {
      v25 = v46;
      if ( (_QWORD)v46 )
      {
        v26 = 0;
        do
        {
          v27 = v24 + 40 * v26;
          v28 = (_QWORD *)v27;
          if ( *(_BYTE *)(v27 + 32) )
          {
            v29 = *(_QWORD *)(v27 + 24);
            if ( v29 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
          }
          if ( *v28 )
          {
            v28[1] = 0;
            qfree();
          }
          ++v26;
          v24 = v45;
        }
        while ( v25 != v26 );
      }
      *(_QWORD *)&v46 = 0;
      qfree();
    }
  }
  return v79 - __readfsqword(0x28u);
}

