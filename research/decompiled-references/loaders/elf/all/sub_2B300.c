unsigned __int64 __fastcall sub_2B300(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  char v5; // r13
  __int64 v6; // r14
  const char *v7; // rax
  _QWORD *v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 i; // rbx
  __int64 v13; // rcx
  const char *v14; // rdx
  __int64 v15; // rax
  const char *v17; // rdx
  __int64 named_type_tid; // rax
  const char *v19; // [rsp+8h] [rbp-98h]
  __int64 v20; // [rsp+10h] [rbp-90h]
  char v22; // [rsp+27h] [rbp-79h]
  __int64 v23; // [rsp+38h] [rbp-68h]
  const char *v24; // [rsp+40h] [rbp-60h]
  __int64 v25; // [rsp+40h] [rbp-60h]
  __int64 v26; // [rsp+48h] [rbp-58h]
  __int64 v27; // [rsp+48h] [rbp-58h]
  const char *v28; // [rsp+50h] [rbp-50h] BYREF
  __int128 v29; // [rsp+58h] [rbp-48h]
  unsigned __int64 v30; // [rsp+68h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  if ( *a3 > 0 )
  {
    if ( a3[2] )
    {
      v5 = *(_BYTE *)(a2 + 617);
      v6 = *(_QWORD *)(a2 + 608) + a3[1];
      v22 = v5;
      sub_E890(v6, 1u, (__int64)"ELF GNU Symbol Version Definitions");
      v20 = a4[1];
      if ( v20 )
      {
        v7 = "Elf32_Verdef";
        v23 = 0;
        if ( v5 )
          v7 = "Elf64_Verdef";
        v19 = v7;
        do
        {
          v8 = (_QWORD *)(*a4 + 40 * v23);
          v9 = v6 + *v8;
          if ( (unsigned __int8)is_loaded(v9) )
          {
            v10 = *(_QWORD *)(a1 + 432);
            if ( v10 == -1 )
            {
              v28 = nullptr;
              v29 = 0;
              sub_2B240(
                (__int64 *)&v28,
                (__int64)"struct %s{unsigned __int16 vd_version;unsigned __int16 vd_flags;unsigned __int16 vd_ndx;unsigne"
                         "d __int16 vd_cnt;unsigned __int32 vd_hash;unsigned __int32 vd_aux;unsigned __int32 vd_next;};",
                v19);
              v17 = &s1;
              if ( (_QWORD)v29 )
                v17 = v28;
              h2ti(0, 0, v17, 1024, 0, 0, sub_EAA0, 0, 0);
              named_type_tid = get_named_type_tid(v19);
              v10 = named_type_tid;
              if ( v28 )
              {
                v27 = named_type_tid;
                *(_QWORD *)&v29 = 0;
                qfree(v28);
                v10 = v27;
              }
              *(_QWORD *)(a1 + 432) = v10;
              if ( v10 == -1 )
                return v30 - __readfsqword(0x28u);
            }
            create_data(v9, 1610612736, 20, v10);
            v11 = v8[2];
            if ( v11 )
            {
              for ( i = 0; i != v11; ++i )
              {
                v26 = v6 + *(_QWORD *)(v8[1] + 16 * i);
                if ( (unsigned __int8)is_loaded(v26) )
                {
                  v13 = *(_QWORD *)(a1 + 440);
                  if ( v13 == -1 )
                  {
                    v29 = 0;
                    v28 = nullptr;
                    if ( v22 )
                    {
                      v24 = "Elf64_Verdaux";
                      sub_2B240(
                        (__int64 *)&v28,
                        (__int64)"struct %s{  unsigned __int32 vda_name __offset(%s,0x%a);  unsigned __int32 vda_next;};",
                        "Elf64_Verdaux",
                        "OFF64",
                        0.0);
                    }
                    else
                    {
                      v24 = "Elf32_Verdaux";
                      sub_2B240(
                        (__int64 *)&v28,
                        (__int64)"struct %s{  unsigned __int32 vda_name __offset(%s,0x%a);  unsigned __int32 vda_next;};",
                        "Elf32_Verdaux",
                        "OFF32",
                        0.0);
                    }
                    v14 = &s1;
                    if ( (_QWORD)v29 )
                      v14 = v28;
                    h2ti(0, 0, v14, 1024, 0, 0, sub_EAA0, 0, 0);
                    v15 = get_named_type_tid(v24);
                    v13 = v15;
                    if ( v28 )
                    {
                      v25 = v15;
                      *(_QWORD *)&v29 = 0;
                      qfree(v28);
                      v13 = v25;
                    }
                    *(_QWORD *)(a1 + 440) = v13;
                    if ( v13 == -1 )
                      break;
                  }
                  create_data(v26, 1610612736, 8, v13);
                }
              }
            }
          }
          ++v23;
        }
        while ( v20 != v23 );
      }
    }
  }
  return v30 - __readfsqword(0x28u);
}
