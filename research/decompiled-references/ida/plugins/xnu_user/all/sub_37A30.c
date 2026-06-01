__int64 __fastcall sub_37A30(__int64 a1, const char *a2, char a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 (*v6)(); // rcx
  __int64 v7; // r12
  unsigned int *v9; // rbp
  unsigned int *v10; // r15
  __int64 v11; // r13
  __int64 v12; // rax
  const char *v13; // rsi
  struct _Unwind_Exception *v14; // rbx
  bool v15; // [rsp+Fh] [rbp-69h]
  unsigned int *v16; // [rsp+10h] [rbp-68h] BYREF
  __int128 v17; // [rsp+18h] [rbp-60h]
  _QWORD *v18; // [rsp+28h] [rbp-50h]
  char v19; // [rsp+30h] [rbp-48h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( !a2 || !*a2 )
    return -1;
  v7 = sub_33AB0(a1, a2, a3, a4);
  if ( v7 == -1 )
  {
    if ( *(_BYTE *)(a1 + 161) )
    {
      v15 = 0;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 120) == -1 )
      {
        v14 = (struct _Unwind_Exception *)sub_2ACD0();
        sub_2DE20(v4);
        _Unwind_Resume(v14);
      }
      v15 = *(_DWORD *)(a1 + 168) == 12;
    }
    v19 = 0;
    v16 = nullptr;
    v18 = nullptr;
    v17 = 0;
    sub_378E0((_QWORD *)a1, (__int64)&v16, nullptr, v6);
    v9 = &v16[4 * v17];
    if ( v9 != v16 )
    {
      v10 = v16;
      v11 = 4097;
      while ( 1 )
      {
        if ( !_bittest64(&v11, v10[1] & 0xE) )
        {
          if ( v18 )
          {
            v12 = v18[2];
            if ( v12 )
            {
              if ( *v10 < (unsigned __int64)(v12 - 1) )
              {
                v13 = (const char *)(*(__int64 (**)(void))(*v18 + 16LL))();
                if ( v13 )
                {
                  if ( !strcmp(a2, v13) )
                    break;
                }
              }
            }
          }
        }
        v10 += 4;
        if ( v9 == v10 )
          goto LABEL_16;
      }
      v7 = *((_QWORD *)v10 + 1);
      if ( v15 && (*((_BYTE *)v10 + 6) & 8) != 0 )
        v7 |= 1uLL;
    }
LABEL_16:
    if ( v19 && v18 )
      (*(void (__fastcall **)(_QWORD *))(*v18 + 8LL))(v18);
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
    }
  }
  return v7;
}

