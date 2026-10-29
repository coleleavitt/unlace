_BOOL8 __fastcall sub_3BE310(
        __int64 a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        double a14)
{
  char v14; // al
  char v15; // bl
  double v16; // xmm4_8
  double v17; // xmm5_8
  const char *v18; // rbp
  double v19; // xmm4_8
  double v20; // xmm5_8
  int v21; // r13d
  __int64 fchunk; // rax
  __int64 *next_func; // rbx
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rsi
  int v27; // eax
  _BOOL4 v28; // ebx
  unsigned __int64 v30; // [rsp+0h] [rbp-1098h] BYREF
  unsigned __int64 v31; // [rsp+8h] [rbp-1090h] BYREF
  __int64 v32; // [rsp+10h] [rbp-1088h]
  __int128 v33; // [rsp+18h] [rbp-1080h]
  __int64 v34; // [rsp+30h] [rbp-1068h] BYREF
  __int128 v35; // [rsp+38h] [rbp-1060h]
  _BYTE v36[4104]; // [rsp+50h] [rbp-1048h] BYREF
  unsigned __int64 v37; // [rsp+1058h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v30 = -1;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(9, 0, &v30, &v31, &callui, a13);
  v32 = 0;
  v15 = v14;
  v33 = 0;
  if ( !v14 || get_ea_name() <= 0 )
  {
    get_path();
    qbasename();
  }
  set_file_ext();
  v18 = (const char *)sub_388580(
                        1u,
                        (__int64)v36,
                        (__int64)"Please specify the output file name",
                        0.0,
                        a3,
                        *(double *)a4.m128_u64,
                        *(double *)a5.m128_u64,
                        v16,
                        v17,
                        *(double *)a8.m128_u64);
  if ( v18
    && ((v21 = 0, !qfilesize())
     || (v27 = sub_33D270(
                 (__int64)"~A~ppend",
                 (__int64)"~O~verwrite",
                 (__int64)"~C~ancel",
                 0xFFFFFFFF,
                 (__int64)"The file %s already exists. Do you want to overwrite it?",
                 v18),
         v21 = v27 == 1,
         v27 >= 0)) )
  {
    v34 = 0;
    v35 = 0;
    if ( v15 && v30 < v31 )
    {
      do
      {
        fchunk = get_fchunk();
        next_func = (__int64 *)fchunk;
        if ( !fchunk || *(char *)(fchunk + 17) < 0 )
        {
          next_func = (__int64 *)get_next_func();
          if ( !next_func )
            break;
        }
        v24 = v35;
        v25 = *next_func;
        v26 = v34;
        if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v35 + 1) )
        {
          v34 = qvector_reserve((__int64)&v34, v34, v35 + 1, 8);
          v26 = v34;
          v24 = v35;
        }
        *(_QWORD *)(v26 + 8 * v24) = v25;
        *(_QWORD *)&v35 = v35 + 1;
        v30 = next_func[1];
      }
      while ( v30 < v31 );
    }
    if ( !batch )
      v21 |= 8u;
    v28 = sub_3697A0(*(_QWORD *)(a1 + 16), v18, (__int64)&v34, v21 | 0x10, 0.0, a3, a4, a5, v19, v20, a8, a14);
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
  }
  else
  {
    v28 = 1;
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  return v28;
}

