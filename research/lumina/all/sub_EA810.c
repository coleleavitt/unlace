void __fastcall sub_EA810(__int64 a1, const char **a2, const char *a3)
{
  __int64 v3; // rbp
  __int64 *v4; // r13
  int v7; // ecx
  char *v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rax

  v3 = *(_QWORD *)a1;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 103LL) )
  {
    *(_DWORD *)(a1 + 20) = 7;
  }
  else
  {
    v4 = *(__int64 **)(a1 + 8);
    if ( !*v4 )
    {
      if ( (*(_DWORD *)(a1 + 24) & 3) != 0 )
      {
        *v4 = sub_E8280(
                *(_QWORD *)a1,
                "error in %s %s after %s: %s",
                *a2,
                a2[1],
                (const char *)*(&off_23A8E0 + (*(_DWORD *)(a1 + 24) & 3u) - 1),
                a3);
        *(_DWORD *)(a1 + 20) = 1;
      }
      else
      {
        v7 = 134212;
        if ( (*(_BYTE *)(v3 + 48) & 1) == 0 )
        {
          v8 = (char *)a2[1];
          v9 = *(_QWORD *)a1;
          if ( !v8 )
            v8 = "?";
          v10 = sub_E8280(
                  v9,
                  "malformed database schema (%s)",
                  v8,
                  134212,
                  "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
          if ( a3 )
          {
            if ( *a3 )
              v10 = sub_E8280(v3, "%z - %s", v10, a3);
          }
          v7 = 134219;
          **(_QWORD **)(a1 + 8) = v10;
        }
        sub_E8BB0(
          0xBu,
          "%s at line %d of [%.10s]",
          "database corruption",
          v7,
          "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
        *(_DWORD *)(a1 + 20) = 11;
      }
    }
  }
}
