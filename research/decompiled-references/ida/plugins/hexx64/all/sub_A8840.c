__int64 __fastcall sub_A8840(__int64 a1, char *a2, __int64 *a3, unsigned __int64 *a4, unsigned __int8 a5, double a6)
{
  __int64 *v7; // rbx
  char v9; // al
  unsigned int v10; // ebx
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 not_tail; // r15
  char v15; // al
  unsigned __int64 v16; // r8
  __int64 v17; // r15
  __int64 v18; // rax
  char v19; // al
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // [rsp+8h] [rbp-100h]
  char v22; // [rsp+8h] [rbp-100h]
  char v23; // [rsp+8h] [rbp-100h]
  unsigned __int64 v24; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v25; // [rsp+10h] [rbp-F8h]
  char v26; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v27; // [rsp+18h] [rbp-F0h]
  __int64 v28; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-E0h] BYREF
  __m128i v30; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C8h]
  __int128 v32; // [rsp+48h] [rbp-C0h]
  __int64 v33; // [rsp+58h] [rbp-B0h]
  __int128 v34; // [rsp+60h] [rbp-A8h]
  __int128 v35; // [rsp+70h] [rbp-98h]
  __int64 v36; // [rsp+A0h] [rbp-68h]
  int v37; // [rsp+A8h] [rbp-60h]
  __int64 v38; // [rsp+B0h] [rbp-58h]
  char v39; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+C8h] [rbp-40h]

  v7 = a3;
  v40 = __readfsqword(0x28u);
  v28 = 0;
  if ( !a3 )
    v7 = &v28;
  v9 = *a2;
  if ( *a2 == 6 )
  {
    not_tail = *((_QWORD *)a2 + 1);
    if ( (get_flags_ex() & 0x600) == 0x200 )
      not_tail = prev_not_tail();
    if ( *((_QWORD *)a2 + 1) != not_tail || a5 != 1 )
    {
      v21 = *((_QWORD *)a2 + 1) - not_tail;
      v15 = sub_3810A0(*(_QWORD *)(a1 + 1496), not_tail, (__int64)v7, 3);
      v16 = v21;
      goto LABEL_19;
    }
    goto LABEL_6;
  }
  if ( v9 == 9 )
  {
    v12 = *((_QWORD *)a2 + 1);
    v13 = *(_QWORD *)(v12 + 8);
    if ( v13 || a5 != 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)v12 + 440LL) < (unsigned __int64)*(int *)(v12 + 16) )
      {
        if ( !under_debugger )
          sub_383060(0xC83Au, a6);
        BUG();
      }
      copy_tinfo_t();
      *a4 = v13;
      goto LABEL_13;
    }
    goto LABEL_6;
  }
  if ( v9 != 5
    || (v17 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL), !(unsigned __int8)sub_1EF9B0(a1, v17, 1))
    && v17 + 1 <= *(_QWORD *)(a1 + 144) - *(int *)(a1 + 120) )
  {
LABEL_6:
    *a4 = 0;
    goto LABEL_7;
  }
  v18 = *((_QWORD *)a2 + 1);
  v31 = 0;
  v33 = 0;
  v36 = 1;
  v37 = -1;
  v38 = 0;
  v39 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v35 = 0;
  if ( sub_1D0250(*(_QWORD **)v18, &v30, *(_QWORD *)(v18 + 8), &v29, nullptr) == -1 )
  {
    v19 = 0;
    v20 = 0;
  }
  else
  {
    v19 = a5 ^ 1 | (v29 != (unsigned __int64)v30.m128i_i64[0] >> 3);
    if ( v19 )
    {
      v27 = v29 - ((unsigned __int64)v30.m128i_i64[0] >> 3);
      v26 = a5 ^ 1 | (v29 != (unsigned __int64)v30.m128i_i64[0] >> 3);
      copy_tinfo_t();
      v19 = v26;
      v20 = v27;
    }
    else
    {
      v20 = 0;
    }
  }
  v24 = v20;
  v22 = v19;
  clear_tinfo_t();
  v15 = v22;
  v16 = v24;
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
    v16 = v24;
    v15 = v22;
  }
  if ( v31 )
  {
    v25 = v16;
    v23 = v15;
    *(_QWORD *)&v32 = 0;
    qfree(v31);
    v16 = v25;
    v15 = v23;
  }
LABEL_19:
  *a4 = v16;
  if ( v15 )
  {
LABEL_13:
    v10 = sub_A8580(v7, a4, *((_DWORD *)a2 + 1), a5);
    goto LABEL_8;
  }
LABEL_7:
  v10 = 0;
LABEL_8:
  clear_tinfo_t();
  return v10;
}

