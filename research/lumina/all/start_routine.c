__int64 __fastcall start_routine(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rax
  __int64 v3; // r15
  time_t v4; // rax
  time_t v5; // rdx
  const char *v6; // r14
  time_t v7; // rdx
  bool v8; // cc
  const char *v9; // rax
  const char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rax
  char v14; // dl
  __int64 v15; // rax
  __int64 v17; // [rsp+0h] [rbp-90h]
  __int64 v18; // [rsp+8h] [rbp-88h]
  char v19; // [rsp+17h] [rbp-79h] BYREF
  __int64 v20; // [rsp+18h] [rbp-78h] BYREF
  void *ptr; // [rsp+20h] [rbp-70h] BYREF
  void *v22[2]; // [rsp+28h] [rbp-68h]
  __int64 v23; // [rsp+38h] [rbp-58h]
  __int64 v24; // [rsp+40h] [rbp-50h]
  __int64 *v25; // [rsp+48h] [rbp-48h]
  char v26; // [rsp+50h] [rbp-40h]
  unsigned __int64 v27; // [rsp+58h] [rbp-38h]

  v1 = *(_BYTE *)(a1 + 504) == 0;
  v27 = __readfsqword(0x28u);
  if ( v1 )
    sub_4C810(a1);
  while ( 1 )
  {
    sub_4BD60(*(_QWORD *)(a1 + 32), (__int64)"[monitor] Sleeping (at most) %d seconds\n", *(_DWORD *)(a1 + 496));
    if ( (unsigned __int8)sub_19A060(*(_QWORD *)(a1 + 416), (unsigned int)(1000 * *(_DWORD *)(a1 + 496))) )
      break;
    if ( (unsigned int)sub_55810(a1) != 1 )
    {
      v18 = *(_QWORD *)(a1 + 424);
      sub_19A520(v18);
      v2 = *(_QWORD *)a1;
      v19 = 0;
      v20 = 0;
      v3 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(v2 + 88))(a1, &v19, &v20);
      if ( !v3 )
        goto LABEL_24;
      sub_4BD60(*(_QWORD *)(a1 + 32), (__int64)"[monitor] Checking license validity\n");
      v4 = time(nullptr);
      v5 = *(_QWORD *)(v3 + 104);
      v17 = *(_QWORD *)(a1 + 32);
      if ( v5 == -1 || (v6 = "not started yet", v4 >= v5) )
      {
        v7 = *(_QWORD *)(v3 + 112);
        v6 = "valid";
        if ( v7 )
        {
          if ( v4 >= v7 - 2592000 )
          {
            v6 = "starting to expire";
            if ( v4 >= v7 - 1296000 )
            {
              v6 = "close to expiration";
              if ( v4 >= v7 )
              {
                v6 = "within the grace period";
                if ( v4 >= v7 + 1296000 )
                {
                  v8 = v4 < v7 + 2592000;
                  v9 = "beyond the grace period";
                  if ( v8 )
                    v9 = "reaching the end of the grace period";
                  v6 = v9;
                }
              }
            }
          }
        }
      }
      ptr = nullptr;
      *(_OWORD *)v22 = 0;
      sub_299F0((char **)&ptr);
      v10 = s1;
      if ( v22[0] )
        v10 = (const char *)ptr;
      sub_4BD60(v17, (__int64)"[monitor] License %s validity now: %s\n", v10, v6);
      if ( ptr )
      {
        v22[0] = nullptr;
        j__free(ptr);
      }
      v13 = nullptr;
      if ( v19 )
        v13 = &v20;
      v14 = *(_BYTE *)(a1 + 504);
      ptr = off_236810;
      v22[0] = nullptr;
      v25 = v13;
      v26 = v14;
      v22[1] = nullptr;
      v23 = a1;
      v24 = v3;
      v15 = interr_exc_t___vtable_at_1764016(
              0x56u,
              (__int64 (__fastcall ***)(_QWORD))&ptr,
              nullptr,
              (const __m128i *)&interr_exc_t___vtable_at_1764016,
              v11,
              v12);
      ptr = &off_23D510;
      if ( v15 < 0 )
      {
        sub_199D50(v22[1]);
        sub_19A570(v18);
      }
      else
      {
        sub_199D50(v22[1]);
LABEL_24:
        sub_19A570(v18);
      }
    }
  }
  sub_4BD60(*(_QWORD *)(a1 + 32), (__int64)"[monitor] Exit request received\n");
  return 0;
}
