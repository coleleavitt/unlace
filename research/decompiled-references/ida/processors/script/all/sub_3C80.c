__int64 __fastcall sub_3C80(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 (__fastcall *v4)(_QWORD); // rax
  unsigned int v6; // eax
  _QWORD *v7; // rcx
  const void *v8; // rbp
  __int64 v9; // r13
  __int64 v10; // r12
  const __m128i *v11; // r14
  size_t v12; // rax
  size_t v13; // r15
  __m128i *v14; // rax
  __int64 v15; // rax
  void *v16; // rdi
  size_t v17; // rdx
  const char *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-70h]
  size_t v21; // [rsp+8h] [rbp-70h]
  char v22[8]; // [rsp+10h] [rbp-68h] BYREF
  __int128 v23; // [rsp+18h] [rbp-60h]
  __int64 v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( *(_QWORD *)(a1 + 776) > 1u )
      {
        if ( (unsigned __int8)sub_4A80("notify_term", a1 + 792)
          && !(unsigned __int8)sub_4D20(a1 + 792, "notify_term", a1 + 824, 0, 0, 0) )
        {
          sub_26C0((const char **)(a1 + 824), "notify_term");
        }
        sub_3030(a1);
        unhook_event_listener();
        if ( !(unsigned __int8)sub_4CD0(a1, a1 + 824) )
          sub_26C0((const char **)(a1 + 824), "unload_procmod");
        if ( *(_QWORD *)(a1 + 768) )
        {
          *(_QWORD *)(a1 + 776) = 0;
          qfree();
          *(_QWORD *)(a1 + 768) = 0;
          *(_QWORD *)(a1 + 784) = 0;
        }
      }
    }
    else
    {
      v4 = *(__int64 (__fastcall **)(_QWORD))(a1 + 848);
      if ( v4 )
        return v4(*(_QWORD *)(a1 + 856));
      if ( a2 != 89 )
      {
        if ( under_debugger )
          BUG();
        interr();
        goto LABEL_31;
      }
    }
    return 0;
  }
  if ( *(_QWORD *)(a1 + 776) > 1u )
    return 0;
  v6 = *a3;
  if ( *a3 <= 0x2F )
  {
    v7 = (_QWORD *)(*((_QWORD *)a3 + 2) + v6);
    *a3 = v6 + 8;
    goto LABEL_10;
  }
LABEL_31:
  v7 = *((_QWORD **)a3 + 1);
  *((_QWORD *)a3 + 1) = v7 + 1;
LABEL_10:
  v8 = (const void *)*v7;
  if ( (unsigned __int8)sub_4B40(*v7) )
  {
    v9 = a1 + 824;
    v10 = a1 + 792;
    if ( (unsigned __int8)sub_4BE0(v8, a1 + 792, a1 + 824) )
    {
      if ( (unsigned __int8)sub_31D0(a1, (_QWORD *)(a1 + 848), (__int64)"_get_idp_notifier_addr") )
      {
        if ( (unsigned __int8)sub_31D0(a1, (_QWORD *)(a1 + 856), (__int64)"_get_idp_notifier_ud_addr") )
        {
          if ( (unsigned __int8)sub_31D0(a1, (_QWORD *)(a1 + 888), (__int64)"_get_idb_notifier_addr") )
          {
            if ( (unsigned __int8)sub_31D0(a1, (_QWORD *)(a1 + 896), (__int64)"_get_idb_notifier_ud_addr") )
            {
              v11 = (const __m128i *)(a1 + 120);
              *(_QWORD *)(a1 + 120) = 0;
              *(_QWORD *)(a1 + 256) = 0;
              memset(
                (void *)((a1 + 128) & 0xFFFFFFFFFFFFFFF8LL),
                0,
                8LL * (((_DWORD)a1 + 120 - (((_DWORD)a1 + 128) & 0xFFFFFFF8) + 144) >> 3));
              *(_QWORD *)(a1 + 288) = 0;
              *(_QWORD *)(a1 + 696) = 0;
              memset(
                (void *)((a1 + 296) & 0xFFFFFFFFFFFFFFF8LL),
                0,
                8LL * (((unsigned int)a1 - (((_DWORD)a1 + 296) & 0xFFFFFFF8) + 704) >> 3));
              if ( (unsigned __int8)sub_39B0(a1, a1 + 792) )
              {
                if ( v8 && (v12 = strlen((const char *)v8), (v13 = v12) != 0) )
                {
                  v16 = *(void **)(a1 + 768);
                  v17 = v12 + 1;
                  if ( *(_QWORD *)(a1 + 784) < v12 + 1 )
                  {
                    v21 = v12 + 1;
                    v19 = qvector_reserve();
                    v17 = v21;
                    *(_QWORD *)(a1 + 768) = v19;
                    v16 = (void *)v19;
                  }
                  *(_QWORD *)(a1 + 776) = v17;
                  memmove(v16, v8, v13);
                  *(_BYTE *)(*(_QWORD *)(a1 + 768) + v13) = 0;
                }
                else
                {
                  *(_QWORD *)(a1 + 776) = 0;
                }
                v14 = *(__m128i **)(a1 + 16);
                *v14 = _mm_loadu_si128((const __m128i *)(a1 + 120));
                v14[1] = _mm_loadu_si128(v11 + 1);
                v14[2] = _mm_loadu_si128(v11 + 2);
                v14[3] = _mm_loadu_si128(v11 + 3);
                v14[4] = _mm_loadu_si128(v11 + 4);
                v14[5] = _mm_loadu_si128(v11 + 5);
                v14[6] = _mm_loadu_si128(v11 + 6);
                v14[7] = _mm_loadu_si128(v11 + 7);
                v14[8] = _mm_loadu_si128(v11 + 8);
                hook_event_listener();
                v22[0] = 2;
                v24 = 0;
                v23 = 0;
                if ( (unsigned __int8)sub_4A80("notify_init", v10)
                  && (unsigned __int8)sub_2740(v10, (__int64)"notify_init", v9, (const char *)v8, (__int64)v22)
                  && v22[0] == 2 )
                {
                  v15 = v23;
                }
                else
                {
                  v15 = 1;
                }
                v20 = v15;
                free_idcv();
                return v20;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 840) <= 0x6Au )
      *(_QWORD *)(a1 + 824) = qvector_reserve();
    *(_QWORD *)(a1 + 832) = 107;
    strcpy(
      *(char **)(a1 + 824),
      "This extlang cannot be used with processor module scripts because it does not implement certain callbacks\n");
  }
  v18 = &byte_520F;
  if ( *(_QWORD *)(a1 + 832) )
    v18 = *(const char **)(a1 + 824);
  sub_25F0((__int64)"Processor module script failed to initialize.\nFile: %s\n%s", (const char *)v8, v18);
  sub_3030(a1);
  return -1;
}

