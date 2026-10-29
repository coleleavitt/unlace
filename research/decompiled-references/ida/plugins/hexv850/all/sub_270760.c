__int64 __fastcall sub_270760(__m128i *a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 *v7; // rsi
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  __int64 tinfo_size; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  char v26; // al
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rax
  __int64 v31; // rax
  __int64 v32; // r13
  char v33; // al
  _BOOL4 v34; // r12d
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rax
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // r15
  __int64 v41; // r11
  int v42; // edx
  bool v43; // al
  int v44; // ecx
  int v45; // r9d
  char tinfo_property; // r13
  bool v47; // r15
  __int64 v48; // rax
  int v49; // r8d
  int v50; // r9d
  int v51; // [rsp+0h] [rbp-80h]
  int v52; // [rsp+8h] [rbp-78h]
  int v53; // [rsp+8h] [rbp-78h]
  __int64 v54; // [rsp+10h] [rbp-70h]
  __int64 v55; // [rsp+18h] [rbp-68h]
  int v56; // [rsp+18h] [rbp-68h]
  int v57; // [rsp+18h] [rbp-68h]
  __int64 v58; // [rsp+20h] [rbp-60h]
  int v59; // [rsp+20h] [rbp-60h]
  __int64 v60; // [rsp+20h] [rbp-60h]
  char v61; // [rsp+20h] [rbp-60h]
  int v62; // [rsp+28h] [rbp-58h]
  __int64 v64; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v65[8]; // [rsp+40h] [rbp-40h] BYREF

  v65[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 64) + 8LL);
  ++*(_DWORD *)(v2 + 896);
  v3 = sub_266AE0((__int64)a1, a1[2].m128i_i64[1]);
  if ( !v3 )
    return 0;
  v4 = v3;
  v5 = j__qalloc_or_throw();
  *(_QWORD *)v5 = -1;
  v6 = v5;
  *(_DWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 12) = -1;
  *(_QWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  sub_255C30(v5, v4);
  v7 = (__int64 *)a1[3].m128i_i64[0];
  if ( v7 )
  {
    v8 = a1[2].m128i_i64[0];
    v9 = *(_DWORD *)(v8 + 8);
    if ( v9 == 36 || (v10 = 1, v9 == 7) )
      v10 = -1;
    if ( !(unsigned __int8)sub_266520((__int64)a1, v7, *(_QWORD *)v8, v10, 0) )
    {
      if ( v6 )
      {
        sub_250270(v6);
        clear_tinfo_t();
        j__qfree();
      }
      return 0;
    }
  }
  sub_270670((__int64)a1);
  v11 = sub_26CA80(a1, v6);
  if ( !v11 )
  {
    v11 = v6;
    if ( *(_DWORD *)(v6 + 8) != 52 )
      goto LABEL_11;
LABEL_46:
    sub_267020(&v64, (__int64)a1);
    v40 = *(_QWORD *)(v11 + 24);
    v58 = a1[5].m128i_i64[1];
    v55 = a1[6].m128i_i64[0];
    v54 = a1->m128i_i64[0];
    v41 = sub_266010(v40);
    if ( v41 != -1 )
    {
      if ( a1[4].m128i_i64[0] )
      {
        v42 = *(_QWORD *)(a1[3].m128i_i64[1] + 24);
        v43 = v42 != 0;
      }
      else
      {
        v43 = 0;
        v42 = 0;
      }
      v44 = v58 - v55;
      if ( v58 != v55 || v43 )
        goto LABEL_54;
      if ( (_BYTE)v64 )
      {
        v52 = v42;
        v56 = v41;
        v59 = v44;
        if ( (get_tinfo_property() & 0x3F) != 1 )
        {
          v44 = v59;
          LODWORD(v41) = v56;
          v42 = v52;
LABEL_54:
          v45 = v40 + 24;
          if ( *(_DWORD *)(v40 + 8) != 65 )
            v45 = 0;
          v51 = v45;
          v62 = v42;
          v53 = v41;
          v57 = v44;
          v60 = *(_QWORD *)(v54 + 808);
          v65[0] = 0;
          copy_tinfo_t();
          sub_2793D0(v60, v53, v62, v57, (unsigned int)v65, v51, 0);
          clear_tinfo_t();
        }
      }
    }
    clear_tinfo_t();
    goto LABEL_11;
  }
  if ( v6 )
  {
    sub_250270(v6);
    clear_tinfo_t();
    j__qfree();
  }
  if ( !(unsigned __int8)sub_31E040(a1[1].m128i_i64[1], a1[2].m128i_i64[0], v11 + 48) && !a1[27].m128i_i32[2] )
    v11 = sub_242150(*(_QWORD *)(a1->m128i_i64[0] + 112), v11);
  if ( *(_DWORD *)(v11 + 8) == 52 )
    goto LABEL_46;
LABEL_11:
  if ( !a1[28].m128i_i8[1] )
    v11 = (__int64)sub_26E680(a1, v11);
  v12 = sub_268D00(a1, v11, a2);
  v13 = a1[27].m128i_i32[1];
  v14 = v12;
  if ( get_tinfo_size() < v13 )
  {
    if ( *(_DWORD *)(a1[1].m128i_i64[1] + 8) != 48
      || (tinfo_property = get_tinfo_property(), ((get_tinfo_property() & 0xF) == 9) != ((tinfo_property & 0xF) == 9)) )
    {
      if ( v14 )
      {
        sub_250270(v14);
        clear_tinfo_t();
        j__qfree();
      }
      v65[0] = 0;
      tinfo_size = get_tinfo_size();
      v16 = a1[27].m128i_i32[1];
      if ( v16 == tinfo_size )
      {
        copy_tinfo_t();
        LODWORD(v16) = a1[27].m128i_i32[1];
      }
      v17 = j__qalloc_or_throw();
      v18 = a1[2].m128i_i64[0];
      *(_QWORD *)(v17 + 12) = -1;
      v19 = v17;
      *(_QWORD *)v17 = -1;
      *(_DWORD *)(v17 + 8) = 0;
      *(_QWORD *)(v17 + 48) = 0;
      *(_DWORD *)(v17 + 56) = 0;
      sub_255C30(v17, v18);
      v20 = sub_2422E0(a1->m128i_i64[0], a1[8].m128i_i64[0], v19, 0, v65, v16, 1);
      a1[28].m128i_i8[3] = 0;
      a1[28].m128i_i8[5] = 1;
      v14 = v20;
      clear_tinfo_t();
    }
  }
  if ( sub_26A580((__int64)a1, v14, 0) )
    goto LABEL_28;
  v21 = a1[27].m128i_i32[1];
  if ( !(_DWORD)v21 )
    goto LABEL_42;
  sub_26A840(&v64, a1, v21);
  if ( !(_BYTE)v64 )
  {
LABEL_41:
    clear_tinfo_t();
LABEL_42:
    if ( v14 )
    {
      sub_250270(v14);
      clear_tinfo_t();
      j__qfree();
    }
    return 0;
  }
  sub_326AD0(v65, *(_QWORD *)(a1->m128i_i64[0] + 112), &v64);
  copy_tinfo_t();
  clear_tinfo_t();
  v22 = *(_DWORD *)(v14 + 8);
  if ( v22 != 48 )
    goto LABEL_24;
  v65[0] = 0;
  v65[0] = get_tinfo_property();
  v61 = get_tinfo_property();
  clear_tinfo_t();
  if ( (v61 & 0xF) != 0xB )
  {
    if ( a1[27].m128i_i32[1] != get_tinfo_size() )
      goto LABEL_41;
    v47 = (get_tinfo_property() & 0xF) == 9;
    if ( v47 != ((get_tinfo_property() & 0xF) == 9) )
      goto LABEL_41;
    sub_250490((__int64 *)v14, *(_QWORD *)(v14 + 24));
    v22 = *(_DWORD *)(v14 + 8);
LABEL_24:
    v23 = (unsigned int)(v22 - 51);
    if ( (unsigned int)v23 > 0xE )
      goto LABEL_41;
    v24 = 25473;
    if ( !_bittest64(&v24, v23) && (v22 != 57 || !get_tinfo_property()) )
      goto LABEL_41;
    v25 = sub_242150(*(_QWORD *)(a1->m128i_i64[0] + 112), v14);
    v14 = sub_23FAB0(v25);
    goto LABEL_27;
  }
  copy_tinfo_t();
LABEL_27:
  v26 = get_tinfo_property();
  v29 = sub_23EF60(*(_QWORD *)(a1->m128i_i64[0] + 112), v14, a1[27].m128i_i32[1], (v26 & 0xF) == 9, v27, v28);
  a1[27].m128i_i32[2] = 1;
  v14 = v29;
  clear_tinfo_t();
LABEL_28:
  if ( a2 && !a1[28].m128i_i8[5] && !a1[27].m128i_i32[2] )
  {
    v31 = j__qalloc_or_throw();
    *(_QWORD *)v31 = -1;
    v32 = v31;
    *(_DWORD *)(v31 + 8) = 0;
    *(_QWORD *)(v31 + 12) = -1;
    *(_QWORD *)(v31 + 48) = 0;
    *(_DWORD *)(v31 + 56) = 0;
    sub_255C30(v31, v14);
    v33 = get_tinfo_property();
    v34 = (v33 & 0xF) == 9;
    v37 = sub_23EF60(*(_QWORD *)(a1->m128i_i64[0] + 112), v14, a1[27].m128i_i32[1], (v33 & 0xF) == 9, v35, v36);
    a1[27].m128i_i32[2] = 1;
    v14 = v37;
    if ( sub_26A580((__int64)a1, v37, 1) )
    {
      if ( v32 )
      {
        sub_250270(v32);
        clear_tinfo_t();
        j__qfree();
      }
    }
    else
    {
      if ( v14 )
      {
        sub_250270(v14);
        clear_tinfo_t();
        j__qfree();
      }
      sub_326850((unsigned int)v65, *(_QWORD *)(a1->m128i_i64[0] + 112), a1[27].m128i_i32[1], v34, v38, v39);
      v48 = sub_23FAB0(v32);
      v14 = sub_23EF60(*(_QWORD *)(a1->m128i_i64[0] + 112), v48, a1[27].m128i_i32[1], v34, v49, v50);
      clear_tinfo_t();
    }
  }
  *(_QWORD *)v14 = a1[8].m128i_i64[0];
  return v14;
}

