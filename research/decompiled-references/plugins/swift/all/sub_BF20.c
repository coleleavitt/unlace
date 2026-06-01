__int64 __fastcall sub_BF20(__int64 a1, __int64 a2, const char *a3)
{
  size_t v5; // rax
  size_t v6; // r13
  __int64 member; // rbx
  __int64 v8; // rdi
  __int64 v9; // r13
  _QWORD *v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rbp
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v17; // rbp
  char data_value; // al
  __int64 v19; // rbx
  size_t v20; // r15
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // [rsp+0h] [rbp-120h] BYREF
  __int64 v24; // [rsp+8h] [rbp-118h] BYREF
  __int128 v25; // [rsp+10h] [rbp-110h]
  __int128 v26; // [rsp+20h] [rbp-100h]
  __int64 v27; // [rsp+30h] [rbp-F0h]
  int v28; // [rsp+38h] [rbp-E8h]
  __int128 v29; // [rsp+48h] [rbp-D8h] BYREF
  void *v30; // [rsp+58h] [rbp-C8h] BYREF
  __int128 v31; // [rsp+60h] [rbp-C0h]
  __int64 v32; // [rsp+70h] [rbp-B0h]
  __int128 v33; // [rsp+78h] [rbp-A8h]
  _OWORD v34[3]; // [rsp+88h] [rbp-98h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-68h]
  int v36; // [rsp+C0h] [rbp-60h]
  __int64 v37; // [rsp+C8h] [rbp-58h]
  char v38; // [rsp+D0h] [rbp-50h]
  unsigned __int64 v39; // [rsp+E0h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v28 = 1;
  v25 = 0;
  v24 = 0;
  v27 = 0;
  v26 = 0;
  if ( !(unsigned __int8)get_tinfo_details(a2, 13, &v24) )
    goto LABEL_25;
  v30 = nullptr;
  v32 = 0;
  v35 = 1;
  v36 = -1;
  v37 = 0;
  v38 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v34[0] = 0;
  if ( a3 )
  {
    v5 = strlen(a3);
    v6 = v5;
    if ( v5 )
    {
      v20 = v5 + 1;
      v30 = (void *)qvector_reserve(&v30, 0, v5 + 1, 1);
      *(_QWORD *)&v31 = v20;
      memmove(v30, a3, v6);
      *((_BYTE *)v30 + v6) = 0;
    }
  }
  member = udt_type_data_t__find_member(&v24, &v29, 3);
  clear_tinfo_t(v34);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  v8 = v24;
  if ( member < 0 )
  {
    v9 = -1;
    goto LABEL_11;
  }
  v9 = -1;
  v10 = (_QWORD *)(v24 + 144 * member);
  if ( (v10[9] & 0xFLL) == 9 )
  {
    v17 = (*v10 >> 3) + a1;
    data_value = get_data_value(&v23, v17, v10[1] >> 3);
    v8 = v24;
    if ( data_value )
    {
      if ( (unsigned __int8)calc_reference_data(&v29, 0, v17, v10 + 10, v23) )
      {
        v19 = v29;
        if ( v17 != (_QWORD)v29 )
        {
          if ( (unsigned __int8)is_loaded(v29) )
          {
            v21 = getseg(v19);
            if ( v21 )
            {
              v22 = is_spec_segm(*(unsigned __int8 *)(v21 + 184));
              v8 = v24;
              v9 = -1;
              if ( !v22 )
                v9 = v29;
              goto LABEL_11;
            }
          }
        }
      }
LABEL_25:
      v8 = v24;
      v9 = -1;
    }
  }
LABEL_11:
  if ( v8 )
  {
    v11 = v25;
    if ( (_QWORD)v25 )
    {
      v12 = 0;
      do
      {
        v13 = (_QWORD *)(v8 + 144 * v12);
        clear_tinfo_t(v13 + 8);
        v14 = v13[5];
        if ( v14 )
        {
          v13[6] = 0;
          qfree(v14);
        }
        v15 = v13[2];
        if ( v15 )
        {
          v13[3] = 0;
          qfree(v15);
        }
        ++v12;
        v8 = v24;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v25 = 0;
    qfree(v8);
  }
  return v9;
}
