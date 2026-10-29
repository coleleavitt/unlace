__int64 __fastcall sub_212960(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  char v6; // al
  const void *v8; // r14
  size_t v9; // rax
  size_t v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rbp
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  void *v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rax
  __int128 v21; // [rsp+10h] [rbp-C8h]
  __int64 v22; // [rsp+20h] [rbp-B8h]
  int v23; // [rsp+28h] [rbp-B0h]
  __int16 v24; // [rsp+2Ch] [rbp-ACh]
  __int64 v25; // [rsp+30h] [rbp-A8h]
  __int128 v26; // [rsp+38h] [rbp-A0h]
  __int64 v27; // [rsp+48h] [rbp-90h]
  __int64 v28; // [rsp+50h] [rbp-88h]
  __int64 v29; // [rsp+58h] [rbp-80h]
  __int128 v30; // [rsp+60h] [rbp-78h]
  __int64 v31; // [rsp+70h] [rbp-68h]
  __int128 v32; // [rsp+78h] [rbp-60h]
  char v33; // [rsp+88h] [rbp-50h]
  unsigned __int64 v34; // [rsp+98h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a4 + 72);
  if ( *(_QWORD *)(v4 + 32) <= 1u )
    return 0;
  v5 = *(_QWORD *)(v4 + 24);
  v6 = *(_BYTE *)(v5 + 80);
  if ( v6 == 3 )
  {
    v8 = *(const void **)(v5 + 88);
    if ( !v8 || (v9 = strlen(*(const char **)(v5 + 88)), (v10 = v9) == 0) )
    {
      a2[1] = 0;
      return 0;
    }
    v18 = (void *)*a2;
    v19 = v9 + 1;
    if ( a2[2] < v9 + 1 )
    {
      v20 = qvector_reserve((__int64)a2, *a2, v9 + 1, 1);
      *a2 = v20;
      v18 = (void *)v20;
    }
    a2[1] = v19;
    memmove(v18, v8, v10);
    *(_BYTE *)(*a2 + v10) = 0;
  }
  else if ( v6 == 10 )
  {
    v11 = *(_QWORD *)(v5 + 88);
    if ( *(_BYTE *)v11 == 6 )
      sub_261BF0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), a2, *(_QWORD *)(v11 + 8), 0, nullptr);
  }
  if ( (unsigned __int64)a2[1] > 1 )
  {
    if ( !(unsigned __int8)sub_32AC20() )
      return 1;
    v25 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 16;
    v26 = 0;
    v30 = 0;
    v32 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      v21 = 0;
      copy_tinfo_t();
      v22 = 0;
      copy_tinfo_t();
      v23 = 0;
      v24 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree(v31);
      }
      cleanup_argloc();
      clear_tinfo_t();
      v12 = v25;
      if ( v25 )
      {
        v13 = v26;
        if ( (_QWORD)v26 )
        {
          v14 = 0;
          do
          {
            v15 = (_QWORD *)(v12 + 80 * v14);
            clear_tinfo_t();
            v16 = v15[5];
            if ( v16 )
            {
              v15[6] = 0;
              qfree(v16);
            }
            v17 = v15[2];
            if ( v17 )
            {
              v15[3] = 0;
              qfree(v17);
            }
            ++v14;
            cleanup_argloc();
            v12 = v25;
          }
          while ( v13 != v14 );
        }
        *(_QWORD *)&v26 = 0;
        qfree(v12);
      }
      return 1;
    }
    cleanup_argloc();
    clear_tinfo_t();
  }
  return 0;
}

