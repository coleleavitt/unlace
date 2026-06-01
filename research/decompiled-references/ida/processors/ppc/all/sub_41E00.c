__int64 __fastcall sub_41E00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 (__fastcall *a6)(_QWORD, _QWORD),
        __int64 a7)
{
  unsigned __int64 *v12; // rax
  __int64 v13; // rdx
  bool v14; // cl
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 word; // rax
  __int64 dtype_size; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  const char *v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  const char *v29; // rdi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  const char *v36; // rdi
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r15
  const char *v40; // rdi
  __int128 v41; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v42; // [rsp+10h] [rbp-198h]
  __int64 v43; // [rsp+18h] [rbp-190h]
  __int64 v44; // [rsp+20h] [rbp-188h]
  _BYTE v45[320]; // [rsp+28h] [rbp-180h] BYREF
  unsigned __int64 v46; // [rsp+168h] [rbp-40h] BYREF

  v46 = __readfsqword(0x28u);
  if ( a4 > 4 )
    return 0;
  v41 = -1;
  v12 = (unsigned __int64 *)v45;
  v42 = -1;
  v43 = 0;
  v44 = 0;
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 5;
    *((_WORD *)v12 - 19) = 0;
    *((_WORD *)v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *(v12 - 2) = 0;
  }
  while ( v12 != &v46 );
  if ( !(unsigned int)decode_insn(&v41, a3, a3, 0.0) )
    return 0;
  v13 = *(_QWORD *)(a1 + 16);
  v14 = 0;
  v15 = *(unsigned int *)(v13 + 104);
  if ( (unsigned __int16)v43 >= (int)v15 && (unsigned __int16)v43 < *(int *)(v13 + 108) )
    v14 = (dword_7A240[a4] & *(_DWORD *)(*(_QWORD *)(v13 + 112) + 16LL * ((unsigned __int16)v43 - (int)v15) + 8)) != 0;
  *(_BYTE *)a2 = v14;
  if ( v45[40 * a4 + 1] > 7u )
    return 0;
  switch ( v45[40 * a4 + 1] )
  {
    case 0:
    case 6:
      return 0;
    case 1:
      v15 = *(unsigned __int16 *)&v45[40 * a4 + 6];
      v23 = sub_41C60(a1, v15);
      if ( v23 )
      {
        v15 = a7;
        v26 = ((__int64 (__fastcall *)(const char *, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))a6)(
                v23,
                a7,
                v21,
                v22,
                v24,
                v25,
                v41,
                *((_QWORD *)&v41 + 1),
                v42);
        v16 = *(_QWORD *)(a2 + 8);
        word = *(_QWORD *)(v26 + 8);
      }
      else
      {
        v16 = *(_QWORD *)(a2 + 8);
        word = 0;
      }
      break;
    case 2:
    case 7:
      v16 = *(_QWORD *)&v45[40 * a4 + 16];
      word = 0;
      *(_QWORD *)(a2 + 8) = v16;
      break;
    case 3:
      v36 = sub_41C60(a1, *(unsigned __int16 *)&v45[40 * a4 + 6]);
      if ( v36 )
        v39 = *(_QWORD *)(((__int64 (__fastcall *)(const char *, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))a6)(
                            v36,
                            a7,
                            v34,
                            v35,
                            v37,
                            v38,
                            v41,
                            *((_QWORD *)&v41 + 1),
                            v42)
                        + 8);
      else
        v39 = 0;
      v15 = (unsigned int)(char)v45[40 * a4 + 32];
      v40 = sub_41C60(a1, v15);
      if ( v40 )
      {
        v15 = a7;
        v39 += *(_QWORD *)(a6(v40, a7) + 8);
      }
      *(_QWORD *)(a2 + 8) = v39;
      word = 0;
      v16 = v39 & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      *(_QWORD *)(a2 + 8) = v16;
      break;
    case 4:
      v15 = *(unsigned __int16 *)&v45[40 * a4 + 6];
      v29 = sub_41C60(a1, v15);
      if ( v29 )
      {
        v15 = a7;
        v32 = *(_QWORD *)(((__int64 (__fastcall *)(const char *, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))a6)(
                            v29,
                            a7,
                            v27,
                            v28,
                            v30,
                            v31,
                            v41,
                            *((_QWORD *)&v41 + 1),
                            v42)
                        + 8);
      }
      else
      {
        v32 = 0;
      }
      v33 = *(_QWORD *)&v45[40 * a4 + 16] + v32;
      *(_QWORD *)(a2 + 8) = v33;
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v33;
      word = 0;
      *(_QWORD *)(a2 + 8) = v16;
      break;
    case 5:
      v16 = *(_QWORD *)(a2 + 8);
      word = *(_QWORD *)&v45[40 * a4 + 8];
      break;
  }
  if ( v16 != -1 )
  {
    dtype_size = get_dtype_size((unsigned __int8)v45[40 * a4 + 5]);
    v20 = *(_QWORD *)(a2 + 8);
    switch ( dtype_size )
    {
      case 2LL:
        word = (unsigned __int16)get_word(v20, v15, v19);
        break;
      case 8LL:
        word = get_qword(v20);
        break;
      case 1LL:
        word = (unsigned __int8)get_byte(v20);
        break;
      default:
        word = (unsigned int)get_dword(v20);
        break;
    }
  }
  *(_QWORD *)(a2 + 24) = word;
  *(_DWORD *)(a2 + 52) = get_dtype_size((unsigned __int8)v45[40 * a4 + 5]);
  return 1;
}

