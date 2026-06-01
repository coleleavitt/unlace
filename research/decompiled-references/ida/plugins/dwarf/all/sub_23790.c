__int64 __fastcall sub_23790(__int64 a1, __int64 a2, __int64 a3, double a4, double a5)
{
  __int64 v8; // rsi
  char *v9; // r13
  size_t v10; // rbx
  char *v11; // rax
  size_t v12; // rax
  const char *v13; // rdx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  const char *v18; // rdx
  const char *v19; // rsi
  char *s; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+8h] [rbp-C0h]
  char *v22; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+28h] [rbp-A0h]
  _QWORD v24[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v25; // [rsp+50h] [rbp-78h]
  __int128 v26; // [rsp+58h] [rbp-70h]
  _QWORD v27[5]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+98h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  if ( (unsigned __int8)callui(27, a2) )
    return 0xFFFFFFFFLL;
  memset(v27, 0, 28);
  if ( (unsigned __int8)sub_82950(a3) )
  {
    if ( (unsigned __int8)sub_90150(a3, &v27[1]) )
    {
      v27[0] = *(_QWORD *)(sub_82460(a3) + 4);
      v8 = getseg(a2);
      if ( v8 )
      {
        s = nullptr;
        v21 = 0;
        get_segm_name(&s, v8, 0);
        v9 = s;
        if ( (_QWORD)v21 )
        {
          v10 = v21 - 1;
          v11 = strchr(s, 58);
          if ( v11 )
          {
            v12 = v11 - v9;
            if ( v12 != -1 )
            {
              v24[0] = a2;
              if ( v10 > v12 )
                v10 = v12;
              v26 = 0;
              v24[1] = -1;
              v25 = 0;
              v22 = nullptr;
              v23 = 0;
              if ( v10
                && (v22 = (char *)qvector_reserve(&v22, 0, v10 + 1, 1),
                    *(_QWORD *)&v23 = v10 + 1,
                    memmove(v22, v9, v10),
                    v22[v10] = 0,
                    (_QWORD)v23) )
              {
                v13 = v22;
              }
              else
              {
                v13 = src;
              }
              if ( (unsigned int)sub_23500(
                                   *(_QWORD *)(a1 + 16),
                                   (__int64)v27,
                                   v13,
                                   (__int64 (__fastcall *)(__m128i *, __int64, __int64, __int64))sub_227F0,
                                   (__int64)v24) == -1 )
              {
                if ( (debug & 0x400000) != 0 )
                {
                  v19 = src;
                  if ( (_QWORD)v23 )
                    LODWORD(v19) = (_DWORD)v22;
                  sub_88B80((unsigned int)"Failed to find DWARF file for %s\n", (_DWORD)v19, v14, v15, v16, v17);
                }
              }
              else
              {
                v18 = src;
                if ( (_QWORD)v23 )
                  v18 = v22;
                sub_1D930(*(__int64 **)(a1 + 8), (__int64)v24, v18, 0.0, a5);
              }
              if ( v22 )
              {
                *(_QWORD *)&v23 = 0;
                qfree(v22);
              }
              if ( v25 )
              {
                *(_QWORD *)&v26 = 0;
                qfree(v25);
              }
              v9 = s;
            }
          }
        }
        if ( v9 )
        {
          *(_QWORD *)&v21 = 0;
          qfree(v9);
        }
      }
    }
  }
  return 0;
}

