__int64 __fastcall sub_A3C80(__int64 a1, char *a2, __int64 *a3, unsigned __int64 *a4, unsigned __int8 a5)
{
  __int64 *v6; // rbx
  char v8; // al
  unsigned int v9; // ebx
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 not_tail; // r15
  char v14; // al
  unsigned __int64 v15; // r8
  __int64 v16; // r15
  _QWORD *v17; // rax
  char v18; // al
  unsigned __int64 v19; // r8
  __int64 v20; // [rsp+8h] [rbp-100h]
  char v21; // [rsp+8h] [rbp-100h]
  char v22; // [rsp+8h] [rbp-100h]
  unsigned __int64 v23; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v24; // [rsp+10h] [rbp-F8h]
  char v25; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v26; // [rsp+18h] [rbp-F0h]
  __int64 v27; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v28; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v29; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h]
  __int128 v31; // [rsp+48h] [rbp-C0h]
  __int64 v32; // [rsp+58h] [rbp-B0h]
  __int128 v33; // [rsp+60h] [rbp-A8h]
  __int128 v34; // [rsp+70h] [rbp-98h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  int v36; // [rsp+A8h] [rbp-60h]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  char v38; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v39; // [rsp+C8h] [rbp-40h]

  v6 = a3;
  v39 = __readfsqword(0x28u);
  v27 = 0;
  if ( !a3 )
    v6 = &v27;
  v8 = *a2;
  if ( *a2 == 6 )
  {
    not_tail = *((_QWORD *)a2 + 1);
    if ( (get_flags_ex() & 0x600) == 0x200 )
      not_tail = prev_not_tail();
    if ( *((_QWORD *)a2 + 1) != not_tail || a5 != 1 )
    {
      v20 = *((_QWORD *)a2 + 1) - not_tail;
      v14 = sub_37B020(*(_QWORD *)(a1 + 1496), not_tail, v6, 3);
      v15 = v20;
      goto LABEL_19;
    }
    goto LABEL_6;
  }
  if ( v8 == 9 )
  {
    v11 = *((_QWORD *)a2 + 1);
    v12 = *(_QWORD *)(v11 + 8);
    if ( v12 || a5 != 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)v11 + 440LL) < (unsigned __int64)*(int *)(v11 + 16) )
      {
        if ( !under_debugger )
          sub_37CFE0(51258);
        BUG();
      }
      copy_tinfo_t();
      *a4 = v12;
      goto LABEL_13;
    }
    goto LABEL_6;
  }
  if ( v8 != 5
    || (v16 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL), !(unsigned __int8)sub_1EA5F0(a1, v16, 1))
    && v16 + 1 <= *(_QWORD *)(a1 + 144) - *(int *)(a1 + 120) )
  {
LABEL_6:
    *a4 = 0;
    goto LABEL_7;
  }
  v17 = *((_QWORD **)a2 + 1);
  v30 = 0;
  v32 = 0;
  v35 = 1;
  v36 = -1;
  v37 = 0;
  v38 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v34 = 0;
  if ( sub_1CB3D0(*v17, &v29, v17[1], &v28, 0) == -1 )
  {
    v18 = 0;
    v19 = 0;
  }
  else
  {
    v18 = a5 ^ 1 | (v28 != (unsigned __int64)v29 >> 3);
    if ( v18 )
    {
      v26 = v28 - ((unsigned __int64)v29 >> 3);
      v25 = a5 ^ 1 | (v28 != (unsigned __int64)v29 >> 3);
      copy_tinfo_t();
      v18 = v25;
      v19 = v26;
    }
    else
    {
      v19 = 0;
    }
  }
  v23 = v19;
  v21 = v18;
  clear_tinfo_t();
  v14 = v21;
  v15 = v23;
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
    v15 = v23;
    v14 = v21;
  }
  if ( v30 )
  {
    v24 = v15;
    v22 = v14;
    *(_QWORD *)&v31 = 0;
    qfree();
    v15 = v24;
    v14 = v22;
  }
LABEL_19:
  *a4 = v15;
  if ( v14 )
  {
LABEL_13:
    v9 = sub_A39C0(v6, a4, *((_DWORD *)a2 + 1), a5);
    goto LABEL_8;
  }
LABEL_7:
  v9 = 0;
LABEL_8:
  clear_tinfo_t();
  return v9;
}

