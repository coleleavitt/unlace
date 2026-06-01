__int64 __fastcall sub_1B200(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, int a6, char a7)
{
  int v11; // ebx
  __int64 v12; // rbx
  unsigned int dword; // eax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  char *v23; // rax
  __int64 v24; // rdx
  __int64 v26; // rax
  __int64 v28; // [rsp+10h] [rbp-1B8h]
  __int64 v29; // [rsp+10h] [rbp-1B8h]
  __int64 v30; // [rsp+18h] [rbp-1B0h]
  __int128 v31; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-198h]
  __int64 v33; // [rsp+38h] [rbp-190h]
  __int64 v34; // [rsp+40h] [rbp-188h]
  char v35; // [rsp+48h] [rbp-180h] BYREF
  _QWORD v36[8]; // [rsp+188h] [rbp-40h] BYREF

  a3 = (int)a3;
  v11 = a3;
  v36[0] = __readfsqword(0x28u);
  if ( a2[2] < (unsigned __int64)(int)a3 )
  {
    v29 = (int)a3;
    v26 = qvector_reserve(a2, *a2, (int)a3, 16);
    a3 = v29;
    *a2 = v26;
  }
  v28 = a4 + 8 * a3;
  if ( v11 <= 0 )
    return 1;
  while ( 1 )
  {
    v18 = a2[1];
    v19 = *a2;
    v20 = v18 + 1;
    if ( a2[2] < (unsigned __int64)(v18 + 1) )
    {
      v21 = qvector_reserve(a2, v19, v18 + 1, 16);
      v18 = a2[1];
      *a2 = v21;
      v19 = v21;
      v20 = v18 + 1;
    }
    a2[1] = v20;
    v12 = v19 + 16 * v18;
    dword = get_dword(a4);
    v14 = *(_QWORD *)(a1 + 24);
    v15 = *(_QWORD *)(v14 + 16) & (a5 + dword);
    *(_QWORD *)v12 = v15;
    if ( a7 )
    {
      if ( (~((unsigned __int16)get_flags_ex(v15, 4, v14) >> 8) & 6) != 0 )
      {
        v22 = *(_QWORD *)v12;
        v32 = -1;
        v33 = 0;
        v34 = 0;
        v30 = v22 - 1;
        v23 = &v35;
        v31 = -1;
        do
        {
          *(_WORD *)v23 = 0;
          v23 += 40;
          *((_WORD *)v23 - 19) = 0;
          *((_WORD *)v23 - 18) = 0;
          *((_DWORD *)v23 - 2) = 0;
          *((_WORD *)v23 - 17) = 0;
          *((_OWORD *)v23 - 2) = 0;
          *((_QWORD *)v23 - 2) = 0;
        }
        while ( v36 != (_QWORD *)v23 );
        if ( (~((unsigned __int16)get_flags_ex(v30, 4, v36) >> 8) & 6) == 0
          && (unsigned int)decode_insn(&v31, v30, v24, 0.0) )
        {
          *(_QWORD *)v12 = v30;
        }
      }
    }
    v16 = a4 + 4;
    a4 += 8;
    v17 = get_dword(v16);
    *(_DWORD *)(v12 + 8) = v17;
    if ( v17 > a6 || v17 < -2 )
      break;
    if ( a4 == v28 )
      return 1;
  }
  return 0;
}
