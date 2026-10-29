__int64 __fastcall sub_20CEC0(_QWORD *a1, const char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r12
  _QWORD *v6; // r13
  __int64 i; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  int *v10; // rdx
  unsigned __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r15
  char *v15; // rbx
  __int64 v16; // [rsp+8h] [rbp-F0h]
  _QWORD v17[3]; // [rsp+18h] [rbp-E0h] BYREF
  char *s1; // [rsp+30h] [rbp-C8h]
  __int128 v19; // [rsp+38h] [rbp-C0h]
  __int64 v20; // [rsp+48h] [rbp-B0h]
  __int128 v21; // [rsp+50h] [rbp-A8h]
  __int128 v22; // [rsp+60h] [rbp-98h]
  __int64 v23; // [rsp+90h] [rbp-68h]
  int v24; // [rsp+98h] [rbp-60h]
  __int64 v25; // [rsp+A0h] [rbp-58h]
  char v26; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v27; // [rsp+B8h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v4 = a1[4];
  if ( (unsigned int)(*(_DWORD *)v4 - 56) <= 1 && *(_BYTE *)(v4 + 64) == 8 )
  {
    v5 = *(_QWORD *)(v4 + 72);
    if ( *(int *)(v5 + 8) > 0 )
    {
      v6 = a1;
      for ( i = 0; *(_DWORD *)(v5 + 8) > (int)i; ++i )
      {
        v8 = *(_QWORD *)(v5 + 24) + 80 * i;
        if ( *(_QWORD *)(v8 + 40) > 1u && *(_DWORD *)(v8 + 56) == 1 )
        {
          if ( *(_BYTE *)v8 == 9 )
          {
            v10 = *(int **)(v8 + 8);
LABEL_12:
            v11 = v10[4];
            if ( *(_QWORD *)(*(_QWORD *)v10 + 440LL) < v11 )
              sub_20B190(a1, a2, v10, a4);
            a1 = (_QWORD *)v6[1];
            a2 = (const char *)(*(_QWORD *)(v8 + 64) + *(int *)(v5 + 12));
            v16 = *(_QWORD *)(*(_QWORD *)v10 + 432LL);
            v12 = sub_1C8E30(a1, (__int64)a2);
            if ( v12 < 0 )
              continue;
            a4 = v16;
            v13 = v16 + 104 * v11;
            if ( (*(_BYTE *)(v13 + 24) & 4) != 0 )
              continue;
            sub_1C8060(v6[1]);
            v17[0] = 0;
            get_func_frame();
            a2 = (const char *)v17[0];
            v17[1] = 8 * v12;
            v19 = 0;
            v17[2] = 0;
            s1 = nullptr;
            v20 = 0;
            v23 = 1;
            v24 = -1;
            v25 = 0;
            v26 = 0;
            v21 = 0;
            v22 = 0;
            if ( (unsigned int)find_tinfo_udt_member() == -1 )
            {
LABEL_19:
              clear_tinfo_t();
              if ( v20 )
              {
                *(_QWORD *)&v21 = 0;
                qfree();
              }
              if ( s1 )
              {
                *(_QWORD *)&v19 = 0;
                qfree();
              }
              a1 = v17;
              clear_tinfo_t();
              continue;
            }
            if ( *(_QWORD *)(v8 + 40) )
            {
              a2 = *(const char **)(v8 + 32);
              if ( !(_QWORD)v19 )
              {
                if ( *a2 )
                  goto LABEL_19;
LABEL_33:
                v15 = (char *)::s1;
                if ( !::s1 )
                  goto LABEL_19;
LABEL_30:
                a2 = "anonymous";
                if ( strncmp(v15, "anonymous", 9u) )
                {
                  a2 = (const char *)v13;
                  sub_20C9D0((_QWORD *)v6[1], v13, v15, 4);
                }
                goto LABEL_19;
              }
            }
            else
            {
              a2 = ::s1;
              if ( !(_QWORD)v19 )
                goto LABEL_33;
            }
            v15 = s1;
            if ( strcmp(s1, a2) )
              goto LABEL_19;
            if ( !v15 )
              goto LABEL_19;
            a2 = "arg_";
            if ( !strncmp(v15, "arg_", 4u) )
              goto LABEL_19;
            a2 = "var_";
            if ( !strncmp(v15, "var_", 4u) )
              goto LABEL_19;
            goto LABEL_30;
          }
          if ( *(_BYTE *)v8 == 10 )
          {
            v9 = *(_QWORD *)(v8 + 8);
            if ( *(_BYTE *)v9 == 9 )
            {
              v10 = *(int **)(v9 + 8);
              goto LABEL_12;
            }
          }
        }
      }
    }
  }
  return 0;
}

