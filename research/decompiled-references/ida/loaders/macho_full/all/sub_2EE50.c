__int64 __fastcall sub_2EE50(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  const void *v5; // rbx
  size_t v7; // rbp
  char *v8; // rdi
  __int64 v9; // r14
  char *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 (*v14)(); // rcx
  __int64 result; // rax
  __int64 v16; // rax
  unsigned int v17; // [rsp+Ch] [rbp-27Ch]
  char *s1; // [rsp+10h] [rbp-278h]
  __m128i v19; // [rsp+30h] [rbp-258h] BYREF
  __int64 v20; // [rsp+40h] [rbp-248h]
  __int16 v21; // [rsp+48h] [rbp-240h]
  _QWORD v22[2]; // [rsp+50h] [rbp-238h] BYREF
  __m128i si128; // [rsp+60h] [rbp-228h]
  __int64 v24; // [rsp+70h] [rbp-218h]
  int v25; // [rsp+78h] [rbp-210h]
  char v26; // [rsp+7Ch] [rbp-20Ch]
  __int64 v27; // [rsp+80h] [rbp-208h]
  char v28; // [rsp+88h] [rbp-200h]
  __int64 v29; // [rsp+98h] [rbp-1F0h]
  __int128 v30; // [rsp+A0h] [rbp-1E8h]
  __int64 v31; // [rsp+B0h] [rbp-1D8h]
  __int64 v32; // [rsp+B8h] [rbp-1D0h]
  char v33; // [rsp+C0h] [rbp-1C8h]
  __m128i v34; // [rsp+C8h] [rbp-1C0h]
  __int64 v35; // [rsp+D8h] [rbp-1B0h]
  __int128 v36; // [rsp+E0h] [rbp-1A8h]
  __int16 v37; // [rsp+F0h] [rbp-198h]
  __int64 v38; // [rsp+118h] [rbp-170h]
  __int128 v39; // [rsp+120h] [rbp-168h]
  __int64 v40; // [rsp+130h] [rbp-158h]
  __int128 v41; // [rsp+138h] [rbp-150h]
  __int64 v42; // [rsp+148h] [rbp-140h]
  __int128 v43; // [rsp+150h] [rbp-138h]
  __int64 v44; // [rsp+160h] [rbp-128h]
  __int128 v45; // [rsp+168h] [rbp-120h]
  __int64 v46; // [rsp+178h] [rbp-110h]
  __int128 v47; // [rsp+180h] [rbp-108h]
  __int64 v48; // [rsp+190h] [rbp-F8h]
  __int128 v49; // [rsp+198h] [rbp-F0h]
  __int64 v50; // [rsp+1A8h] [rbp-E0h]
  __int128 v51; // [rsp+1B0h] [rbp-D8h]
  __int64 v52; // [rsp+1C0h] [rbp-C8h]
  __int128 v53; // [rsp+1C8h] [rbp-C0h]
  __int64 v54; // [rsp+1D8h] [rbp-B0h]
  __int128 v55; // [rsp+1E0h] [rbp-A8h]
  __int64 v56; // [rsp+1F0h] [rbp-98h]
  __int128 v57; // [rsp+1F8h] [rbp-90h]
  __int16 v58; // [rsp+208h] [rbp-80h]
  char v59; // [rsp+20Ah] [rbp-7Eh]
  int v60; // [rsp+20Ch] [rbp-7Ch]
  __int128 v61; // [rsp+210h] [rbp-78h]
  __int64 v62; // [rsp+220h] [rbp-68h]
  __int64 v63; // [rsp+228h] [rbp-60h]
  int v64; // [rsp+230h] [rbp-58h]
  __int64 v65; // [rsp+238h] [rbp-50h]
  __int128 v66; // [rsp+240h] [rbp-48h]
  __int64 v67; // [rsp+250h] [rbp-38h]
  unsigned __int64 v68; // [rsp+258h] [rbp-30h]

  v68 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 25) )
    return 0;
  v4 = *(unsigned int *)(a2 + 24);
  v5 = (const void *)(v4 + a3);
  if ( (v4 + a3 >= a4) | __CFADD__(v4, a3) || v4 <= 0x1F )
    return 0;
  s1 = nullptr;
  v7 = a4 - (_QWORD)v5;
  v8 = nullptr;
  v9 = a4 - (_QWORD)v5 + 1;
  if ( a4 - (_QWORD)v5 != -1 )
  {
    s1 = (char *)qvector_reserve();
    v8 = s1;
  }
  memmove(v8, v5, v7);
  s1[v7] = 0;
  v10 = s1;
  if ( v9 && !strcmp(s1, "com.apple.kernel") )
  {
    v11 = sub_29210(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 16));
    if ( v11 )
    {
      v12 = *(_QWORD *)(a2 + 16);
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      v22[0] = &off_62AA0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_574B0);
      v34 = _mm_load_si128((const __m128i *)&xmmword_574C0);
      v22[1] = v13;
      v24 = -1;
      v25 = 8;
      v26 = 1;
      v27 = v11;
      v28 = 0;
      v29 = 0;
      v31 = v12;
      v32 = -1;
      v33 = 0;
      v35 = 0;
      v37 = 0;
      v38 = 0;
      v40 = 0;
      v42 = 0;
      v44 = 0;
      v46 = 0;
      v30 = 0;
      v36 = 0;
      v39 = 0;
      v41 = 0;
      v43 = 0;
      v45 = 0;
      v47 = 0;
      v48 = 0;
      v50 = 0;
      v52 = 0;
      v54 = 0;
      v56 = 0;
      v58 = 0;
      v59 = 0;
      v60 = 0;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v65 = 0;
      v67 = 0;
      v49 = 0;
      v51 = 0;
      v53 = 0;
      v55 = 0;
      v57 = 0;
      v61 = -1;
      v66 = 0;
      if ( sub_25BB0((__int64)v22) && sub_25EF0((__int64)v22, 0, 0, 0) )
      {
        v16 = *(_QWORD *)(a1 + 16);
        v21 = 0;
        v20 = v16;
        v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_633A8, (__m128i)(unsigned __int64)v22);
        sub_27280((__int64)v22, &v19, nullptr, v14);
        *(_BYTE *)(a1 + 24) |= v21;
      }
      else
      {
        sub_112F0((__int64)"ERROR: com.apple.kernel fileset entry invalid\n");
      }
      sub_162E0((__int64)v22);
      close_linput();
    }
    else
    {
      sub_112F0((__int64)"ERROR: failed to create macho input for com.apple.kernel fileset entry\n");
    }
    v10 = s1;
    result = 1;
  }
  else
  {
    result = 0;
  }
  if ( v10 )
  {
    v17 = result;
    qfree();
    return v17;
  }
  return result;
}

