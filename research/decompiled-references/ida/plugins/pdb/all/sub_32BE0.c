_BOOL8 __fastcall sub_32BE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 (__fastcall *v6)(__int64, __int64 *); // rax
  const char **v7; // rax
  const char *v8; // r14
  size_t v9; // rax
  size_t v10; // r13
  __int64 v11; // rdi
  _BOOL4 v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbp
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  void *v20; // rdi
  size_t v21; // r15
  void *dest; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v23; // [rsp+8h] [rbp-D0h]
  _QWORD v24[4]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-98h] BYREF
  __int128 v26; // [rsp+48h] [rbp-90h]
  __int128 v27; // [rsp+58h] [rbp-80h]
  __int64 v28; // [rsp+68h] [rbp-70h]
  __int64 v29; // [rsp+70h] [rbp-68h]
  __int64 v30; // [rsp+78h] [rbp-60h]
  __int128 v31; // [rsp+80h] [rbp-58h]
  unsigned __int64 v32; // [rsp+98h] [rbp-40h]

  v4 = *(_QWORD *)a3;
  v32 = __readfsqword(0x28u);
  dest = nullptr;
  v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(v4 + 144);
  v23 = 0;
  if ( v6 == sub_2D280 )
  {
    v7 = (const char **)sub_2CEC0(*(__int64 **)(a3 + 16), 0x10000000, 0x10000000u, 0x10000000);
    if ( v7 )
    {
      v8 = *v7;
      if ( *v7 && (v9 = strlen(*v7), (v10 = v9) != 0) )
      {
        v20 = dest;
        v21 = v9 + 1;
        if ( *((_QWORD *)&v23 + 1) < v9 + 1 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v9 + 1, 1);
          v20 = dest;
        }
        *(_QWORD *)&v23 = v21;
        memmove(v20, v8, v10);
        *((_BYTE *)dest + v10) = 0;
      }
      else
      {
        *(_QWORD *)&v23 = 0;
      }
    }
  }
  else
  {
    v6(a3, (__int64 *)&dest);
  }
  v11 = *(_QWORD *)(a1 + 320);
  v24[2] = a1;
  v28 = 0x10000000000LL;
  v25 = 0;
  v29 = 1;
  v30 = 0;
  v24[0] = off_A9DC8;
  v24[3] = &v25;
  v24[1] = a3;
  v26 = 0;
  v27 = 0;
  v31 = 0;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)v11 + 16LL))(v11, a3, 5, v24);
  v12 = 0;
  if ( (_QWORD)v26 )
  {
    udt_type_data_t__deduplicate_members(&v25);
    create_tinfo(a2, 13, 13, &v25);
    v12 = set_tinfo_property(a2, 2, 4) != 0;
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  v13 = v25;
  if ( v25 )
  {
    v14 = v26;
    if ( (_QWORD)v26 )
    {
      v15 = 0;
      do
      {
        v16 = (_QWORD *)(v13 + 144 * v15);
        clear_tinfo_t(v16 + 8);
        v17 = v16[5];
        if ( v17 )
        {
          v16[6] = 0;
          qfree(v17);
        }
        v18 = v16[2];
        if ( v18 )
        {
          v16[3] = 0;
          qfree(v18);
        }
        ++v15;
        v13 = v25;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v26 = 0;
    qfree(v13);
  }
  if ( dest )
  {
    *(_QWORD *)&v23 = 0;
    qfree(dest);
  }
  return v12;
}

