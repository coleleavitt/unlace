_BOOL8 __fastcall sub_3B8290(
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
        __int64 a13)
{
  char v13; // al
  char v14; // bl
  const char *v15; // rbp
  double v16; // xmm4_8
  double v17; // xmm5_8
  int v18; // r13d
  __int64 fchunk; // rax
  __int64 *next_func; // rbx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rsi
  int v24; // eax
  _BOOL4 v25; // ebx
  unsigned __int64 v27; // [rsp+0h] [rbp-1098h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-1090h] BYREF
  __int64 v29; // [rsp+10h] [rbp-1088h]
  __int128 v30; // [rsp+18h] [rbp-1080h]
  __int64 v31; // [rsp+30h] [rbp-1068h] BYREF
  __int128 v32; // [rsp+38h] [rbp-1060h]
  _BYTE v33[4104]; // [rsp+50h] [rbp-1048h] BYREF
  unsigned __int64 v34; // [rsp+1058h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v27 = -1;
  v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(9, 0, &v27, &v28, &callui, a13);
  v29 = 0;
  v14 = v13;
  v30 = 0;
  if ( !v13 || get_ea_name() <= 0 )
  {
    get_path();
    qbasename();
  }
  set_file_ext();
  v15 = (const char *)sub_382500(1u, (__int64)v33, (__int64)"Please specify the output file name");
  if ( v15
    && ((v18 = 0, !qfilesize())
     || (v24 = sub_3371F0(
                 (__int64)"~A~ppend",
                 (__int64)"~O~verwrite",
                 (__int64)"~C~ancel",
                 0xFFFFFFFF,
                 (__int64)"The file %s already exists. Do you want to overwrite it?",
                 v15),
         v18 = v24 == 1,
         v24 >= 0)) )
  {
    v31 = 0;
    v32 = 0;
    if ( v14 && v27 < v28 )
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
        v21 = v32;
        v22 = *next_func;
        v23 = v31;
        if ( *((_QWORD *)&v32 + 1) < (unsigned __int64)(v32 + 1) )
        {
          v31 = qvector_reserve();
          v23 = v31;
          v21 = v32;
        }
        *(_QWORD *)(v23 + 8 * v21) = v22;
        *(_QWORD *)&v32 = v32 + 1;
        v27 = next_func[1];
      }
      while ( v27 < v28 );
    }
    if ( !batch )
      v18 |= 8u;
    v25 = sub_363720(*(_QWORD *)(a1 + 16), v15, (__int64)&v31, v18 | 0x10, 0.0, a3, a4, a5, v16, v17, a8);
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree();
    }
  }
  else
  {
    v25 = 1;
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  return v25;
}

