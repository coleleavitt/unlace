__int64 __fastcall sub_214240(_QWORD *a1, const char *a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  int *v8; // rdx
  unsigned __int64 v9; // r15
  __int64 v10; // r15
  __int64 v12; // [rsp+8h] [rbp-F0h]

  v3 = a1[4];
  if ( (unsigned int)(*(_DWORD *)v3 - 56) <= 1 && *(_BYTE *)(v3 + 64) == 8 )
  {
    v4 = *(_QWORD *)(v3 + 72);
    if ( *(int *)(v4 + 8) > 0 )
    {
      for ( i = 0; *(_DWORD *)(v4 + 8) > (int)i; ++i )
      {
        v6 = *(_QWORD *)(v4 + 24) + 80 * i;
        if ( *(_QWORD *)(v6 + 40) > 1u && *(_DWORD *)(v6 + 56) == 1 )
        {
          if ( *(_BYTE *)v6 == 9 )
          {
            v8 = *(int **)(v6 + 8);
            goto LABEL_12;
          }
          if ( *(_BYTE *)v6 == 10 )
          {
            v7 = *(_QWORD *)(v6 + 8);
            if ( *(_BYTE *)v7 == 9 )
            {
              v8 = *(int **)(v7 + 8);
LABEL_12:
              v9 = v8[4];
              if ( *(_QWORD *)(*(_QWORD *)v8 + 440LL) < v9 )
                sub_212510(a3);
              v12 = *(_QWORD *)(*(_QWORD *)v8 + 432LL);
              if ( sub_1CFD50((_QWORD *)a1[1], *(_QWORD *)(v6 + 64) + *(int *)(v4 + 12), a3) >= 0 )
              {
                v10 = v12 + 104 * v9;
                if ( (*(_BYTE *)(v10 + 24) & 4) == 0 )
                {
                  sub_1CE9E0(a1[1]);
                  get_func_frame();
                  a3 = 0.0;
                  if ( (unsigned int)find_tinfo_udt_member() != -1
                    && (!*(_QWORD *)(v6 + 40) || !**(_BYTE **)(v6 + 32))
                    && s1
                    && strncmp(s1, "anonymous", 9u) )
                  {
                    sub_213D50((_QWORD *)a1[1], v10, s1, 4);
                  }
                  clear_tinfo_t();
                  clear_tinfo_t();
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

