unsigned __int64 __fastcall sub_77DC0(__int64 a1, __int64 a2, const char *a3, double a4, double a5)
{
  int v7; // r12d
  int v8; // r15d
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 func; // rbp
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rbx
  char v16; // bp
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  char v19; // dl
  __int128 v20; // rdi
  __int64 *v21; // rax
  _QWORD *v22; // r12
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 v25; // r13
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int128 v28; // rdi
  __int64 *v29; // rax
  __int64 v30; // [rsp+18h] [rbp-1D0h] BYREF
  __int64 v31; // [rsp+20h] [rbp-1C8h]
  __int128 v32; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-198h]
  __int64 v34; // [rsp+58h] [rbp-190h]
  __int64 v35; // [rsp+60h] [rbp-188h]
  _BYTE v36[320]; // [rsp+68h] [rbp-180h] BYREF
  _QWORD v37[8]; // [rsp+1A8h] [rbp-40h] BYREF

  v37[0] = __readfsqword(0x28u);
  if ( (unsigned __int8)getinf_flag() || !(unsigned int)sub_690D0(a2, (__int64)a3, "SEH_prolog", 3u, 1) )
  {
    v7 = sub_690D0(a2, (__int64)a3, "EH_prolog", 1u, 1);
    if ( (unsigned __int8)sub_77910(a2, (__int64)a3, 0) )
    {
      v8 = 2;
      if ( v7 )
      {
LABEL_43:
        v16 = 3;
        goto LABEL_44;
      }
      goto LABEL_4;
    }
    v8 = v7 != 0;
  }
  else
  {
    v8 = 1;
    if ( (unsigned __int8)sub_77910(a2, (__int64)a3, 0) )
      goto LABEL_43;
  }
  if ( !(unsigned __int8)sub_779C0(a2) && strcmp(a3, "__CHK") )
  {
    if ( v8 )
    {
      v16 = v8;
LABEL_44:
      v8 = 1;
      if ( (unsigned __int8)xrefblk_t_first_to() )
        goto LABEL_22;
LABEL_29:
      if ( !*(_BYTE *)(a1 + 144) )
      {
        v22 = *(_QWORD **)(a1 + 5304);
        v23 = 0;
        v24 = 0;
        v22[2] = 0;
        v25 = v22[8];
        v22[5] = 0;
        if ( v25 )
        {
          do
          {
            v26 = (_QWORD *)(v23 + v22[7]);
            if ( *v26 )
            {
              v26[1] = 0;
              qfree();
            }
            ++v24;
            v23 += 56;
          }
          while ( v25 != v24 );
        }
        v22[8] = 0;
      }
      return v37[0] - __readfsqword(0x28u);
    }
    if ( !(unsigned __int8)sub_77C10(a1, (__int64)a3) )
      return v37[0] - __readfsqword(0x28u);
LABEL_4:
    v33 = -1;
    v9 = v36;
    v34 = 0;
    v35 = 0;
    v32 = -1;
    do
    {
      *(_WORD *)v9 = 0;
      v9 += 5;
      *((_WORD *)v9 - 19) = 0;
      *((_WORD *)v9 - 18) = 0;
      *((_DWORD *)v9 - 2) = 0;
      *((_WORD *)v9 - 17) = 0;
      *((_OWORD *)v9 - 2) = 0;
      *(v9 - 2) = 0;
    }
    while ( v37 != v9 );
    if ( (unsigned __int8)xrefblk_t_first_to() )
    {
      do
      {
        v10 = v31;
        func = get_func();
        while ( 1 )
        {
          v12 = decode_insn();
          if ( !v12 )
            break;
          v10 += v12;
          if ( func )
          {
            if ( (int)get_func_chunknum() < 0 )
              goto LABEL_13;
          }
          else if ( get_func() )
          {
LABEL_13:
            v13 = get_func();
            v14 = v13;
            if ( v13 )
            {
              *(_QWORD *)(v13 + 16) &= ~0x400uLL;
              update_func();
              auto_mark_range();
              if ( v8 )
              {
                *(_QWORD *)&v28 = a1;
                *((_QWORD *)&v28 + 1) = v14;
                sub_6EE20(v28, 1);
                v29 = (__int64 *)get_func();
                if ( v29 )
                  sub_715C0(a1, v29, 0.0, a5);
              }
            }
            break;
          }
          if ( (get_flags_ex() & 0x10000) == 0 )
            goto LABEL_13;
        }
      }
      while ( (unsigned __int8)xrefblk_t_next_to() );
    }
    return v37[0] - __readfsqword(0x28u);
  }
  v16 = v8 | 4;
  if ( (unsigned __int8)xrefblk_t_first_to() )
  {
    do
    {
LABEL_22:
      while ( 1 )
      {
        v17 = (_QWORD *)get_func();
        v18 = v17;
        if ( v17 )
        {
          v19 = 1;
          if ( (v16 & 4) != 0 && (unsigned __int64)(v31 - *v17) > 0x1F )
          {
            a5 = NAN;
            v27 = v36;
            v33 = -1;
            v34 = 0;
            a4 = 0.0;
            v35 = 0;
            v32 = -1;
            do
            {
              *(_WORD *)v27 = 0;
              v27 += 5;
              *((_WORD *)v27 - 19) = 0;
              *((_WORD *)v27 - 18) = 0;
              *((_DWORD *)v27 - 2) = 0;
              *((_WORD *)v27 - 17) = 0;
              *((_OWORD *)v27 - 2) = 0;
              *(v27 - 2) = 0;
            }
            while ( v37 != v27 );
            decode_insn();
            if ( !(unsigned __int8)sub_73E00(a1, (__int64)&v32, 0, &v30, 0) || (get_aflags() & 0x800000) != 0 )
            {
              v19 = 0;
            }
            else
            {
              add_auto_stkpnt();
              v19 = 0;
            }
          }
          *(_QWORD *)&v20 = a1;
          *((_QWORD *)&v20 + 1) = v18;
          sub_6EE20(v20, v19);
          v21 = (__int64 *)get_func();
          if ( v21 )
          {
            if ( v8 )
              break;
          }
        }
        if ( !(unsigned __int8)xrefblk_t_next_to() )
          goto LABEL_28;
      }
      sub_715C0(a1, v21, a4, a5);
    }
    while ( (unsigned __int8)xrefblk_t_next_to() );
  }
LABEL_28:
  if ( v8 )
    goto LABEL_29;
  return v37[0] - __readfsqword(0x28u);
}
