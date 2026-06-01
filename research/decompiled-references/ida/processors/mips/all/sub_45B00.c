char __fastcall sub_45B00(__int64 a1, __int64 a2, __int64 a3, __m128i *a4, int a5, int a6)
{
  __int64 v6; // r12
  __m128i *v7; // r15
  unsigned __int64 v9; // rdi
  unsigned __int64 *v10; // rax
  int v11; // ebp
  unsigned __int64 v12; // rbx
  char v13; // r13
  __int64 flags; // rax
  int *v15; // r13
  int v16; // r15d
  __int64 v17; // r13
  __int64 v18; // rdx
  bool v19; // cf
  __int16 v20; // ax
  char result; // al
  __int64 v22; // rbx
  int *v23; // r12
  int v24; // r14d
  unsigned __int64 v25; // rbp
  int v26; // r13d
  __int16 v27; // ax
  char v28; // cl
  __int64 v29; // rax
  int v30; // [rsp+0h] [rbp-200h]
  int v31; // [rsp+4h] [rbp-1FCh]
  bool v32; // [rsp+Bh] [rbp-1F5h]
  __int64 v35; // [rsp+18h] [rbp-1E8h]
  __int64 v36; // [rsp+30h] [rbp-1D0h]
  char v37; // [rsp+3Eh] [rbp-1C2h] BYREF
  char v38; // [rsp+3Fh] [rbp-1C1h] BYREF
  unsigned __int64 v39; // [rsp+40h] [rbp-1C0h] BYREF
  _QWORD v40[2]; // [rsp+48h] [rbp-1B8h]
  __int128 v41; // [rsp+58h] [rbp-1A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-198h]
  __int64 v43; // [rsp+70h] [rbp-190h]
  __int64 v44; // [rsp+78h] [rbp-188h]
  char v45; // [rsp+80h] [rbp-180h] BYREF
  unsigned __int64 v46; // [rsp+1C0h] [rbp-40h] BYREF

  v7 = a4;
  v9 = a4[1].m128i_u64[0];
  v46 = __readfsqword(0x28u);
  v10 = (unsigned __int64 *)&v45;
  v42 = -1;
  v43 = 0;
  v44 = 0;
  v41 = -1;
  do
  {
    *(_WORD *)v10 = 0;
    v10 += 5;
    *((_WORD *)v10 - 19) = 0;
    *((_WORD *)v10 - 18) = 0;
    *((_DWORD *)v10 - 2) = 0;
    *((_WORD *)v10 - 17) = 0;
    *((_OWORD *)v10 - 2) = 0;
    *(v10 - 2) = 0;
  }
  while ( v10 != &v46 );
  v40[0] = a4;
  v40[1] = &v41;
  v32 = v9 != a3;
  v11 = a6 - 1;
  if ( a6 - 1 < 0 )
    return 0;
  v12 = v9;
  v31 = 1;
  v35 = 1LL << a5;
  v30 = 0;
  v13 = 0;
  while ( 2 )
  {
    v37 = 0;
    if ( (*(_BYTE *)(a1 + 188) & 0x10) == 0 )
    {
LABEL_8:
      flags = get_flags_ex(v9, 4);
      if ( (flags & 0x400) != 0 && (flags & 0x10000) == 0 )
        return v37 != 0;
      if ( v13 )
      {
        if ( !*(_WORD *)(v40[v31] + 24LL) )
          return v37 != 0;
        v30 ^= 1u;
        v12 = v6;
        v31 ^= 1u;
      }
      else if ( !v32 )
      {
        v22 = a1;
        v23 = (int *)&unk_5DE80;
        v24 = v11;
        v25 = v7[1].m128i_u64[0];
        while ( 1 )
        {
          v26 = *v23;
          if ( v25 >= (unsigned __int16)*v23 )
          {
            v36 = v25 - (unsigned __int16)v26;
            v27 = sub_1F000(v22, &v38, v36, (__int16 *)&v39);
            if ( v27 )
              v27 = v39;
            if ( (_WORD)v26 == v27 )
              break;
          }
          if ( jpt_468FA == (_UNKNOWN *__ptr32 *)++v23 )
          {
            v11 = v24;
            a1 = v22;
            v12 = -1;
            goto LABEL_39;
          }
        }
        v11 = v24;
        a1 = v22;
        v12 = v36;
LABEL_39:
        if ( !(unsigned int)sub_271A0(a1, 0, v7, v12, 0, 0.0) )
          return v37 != 0;
      }
      v15 = (int *)&unk_5DE80;
      while ( 1 )
      {
        v16 = *v15;
        if ( v12 >= (unsigned __int16)*v15 )
        {
          v6 = v12 - (unsigned __int16)v16;
          v20 = sub_1F000(a1, &v38, v6, (__int16 *)&v39);
          if ( v20 )
            v20 = v39;
          if ( (_WORD)v16 == v20 )
            break;
        }
        if ( ++v15 == (int *)jpt_468FA )
        {
          v17 = v40[v31];
          goto LABEL_17;
        }
      }
      v17 = v40[v31];
      if ( v6 == -1 )
      {
LABEL_17:
        v6 = -1;
        *(_WORD *)(v17 + 24) = 0;
      }
      else
      {
        sub_271A0(a1, 0, (__m128i *)v40[v31], v6, 0, 0.0);
        if ( !v32 && *(_WORD *)(v17 + 24) )
        {
          if ( !sub_1E7A0(a1, v17) )
          {
            if ( sub_1E730(a1, *(unsigned __int16 *)(v17 + 24), (*(_BYTE *)(v17 + 33) & 4) != 0) )
            {
              v19 = v11-- == 0;
              if ( v19 )
                return 0;
LABEL_23:
              v32 = 0;
              v13 = 1;
              v7 = (__m128i *)v40[v30];
              v9 = v7[1].m128i_u64[0];
              continue;
            }
            goto LABEL_18;
          }
          return v37 != 0;
        }
      }
LABEL_18:
      v18 = v40[v30];
      if ( *(_WORD *)(v18 + 24) != 135 || *(unsigned __int16 *)(v18 + 46) != a5 )
      {
        v39 = 0;
        sub_2AAE0(a1, &v39, v18, a3);
        if ( a5 <= 63 && (v39 & v35) != 0 )
          return 0;
        v19 = v11-- == 0;
        if ( v19 )
          return 0;
        goto LABEL_23;
      }
      v28 = 16;
      if ( *(_DWORD *)(a1 + 260) == 2 )
        v28 = 12;
      v29 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (int)(*(_QWORD *)(v18 + 88) << v28);
      if ( *(_BYTE *)a2 )
        return *(_QWORD *)(a2 + 8) == v29;
      *(_BYTE *)a2 = 1;
      *(_QWORD *)(a2 + 8) = v29;
      qmemcpy((void *)(a2 + 16), (const void *)v18, 0x168u);
      return 1;
    }
    break;
  }
  if ( (get_flags_ex(v9, 4) & 0x1000) == 0
    || (result = sub_46100(a1, (unsigned int)&v37, a2, a3, (_DWORD)v7, a5, v11)) != 0 )
  {
    v9 = v7[1].m128i_u64[0];
    goto LABEL_8;
  }
  return result;
}

